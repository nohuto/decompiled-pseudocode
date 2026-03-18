/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00AB820
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0152EB0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  CInpPushLock *Lock; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DEVICEINFO *i; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int *v20; // rax
  unsigned int v21; // eax
  int v22; // r12d
  __int64 v23; // rcx
  struct DEVICEINFO *j; // r14
  CBaseInput *v25; // [rsp+60h] [rbp-48h]
  char v26; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+18h]
  int v28; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v28 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
  if ( v4 )
  {
    v8 = SGDGetUserSessionState(v7);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v8 + 16840));
    CInpPushLock::LockShared(Lock);
    v11 = SGDGetUserSessionState(v10);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v11 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 59)) )
          ++v6;
      }
    }
    if ( a2 )
    {
      v20 = v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v20 = (unsigned int *)MmUserProbeAddress;
      v21 = *v20;
      v27 = v21;
      if ( v21 < v6 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122LL);
      }
      else if ( v21 && v6 )
      {
        ProbeForWrite(a2, 1080LL * v6, 8u);
        v22 = v6 - 1;
        v25 = *(CBaseInput **)(SGDGetUserSessionState(v23) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v25); j && v22 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 59)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v22--], *((_QWORD *)j + 59));
        }
        v5 = 1;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
      }
      else
      {
        UserSetLastError(15299LL);
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v6;
      v5 = 1;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26, v13, v14);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v5;
}
