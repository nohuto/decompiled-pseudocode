/*
 * XREFs of ?s_OnCallbackMessage_NoLock@CDevice@DirectComposition@@CAJPEBX00I@Z @ 0x1800F6EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::s_OnCallbackMessage_NoLock(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        int a4)
{
  unsigned int v8; // edi
  _QWORD *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1 + 12;
  v8 = 0;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(a1 + 12));
  if ( *a2 )
    v8 = CoreUICallReceive(
           *(_QWORD *)(a1[83] + 40LL),
           &IAnimationInstance_Receive<DirectComposition::CAnimationInstance>::Type,
           &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
           211LL,
           *a2,
           a3,
           a4);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v10);
  return v8;
}
