/*
 * XREFs of ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804049C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x1804046FC (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804047EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18040786C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

int __fastcall LegacyUwpWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  unsigned int Visibility; // eax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  if ( !*(_DWORD *)(a1 + 624) )
    return PostMessageW((HWND)*(int *)(a1 + 288), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 601) = 1;
  }
  else
  {
    LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)(a1 - 8), 0);
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 624);
    return LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
  }
  return result;
}
