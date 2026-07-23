/*
 * XREFs of sub_140A1556C @ 0x140A1556C
 * Callers:
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 *     sub_14075E4A8 @ 0x14075E4A8 (sub_14075E4A8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A1556C(int *P)
{
  char *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rax
  char *v6; // rdx
  _QWORD *v7; // rbx

  if ( P )
  {
    v2 = (char *)*((_QWORD *)P + 1);
    if ( v2 )
    {
      v3 = 0;
      if ( *P <= 0 )
        goto LABEL_10;
      v4 = 0LL;
      do
      {
        v5 = *(_QWORD **)&v2[v4];
        v6 = v2;
        if ( v5 )
        {
          do
          {
            v7 = (_QWORD *)v5[2];
            ExFreePoolWithTag(v5, 0x74705041u);
            v5 = v7;
          }
          while ( v7 );
          v2 = (char *)*((_QWORD *)P + 1);
          v6 = v2;
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *P );
      v2 = v6;
      if ( v6 )
LABEL_10:
        ExFreePoolWithTag(v2, 0x74705041u);
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
