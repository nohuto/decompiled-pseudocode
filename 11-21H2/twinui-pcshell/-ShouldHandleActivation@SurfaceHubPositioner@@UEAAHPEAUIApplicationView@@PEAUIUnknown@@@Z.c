/*
 * XREFs of ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180099300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::ShouldHandleActivation(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  unsigned int v5; // ebx
  PositionerPropertySetHelpers *v6; // rcx
  int DetailsForActivation; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  v12 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v12) >= 0 )
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             v6,
                             (struct IApplicationView *)a3,
                             &v11,
                             0LL);
    if ( DetailsForActivation < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)DetailsForActivation,
        v9);
    if ( ((__int64)v11.lpVtbl & 0x10) == 0 )
      v5 = *((unsigned __int8 *)this + 464);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return v5;
}
