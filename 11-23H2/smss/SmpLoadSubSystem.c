/*
 * XREFs of SmpLoadSubSystem @ 0x1400199F8
 * Callers:
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpAddKnownSubSys @ 0x14000265C (SmpAddKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140002B4C (SmpSbCreateSession.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 *     SmpCreateKnownSubSys @ 0x1400039F8 (SmpCreateKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 *     SmpExecuteImage @ 0x14000584C (SmpExecuteImage.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 *     SmpDeleteSubSys @ 0x14001AD78 (SmpDeleteSubSys.c)
 */

__int64 __fastcall SmpLoadSubSystem(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __int16 a6)
{
  __int64 v10; // rcx
  __int64 result; // rax
  _DWORD *KnownSubSys; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // r9d
  NTSTATUS v16; // edi
  __int64 v17; // r9
  signed __int32 v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[16]; // [rsp+48h] [rbp-49h] BYREF
  __int128 ProcessParameters; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-29h]
  __int128 v24; // [rsp+70h] [rbp-21h]
  int v25; // [rsp+A0h] [rbp+Fh]

  memset_0(&ProcessParameters, 0, 0x68uLL);
  if ( (a6 & 0x10) != 0 )
  {
    v10 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    result = 3221225524LL;
    SmpGlobalLog[2 * v10 + 2] = 10109;
LABEL_3:
    SmpGlobalLog[2 * v10 + 3] = result;
    *(_QWORD *)&SmpGlobalLog[2 * v10 + 4] = a1;
    return result;
  }
  KnownSubSys = SmpCreateKnownSubSys(0);
  v13 = (__int64)KnownSubSys;
  if ( !KnownSubSys )
  {
    v10 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    result = 3221225495LL;
    SmpGlobalLog[2 * v10 + 2] = 10125;
    goto LABEL_3;
  }
  KnownSubSys[16] = a4;
  SmpWaitForSubSysStartup(a4, 0, 0LL, (__int64)v21);
  SmpAddKnownSubSys((__int64)v21, (_DWORD *)v13);
  SmpUnlockKnownSubSysList((__int64)v21, v14);
  v16 = SmpExecuteImage(a1, a2, a3, v15, 0LL, a6 | 0x20u, (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters);
  if ( v16 >= 0 )
  {
    *(_QWORD *)(v13 + 32) = *((_QWORD *)&ProcessParameters + 1);
    *(_OWORD *)(v13 + 48) = v24;
    if ( v25 == 1
      || (v16 = SmpSbCreateSession(a4, (void *)0xFFFFFFFFFFFFFFFFLL, &ProcessParameters, v17, 0LL), v16 >= 0) )
    {
      v16 = NtResumeThread(ThreadHandle, 0LL);
      if ( v16 >= 0 )
      {
        NtClose(ThreadHandle);
        v16 = SmpWaitForSingleSubSys(v13);
        if ( v16 < 0 )
        {
          v19 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v19 + 2] = 10232;
          goto LABEL_8;
        }
      }
      else
      {
        v20 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v20 + 2] = 10205;
        SmpGlobalLog[2 * v20 + 3] = v16;
        *(_QWORD *)&SmpGlobalLog[2 * v20 + 4] = a3;
      }
    }
    NtTerminateProcess(*((HANDLE *)&ProcessParameters + 1), v16);
    NtClose(ThreadHandle);
    goto LABEL_14;
  }
  v18 = _InterlockedIncrement(SmpGlobalLog) % 64;
  v19 = 2LL * v18;
  SmpGlobalLog[4 * v18 + 2] = 10170;
LABEL_8:
  SmpGlobalLog[2 * v19 + 3] = v16;
  *(_QWORD *)&SmpGlobalLog[2 * v19 + 4] = a3;
LABEL_14:
  SmpDeleteSubSys((PVOID)v13);
  SmpDereferenceKnownSubSys((_BYTE *)v13);
  return (unsigned int)v16;
}
