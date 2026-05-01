/*
 * XREFs of ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803A8470
 * Callers:
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803A7C30 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803A9758 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AA014 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AAEB8 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803AC654 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CortanaDesktopExperienceView::GetViewWrapper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
    v5 = v4(v3, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB58,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v5);
  }
  return a2;
}
