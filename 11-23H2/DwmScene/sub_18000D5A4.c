/*
 * XREFs of sub_18000D5A4 @ 0x18000D5A4
 * Callers:
 *     sub_18000D45C @ 0x18000D45C (sub_18000D45C.c)
 *     sub_18000D58C @ 0x18000D58C (sub_18000D58C.c)
 *     sub_18000D61C @ 0x18000D61C (sub_18000D61C.c)
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 *     sub_18000F82C @ 0x18000F82C (sub_18000F82C.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 */

__int64 __fastcall sub_18000D5A4(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000D958();
  return result;
}
