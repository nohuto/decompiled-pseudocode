/*
 * XREFs of SmpWaitForStatusChange @ 0x14001AFA4
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x140002614 (SmpLockKnownSubSysList.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140003C20 (SmpCheckSubSysStatus.c)
 *     SmpDisposeSubSysSynch @ 0x14001AE04 (SmpDisposeSubSysSynch.c)
 *     SmpGetSubSysSynch @ 0x14001AEBC (SmpGetSubSysSynch.c)
 */

__int64 __fastcall SmpWaitForStatusChange(__int64 a1, __int64 a2, int *a3)
{
  HANDLE *SubSysSynch; // rbx
  int v5; // ebp
  HANDLE *v7; // rsi
  int v8; // eax
  ULONG v9; // ecx
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  signed __int64 v12; // rax
  __int64 v14; // rax
  HANDLE Object[5]; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  SubSysSynch = *(HANDLE **)(a1 + 16);
  v5 = a2;
  v7 = 0LL;
  while ( 1 )
  {
    if ( SubSysSynch )
      goto LABEL_8;
    SmpUnlockKnownSubSysList((__int64)a3, a2);
    SubSysSynch = (HANDLE *)SmpGetSubSysSynch();
    if ( !SubSysSynch )
    {
      Interval.QuadPart = -50000000LL;
      NtDelayExecution(0, &Interval);
    }
    SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
    LOBYTE(v8) = SmpCheckSubSysStatus(a1);
    if ( v8 )
      break;
    if ( SubSysSynch )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v7 = SubSysSynch;
        SubSysSynch = *(HANDLE **)(a1 + 16);
      }
      else
      {
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)SubSysSynch, 0LL);
        if ( v12 )
        {
          v7 = SubSysSynch;
          SubSysSynch = (HANDLE *)v12;
        }
      }
LABEL_8:
      _InterlockedAdd((volatile signed __int32 *)SubSysSynch, 1u);
      SmpUnlockKnownSubSysList((__int64)a3, a2);
      if ( v7 )
        SmpDisposeSubSysSynch(v7);
      v9 = 1;
      Object[0] = SubSysSynch[1];
      if ( v5 == 1 )
      {
        v9 = 2;
        Object[1] = *(HANDLE *)(a1 + 32);
      }
      v10 = NtWaitForMultipleObjects(v9, Object, WaitAny, 0, 0LL);
      v11 = v10;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v14 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          v11 = -1073741823;
          SmpGlobalLog[2 * v14 + 2] = 971;
          SmpGlobalLog[2 * v14 + 3] = 1;
          *(_QWORD *)&SmpGlobalLog[2 * v14 + 4] = a1;
        }
      }
      else
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)SubSysSynch, 0xFFFFFFFF) == 1 )
          SmpDisposeSubSysSynch(SubSysSynch);
        v11 = 0;
      }
      SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
      return v11;
    }
    SubSysSynch = *(HANDLE **)(a1 + 16);
  }
  if ( SubSysSynch )
    SmpDisposeSubSysSynch(SubSysSynch);
  return 0LL;
}
