/*
 * XREFs of sub_140A30458 @ 0x140A30458
 * Callers:
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 *     sub_140A30A20 @ 0x140A30A20 (sub_140A30A20.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 */

__int64 __fastcall sub_140A30458(__int64 a1, const wchar_t *a2)
{
  unsigned int v2; // edi
  wchar_t *v4; // rax
  const wchar_t *v5; // rax

  v2 = 0;
  if ( *a2 != 64 || (v4 = wcschr(a2 + 1, 0x3Au)) == 0LL || (v5 = v4 + 1) == 0LL )
    v5 = a2;
  if ( wcschr(v5, 0x5Cu) )
    return (unsigned int)-1073741773;
  return v2;
}
