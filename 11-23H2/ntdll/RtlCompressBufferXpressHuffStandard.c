/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x180055E80
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x180055E10 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x1800566A0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180056990 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x180121B00 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  void *v8; // r9
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int8 *v13; // rcx
  int v14; // r15d
  bool v15; // cc
  unsigned __int64 XpressCallback; // rsi
  unsigned __int8 *v17; // r14
  unsigned __int8 *v18; // rbx
  unsigned __int8 v19; // al
  unsigned __int8 *v20; // r10
  unsigned __int8 *v21; // r11
  unsigned __int8 *v22; // rdx
  __int64 v23; // r8
  unsigned __int8 *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // r12
  _BYTE *v32; // r9
  int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r9
  _BYTE *v38; // r8
  unsigned __int64 v39; // rdx
  char v40; // cl
  unsigned __int8 v41; // cl
  _WORD *v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // al
  int v46; // esi
  int v47; // r8d
  __int64 v48; // rax
  bool v49; // zf
  __int64 v51; // r8
  unsigned __int8 *v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int8 *v55; // rcx
  unsigned __int64 v56; // r8
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // rcx
  __int64 v61; // rax
  unsigned __int8 *v62; // r8
  __int64 v63; // [rsp+30h] [rbp-A8h]
  __int64 v64; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-98h]
  _BYTE *v66; // [rsp+48h] [rbp-90h]
  char *v67; // [rsp+50h] [rbp-88h]
  unsigned __int64 v68; // [rsp+58h] [rbp-80h]
  __int64 v69; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v70; // [rsp+70h] [rbp-68h]
  unsigned __int64 v71; // [rsp+78h] [rbp-60h]
  __int64 v72; // [rsp+80h] [rbp-58h]
  _QWORD v73[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v74; // [rsp+98h] [rbp-40h]
  int v76; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v78; // [rsp+110h] [rbp+38h]
  unsigned __int64 v80; // [rsp+118h] [rbp+40h]

  v76 = a3;
  v6 = a2;
  v72 = a2;
  v71 = a3 + a4;
  v7 = a2 + a1;
  v65 = v7;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v69 = a3;
  v73[0] = 0LL;
  v73[1] = 0LL;
  memset64(a6, a1, 0xAF6uLL);
  v74 = a2;
  v8 = a6 + 90432;
  memset64(a6 + 22448, a1, 0x12EEuLL);
  v9 = (unsigned __int8 *)a1;
  v10 = a6 + 92736;
  while ( 2 )
  {
    v11 = 0LL;
    v63 = 0LL;
    v12 = 0LL;
    v64 = 0LL;
    memset_thunk_772440563353939046(v8, 0, 0x800uLL);
    v13 = (unsigned __int8 *)v7;
    v78 = v10;
    v14 = 1;
    v15 = (unsigned __int64)(v9 + 0x10000) <= v7;
    XpressCallback = (unsigned __int64)&v9[v6];
    v17 = v10;
    if ( v15 )
      v13 = v9 + 0x10000;
    v70 = v13;
    v68 = (unsigned __int64)(v13 - 40);
    if ( (unsigned __int64)(v13 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v13 - 40);
    v18 = v10 + 4;
    v80 = XpressCallback;
    if ( v9 == (unsigned __int8 *)a1 )
    {
      v14 = 2;
      ++*(_DWORD *)&a6[4 * *v9 + 90432];
      v19 = *v9++;
      *v18++ = v19;
    }
    if ( v9 >= v13 - 40 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = v9 + 1;
          v21 = v9;
          v22 = &a6[8 * *v9];
          v23 = v9[2] + 4LL * v9[1];
          v24 = *(unsigned __int8 **)&v22[16 * v23];
          *(_QWORD *)&v22[16 * v23] = v9;
          v25 = *v9;
          if ( *v24 != (_BYTE)v25 || v24[1] != *v20 || v24[2] != v9[2] || v9 - v24 >= 0x10000 )
            break;
          v26 = v9[3];
          v27 = v24[3];
          v66 = v9 + 3;
          if ( (_BYTE)v26 != (_BYTE)v27 )
          {
            v51 = v25 + 2 * v23;
            v52 = *(unsigned __int8 **)&a6[8 * v51 + 22448 + 8 * v26];
            *(_QWORD *)&a6[8 * v51 + 22448 + 8 * v27] = v24;
            if ( v9 - v52 >= 0x10000 || (v53 = *(unsigned int *)v9, (_DWORD)v53 != *(_DWORD *)v52) )
            {
              v9 += 3;
              v32 = v24 + 3;
              goto LABEL_24;
            }
            v24 = v52;
            *(_QWORD *)&a6[8 * v51 + 22448 + 8 * (v53 >> 24)] = v9;
          }
          v28 = v9[4];
          v29 = v24[4];
          v67 = (char *)(v9 + 4);
          if ( (_BYTE)v28 != (_BYTE)v29 )
          {
            v54 = 2
                * ((unsigned __int8)__ROR1__(*v20 ^ __ROL1__(*v66 + *v9, 3), 1)
                 + 4LL * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v20 + 97, 1), 3));
            v55 = *(unsigned __int8 **)&a6[8 * v54 + 22448 + 8 * v28];
            *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v29] = v24;
            if ( v9 - v55 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v55
              || (v58 = v9[4], (_BYTE)v58 != v55[4])
              || v9 == v55 )
            {
              v9 += 4;
              v32 = v24 + 4;
              goto LABEL_24;
            }
            v24 = v55;
            *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v58] = v9;
          }
          v30 = v24[5];
          v31 = v9[5];
          if ( (_BYTE)v31 != (_BYTE)v30 )
          {
            v56 = 2
                * ((v9[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v9, *v67))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v20 ^ __ROL1__(*v66, 3), 1)
                  + (unsigned __int64)(unsigned __int8)__ROL1__(*v67 ^ (__ROR1__(*v9, 1) + 69), 3)));
            v57 = *(unsigned __int8 **)&a6[8 * v56 + 22448 + 8 * v31];
            *(_QWORD *)&a6[8 * v56 + 22448 + 8 * v30] = v24;
            if ( v9 - v57 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v57
              || *v67 != v57[4]
              || (v61 = v9[5], (_BYTE)v61 != v57[5])
              || v9 == v57 )
            {
              v9 += 5;
              v32 = v24 + 5;
              goto LABEL_24;
            }
            v24 = v57;
            *(_QWORD *)&a6[8 * v56 + 22448 + 8 * v61] = v9;
          }
          v9 += 6;
          v32 = v24 + 6;
          if ( (unsigned __int64)v9 >= v65 - 40 )
          {
LABEL_69:
            while ( (unsigned __int64)v9 < v65 )
            {
              if ( *v9 != *v32 )
                break;
              ++v9;
              ++v32;
            }
          }
          else
          {
            while ( 1 )
            {
              v33 = *(_DWORD *)v32;
              v34 = *(_DWORD *)v9;
              if ( *(_DWORD *)v9 != *(_DWORD *)v32 )
                break;
              v33 = *((_DWORD *)v32 + 1);
              v34 = *((_DWORD *)v9 + 1);
              if ( v34 != v33 )
              {
                v9 += 4;
                v32 += 4;
                break;
              }
              v33 = *((_DWORD *)v32 + 2);
              v34 = *((_DWORD *)v9 + 2);
              if ( v34 != v33 )
              {
                v9 += 8;
                v32 += 8;
                break;
              }
              v33 = *((_DWORD *)v32 + 3);
              v34 = *((_DWORD *)v9 + 3);
              if ( v34 != v33 )
              {
                v9 += 12;
                v32 += 12;
                break;
              }
              v33 = *((_DWORD *)v32 + 4);
              v34 = *((_DWORD *)v9 + 4);
              if ( v34 != v33 )
              {
                v9 += 16;
                v32 += 16;
                break;
              }
              v33 = *((_DWORD *)v32 + 5);
              v34 = *((_DWORD *)v9 + 5);
              if ( v34 != v33 )
              {
                v9 += 20;
                v32 += 20;
                break;
              }
              v33 = *((_DWORD *)v32 + 6);
              v34 = *((_DWORD *)v9 + 6);
              if ( v34 != v33 )
              {
                v9 += 24;
                v32 += 24;
                break;
              }
              v33 = *((_DWORD *)v32 + 7);
              v34 = *((_DWORD *)v9 + 7);
              if ( v34 != v33 )
              {
                v9 += 28;
                v32 += 28;
                break;
              }
              v9 += 32;
              v32 += 32;
              if ( (unsigned __int64)v9 >= v65 - 40 )
                goto LABEL_69;
            }
            if ( (_BYTE)v34 == (_BYTE)v33 )
            {
              if ( v9[1] == v32[1] )
              {
                if ( v9[2] == v32[2] )
                {
                  v9 += 3;
                  v32 += 3;
                }
                else
                {
                  v9 += 2;
                  v32 += 2;
                }
              }
              else
              {
                ++v9;
                ++v32;
              }
            }
          }
