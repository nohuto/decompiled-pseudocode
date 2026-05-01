/*
 * XREFs of sub_180007470 @ 0x180007470
 * Callers:
 *     sub_18000738C @ 0x18000738C (sub_18000738C.c)
 *     sub_18001EC40 @ 0x18001EC40 (sub_18001EC40.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_180007470(HKEY a1, const WCHAR *a2, BYTE *lpData, DWORD *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
