/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01D1CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C003D78C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C0240750 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(__int64 a1, _OWORD *Address, __int64 a3)
{
  _OWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  InteractiveControlManager *v15; // rax
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  v3 = Address;
  v4 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterSharedCrit(a1, Address, a3);
  v8 = 0;
  if ( v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
    ProbeForWrite(v3, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v15 = InteractiveControlManager::Instance(v14);
    if ( (int)InteractiveControlManager::GetDeviceInfo(v15, v4, (struct tagINTERACTIVECTRL_DEVICE_INFO *)&v17) >= 0 )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v17;
      v3[1] = v18;
      *((_QWORD *)v3 + 4) = v19;
      v8 = 1;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
