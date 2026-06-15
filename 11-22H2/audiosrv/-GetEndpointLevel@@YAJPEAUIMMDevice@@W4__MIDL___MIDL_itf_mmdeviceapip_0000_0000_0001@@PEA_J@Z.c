/*
 * XREFs of ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180140F80
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801412A4 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180036070 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetEndpointLevel(struct IUnknown *a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v11[16]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v5 = StringCchPrintfW(v11, 13LL, L"Level:%x", a2);
  if ( v5 >= 0 )
  {
    v6 = v9;
    if ( v9 != a1 )
    {
      ATL::AtlComQIPtrAssign(&v9, a1, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
      v6 = v9;
    }
    if ( v6 )
    {
      v8 = 8;
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 *, __int64, __int64 *, int *))v6->lpVtbl[5].QueryInterface)(
             v6,
             v11,
             11LL,
             &v10,
             &v8);
      if ( v5 < 0 )
        goto LABEL_9;
      if ( v8 == 8 )
      {
        *a3 = v10;
        goto LABEL_9;
      }
    }
    v5 = -2147024809;
  }
LABEL_9:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
  return (unsigned int)v5;
}
