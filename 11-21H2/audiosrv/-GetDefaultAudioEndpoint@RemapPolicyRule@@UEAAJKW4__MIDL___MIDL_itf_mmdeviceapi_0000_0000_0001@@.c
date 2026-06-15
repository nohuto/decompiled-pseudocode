/*
 * XREFs of ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180134CD0
 * Callers:
 *     ?GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180134CB0 (-GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18001FE90 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RemapPolicyRule::GetDefaultAudioEndpoint(
        _DWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        bool *a5,
        __int64 a6)
{
  bool *v7; // rbx
  int DefaultAudioEndpoint; // esi
  struct IMMDevice *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( a4 != a1[16] )
    return 2147943568LL;
  v10 = 0LL;
  v7 = a5;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
                           (__int64)g_DynamicAudioEndpointManager,
                           a2,
                           a3,
                           a1[19],
                           a5,
                           &v10);
  if ( DefaultAudioEndpoint >= 0 )
  {
    DefaultAudioEndpoint = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v10->lpVtbl->GetId)(v10, a6);
    if ( DefaultAudioEndpoint >= 0 )
    {
      if ( v7 )
      {
        if ( !*v7 )
          *v7 = (a1[20] & 2) != 0;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return (unsigned int)DefaultAudioEndpoint;
}
