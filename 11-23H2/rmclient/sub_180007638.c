/*
 * XREFs of sub_180007638 @ 0x180007638
 * Callers:
 *     sub_18000715C @ 0x18000715C (sub_18000715C.c)
 *     sub_1800074A8 @ 0x1800074A8 (sub_1800074A8.c)
 *     sub_180007560 @ 0x180007560 (sub_180007560.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_180007638(HKEY a1, const WCHAR *a2, DWORD a3, __int64 a4, HKEY *a5)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a1, a2, 0, 0LL, a3, 1u, 0LL, a5, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
