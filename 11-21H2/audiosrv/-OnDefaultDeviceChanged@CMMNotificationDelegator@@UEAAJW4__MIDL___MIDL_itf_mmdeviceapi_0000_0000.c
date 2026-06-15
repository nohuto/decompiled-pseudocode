/*
 * XREFs of ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180105BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnDefaultEndpointChanged@CAecAttributes@@QEAAXXZ @ 0x180105BE8 (-OnDefaultEndpointChanged@CAecAttributes@@QEAAXXZ.c)
 */

__int64 __fastcall CMMNotificationDelegator::OnDefaultDeviceChanged(
        CAecAttributes **this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a2 == *((_DWORD *)this + 11) && *((_DWORD *)this + 10) == a3 )
    CAecAttributes::OnDefaultEndpointChanged(this[4]);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v5);
  return 0LL;
}
