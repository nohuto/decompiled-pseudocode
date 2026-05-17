/*
 * XREFs of RtlAcquireResourceExclusive @ 0x180069AA0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x1800850D0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800F3D74 (RtlpPossibleDeadlock.c)
 */

char __fastcall RtlAcquireResourceExclusive(__int64 a1, char a2)
{
  int v2; // r8d
  char result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  NTSTATUS v8; // eax
  signed __int32 v9; // edx
  bool v10; // zf
  int v11; // eax

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
      while ( !v2 )
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 0);
        if ( !v2 )
        {
          result = 1;
          *(_QWORD *)(a1 + 72) = NtCurrentTeb()->ClientId.UniqueThread;
          return result;
        }
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      v2 = *(_DWORD *)(a1 + 68);
      if ( !v2 )
      {
        v9 = *(_DWORD *)(a1 + 64);
        v10 = v9 == 0;
        if ( v9 > 0 )
        {
          do
          {
            v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v9 - 1, v9);
            if ( v9 == v11 )
              break;
            v9 = v11;
          }
          while ( v11 > 0 );
          v10 = v9 == 0;
        }
        if ( !v10 )
          continue;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = (LARGE_INTEGER *)&RtlpTimeout;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          v7 = 0LL;
        v8 = NtWaitForSingleObject(*(HANDLE *)(a1 + 56), 0, v7);
        if ( v8 != 258 )
          break;
        DbgPrintEx(
          101,
          0,
          "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
          v6,
          ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
        DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
        if ( (unsigned int)++v6 > 2 )
          RtlpPossibleDeadlock(a1);
        DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
      }
      if ( v8 < 0 )
      {
        RtlRaiseStatus((unsigned int)v8);
        JUMPOUT(0x180069BD0LL);
      }
      v2 = *(_DWORD *)(a1 + 68);
    }
    return 0;
  }
}
