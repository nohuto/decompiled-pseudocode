/*
 * XREFs of sub_180085D94 @ 0x180085D94
 * Callers:
 *     sub_18008459C @ 0x18008459C (sub_18008459C.c)
 *     sub_18008CDD4 @ 0x18008CDD4 (sub_18008CDD4.c)
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180085D94(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
