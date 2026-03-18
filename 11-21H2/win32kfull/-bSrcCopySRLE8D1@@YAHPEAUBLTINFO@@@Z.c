/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02CAE10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v2; // edx
  unsigned __int8 *v3; // rbp
  __int64 v4; // rsi
  int v5; // r11d
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  int v13; // ecx
  __int64 i; // rax
  unsigned int v15; // r12d
  __int64 v16; // r14
  unsigned __int8 *v17; // rbp
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned int v20; // r12d
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r11d
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // r14
  __int64 v27; // rdx
  char v28; // cl
  unsigned __int8 *v29; // rbp
  unsigned int v30; // r10d
  int v31; // eax
  unsigned __int8 *v32; // rbp
  int v33; // ecx
  int v34; // eax
  char v35; // cl
  int v36; // ebx
  int v37; // edx
  int v38; // r9d
  char v39; // dl
  unsigned int v41; // r12d
  char v42; // al
  char v43; // r8
  unsigned int v44; // r10d
  __int64 v45; // r14
  int v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+24h] [rbp-74h]
  unsigned int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+2Ch] [rbp-6Ch]
  int v50; // [rsp+30h] [rbp-68h]
  unsigned int v51; // [rsp+34h] [rbp-64h]
  int v52; // [rsp+38h] [rbp-60h]
  int v53; // [rsp+3Ch] [rbp-5Ch]
  int v54; // [rsp+40h] [rbp-58h]
  int v55; // [rsp+44h] [rbp-54h]
  __int64 v56; // [rsp+48h] [rbp-50h]
  char v57; // [rsp+A0h] [rbp+8h]
  char v58; // [rsp+A8h] [rbp+10h]
  unsigned int v59; // [rsp+B0h] [rbp+18h]
  unsigned int v60; // [rsp+B8h] [rbp+20h]
  int v61; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v49 = *((_DWORD *)a1 + 11);
  v53 = v2;
  v54 = *((_DWORD *)a1 + 14);
  v47 = v5;
  v48 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v56 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v46 = v10;
  v50 = v9;
  if ( v5 < v9 )
    return 1LL;
  v12 = 0;
  v51 = (unsigned int)v2 >> 3;
  v58 = EndMask[v2 & 7];
  v59 = (unsigned int)(v7 - 1) >> 3;
  v57 = ~EndMask[v7 & 7];
  if ( v5 >= v10 )
    goto LABEL_10;
  if ( v8 < v2 )
  {
    if ( v8 < v7 )
    {
      v12 = EndMask[v2 & 7] & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v12 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
LABEL_10:
  v13 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v56 + 4 * i) = v13;
    v13 ^= 1u;
  }
  v15 = v6 + 2;
  v60 = v15;
  if ( v15 > v48 )
    return 0LL;
  while ( 1 )
  {
    v16 = *v3;
    v17 = v3 + 1;
    v18 = (unsigned int)(v8 >> 3);
    v19 = *v17;
    v3 = v17 + 1;
    if ( (_DWORD)v16 )
    {
      if ( v5 >= v46 || v8 >= v7 || (int)v16 + v8 <= v2 )
      {
        v8 += v16;
      }
      else
      {
        if ( v8 < v2 )
        {
          v34 = v2 - v8;
          v8 = v2;
          v16 = (unsigned int)(v16 - v34);
          v18 = (unsigned int)(v2 >> 3);
        }
        if ( (int)v16 + v8 <= v7 )
        {
          v52 = 0;
        }
        else
        {
          v52 = v8 + v16 - v7;
          v16 = (unsigned int)(v7 - v8);
        }
        v35 = v8 & 7;
        v36 = v16 + v8;
        LOBYTE(v37) = 7 - v35;
        v38 = *(_DWORD *)(v56 + 4 * v19);
        v55 = v38;
        if ( (unsigned __int8)(7 - v35) < (unsigned __int8)v16 )
        {
          v37 = (unsigned __int8)v37;
          v41 = ((unsigned __int8)v16 - (unsigned __int8)v37 - 1) >> 3;
          v42 = *((_BYTE *)&unk_1C02F9D8F - (unsigned __int8)v37);
          if ( v38 )
            v43 = ~v42 | v12;
          else
            v43 = v42 & v12;
          *(_BYTE *)(v18 + v4) = v43;
          v44 = v18 + 1;
          v45 = -1 - (unsigned __int8)v37 + (unsigned int)v16;
          if ( v41 )
          {
            LOBYTE(v37) = -(v38 != 0);
            memset((void *)(v4 + v44), v37, v41);
            v5 = v47;
            v38 = v55;
            v45 = (unsigned int)v45 - 8 * v41;
          }
          v12 = 0;
          if ( (_DWORD)v45 && v38 )
          {
            v15 = v60;
            if ( (unsigned int)v45 < 9 )
              v12 = EndMask[v45];
          }
          else
          {
            v15 = v60;
          }
        }
        else if ( (unsigned int)v16 < 9 )
        {
          v39 = EndMask[v16] >> v35;
          if ( v38 )
            v12 |= v39;
          else
            v12 &= ~v39;
        }
        v8 = v52 + v36;
      }
      goto LABEL_89;
    }
    if ( !(_DWORD)v19 )
    {
      if ( v5 < v46 && (v8 & 7) != 0 )
      {
        if ( v8 < v2 )
        {
          if ( v8 < v7 )
            goto LABEL_61;
        }
        else if ( v8 < v7 )
        {
          *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~EndMask[v8 & 7];
          goto LABEL_61;
        }
        *(_BYTE *)(v59 + v4) = v12 | v57 & *(_BYTE *)(v59 + v4);
      }
LABEL_61:
      --v5;
      v4 += v49;
      v8 = v54;
      v47 = v5;
      if ( v5 < v50 )
      {
        *((_DWORD *)a1 + 34) = v54;
        goto LABEL_92;
      }
      if ( v5 < v46 )
        goto LABEL_63;
      goto LABEL_89;
    }
    if ( (_DWORD)v19 == 1 )
      break;
    if ( (_DWORD)v19 != 2 )
    {
      v20 = v19 + v15;
      if ( v20 > v48 )
        return 0LL;
      v21 = v19 & 1;
      v61 = v21;
      if ( v5 >= v46 || v8 >= v7 || (int)v19 + v8 <= v2 )
      {
        v8 += v19;
        v29 = &v3[v19];
      }
      else
      {
        if ( v8 < v2 )
        {
          v22 = (unsigned int)(v2 - v8);
          v8 = v2;
          LODWORD(v19) = v19 - v22;
          v18 = (unsigned int)(v2 >> 3);
          v3 += v22;
        }
        if ( (int)v19 + v8 <= v7 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v8 + v19 - v7;
          LODWORD(v19) = v7 - v8;
        }
        v24 = (unsigned __int8)(7 - (v8 & 7));
        v25 = v19 + v8;
        v26 = byte_1C02F9D78[v24];
        while ( !v26 )
        {
LABEL_32:
          *(_BYTE *)(v18 + v4) = v12;
          v26 = 0x80;
          v18 = (unsigned int)(v18 + 1);
          v12 = 0;
          if ( !(_DWORD)v19 )
            goto LABEL_33;
        }
        while ( (_DWORD)v19 )
        {
          v27 = *v3++;
          v28 = v12 | v26;
          LODWORD(v19) = v19 - 1;
          if ( !*(_DWORD *)(v56 + 4 * v27) )
            v28 = v12;
          v26 >>= 1;
          v12 = v28;
          if ( !v26 )
            goto LABEL_32;
        }
LABEL_33:
        v21 = v61;
        v29 = &v3[v23];
        v8 = v23 + v25;
        v5 = v47;
      }
      v15 = v21 + v20;
      v3 = &v29[v21];
      goto LABEL_89;
    }
    if ( v5 >= v46 )
    {
      v30 = (unsigned int)(v7 - 1) >> 3;
    }
    else
    {
      if ( (v8 & 7) != 0 )
      {
        if ( v8 < v2 )
        {
          if ( v8 >= v7 )
          {
LABEL_42:
            v30 = (unsigned int)(v7 - 1) >> 3;
            *(_BYTE *)(v59 + v4) = v12 | v57 & *(_BYTE *)(v59 + v4);
            goto LABEL_46;
          }
        }
        else
        {
          if ( v8 >= v7 )
            goto LABEL_42;
          v2 = v53;
          *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~EndMask[v8 & 7];
        }
      }
      v30 = (unsigned int)(v7 - 1) >> 3;
    }
LABEL_46:
    v15 += 2;
    if ( v15 > v48 )
      return 0LL;
    v31 = *v3;
    v32 = v3 + 1;
    v8 += v31;
    v33 = *v32;
    v3 = v32 + 1;
    v5 -= v33;
    v47 = v5;
    v4 += v33 * v49;
    if ( v5 < v50 )
    {
      *((_DWORD *)a1 + 34) = v8;
LABEL_92:
      *((_QWORD *)a1 + 14) = v4;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v3;
      *((_DWORD *)a1 + 31) = v15;
      *((_DWORD *)a1 + 33) = v5;
      return result;
    }
    if ( v5 < v46 )
    {
      if ( v8 >= v2 )
      {
        if ( v8 < v7 )
        {
          v12 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
          goto LABEL_89;
        }
LABEL_53:
        v12 = *(_BYTE *)(v30 + v4);
        goto LABEL_89;
      }
      if ( v8 >= v7 )
        goto LABEL_53;
LABEL_63:
      v12 = v58 & *(_BYTE *)(v51 + v4);
    }
LABEL_89:
    v15 += 2;
    v60 = v15;
    if ( v15 > v48 )
      return 0LL;
    v2 = v53;
  }
  if ( v5 < v46 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 >= v7 )
        goto LABEL_100;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~EndMask[v8 & 7];
        return 0LL;
      }
LABEL_100:
      *(_BYTE *)(v59 + v4) = v12 | v57 & *(_BYTE *)(v59 + v4);
    }
  }
  return 0LL;
}
