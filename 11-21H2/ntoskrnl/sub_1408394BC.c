/*
 * XREFs of sub_1408394BC @ 0x1408394BC
 * Callers:
 *     RtlDeleteRange @ 0x1408395F0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     sub_1408398AC @ 0x1408398AC (sub_1408398AC.c)
 *     sub_14083A0B4 @ 0x14083A0B4 (sub_14083A0B4.c)
 *     sub_14083A2EC @ 0x14083A2EC (sub_14083A2EC.c)
 */

__int64 __fastcall sub_1408394BC(__int64 a1, _QWORD *a2)
{
  int v2; // r14d
  __int64 v3; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v3 + 8) != a1 + 40 )
    goto LABEL_18;
  v6 = *(_QWORD **)(a1 + 48);
  if ( *v6 != a1 + 40 )
    goto LABEL_18;
  *v6 = v3;
  *(_QWORD *)(v3 + 8) = v6;
  v21 = &v20;
  v20 = &v20;
  v7 = (_QWORD *)a2[2];
  v8 = v7 - 5;
  v9 = *v7 - 40LL;
  if ( a2 + 2 == v7 )
    goto LABEL_15;
  do
  {
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_18;
    v11 = (_QWORD *)v7[1];
    if ( (_QWORD *)*v11 != v7 )
      goto LABEL_18;
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *((_BYTE *)v8 + 33) &= ~2u;
    v2 = sub_14083A0B4(&v20, v8, 1LL);
    if ( v2 < 0 )
    {
      v15 = v20 - 5;
      v16 = v20;
      while ( 1 )
      {
        v17 = *v16 - 40LL;
        if ( &v20 == v16 )
          break;
        sub_14083A2EC(a2, v15, 1LL);
        v16 = (_QWORD *)(v17 + 40);
        v15 = (_QWORD *)v17;
      }
      return sub_14083A2EC(a2, a1, 1LL);
    }
    v8 = (_QWORD *)v9;
    v9 = *(_QWORD *)(v9 + 40) - 40LL;
    v7 = v8 + 5;
  }
  while ( a2 + 2 != v8 + 5 );
  if ( v20 != &v20 )
  {
    v12 = (_QWORD *)a2[6];
    v13 = a2[5];
    *v12 = v20;
    v20[1] = v12;
    *(_QWORD *)(v13 + 8) = v21;
    *v21 = v13;
    goto LABEL_10;
  }
LABEL_15:
  v18 = a2[5];
  if ( *(_QWORD **)(v18 + 8) != a2 + 5 || (v19 = (_QWORD *)a2[6], (_QWORD *)*v19 != a2 + 5) )
LABEL_18:
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
LABEL_10:
  sub_1408398AC(a1);
  sub_1408398AC(a2);
  return (unsigned int)v2;
}
