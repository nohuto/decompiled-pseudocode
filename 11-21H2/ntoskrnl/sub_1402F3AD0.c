/*
 * XREFs of sub_1402F3AD0 @ 0x1402F3AD0
 * Callers:
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 * Callees:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 */

__int64 __fastcall sub_1402F3AD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int i; // r14d
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  char v9; // r10
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int *v14; // rdx

  v2 = *(_QWORD *)(a1 + 168);
  for ( i = 0; ; i = 1 )
  {
    v5 = *(unsigned int **)(v2 + 56);
    if ( !v5 )
      goto LABEL_4;
    v6 = v5[3];
    if ( !(_DWORD)v6 )
      goto LABEL_4;
    v9 = *((_BYTE *)v5 + 4);
    v10 = *v5;
    v11 = *v5;
    v12 = qword_140C507D0;
    if ( (v9 & 2) != 0 )
    {
      if ( v10 != 1 )
      {
LABEL_25:
        if ( (v9 & 8) != 0 )
          v13 = 2;
        else
          v13 = 1;
        goto LABEL_17;
      }
    }
    else
    {
      if ( v10 != 1 )
        goto LABEL_25;
      a2 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_QWORD *)(a2 + 2288) || *(_QWORD *)(a2 + 992) )
      {
        v11 = *v5;
        v12 = -1LL;
      }
      else
      {
        v11 = *v5;
      }
    }
    v13 = 0;
LABEL_17:
    if ( *((_BYTE *)v5 + 5) || *((_QWORD *)v5 + 2) > v12 )
    {
      if ( (v9 & 1) != 0 )
        sub_1403AD034((unsigned int)v11, a2, v11, v12);
      else
        sub_1402F391C(v11, v13);
      *((_BYTE *)v5 + 5) = 0;
    }
    else
    {
      v14 = v5 + 6;
      if ( (v9 & 1) != 0 )
        sub_1403AD40C(v6, v14, v11);
      else
        sub_1402F3C40(v6, v14, v11, v13);
    }
    *((_BYTE *)v5 + 4) &= ~8u;
    v5[3] = 0;
    *((_QWORD *)v5 + 2) = 0LL;
LABEL_4:
    if ( *(_DWORD *)(v2 + 76) )
      sub_1402C1D70(*(_QWORD *)(a1 + 24), v2 + 64, 0);
    v7 = *(_DWORD **)(v2 + 248);
    if ( !v7 || !*v7 || !(unsigned int)sub_14045BCA2(a1, v7, (*(_DWORD *)v2 & 3) != 0) )
      break;
    sub_14045BBD4(a1, *(_QWORD *)(v2 + 248), sub_14045BA70, v2);
  }
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 || i )
    *(_BYTE *)(v2 + 6) = 1;
  return 0LL;
}
