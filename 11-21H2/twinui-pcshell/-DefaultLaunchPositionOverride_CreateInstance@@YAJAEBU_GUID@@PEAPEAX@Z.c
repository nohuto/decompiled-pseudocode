/*
 * XREFs of ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0030
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0A94 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDefaultLaunchPositionOverride@@@Z @ 0x1800EFEEC (--$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Detail.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DefaultLaunchPositionOverride_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<DefaultLaunchPositionOverride,IDefaultLaunchPositionOverride,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\defaultlaunchpositionoverride.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_4;
  }
  v3 = (**v8)(v8, &GUID_1d220fb5_768d_4a75_a66c_fe0f2f547926, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 64LL;
    goto LABEL_7;
  }
  v4 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return v4;
}
