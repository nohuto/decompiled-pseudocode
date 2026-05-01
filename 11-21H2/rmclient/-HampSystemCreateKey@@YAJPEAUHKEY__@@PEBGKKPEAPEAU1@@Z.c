/*
 * XREFs of ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x180007EA8
 * Callers:
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x1800079CC (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007D18 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x180007DF0 (-HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemCreateKey(HKEY a1, const unsigned __int16 *a2, DWORD a3, __int64 a4, HKEY *a5)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a1, a2, 0, 0LL, a3, 1u, 0LL, a5, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
