/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C01D2B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C021F778 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, __int64 a3, struct tagRECT *a4)
{
  int v5; // r15d
  __int64 v8; // rdx
  struct tagWND *v9; // rsi
  __int64 v10; // r8
  int v11; // ebx
  struct tagMONITOR *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[32]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  v19 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  v11 = 0;
  if ( v9 )
  {
    v12 = (struct tagMONITOR *)ValidateHmonitor(a2);
    if ( v12 && a4 )
    {
      _GetOwnerTransformedMonitorRect(v9, v12, v5, &v19);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagRECT *)MmUserProbeAddress;
      *a4 = v19;
      v11 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18, v8, v10);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v11;
}
