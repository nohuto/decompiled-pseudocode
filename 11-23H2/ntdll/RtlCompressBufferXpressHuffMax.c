/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1801205AC
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x180055E10 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x1800566A0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180056990 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x180121B00 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int8 *v12; // rbx
  char *v13; // r15
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // r10
  int v16; // esi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r11
  unsigned __int8 *v19; // rdi
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 *v25; // r8
  __int64 XpressCallback; // rax
  int v27; // r12d
  unsigned __int8 *v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int8 *v31; // r15
  unsigned __int8 *v32; // r10
  __int64 v33; // r11
  unsigned __int64 v34; // rbp
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rdx
  unsigned __int8 *v38; // rax
  unsigned __int8 *v39; // rbx
  int v40; // eax
  int v41; // ecx
  unsigned __int64 v42; // rbx
  unsigned __int8 *v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // r9
  _BYTE *v48; // r8
  unsigned __int64 v49; // rdx
  char v50; // cl
  unsigned __int8 v51; // cl
  _WORD *v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  int *v55; // rcx
  unsigned __int8 v56; // al
  int v57; // esi
  unsigned __int64 v58; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v59; // [rsp+38h] [rbp-90h]
  __int64 v60; // [rsp+40h] [rbp-88h]
  __int64 v61; // [rsp+48h] [rbp-80h]
  char *v62; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v63; // [rsp+58h] [rbp-70h]
  char *v64; // [rsp+60h] [rbp-68h]
  __int64 v65; // [rsp+68h] [rbp-60h]
  _QWORD v66[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+80h] [rbp-48h]
  unsigned __int64 v68; // [rsp+D0h] [rbp+8h]
  int v69; // [rsp+E0h] [rbp+18h]
  __int64 v71; // [rsp+100h] [rbp+38h]
  char *v73; // [rsp+108h] [rbp+40h]

  v69 = (int)a3;
  v9 = a2;
  v65 = a2;
  v64 = &a3[a4];
  v10 = a2 + a1;
  v68 = v10;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
    v62 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v12 = (unsigned __int8 *)a1;
    v66[0] = 0LL;
    v13 = a3;
    v66[1] = 0LL;
    v71 = 0LL;
    v67 = a2;
    while ( 1 )
    {
      v60 = 0LL;
      v61 = 0LL;
      memset_thunk_772440563353939046(a6 + 1339936, 0, 0x800uLL);
      v14 = (unsigned __int8 *)v10;
      v73 = (char *)(a6 + 1342240);
      v15 = a6 + 1342240;
      v16 = 1;
      if ( (unsigned __int64)(v12 + 0x10000) <= v10 )
        v14 = v12 + 0x10000;
      v17 = (unsigned __int64)&v12[v9];
      v63 = v14;
      v18 = (unsigned __int64)(v14 - 5);
      v59 = v14 - 5;
      if ( (unsigned __int64)(v14 - 5) < v17 )
        v17 = (unsigned __int64)(v14 - 5);
      v19 = a6 + 1342244;
      v58 = v17;
      if ( v12 == (unsigned __int8 *)a1 )
      {
        v16 = 2;
        ++*(_DWORD *)&a6[4 * *v12 + 1339936];
        v20 = *v12++;
        *v19 = v20;
        v19 = a6 + 1342245;
      }
      if ( (unsigned __int64)v12 >= v18 )
        goto LABEL_87;
      v21 = v12;
      v22 = (__int64)&v12[-a1] % 0x20000;
      do
      {
        v23 = (unsigned __int16)XpressHashFunction[*v21] ^ (unsigned __int16)word_18015BFF0[v21[2]] ^ (unsigned __int64)(unsigned __int16)word_18015BDF0[v21[1]];
        v24 = *(_QWORD *)&a6[8 * v23];
        *(_QWORD *)&a6[8 * v23] = v21++;
        *(_QWORD *)&a6[8 * v22 + 0x40000] = v24;
        v22 = ((_DWORD)v22 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v21 < v18 );
LABEL_14:
      v25 = (unsigned __int8 *)v71;
      while ( (unsigned __int64)v12 < v17 )
      {
LABEL_18:
        v27 = *(_DWORD *)v12;
        v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v12[-a1] % 0x20000) + 0x40000];
        if ( v28 + 0x10000 > v12 )
        {
          v29 = *(_DWORD *)v28 ^ v27;
          if ( !v29 )
            goto LABEL_20;
          if ( (v29 & 0xFFFFFF) == 0 )
            goto LABEL_28;
          v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
          if ( v28 + 0x10000 > v12 )
          {
            v35 = *(_DWORD *)v28 ^ v27;
            if ( !v35 )
              goto LABEL_20;
            if ( (v35 & 0xFFFFFF) == 0 )
              goto LABEL_28;
            v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
            if ( v28 + 0x10000 > v12 )
            {
              v36 = *(_DWORD *)v28 ^ v27;
              if ( !v36 )
              {
LABEL_20:
                v30 = v68;
                v31 = v12 - 0x10000;
                v32 = v12;
                v33 = 0LL;
                v34 = 3LL;
                goto LABEL_32;
              }
              if ( (v36 & 0xFFFFFF) == 0 )
              {
LABEL_28:
                v30 = v68;
                v31 = v12 - 0x10000;
                v71 = (__int64)v28;
                v32 = v12;
                v25 = v28;
                v33 = 0LL;
                v34 = 3LL;
                while ( 1 )
                {
                  v28 = *(unsigned __int8 **)&a6[8 * ((__int64)&v28[-a1] % 0x20000) + 0x40000];
                  if ( v28 <= v31 )
                  {
LABEL_66:
                    v12 = &v32[v34];
                    v44 = v32 - v25;
                    if ( v34 == 3 && v44 > 0x1000 )
                    {
                      v18 = (unsigned __int64)v59;
                      v12 = v32;
                      v15 = (unsigned __int8 *)v73;
                      goto LABEL_69;
                    }
                    if ( v44 < 0x100 )
                      v46 = XpressHighBitIndexTable[v44];
                    else
                      v46 = XpressHighBitIndexTable[v44 >> 8] + 8LL;
                    v60 += v46;
                    v47 = v34 - 3;
                    v48 = v19 + 1;
                    v49 = v44 - (1LL << v46);
                    v50 = 16 * v46;
                    if ( v34 - 3 < 0xF )
                    {
                      v51 = v34 - 3 + v50;
                      *v19 = v51;
                      v52 = v19 + 1;
                    }
                    else
                    {
                      v51 = v50 + 15;
                      *v19 = v51;
                      v52 = v19 + 2;
                      if ( v34 - 18 >= 0xFF )
                      {
                        *v48 = -1;
                        if ( v47 >= 0x10000 )
                        {
                          *(_DWORD *)(v48 + 3) = v47;
                          *v52 = 0;
                          v52 = v48 + 7;
                          v53 = 7LL;
                        }
                        else
                        {
                          *v52 = v47;
                          v53 = 3LL;
                          v52 = v48 + 3;
                        }
                      }
                      else
                      {
                        *v48 = v34 - 18;
                        v53 = 1LL;
                      }
                      v61 += v53;
                    }
                    v18 = (unsigned __int64)v59;
                    v17 = v58;
                    ++*(_DWORD *)&a6[4 * v51 + 1340960];
                    v54 = 2 * v16 + 1;
                    *v52 = v49;
                    v19 = (unsigned __int8 *)(v52 + 1);
                    if ( v16 <= 0 )
                    {
                      v55 = (int *)v73;
                      v15 = v19;
                      v73 = (char *)v19;
                      v16 = 1;
                      v19 += 4;
                      *v55 = v54;
                    }
                    else
                    {
                      v15 = (unsigned __int8 *)v73;
                      v16 = 2 * v16 + 1;
                    }
                    goto LABEL_14;
                  }
                  if ( v27 == *(_DWORD *)v28 )
                    break;
LABEL_65:
                  if ( (unsigned __int64)++v33 >= 0xC )
                    goto LABEL_66;
                }
                v12 = v32;
LABEL_32:
                v37 = v28 + 4;
                v38 = v12 + 36;
                v39 = v12 + 4;
                if ( (unsigned __int64)v38 >= v30 )
                {
LABEL_43:
                  while ( (unsigned __int64)v39 < v30 )
                  {
                    if ( *v39 != *(_BYTE *)v37 )
                      break;
                    ++v39;
                    v37 = (_DWORD *)((char *)v37 + 1);
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v40 = *(_DWORD *)v39;
                    v41 = *v37;
                    if ( *(_DWORD *)v39 != *v37 )
                      goto LABEL_54;
                    v40 = *((_DWORD *)v39 + 1);
                    v41 = v37[1];
                    if ( v40 != v41 )
                      break;
                    v40 = *((_DWORD *)v39 + 2);
                    v41 = v37[2];
                    if ( v40 != v41 )
                    {
                      v39 += 8;
                      v37 += 2;
                      goto LABEL_54;
                    }
                    v40 = *((_DWORD *)v39 + 3);
                    v41 = v37[3];
                    if ( v40 != v41 )
                    {
                      v39 += 12;
                      v37 += 3;
                      goto LABEL_54;
                    }
                    v40 = *((_DWORD *)v39 + 4);
                    v41 = v37[4];
                    if ( v40 != v41 )
                    {
                      v39 += 16;
                      v37 += 4;
                      goto LABEL_54;
                    }
                    v40 = *((_DWORD *)v39 + 5);
                    v41 = v37[5];
                    if ( v40 != v41 )
                    {
                      v39 += 20;
                      v37 += 5;
                      goto LABEL_54;
                    }
                    v40 = *((_DWORD *)v39 + 6);
                    v41 = v37[6];
                    if ( v40 != v41 )
                    {
                      v39 += 24;
                      v37 += 6;
                      goto LABEL_54;
                    }
                    v40 = *((_DWORD *)v39 + 7);
                    v41 = v37[7];
                    if ( v40 != v41 )
                    {
                      v39 += 28;
                      v37 += 7;
                      goto LABEL_54;
                    }
                    v30 = v68;
                    v39 += 32;
                    v37 += 8;
                    if ( (unsigned __int64)(v39 + 32) >= v68 )
                    {
                      v25 = (unsigned __int8 *)v71;
                      goto LABEL_43;
                    }
                  }
                  v39 += 4;
                  ++v37;
LABEL_54:
                  if ( (_BYTE)v40 == (_BYTE)v41 )
                  {
                    if ( v39[1] != *((_BYTE *)v37 + 1) )
                    {
                      ++v39;
                      v37 = (_DWORD *)((char *)v37 + 1);
                      goto LABEL_57;
                    }
                    v30 = v68;
                    v25 = (unsigned __int8 *)v71;
                    if ( v39[2] == *((_BYTE *)v37 + 2) )
                    {
                      v39 += 3;
                      v37 = (_DWORD *)((char *)v37 + 3);
                    }
                    else
                    {
                      v39 += 2;
                      v37 = (_DWORD *)((char *)v37 + 2);
                    }
                  }
                  else
                  {
LABEL_57:
                    v25 = (unsigned __int8 *)v71;
                    v30 = v68;
                  }
                }
                v42 = v39 - v32;
                v43 = (unsigned __int8 *)v37;
                v28 = (unsigned __int8 *)v37 - v42;
                if ( v42 <= v34 )
                {
                  v33 += v42;
                  goto LABEL_65;
                }
                v71 = (__int64)v28;
                v34 = v42;
                v25 = v28;
                if ( v43 > v32 )
                  goto LABEL_66;
                goto LABEL_65;
              }
            }
          }
        }
LABEL_69:
        v45 = (unsigned __int8)v27;
        ++v12;
        v17 = v58;
        ++*(_DWORD *)&a6[4 * v45 + 1339936];
        *v19++ = v45;
        if ( v16 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v16;
          v16 = 1;
          v15 = v19;
          v73 = (char *)v19;
          v19 += 4;
        }
        else
        {
          v16 *= 2;
        }
      }
      if ( (unsigned __int64)v12 < v18 )
        break;
      v13 = v62;
      v10 = v68;
      v14 = v63;
LABEL_87:
      while ( v12 < v14 )
      {
        ++*(_DWORD *)&a6[4 * *v12 + 1339936];
        v56 = *v12++;
        *v19++ = v56;
        if ( v16 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v16;
          v16 = 1;
          v15 = v19;
          v19 += 4;
        }
        else
        {
          v16 *= 2;
        }
      }
      for ( ; v16 > 0; v16 = 2 * v16 + 1 )
        ;
      *(_DWORD *)v15 = 2 * v16 + 1;
      if ( (unsigned __int64)v12 < v10 )
      {
        v57 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v57 = 1;
      }
      if ( &v13[4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v60 + 31) >> 5) + 258 + v61] >= v64 )
        return 3221225507LL;
      v10 = v68;
      v13 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v19, v13, v57);
      v9 = v65;
      v62 = v13;
      if ( v57 )
      {
        *a5 = (_DWORD)v13 - v69;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback(v66, v18, v12);
    v15 = (unsigned __int8 *)v73;
    v18 = (unsigned __int64)v59;
    v25 = (unsigned __int8 *)v71;
    v58 = XpressCallback;
    goto LABEL_18;
  }
  return 3221225507LL;
}
