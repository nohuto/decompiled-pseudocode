/*
 * XREFs of ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x18000340C
 * Callers:
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x180003350 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x180163AF0 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::Find(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rdi
  bool v5; // bl
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v7 = a2;
  while ( 1 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = v4[2] == a2;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
    if ( v5 )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      return 0LL;
  }
  return v4;
}
