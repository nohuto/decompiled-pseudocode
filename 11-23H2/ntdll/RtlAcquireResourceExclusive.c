/*
 * XREFs of RtlAcquireResourceExclusive @ 0x1800602C0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18007FC30 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800F4EB4 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

char __fastcall RtlAcquireResourceExclusive(__int64 a1, char a2)
{
  int v2; // r9d
  char result; // al
  int v6; // ebp
  LARGE_INTEGER *v7; // r14
  NTSTATUS v8; // eax
  signed __int32 v9; // eax
  bool v10; // zf
  signed __int32 v11; // ett

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(void **)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
    return 1;
  }
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
      return 0;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
    v2 = *(_DWORD *)(a1 + 68);
    if ( v2 )
    {
LABEL_9:
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
        RtlRaiseStatus((unsigned int)v8);
      v2 = *(_DWORD *)(a1 + 68);
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 64);
      v10 = v9 == 0;
      if ( v9 > 0 )
      {
        while ( 1 )
        {
          v11 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v9 - 1, v9);
          if ( v11 == v9 )
            break;
          v10 = v9 == 0;
          if ( v9 <= 0 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( v10 )
          goto LABEL_9;
      }
    }
  }
}
