/*
 * XREFs of sub_14064E408 @ 0x14064E408
 * Callers:
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     sub_14064E1FC @ 0x14064E1FC (sub_14064E1FC.c)
 */

__int64 __fastcall sub_14064E408(__int64 *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int *v6; // r13
  int v8; // edi
  __int64 v9; // r11
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // r12d
  unsigned int v16; // esi
  unsigned int v17; // ebp
  int v18; // edx
  int v19; // ecx
  __int64 v21; // [rsp+20h] [rbp-48h]
  int *v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v6 = (int *)(a1 + 1);
  *a1 = qword_140C4EF78;
  v8 = 0;
  v9 = a4;
  v11 = dword_140C4EF80;
  v12 = 0;
  *((_DWORD *)a1 + 2) = dword_140C4EF80;
  v13 = 9 * v9;
  *(_DWORD *)a1 = dword_140C0B2E0[18 * v9 + 4] + dword_140C0B2E0[18 * v9 + 8];
  v14 = v11 + dword_140C0B2E0[18 * v9 + 11];
  *((_DWORD *)a1 + 1) = v14;
  *v6 = dword_140C0B2E0[18 * v9 + 11] + v14;
  v15 = *((_DWORD *)a1 + 2);
  v21 = *a1;
  if ( a6 )
  {
    dword_140C0DF90 |= 0x1000000u;
    v16 = 0;
    v17 = HIDWORD(v21);
    while ( 1 )
    {
      v12 = sub_14064E1FC(v16, v9, (__int64)a3);
      if ( v12 < 0 )
        break;
      if ( __PAIR64__(v17, v21) < qword_140C0DEE0 )
      {
        v15 = dword_140C0DEE8;
        LODWORD(v21) = qword_140C0DEE0;
        v17 = HIDWORD(qword_140C0DEE0);
      }
      qword_140C4EF78 = *a1;
      if ( v6 )
        dword_140C4EF80 = *v6;
      LODWORD(v9) = a4;
      if ( ++v16 > 0x64 )
      {
        dword_140C0DF90 &= ~0x1000000u;
        a3 = v22;
        goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v18 = dword_140C0B2E0[2 * v13 + 4] + dword_140C0B2E0[2 * v13 + 8];
    *a3 = v18;
    a3[1] = v15 + dword_140C0B2E0[2 * v13 + 13];
    if ( a5 )
      v8 = a5 + dword_140C0B2E0[2 * v13 + 14];
    *a2 = v18 + v8;
    v19 = v15 + dword_140C0B2E0[2 * v13 + 15];
    a2[1] = v19;
    a2[2] = dword_140C0B2E0[2 * v13 + 11] + v19;
  }
  return (unsigned int)v12;
}
