/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800A2728
 * Callers:
 *     ??$DoInvoke@V_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@Z @ 0x1800A4284 (--$DoInvoke@V_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@-$EventSource@U-$IEventHandler@PEAVShar.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800A5590 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composi.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800A636C (-Remove@-$EventSource@U-$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
