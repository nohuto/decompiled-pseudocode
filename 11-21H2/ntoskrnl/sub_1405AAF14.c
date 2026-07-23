/*
 * XREFs of sub_1405AAF14 @ 0x1405AAF14
 * Callers:
 *     sub_1405AAF9C @ 0x1405AAF9C (sub_1405AAF9C.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_14097D2A0 @ 0x14097D2A0 (sub_14097D2A0.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1405AAF14(unsigned __int64 a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // r9
  __int64 v3; // r10

  v1 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 384LL);
  if ( !v1 )
    return 0LL;
  v2 = a1 >> 12;
  do
  {
    v3 = v1[3];
    if ( v2 <= (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
    {
      if ( v2 >= (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
        break;
      v1 = (_QWORD *)*v1;
    }
    else
    {
      v1 = (_QWORD *)v1[1];
    }
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
