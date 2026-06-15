/*
 * XREFs of ?GetAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAH@Z @ 0x180140E10
 * Callers:
 *     ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180141030 (-IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAvoidAsDefaultProperty(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v6; // ebx
  int v7; // esi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  if ( a1 && a4 )
  {
    v7 = 0;
    if ( a3 != 1 )
      v7 = a3;
    *a4 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v11);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_AudioEndpoint_AvoidSelection,
             pvar);
      if ( v6 >= 0
        && LOWORD(pvar[0]) == 19
        && (!v7 && ((__int64)pvar[1] & 1) != 0 || v7 == 2 && ((__int64)pvar[1] & 4) != 0)
        && (((__int64)pvar[1] & 0x100) != 0 && !a2 || ((__int64)pvar[1] & 0x200) != 0 && a2 == 1) )
      {
        *a4 = 1;
      }
    }
  }
  else
  {
    v6 = -2147024809;
  }
  PropVariantClear(pvar);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  return (unsigned int)v6;
}
