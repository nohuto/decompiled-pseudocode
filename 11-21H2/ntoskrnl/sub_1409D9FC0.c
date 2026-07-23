/*
 * XREFs of sub_1409D9FC0 @ 0x1409D9FC0
 * Callers:
 *     sub_1409D9340 @ 0x1409D9340 (sub_1409D9340.c)
 *     sub_1409D95D0 @ 0x1409D95D0 (sub_1409D95D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1409D9FC0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx

  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 + 80)) == -1 )
    __int2c();
  v2 = (_QWORD *)(a2 ^ a1);
  if ( v2[2] != -1LL )
    __int2c();
  if ( v2[3] )
    __int2c();
  if ( v2[4] )
    __int2c();
  v3 = (_QWORD *)v2[5];
  if ( v3 == v2 + 5 )
    __int2c();
  if ( (_QWORD *)*v3 != v2 + 5 )
    __int2c();
  return v2;
}
