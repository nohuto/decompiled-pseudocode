/*
 * XREFs of ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804E1800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x1804E153C (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804E162C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x1804E282C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_DWORD *)(a1 + 640) )
  {
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 617) = 1;
    }
    else
    {
      LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)(a1 - 8), 0);
      Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 640);
      LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
    }
  }
  else
  {
    PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  }
}
