/*
 * XREFs of sub_1409DE468 @ 0x1409DE468
 * Callers:
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 * Callees:
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 */

_QWORD *__fastcall sub_1409DE468(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx

  v2 = (_QWORD *)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 40); ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    v5 = i - 5;
    v6 = i[2];
    if ( v6 )
    {
      v7 = *a2 - *(_QWORD *)(v6 + 72);
      if ( *a2 == *(_QWORD *)(v6 + 72) )
        v7 = a2[1] - *(_QWORD *)(v6 + 80);
      if ( !v7 )
        break;
    }
  }
  sub_140784160((ULONG_PTR)(i - 5));
  return v5;
}
