/*
 * XREFs of ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1804DBF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804DBE10 (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x1804E282C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyWindowWrapper::v_HandleActivationRequested(LegacyWindowWrapper *this)
{
  unsigned int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 609) )
  {
    *((_BYTE *)this + 609) = 1;
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((char *)this + 648);
    LegacyWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
