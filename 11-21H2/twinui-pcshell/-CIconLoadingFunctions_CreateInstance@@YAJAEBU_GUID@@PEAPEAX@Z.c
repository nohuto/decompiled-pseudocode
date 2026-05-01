/*
 * XREFs of ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802312A4
 * Callers:
 *     ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180231530 (-LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNot.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCIconLoadingFunctions@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoadingFunctions@@@Z @ 0x180231006 (--$MakeAndInitialize@VCIconLoadingFunctions@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoadin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIconLoadingFunctions_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CIconLoadingFunctions *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CIconLoadingFunctions,CIconLoadingFunctions,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 56LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(CIconLoadingFunctions *, GUID *, void **))v8)(
         v8,
         &GUID_4e5c2650_fef0_4f4e_ac85_827929037acf,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 57LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return v4;
}
