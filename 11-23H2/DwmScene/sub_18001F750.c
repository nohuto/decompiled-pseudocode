/*
 * XREFs of sub_18001F750 @ 0x18001F750
 * Callers:
 *     sub_18001F19C @ 0x18001F19C (sub_18001F19C.c)
 *     sub_180059984 @ 0x180059984 (sub_180059984.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800DE890 @ 0x1800DE890 (sub_1800DE890.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 */

__int64 __fastcall sub_18001F750(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18001E9BC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
