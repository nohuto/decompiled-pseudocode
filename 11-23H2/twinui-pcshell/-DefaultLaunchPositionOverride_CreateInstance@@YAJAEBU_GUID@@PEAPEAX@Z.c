/*
 * XREFs of ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180060F5C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180075858 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDefaultLaunchPositionOverride@@@Z @ 0x180060FE4 (--$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Detail.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DefaultLaunchPositionOverride_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<DefaultLaunchPositionOverride,IDefaultLaunchPositionOverride,>(&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\defaultlaunchpositionoverride.cpp",
      (const char *)(unsigned int)v3,
      v7);
    goto LABEL_4;
  }
  v3 = (**v9)(v9, &GUID_1d220fb5_768d_4a75_a66c_fe0f2f547926, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 64LL;
    goto LABEL_7;
  }
  v4 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v4;
}
