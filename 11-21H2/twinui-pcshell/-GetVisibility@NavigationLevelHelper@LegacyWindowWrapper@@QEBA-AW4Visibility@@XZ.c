/*
 * XREFs of ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18040786C
 * Callers:
 *     ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1803FBAF0 (-v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1803FBB50 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x180404960 (-v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804049C0 (-v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407A08 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040E3F0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(unsigned int *a1)
{
  __int64 v1; // rcx
  _OWORD v3[3]; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  v3[0] = _mm_load_si128((const __m128i *)&_xmm);
  v3[2] = _mm_load_si128((const __m128i *)&_xmm);
  v3[1] = _mm_load_si128((const __m128i *)&_xmm);
  return *((_DWORD *)v3 + 2 * v1 + 1) >= 2;
}
