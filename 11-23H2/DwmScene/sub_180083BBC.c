/*
 * XREFs of sub_180083BBC @ 0x180083BBC
 * Callers:
 *     sub_180081F6C @ 0x180081F6C (sub_180081F6C.c)
 *     sub_180081F78 @ 0x180081F78 (sub_180081F78.c)
 *     sub_1800845E8 @ 0x1800845E8 (sub_1800845E8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 */

__int64 __fastcall sub_180083BBC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180081650((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