LABEL_24:
          v35 = v9 - v32;
          if ( v9 - v21 == 3 && v35 > 0x1000 )
          {
            XpressCallback = v80;
            v17 = v78;
            break;
          }
          if ( v35 >= 0x100 )
            v36 = XpressHighBitIndexTable[v35 >> 8] + 8LL;
          else
            v36 = XpressHighBitIndexTable[v35];
          v37 = v9 - v21 - 3;
          v11 = v36 + v63;
          v38 = v18 + 1;
          v63 += v36;
          v39 = v35 - (1LL << v36);
          v40 = 16 * v36;
          if ( v37 >= 0xF )
          {
            v41 = v40 + 15;
            *v18 = v41;
            v42 = v18 + 2;
            if ( (unsigned __int64)(v9 - v21 - 18) >= 0xFF )
            {
              *v38 = -1;
              if ( v37 < 0x10000 )
              {
                *v42 = v37;
                v64 += 3LL;
                v42 = v38 + 3;
                goto LABEL_29;
              }
              *(_DWORD *)(v38 + 3) = v37;
              *v42 = 0;
              v42 = v38 + 7;
              v59 = 7LL;
            }
            else
            {
              *v38 = (_BYTE)v9 - (_BYTE)v21 - 18;
              v59 = 1LL;
            }
            v64 += v59;
          }
          else
          {
            v41 = v37 + v40;
            *v18 = v41;
            v42 = v18 + 1;
          }
