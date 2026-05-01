/*
 * XREFs of ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803A6D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A6FB0 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803ABA00 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803ABE10 (-ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803ACFE8 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803AD10C (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 239) = 0;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 264) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 288) )
  {
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(a1, 2LL, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
  }
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)a1);
  CortanaDesktopExperienceView::UpdateSuggestionsShowing((CortanaDesktopExperienceView *)a1, 0);
  CortanaDesktopExperienceView::ResetCortanaWindowRegion((CortanaDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 160LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 176));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 176LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 184));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 168));
  return 0LL;
}
