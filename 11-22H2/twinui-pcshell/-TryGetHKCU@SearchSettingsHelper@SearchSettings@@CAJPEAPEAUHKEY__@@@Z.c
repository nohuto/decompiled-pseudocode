/*
 * XREFs of ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1801EFC24
 * Callers:
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1801EAE64 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1801EF130 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Z @ 0x1801EF3F8 (-SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV-$time_point@Ucl.c)
 * Callees:
 *     <none>
 */

int __fastcall SearchSettings::SearchSettingsHelper::TryGetHKCU(
        PHKEY phkResult,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = RegOpenCurrentUser(0x20019u, phkResult);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x2AC,
             (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             (const char *)v5,
             a5);
  else
    return 0;
}
