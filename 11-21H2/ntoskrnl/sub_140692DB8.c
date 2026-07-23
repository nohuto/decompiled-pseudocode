/*
 * XREFs of sub_140692DB8 @ 0x140692DB8
 * Callers:
 *     sub_140735E30 @ 0x140735E30 (sub_140735E30.c)
 * Callees:
 *     sub_1406930B0 @ 0x1406930B0 (sub_1406930B0.c)
 *     sub_140693128 @ 0x140693128 (sub_140693128.c)
 */

__int64 __fastcall sub_140692DB8(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v4 = a1 + 18;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  sub_140693128();
  v6 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v7 = *a2;
    while ( v6[4] != v7 )
    {
      if ( v6[4] >= v7 )
      {
        v6 = (_QWORD *)*v6;
        if ( v6 != v4 )
          continue;
      }
      goto LABEL_9;
    }
    v2 = v6[7];
  }
LABEL_9:
  sub_1406930B0();
  return v2;
}
