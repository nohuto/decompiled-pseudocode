/*
 * XREFs of ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1804883FC
 * Callers:
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x180482130 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485BD0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CortanaDesktopExperienceView::UpdateSuggestionsShowing(CortanaDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax

  if ( a2 != *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = a2;
    v2 = **((_QWORD **)this + 12);
    if ( a2 )
      (*(void (**)(void))(v2 + 120))();
    else
      (*(void (**)(void))(v2 + 128))();
  }
}
