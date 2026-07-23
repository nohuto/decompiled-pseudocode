/*
 * XREFs of sub_1403B402C @ 0x1403B402C
 * Callers:
 *     sub_14021BD70 @ 0x14021BD70 (sub_14021BD70.c)
 *     sub_14081A760 @ 0x14081A760 (sub_14081A760.c)
 *     sub_14098EBBC @ 0x14098EBBC (sub_14098EBBC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403B402C(__int64 a1)
{
  unsigned int *v1; // r8
  int v2; // r9d
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // eax
  unsigned __int8 v6; // r10
  unsigned int v7; // edx
  unsigned __int16 v8; // bx
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = *(unsigned int **)(a1 + 32);
  if ( v1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 40);
    v3 = *v1;
    v4 = 1;
    if ( (_WORD)v2 )
      v4 = *(unsigned __int16 *)(a1 + 40);
    v5 = 100 * *(_DWORD *)(a1 + 52);
    v1[1] = 0;
    v1[3] = 0;
    v6 = v5 / v4;
    if ( v6 > 0x64u )
      v6 = 100;
    v7 = 0;
    v1[2] = v3 * v2;
    v8 = *(_WORD *)(a1 + 58);
    v1[4] = v3 * v8;
    v1[5] = v3 * v6;
    *(_OWORD *)(v1 + 6) = 0LL;
    if ( v3 )
    {
      do
      {
        v9 = v7++;
        v10 = 3 * v9;
        HIWORD(v1[v10 + 10]) = 0;
        LOWORD(v1[v10 + 10]) = v2;
        LOWORD(v1[v10 + 11]) = v8;
        BYTE2(v1[v10 + 11]) = v6;
        *(unsigned int *)((char *)&v1[v10 + 11] + 3) = 0;
      }
      while ( v7 < *v1 );
    }
  }
}