LABEL_29:
          ++*(_DWORD *)&a6[4 * v41 + 91456];
          v43 = 2 * v14 + 1;
          *v42 = v39;
          v18 = (unsigned __int8 *)(v42 + 1);
          if ( v14 <= 0 )
          {
            v60 = (int *)v78;
            v14 = 1;
            v78 = v18;
            v18 += 4;
            *v60 = v43;
          }
          else
          {
            v14 = 2 * v14 + 1;
          }
          XpressCallback = v80;
          v17 = v78;
          if ( (unsigned __int64)v9 >= v80 )
          {
            v44 = v68;
            if ( (unsigned __int64)v9 >= v68 )
              goto LABEL_33;
            v62 = v9;
LABEL_101:
            XpressCallback = RtlpMakeXpressCallback(v73, v44, v62);
            v80 = XpressCallback;
          }
        }
        v9 = v20;
        ++*(_DWORD *)&a6[4 * *v21 + 90432];
        *v18++ = *v21;
        if ( v14 <= 0 )
          break;
        v14 *= 2;
      }
      *(_DWORD *)v17 = 2 * v14;
      v14 = 1;
      v17 = v18;
      v78 = v18;
      v18 += 4;
    }
    while ( (unsigned __int64)v20 < XpressCallback );
    v44 = v68;
    if ( (unsigned __int64)v20 < v68 )
    {
      v62 = v20;
      goto LABEL_101;
    }
    v11 = v63;
LABEL_33:
    v12 = v64;
    v13 = v70;
LABEL_34:
    while ( v9 < v13 )
    {
      ++*(_DWORD *)&a6[4 * *v9 + 90432];
      v45 = *v9++;
      *v18++ = v45;
      if ( v14 <= 0 )
      {
        *(_DWORD *)v17 = 2 * v14;
        v14 = 1;
        v17 = v18;
        v18 += 4;
      }
      else
      {
        v14 *= 2;
      }
    }
    for ( ; v14 > 0; v14 = 2 * v14 + 1 )
      ;
    *(_DWORD *)v17 = 2 * v14 + 1;
    if ( (unsigned __int64)v9 < v65 )
    {
      v46 = 0;
    }
    else
    {
      ++*((_DWORD *)a6 + 22864);
      v46 = 1;
    }
    if ( v12 + 4 * ((unsigned __int64)(v11 + XpressBuildHuffmanEncodings(a6 + 61216) + 31) >> 5) + v69 + 258 < v71 )
    {
      v47 = (int)v18;
      v10 = a6 + 92736;
      v48 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v47, v69, v46);
      v6 = v72;
      v8 = a6 + 90432;
      v49 = v46 == 0;
      v69 = v48;
      v7 = v65;
      if ( !v49 )
      {
        *a5 = v48 - v76;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
