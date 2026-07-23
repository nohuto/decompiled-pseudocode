/*
 * XREFs of sub_140942948 @ 0x140942948
 * Callers:
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 * Callees:
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 */

char __fastcall sub_140942948(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 v10; // r10

  if ( a1 == a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    v3 = *(_QWORD **)(*(_QWORD *)(v2 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 48);
  if ( v4 )
    v5 = *(_QWORD **)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  if ( v3 && v5 )
  {
    do
    {
      v5 = (_QWORD *)v5[2];
      if ( v5 == v3 )
        return 0;
    }
    while ( v5 != qword_140C46278 );
  }
  v6 = a2 + 16;
  v7 = *(_QWORD *)(a2 + 16);
  while ( v7 != v6 )
  {
    v8 = sub_14055F84C(v7, 0);
    v7 = *v9;
    if ( *(_QWORD *)(v8 + 32) == v10 )
      return 0;
  }
  return 1;
}
