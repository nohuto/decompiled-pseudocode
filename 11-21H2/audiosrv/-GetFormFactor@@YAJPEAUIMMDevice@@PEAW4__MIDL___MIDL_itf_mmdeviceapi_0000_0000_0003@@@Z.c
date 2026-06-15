/*
 * XREFs of ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1800CBE84
 * Callers:
 *     ?Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z @ 0x1800CC3F0 (-Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetFormFactor(struct IMMDevice *a1, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v7);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
               v7,
               &PKEY_AudioEndpoint_FormFactor,
               pvar),
        v3 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("GetFormFactor", 54, v3);
    v3 = 0;
  }
  else
  {
    *a2 = LOWORD(pvar[1]);
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return (unsigned int)v3;
}
