/*
 * XREFs of ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18005E020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::ShouldHandleActivation(
        SurfaceHubPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))
{
  unsigned int v6; // esi
  int (__fastcall *v7)(struct IApplicationView *, GUID *, __int64 *); // rbx
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v14 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  if ( v7((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v14) >= 0 )
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v8, a3, &v13, 0LL);
    if ( DetailsForActivation < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)DetailsForActivation,
        v11);
    if ( ((__int64)v13.lpVtbl & 0x10) == 0 )
      v6 = *((unsigned __int8 *)this + 464);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v6;
}
