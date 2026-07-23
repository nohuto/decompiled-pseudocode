/*
 * XREFs of sub_14076302C @ 0x14076302C
 * Callers:
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 *__fastcall sub_14076302C(__int64 a1, const wchar_t *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  while ( v4 != v2 )
  {
    if ( !wcsicmp(a2, (const wchar_t *)v4[2]) )
      return v4;
    v4 = (__int64 *)*v4;
  }
  return (__int64 *)v5;
}
