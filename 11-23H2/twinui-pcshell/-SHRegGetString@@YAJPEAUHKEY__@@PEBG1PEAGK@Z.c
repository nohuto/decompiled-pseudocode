/*
 * XREFs of ?SHRegGetString@@YAJPEAUHKEY__@@PEBG1PEAGK@Z @ 0x1803E844C
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 * Callees:
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 */

LSTATUS __fastcall SHRegGetString(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  return SHRegGetStringEx(a1, a2, a3, 2u, a4, a5);
}
