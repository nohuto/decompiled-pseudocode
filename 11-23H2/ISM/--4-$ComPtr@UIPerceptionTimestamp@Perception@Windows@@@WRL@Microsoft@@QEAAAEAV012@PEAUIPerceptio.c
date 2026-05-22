/*
 * XREFs of ??4?$ComPtr@UIPerceptionTimestamp@Perception@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800D7EE8
 * Callers:
 *     ?OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800DA6F0 (-OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPercep.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Perception::IPerceptionTimestamp>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v5);
  }
  return a1;
}
