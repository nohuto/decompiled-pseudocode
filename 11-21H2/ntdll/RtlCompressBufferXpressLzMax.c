/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x18011E270
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x18011E1B0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18011EF88 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int8 *v10; // r12
  __int64 v11; // r13
  unsigned __int8 v13; // al
  unsigned __int64 v14; // r8
  _QWORD *v15; // r10
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rbx
  int v18; // esi
  __int16 v19; // cx
  char *v20; // rdi
  _DWORD *v21; // r11
  unsigned __int8 *v22; // r14
  unsigned __int64 v23; // r9
  char *v24; // rax
  __int64 v25; // rcx
  __int16 v26; // r12
  char *v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r15
  __int16 v30; // r14
  __int64 XpressCallback; // rax
  int v32; // r12d
  unsigned __int64 v33; // rdx
  int v34; // ecx
  bool v35; // zf
  __int16 v36; // cx
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned __int64 v41; // r10
  __int64 v42; // r9
  char *v43; // r11
  _BYTE *v44; // rax
  _BYTE *v45; // rdi
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // r8
  __int64 v50; // r13
  _BYTE *v51; // rdx
  unsigned __int64 v52; // rax
  char v53; // cl
  char v54; // al
  unsigned int v55; // ebx
  __int64 v56; // [rsp+20h] [rbp-88h]
  unsigned __int64 v57; // [rsp+28h] [rbp-80h]
  __int16 v58; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v59; // [rsp+38h] [rbp-70h]
  unsigned __int64 v60; // [rsp+40h] [rbp-68h]
  unsigned __int64 v61; // [rsp+48h] [rbp-60h]
  unsigned __int64 v62; // [rsp+50h] [rbp-58h]
  _QWORD v63[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-40h]
  __int16 v65; // [rsp+B0h] [rbp+8h]
  int v66; // [rsp+C0h] [rbp+18h]
  _BYTE *v68; // [rsp+E0h] [rbp+38h]
  __int64 v70; // [rsp+E8h] [rbp+40h]

  v66 = a3;
  v65 = a1;
  v6 = a1 + a2;
  v7 = a3 + a4;
  v8 = a2;
  v62 = v6;
  v61 = v7;
  v10 = (unsigned __int8 *)a1;
  v11 = 0LL;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v13 = *v10;
  v14 = v7 - 41;
  v15 = a6;
  v16 = v6 - 5;
  v68 = 0LL;
  v17 = (_BYTE *)(a3 + 5);
  v63[0] = 0LL;
  v18 = 2;
  v63[1] = 0LL;
  v19 = 0;
  v57 = v14;
  v20 = (char *)(v10 + 1);
  *(_BYTE *)(a3 + 4) = v13;
  v21 = (_DWORD *)a3;
  v64 = v8;
  v59 = v10;
  v70 = a3;
  while ( 2 )
  {
    v22 = v59;
    v23 = v16;
    if ( (unsigned __int64)(v59 + 0x2000) <= v16 )
      v23 = (unsigned __int64)(v59 + 0x2000);
    v24 = &v20[v8];
    v60 = v23;
    if ( v23 < (unsigned __int64)v24 )
      v24 = (char *)v23;
    v25 = v19 & 0x3FFF;
    v56 = (__int64)v24;
    v58 = v25;
    if ( (unsigned __int64)v59 < v23 )
    {
      v26 = v25;
      v27 = (char *)&v15[v25 + 0x8000];
      do
      {
        v27 += 8;
        ++v26;
        v28 = (unsigned __int16)XpressHashFunction[*v22] ^ (unsigned __int16)XpressHashFunction[v22[2] + 512] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v22[1] + 256];
        *((_QWORD *)v27 - 1) = v15[v28];
        v15[v28] = v22++;
      }
      while ( (unsigned __int64)v22 < v23 );
      v6 = v62;
      v14 = v57;
      v59 = v22;
      v58 = v26;
LABEL_14:
      v24 = (char *)v56;
      LOWORD(v10) = v65;
    }
    v29 = (unsigned __int64)(v20 - 0x2000);
    v30 = 0x2000 - (_WORD)v10;
    while ( 1 )
    {
      if ( v20 < v24 )
        goto LABEL_19;
      if ( (unsigned __int64)v20 >= v23 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v63, v23, v20);
      v21 = (_DWORD *)v70;
      v23 = v60;
      v15 = a6;
      v14 = v57;
      v56 = XpressCallback;
LABEL_19:
      v32 = *(_DWORD *)v20;
      v33 = v15[((v30 + (unsigned __int16)v29) & 0x3FFF) + 0x8000];
      if ( v33 >= v29 )
      {
        v34 = v32 ^ *(_DWORD *)v33;
        if ( !v34 )
        {
          v36 = v65;
LABEL_34:
          v42 = 0LL;
          v41 = 3LL;
LABEL_35:
          v43 = v20;
          v44 = v20 + 36;
          v45 = v20 + 4;
          v33 += 4LL;
          if ( (unsigned __int64)v44 >= v6 )
          {
LABEL_46:
            while ( (unsigned __int64)v45 < v6 )
            {
              if ( *v45 != *(_BYTE *)v33 )
                break;
              ++v45;
              ++v33;
            }
          }
          else
          {
            while ( 1 )
            {
              v46 = *(_DWORD *)v45;
              v47 = *(_DWORD *)v33;
              if ( *(_DWORD *)v45 != *(_DWORD *)v33 )
                break;
              v46 = *((_DWORD *)v45 + 1);
              v47 = *(_DWORD *)(v33 + 4);
              if ( v46 != v47 )
              {
                v45 += 4;
                v33 += 4LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 2);
              v47 = *(_DWORD *)(v33 + 8);
              if ( v46 != v47 )
              {
                v45 += 8;
                v33 += 8LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 3);
              v47 = *(_DWORD *)(v33 + 12);
              if ( v46 != v47 )
              {
                v45 += 12;
                v33 += 12LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 4);
              v47 = *(_DWORD *)(v33 + 16);
              if ( v46 != v47 )
              {
                v45 += 16;
                v33 += 16LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 5);
              v47 = *(_DWORD *)(v33 + 20);
              if ( v46 != v47 )
              {
                v45 += 20;
                v33 += 20LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 6);
              v47 = *(_DWORD *)(v33 + 24);
              if ( v46 != v47 )
              {
                v45 += 24;
                v33 += 24LL;
                break;
              }
              v46 = *((_DWORD *)v45 + 7);
              v47 = *(_DWORD *)(v33 + 28);
              if ( v46 != v47 )
              {
                v45 += 28;
                v33 += 28LL;
                break;
              }
              v45 += 32;
              v33 += 32LL;
              if ( (unsigned __int64)(v45 + 32) >= v6 )
              {
                v36 = v65;
                goto LABEL_46;
              }
            }
            if ( (_BYTE)v46 == (_BYTE)v47 )
            {
              if ( v45[1] != *(_BYTE *)(v33 + 1) )
              {
                ++v45;
                ++v33;
                goto LABEL_60;
              }
              v36 = v65;
              if ( v45[2] == *(_BYTE *)(v33 + 2) )
              {
                v45 += 3;
                v33 += 3LL;
              }
              else
              {
                v45 += 2;
                v33 += 2LL;
              }
            }
            else
            {
LABEL_60:
              v36 = v65;
            }
          }
          v48 = v45 - v43;
          if ( v45 - v43 <= v41 )
          {
            v42 += v48;
          }
          else
          {
            v41 = v45 - v43;
            v11 = (__int64)&v45[-v33];
            if ( v33 > (unsigned __int64)v43 )
            {
              v20 = v43;
              v21 = (_DWORD *)v70;
              goto LABEL_64;
            }
          }
          LOWORD(v33) = v33 - v48;
          v20 = v43;
          v21 = (_DWORD *)v70;
          v40 = a6;
          while ( (unsigned __int64)++v42 < 0x18 )
          {
LABEL_72:
            v33 = v40[(((unsigned __int16)v33 - v36) & 0x3FFF) + 0x8000];
            if ( v33 < v29 )
              break;
            if ( v32 == *(_DWORD *)v33 )
              goto LABEL_35;
          }
LABEL_64:
          v49 = v41 - 3;
          v20 += v41;
          v50 = 8 * v11 - 8;
          if ( v41 - 3 < 7 )
          {
            v11 = v41 - 3 + v50;
            *(_WORD *)v17 = v11;
            v17 += 2;
            goto LABEL_87;
          }
          v51 = v68;
          v11 = v50 | 7;
          *(_WORD *)v17 = v11;
          v52 = v41 - 10;
          v17 += 2;
          if ( v68 )
          {
            v53 = *v68;
            v68 = 0LL;
            if ( v52 < 0xF )
            {
              *v51 = v53 | (16 * v52);
LABEL_87:
              if ( v18 <= 0 )
              {
                *v21 = 2 * v18 + 1;
                v18 = 1;
                v21 = v17;
                v70 = (__int64)v17;
                v17 += 4;
              }
              else
              {
                v18 = 2 * v18 + 1;
              }
              v14 = v57;
              if ( (unsigned __int64)v17 < v57 )
              {
                v23 = v60;
                v15 = a6;
                goto LABEL_14;
              }
              goto LABEL_93;
            }
            *v51 = v53 | 0xF0;
          }
          else
          {
            v68 = v17;
            if ( v52 < 0xF )
            {
              *v17++ = v52;
              goto LABEL_87;
            }
            *v17++ = 15;
          }
          if ( v41 - 25 >= 0xFF )
          {
            *v17 = -1;
            if ( v49 >= 0x10000 )
            {
              *(_WORD *)(v17 + 1) = 0;
              *(_DWORD *)(v17 + 3) = v49;
              v17 += 7;
            }
            else
            {
              *(_WORD *)(v17 + 1) = v49;
              v17 += 3;
            }
          }
          else
          {
            *v17++ = v41 - 25;
          }
          goto LABEL_87;
        }
        v35 = (v34 & 0xFFFFFF) == 0;
        v36 = v65;
        if ( v35 )
          goto LABEL_32;
        v33 = v15[(((unsigned __int16)v33 - v65) & 0x3FFF) + 0x8000];
        if ( v33 >= v29 )
        {
          v37 = v32 ^ *(_DWORD *)v33;
          if ( !v37 )
            goto LABEL_34;
          if ( (v37 & 0xFFFFFF) == 0 )
            goto LABEL_32;
          v33 = v15[(((unsigned __int16)v33 - v65) & 0x3FFF) + 0x8000];
          if ( v33 >= v29 )
          {
            v38 = v32 ^ *(_DWORD *)v33;
            if ( !v38 )
              goto LABEL_34;
            if ( (v38 & 0xFFFFFF) == 0 )
            {
LABEL_32:
              v40 = a6;
              v29 = (unsigned __int64)(v20 - 0x2000);
              v41 = 3LL;
              v11 = (__int64)&v20[-v33];
              v42 = 0LL;
              goto LABEL_72;
            }
          }
        }
      }
      *v17++ = v32;
      ++v20;
      ++v29;
      v39 = v17;
      if ( v18 <= 0 )
      {
        v17 += 4;
        *v21 = 2 * v18;
        v18 = 1;
        v21 = v39;
        if ( (unsigned __int64)v17 >= v14 )
          goto LABEL_93;
        v70 = (__int64)v39;
        v24 = (char *)v56;
      }
      else
      {
        v24 = (char *)v56;
        v18 *= 2;
      }
    }
    LOWORD(v10) = v65;
    v16 = v6 - 5;
    v8 = a2;
    v19 = v58;
    if ( (unsigned __int64)v20 < v6 - 5 )
      continue;
    break;
  }
LABEL_93:
  if ( (unsigned __int64)v20 >= v6 )
  {
LABEL_99:
    if ( (unsigned __int64)v17 >= v61 )
      return 3221225507LL;
    for ( ; v18 > 0; v18 = 2 * v18 + 1 )
      ;
    v55 = (_DWORD)v17 - v66;
    *v21 = 2 * v18 + 1;
    if ( v55 < 8 )
      v55 = 8;
    *a5 = v55;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v17 < v61 )
    {
      v54 = *v20++;
      *v17++ = v54;
      if ( v18 <= 0 )
      {
        *v21 = 2 * v18;
        v18 = 1;
        v21 = v17;
        v17 += 4;
      }
      else
      {
        v18 *= 2;
      }
      if ( (unsigned __int64)v20 >= v6 )
        goto LABEL_99;
    }
    return 3221225507LL;
  }
}
