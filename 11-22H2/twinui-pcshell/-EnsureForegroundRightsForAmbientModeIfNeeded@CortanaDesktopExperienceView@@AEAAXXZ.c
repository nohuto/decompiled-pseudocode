/*
 * XREFs of ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180482644
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804863A8 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(
        CortanaDesktopExperienceView *this)
{
  if ( *((_DWORD *)this + 35) == 3 && *((_BYTE *)this + 242) )
  {
    if ( !*((_BYTE *)this + 243) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 243) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 243) = 0;
  }
}
