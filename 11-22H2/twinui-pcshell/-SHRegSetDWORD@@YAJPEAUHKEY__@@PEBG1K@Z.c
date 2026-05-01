/*
 * XREFs of ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4
 * Callers:
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EACB8 (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EDB50 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x180255520 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x180258100 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     PersistEnterprisePinDataToRegistry_Old @ 0x180288158 (PersistEnterprisePinDataToRegistry_Old.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, (BYTE *)&v5, 4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
