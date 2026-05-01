/*
 * XREFs of ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x18073DBBC
 * Callers:
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EDB50 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

void __fastcall SHRegGetDWORDWithDefault(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int *a5)
{
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, a2, a3, a5) < 0 )
    *a5 = a4;
}
