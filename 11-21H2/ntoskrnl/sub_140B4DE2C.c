/*
 * XREFs of sub_140B4DE2C @ 0x140B4DE2C
 * Callers:
 *     sub_140B16B94 @ 0x140B16B94 (sub_140B16B94.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 */

const wchar_t *__fastcall sub_140B4DE2C(const wchar_t *a1)
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
