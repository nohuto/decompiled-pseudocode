/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x1800DA8F8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3288c3d6534f126e79500dd5b9660c9a_@@CA@PEAX@Z @ 0x1800D5AF0 (-_lambda_invoker_cdecl_@_lambda_3288c3d6534f126e79500dd5b9660c9a_@@CA@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009B9CC (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800DA82C (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct Windows::Perception::IPerceptionTimestamp *v3; // rbx
  SpatialRimDeviceCollection *v4; // rcx
  struct Windows::Perception::IPerceptionTimestamp *v6; // [rsp+28h] [rbp-19h] BYREF
  struct Windows::Perception::IPerceptionTimestamp *v7[3]; // [rsp+30h] [rbp-11h] BYREF
  _OWORD v8[4]; // [rsp+48h] [rbp+7h] BYREF

  v7[0] = 0LL;
  v6 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  Microsoft::WRL::ComPtr<CUIWindow>::operator=((__int64 *)v7, (__int64 *)this + 23);
  Microsoft::WRL::ComPtr<CUIWindow>::operator=((__int64 *)&v6, (__int64 *)this + 24);
  v8[0] = *(_OWORD *)((char *)this + 120);
  v8[1] = *(_OWORD *)((char *)this + 136);
  v8[2] = *(_OWORD *)((char *)this + 152);
  v8[3] = *(_OWORD *)((char *)this + 168);
  if ( v2 )
    LeaveCriticalSection(v2);
  v3 = v7[0];
  if ( v7[0] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v7[1] = (SpatialRimDeviceCollectionHeadEventHandler *)((char *)this + 32);
    v4 = (SpatialRimDeviceCollection *)*((_QWORD *)this + 3);
    if ( v4 )
      SpatialRimDeviceCollection::OnHeadUpdateEvent(v4, (const struct MPCMatrix4x4 *)v8, v3, v6);
    if ( this != (SpatialRimDeviceCollectionHeadEventHandler *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v7);
  return 0LL;
}
