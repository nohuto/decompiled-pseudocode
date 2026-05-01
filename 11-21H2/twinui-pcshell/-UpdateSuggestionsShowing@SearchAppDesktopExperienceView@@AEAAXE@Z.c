/*
 * XREFs of ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039FACC
 * Callers:
 *     ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803998D0 (-ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C7FC (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C8AC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SearchAppDesktopExperienceView::UpdateSuggestionsShowing(SearchAppDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax

  if ( a2 != *((_BYTE *)this + 120) )
  {
    *((_BYTE *)this + 120) = a2;
    v2 = **((_QWORD **)this + 10);
    if ( a2 )
      (*(void (**)(void))(v2 + 120))();
    else
      (*(void (**)(void))(v2 + 128))();
  }
}
