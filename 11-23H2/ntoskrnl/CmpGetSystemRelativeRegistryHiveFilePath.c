/*
 * XREFs of CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B98234
 * Callers:
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     wcsrchr @ 0x1403DBCF0 (wcsrchr.c)
 */

const wchar_t *__fastcall CmpGetSystemRelativeRegistryHiveFilePath(const wchar_t *a1)
{
  wchar_t *v2; // rax
  wchar_t *v3; // rbx

  v2 = wcsrchr(a1, 0x5Cu);
  v3 = v2;
  if ( !v2 || v2 <= a1 )
    return a1;
  if ( (unsigned __int64)(((char *)v2 - (char *)a1 + 2) >> 1) > 0x11
    && !wcsnicmp(v2 - 16, L"\\System32\\Config\\", 0x11uLL) )
  {
    v3 -= 16;
  }
  return v3;
}
