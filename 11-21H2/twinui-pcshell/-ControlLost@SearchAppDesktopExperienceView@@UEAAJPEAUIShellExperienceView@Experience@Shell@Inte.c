/*
 * XREFs of ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803998D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180399B48 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039D990 (-ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039F9A8 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039FACC (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx

  *a4 = 0LL;
  SearchAppDesktopExperienceView::DismissCortanaApp((SearchAppDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 205) = 0;
  if ( *(_DWORD *)(a1 + 228) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 228) = 0;
    }
  }
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)a1);
  SearchAppDesktopExperienceView::UpdateSuggestionsShowing((SearchAppDesktopExperienceView *)a1, 0);
  SearchAppDesktopExperienceView::ResetCortanaWindowRegion((SearchAppDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 160LL))(
    *(_QWORD *)(a1 + 152),
    *(_QWORD *)(a1 + 160));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 176LL))(
    *(_QWORD *)(a1 + 152),
    *(_QWORD *)(a1 + 168));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 152));
  return 0LL;
}
