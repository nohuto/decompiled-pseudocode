/*
 * XREFs of sub_14082052C @ 0x14082052C
 * Callers:
 *     sub_14081F6E0 @ 0x14081F6E0 (sub_14081F6E0.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_1408217D8 @ 0x1408217D8 (sub_1408217D8.c)
 *     sub_140821830 @ 0x140821830 (sub_140821830.c)
 */

__int64 __fastcall sub_14082052C(_QWORD *a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // r11
  unsigned int v4; // esi
  unsigned int *v5; // r15
  unsigned int v6; // r8d
  unsigned int v7; // r13d
  unsigned int v8; // eax
  _QWORD *v9; // rdi
  int v10; // ecx
  _QWORD *v11; // rax
  _QWORD *i; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v22[18]; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+D0h] [rbp+67h]
  unsigned int v24; // [rsp+D8h] [rbp+6Fh]
  unsigned int v25; // [rsp+E0h] [rbp+77h]

  memset(v22, 0, 0x60uLL);
  v2 = (unsigned int *)a1[52];
  v3 = 0LL;
  v22[1] = v22;
  LODWORD(v22[2]) = 0;
  v22[0] = v22;
  v22[4] = a1[4];
  v22[3] = 0LL;
  v22[5] = 4LL;
  v22[6] = 0LL;
  v22[9] = 0LL;
  if ( (v2 || (v2 = (unsigned int *)a1[68]) != 0LL) && (v4 = *v2) != 0 )
  {
    v5 = v2 + 1;
  }
  else
  {
    v4 = 1;
    v2 = 0LL;
    v5 = 0LL;
  }
  v6 = 0;
  v25 = 0;
  do
  {
    if ( v2 )
    {
      v7 = *v5;
      v8 = v5[1];
      v24 = v8;
      if ( *v5 != -1 )
        goto LABEL_8;
    }
    else
    {
      v8 = v3;
      v24 = v3;
    }
    v7 = 1;
LABEL_8:
    if ( a1 == qword_140C46278 )
      v9 = a1;
    else
      v9 = (_QWORD *)a1[2];
    v10 = 1;
    v23 = 1;
    if ( v9 )
    {
      do
      {
        if ( v9 == qword_140C46278 && v10 )
        {
          v16 = sub_1408217D8(v7, v8);
          v9 = (_QWORD *)v16;
          if ( v16 == v17 && !v7 )
            v9 = (_QWORD *)sub_1408217D8(1LL, 0LL);
          v23 = v3;
        }
        v11 = v9 + 61;
        for ( i = (_QWORD *)v9[61]; i != v11; i = (_QWORD *)*i )
        {
          if ( i[3] != v3 )
          {
            v23 = v3;
            v22[0] = i + 5;
            v22[1] = i + 5;
            i[5] = v22;
            i[6] = v22;
            sub_140821830(i, 0LL);
            sub_140821830(i, 2LL);
            v13 = v22[0];
            v14 = v22[1];
            if ( *(_QWORD **)(v22[0] + 8LL) != v22 || *(_QWORD **)v22[1] != v22 )
              __fastfail(3u);
            *(_QWORD *)v22[1] = v22[0];
            v3 = 0LL;
            *(_QWORD *)(v13 + 8) = v14;
            v22[1] = v22;
            v22[0] = v22;
            v11 = v9 + 61;
          }
        }
        v9 = (_QWORD *)v9[2];
        v10 = v23;
        v8 = v24;
      }
      while ( v9 );
      v6 = v25;
    }
    if ( v4 > 1 )
    {
      v18 = v5[3];
      v19 = v5 + 4;
      if ( v18 )
      {
        v20 = v18;
        do
        {
          v21 = (unsigned int)v3;
          if ( *(_BYTE *)v19 == 5 )
            v21 = v19[1];
          v19 = (unsigned int *)((char *)v19 + v21 + 20);
          --v20;
        }
        while ( v20 );
      }
      v5 = v19;
    }
    v25 = ++v6;
  }
  while ( v6 < v4 );
  return sub_14081FDD8((__int64)a1, 0LL, 0);
}
