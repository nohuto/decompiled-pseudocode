/*
 * XREFs of ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x1804E17A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804E162C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x1804E282C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_HandleActivationRequested(LegacyUwpWindowWrapper *this)
{
  int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 617) )
  {
    *((_BYTE *)this + 617) = 1;
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((char *)this + 640);
    LegacyUwpWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
