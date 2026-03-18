/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C0154660
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int *v4; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  CInpPushLock *Lock; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DEVICEINFO *i; // rax
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  __int64 v18; // rcx
  struct DEVICEINFO *j; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  CBaseInput *v26; // [rsp+60h] [rbp-38h]
  char v27; // [rsp+B0h] [rbp+18h] BYREF
  int v28; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = -1;
  v28 = -1;
  EnterSharedCrit(Address, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v27);
  if ( v3 == 16 )
  {
    v11 = SGDGetUserSessionState(v8);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v11 + 16840));
    CInpPushLock::LockShared(Lock);
    v14 = SGDGetUserSessionState(v13);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v14 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v16 = 0;
      v17 = v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v17 = (unsigned int *)MmUserProbeAddress;
      if ( *v17 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v26 = *(CBaseInput **)(SGDGetUserSessionState(v18) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v26); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v20 = 2LL * v16;
          *((_QWORD *)Address + v20) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v20 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v16 >= v6 )
            break;
        }
        v7 = v16;
      }
      else
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122);
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v6;
      v7 = 0;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v27, v9, v10);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v7;
}
