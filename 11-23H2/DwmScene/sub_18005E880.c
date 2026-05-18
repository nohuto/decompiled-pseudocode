/*
 * XREFs of sub_18005E880 @ 0x18005E880
 * Callers:
 *     sub_180059978 @ 0x180059978 (sub_180059978.c)
 *     sub_180059984 @ 0x180059984 (sub_180059984.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800589C8 @ 0x1800589C8 (sub_1800589C8.c)
 */

__int64 __fastcall sub_18005E880(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800589C8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
