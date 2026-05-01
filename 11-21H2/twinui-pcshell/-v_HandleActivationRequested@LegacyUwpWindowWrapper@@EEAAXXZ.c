/*
 * XREFs of ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x180404960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804047EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18040786C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_HandleActivationRequested(LegacyUwpWindowWrapper *this)
{
  unsigned int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  if ( !*((_BYTE *)this + 601) )
  {
    *((_BYTE *)this + 601) = 1;
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((char *)this + 624);
    LegacyUwpWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
