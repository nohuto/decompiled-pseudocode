/*
 * XREFs of RtlAcquireResourceShared @ 0x180069980
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800F3D74 (RtlpPossibleDeadlock.c)
 */

char __fastcall RtlAcquireResourceShared(__int64 a1, char a2)
{
  signed __int32 v2; // r8d
  signed __int32 v5; // eax
  int v7; // ebp
  LARGE_INTEGER *v8; // rsi
  NTSTATUS v9; // eax
  signed __int32 v10; // edx
  bool v11; // zf
  int v12; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(void **)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( v2 >= 0 )
      {
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2);
        v11 = v2 == v5;
        v2 = v5;
        if ( v11 )
          return 1;
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      v2 = *(_DWORD *)(a1 + 68);
      if ( v2 >= 0 )
      {
        v10 = *(_DWORD *)(a1 + 48);
        v11 = v10 == 0;
        if ( v10 > 0 )
        {
          do
          {
            v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v10 - 1, v10);
            if ( v10 == v12 )
              break;
            v10 = v12;
          }
          while ( v12 > 0 );
          v11 = v10 == 0;
        }
        if ( !v11 )
          continue;
      }
      v7 = 0;
      while ( 1 )
      {
        v8 = (LARGE_INTEGER *)&RtlpTimeout;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          v8 = 0LL;
        v9 = NtWaitForSingleObject(*(HANDLE *)(a1 + 40), 0, v8);
        if ( v9 != 258 )
          break;
        DbgPrintEx(
          101,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v7,
          ((unsigned __int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 23));
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v7 > 2 )
          RtlpPossibleDeadlock(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      if ( v9 < 0 )
      {
        RtlRaiseStatus((unsigned int)v9);
        JUMPOUT(0x180069A8FLL);
      }
      v2 = *(_DWORD *)(a1 + 68);
    }
    return 0;
  }
}
