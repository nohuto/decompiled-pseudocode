/*
 * XREFs of sub_18002A538 @ 0x18002A538
 * Callers:
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002A538(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 i; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 16; i != v3; i += 16LL )
  {
    *(_QWORD *)(i - 16) = *(_QWORD *)i;
    *(_BYTE *)(i - 8) = *(_BYTE *)(i + 8);
  }
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
