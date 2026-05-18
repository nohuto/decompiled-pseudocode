/*
 * XREFs of sub_180069460 @ 0x180069460
 * Callers:
 *     sub_1800694A0 @ 0x1800694A0 (sub_1800694A0.c)
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180069460(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = 2 * (a3 + 16LL);
  v4 = *(_QWORD *)(a1 + 16 * (a3 + 16LL) + 8);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 8 * v3 + 8);
  }
  *a2 = *(_QWORD *)(a1 + 8 * v3);
  result = a2;
  a2[1] = v4;
  return result;
}
