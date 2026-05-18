/*
 * XREFs of sub_1800690B8 @ 0x1800690B8
 * Callers:
 *     sub_180049514 @ 0x180049514 (sub_180049514.c)
 *     sub_180049898 @ 0x180049898 (sub_180049898.c)
 *     sub_180051410 @ 0x180051410 (sub_180051410.c)
 *     sub_180052B30 @ 0x180052B30 (sub_180052B30.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800690B8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 464);
  }
  *a2 = *(_QWORD *)(a1 + 456);
  result = a2;
  a2[1] = v2;
  return result;
}
