/*
 * XREFs of ?PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805CDD30
 * Callers:
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VPPIWin32VtcLayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPIWin32VtcLayoutOperation@@@Z @ 0x1805CCC34 (--$MakeAndInitialize@VPPIWin32VtcLayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPIWin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PPIWin32VtcLayoutOperation *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (PPIWin32VtcLayoutOperation *)a1;
  *a2 = 0LL;
  if ( IsPPIEdition() )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<PPIWin32VtcLayoutOperation,PPIWin32VtcLayoutOperation,>(&v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(PPIWin32VtcLayoutOperation *, GUID *, void **))v8)(
             v8,
             &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32,
             a2);
      v4 = v3;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
        return v4;
      }
      v5 = 879LL;
    }
    else
    {
      v5 = 878LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  return 2147500033LL;
}
