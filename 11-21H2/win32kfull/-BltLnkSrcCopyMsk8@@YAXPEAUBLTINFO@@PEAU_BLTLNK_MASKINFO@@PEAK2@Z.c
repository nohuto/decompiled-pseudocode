/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02DB5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // r11d
  struct BLTINFO *v7; // rbx
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _BYTE *v12; // r9
  int v13; // r12d
  _BYTE *v14; // r10
  int v15; // esi
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // edx
  int v19; // ecx
  char v20; // bp
  bool v21; // cc
  int v22; // r15d
  unsigned int v23; // edx
  unsigned __int8 v24; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)v7 + 2);
  v25 = v11;
  v24 = *((_BYTE *)v5 + 36);
  v26 = v9;
  while ( v8 )
  {
    --v8;
    v12 = (_BYTE *)(v9 + *((int *)v7 + 12));
    v13 = *((_DWORD *)v7 + 7);
    v14 = (_BYTE *)(v11 + *((int *)v7 + 14));
    v15 = *((_DWORD *)v5 + 7);
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v16 = v4 - v15;
        v17 = v13;
        v18 = v24 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v10);
        v19 = 8 - (v15 & 7);
        v20 = v19 - v13;
        if ( v19 <= v13 )
        {
          v17 = 8 - (v15 & 7);
          v20 = 0;
        }
        v21 = v17 <= v16;
        if ( v17 > v16 )
        {
          v20 += v17 - v16;
          v21 = v17 <= v16;
        }
        if ( v21 )
          v16 = v17;
        v13 -= v16;
        v22 = v16 + v15;
        if ( !v18 )
          goto LABEL_41;
        v23 = v18 >> v20;
        switch ( v16 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_33;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_24;
          case 7:
            goto LABEL_21;
        }
        if ( v16 == 8 )
          break;
LABEL_41:
        v15 = 0;
        v12 += v16;
        v14 += v16;
        if ( v22 != v4 )
          v15 = v22;
        if ( v13 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v9 = v26;
          v11 = v25;
          goto LABEL_45;
        }
      }
      if ( (v23 & 1) != 0 )
        v14[7] = v12[7];
      v23 >>= 1;
LABEL_21:
      if ( (v23 & 1) != 0 )
        v14[6] = v12[6];
      v23 >>= 1;
LABEL_24:
      if ( (v23 & 1) != 0 )
        v14[5] = v12[5];
      v23 >>= 1;
LABEL_27:
      if ( (v23 & 1) != 0 )
        v14[4] = v12[4];
      v23 >>= 1;
LABEL_30:
      if ( (v23 & 1) != 0 )
        v14[3] = v12[3];
      v23 >>= 1;
LABEL_33:
      if ( (v23 & 1) != 0 )
        v14[2] = v12[2];
      v23 >>= 1;
LABEL_36:
      if ( (v23 & 1) != 0 )
        v14[1] = v12[1];
      v23 >>= 1;
LABEL_39:
      if ( (v23 & 1) != 0 )
        *v14 = *v12;
      goto LABEL_41;
    }
LABEL_45:
    v11 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v25 = v11;
    v26 = v9;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v10 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v10 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v10 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v10 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
