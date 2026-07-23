/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x180120DC0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180120D00 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x180121B00 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6)
{
  __int16 v6; // r15
  unsigned __int64 v8; // r12
  unsigned __int8 *v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // rdi
  _QWORD *v16; // r11
  unsigned __int64 v17; // rdx
  int v18; // esi
  _BYTE *v19; // rbx
  unsigned __int8 *v20; // r12
  _DWORD *v21; // r9
  unsigned __int8 *v22; // r10
  unsigned __int8 *v23; // rax
  __int64 v24; // r15
  char *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r15
  __int64 XpressCallback; // rax
  int v29; // r12d
  unsigned __int64 v30; // rdx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // rax
  unsigned __int64 v35; // r8
  _QWORD *v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // r10
  _BYTE *v39; // rax
  _BYTE *v40; // rdi
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int64 v45; // r13
  _BYTE *v46; // rdx
  unsigned __int64 v47; // rax
  char v48; // cl
  char v49; // al
  unsigned int v50; // ebx
  _DWORD *v51; // [rsp+20h] [rbp-98h]
  __int64 v52; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+30h] [rbp-88h]
  unsigned __int8 *v54; // [rsp+38h] [rbp-80h]
  __int16 v55; // [rsp+40h] [rbp-78h]
  unsigned __int8 *v56; // [rsp+48h] [rbp-70h]
  unsigned __int64 v57; // [rsp+50h] [rbp-68h]
  __int64 v58; // [rsp+58h] [rbp-60h]
  _QWORD v59[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-40h]
  __int16 v61; // [rsp+C0h] [rbp+8h]
  int v62; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v64; // [rsp+F0h] [rbp+38h]
  _BYTE *v66; // [rsp+F8h] [rbp+40h]

  v62 = a3;
  v61 = a1;
  v6 = 0;
  v8 = a3 + a4;
  v58 = a2;
  v64 = a1 + a2;
  v10 = (unsigned __int8 *)a1;
  v57 = v8;
  v11 = 0LL;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
  v13 = v8 - 41;
  v14 = *v10;
  v15 = v10 + 1;
  v16 = a6;
  v17 = v64 - 5;
  v60 = a2;
  v18 = 2;
  v19 = (_BYTE *)(a3 + 5);
  v53 = v8 - 41;
  v20 = v10;
  v66 = 0LL;
  v21 = (_DWORD *)a3;
  v59[0] = 0LL;
  v59[1] = 0LL;
  *(_BYTE *)(a3 + 4) = v14;
  v56 = v10;
  v51 = (_DWORD *)a3;
  while ( 2 )
  {
    v22 = (unsigned __int8 *)v17;
    if ( (unsigned __int64)(v20 + 0x2000) <= v17 )
      v22 = v20 + 0x2000;
    v23 = &v15[v58];
    v54 = v22;
    if ( v22 < &v15[v58] )
      v23 = v22;
    v24 = v6 & 0x3FFF;
    v52 = (__int64)v23;
    v55 = v24;
    if ( v20 < v22 )
    {
      v25 = (char *)&v16[v24 + 0x8000];
      do
      {
        v25 += 8;
        LOWORD(v24) = v24 + 1;
        v26 = (unsigned __int16)XpressHashFunction[*v20] ^ (unsigned __int16)XpressHashFunction[v20[2] + 512] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v20[1] + 256];
        *((_QWORD *)v25 - 1) = v16[v26];
        v16[v26] = v20++;
      }
      while ( v20 < v22 );
      LOWORD(v10) = v61;
      v13 = v53;
      v56 = v20;
      v55 = v24;
LABEL_14:
      v23 = (unsigned __int8 *)v52;
    }
    v27 = (unsigned __int64)(v15 - 0x2000);
    while ( 1 )
    {
      if ( v15 < v23 )
        goto LABEL_19;
      if ( v15 >= v22 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v59, v22, v15);
      v21 = v51;
      v22 = v54;
      v16 = a6;
      v13 = v53;
      v52 = XpressCallback;
LABEL_19:
      v29 = *(_DWORD *)v15;
      v30 = v16[((0x2000 - (unsigned __int16)v10 + (unsigned __int16)v27) & 0x3FFF) + 0x8000];
      if ( v30 >= v27 )
      {
        v31 = *(_DWORD *)v30 ^ v29;
        if ( !v31 )
          goto LABEL_33;
        if ( (v31 & 0xFFFFFF) == 0 )
          goto LABEL_32;
        v30 = v16[(((unsigned __int16)v30 - (unsigned __int16)v10) & 0x3FFF) + 0x8000];
        if ( v30 >= v27 )
        {
          v32 = *(_DWORD *)v30 ^ v29;
          if ( !v32 )
            goto LABEL_33;
          if ( (v32 & 0xFFFFFF) == 0 )
          {
LABEL_32:
            v35 = v64;
            v27 = (unsigned __int64)(v15 - 0x2000);
            v36 = a6;
            v11 = (__int64)&v15[-v30];
            v37 = 3LL;
            v38 = 0LL;
            goto LABEL_69;
          }
          v30 = v16[(((unsigned __int16)v30 - (unsigned __int16)v10) & 0x3FFF) + 0x8000];
          if ( v30 >= v27 )
          {
            v33 = *(_DWORD *)v30 ^ v29;
            if ( !v33 )
            {
LABEL_33:
              v35 = v64;
              v38 = 0LL;
              v37 = 3LL;
LABEL_34:
              v10 = v15;
              v39 = v15 + 36;
              v40 = v15 + 4;
              v30 += 4LL;
              if ( (unsigned __int64)v39 >= v35 )
              {
LABEL_44:
                while ( (unsigned __int64)v40 < v35 )
                {
                  if ( *v40 != *(_BYTE *)v30 )
                    break;
                  ++v40;
                  ++v30;
                }
              }
              else
              {
                while ( 1 )
                {
                  v41 = *(_DWORD *)v40;
                  v42 = *(_DWORD *)v30;
                  if ( *(_DWORD *)v40 != *(_DWORD *)v30 )
                    break;
                  v41 = *((_DWORD *)v40 + 1);
                  v42 = *(_DWORD *)(v30 + 4);
                  if ( v41 != v42 )
                  {
                    v40 += 4;
                    v30 += 4LL;
                    goto LABEL_59;
                  }
                  v41 = *((_DWORD *)v40 + 2);
                  v42 = *(_DWORD *)(v30 + 8);
                  if ( v41 != v42 )
                  {
                    v40 += 8;
                    v30 += 8LL;
                    goto LABEL_59;
                  }
                  v41 = *((_DWORD *)v40 + 3);
                  v42 = *(_DWORD *)(v30 + 12);
                  if ( v41 != v42 )
                  {
                    v40 += 12;
                    v30 += 12LL;
                    goto LABEL_59;
                  }
                  v41 = *((_DWORD *)v40 + 4);
                  v42 = *(_DWORD *)(v30 + 16);
                  if ( v41 != v42 )
                  {
                    v40 += 16;
                    v30 += 16LL;
                    goto LABEL_59;
                  }
                  v41 = *((_DWORD *)v40 + 5);
                  v42 = *(_DWORD *)(v30 + 20);
                  if ( v41 != v42 )
                  {
                    v40 += 20;
                    v30 += 20LL;
                    goto LABEL_59;
                  }
                  v41 = *((_DWORD *)v40 + 6);
                  v42 = *(_DWORD *)(v30 + 24);
                  if ( v41 != v42 )
                  {
                    v40 += 24;
                    v30 += 24LL;
LABEL_59:
                    v35 = v64;
                    break;
                  }
                  v41 = *((_DWORD *)v40 + 7);
                  v42 = *(_DWORD *)(v30 + 28);
                  v35 = v64;
                  if ( v41 != v42 )
                  {
                    v40 += 28;
                    v30 += 28LL;
                    break;
                  }
                  v40 += 32;
                  v30 += 32LL;
                  if ( (unsigned __int64)(v40 + 32) >= v64 )
                    goto LABEL_44;
                }
                if ( (_BYTE)v41 == (_BYTE)v42 )
                {
                  v35 = v64;
                  if ( v40[1] == *(_BYTE *)(v30 + 1) )
                  {
                    if ( v40[2] == *(_BYTE *)(v30 + 2) )
                    {
                      v40 += 3;
                      v30 += 3LL;
                    }
                    else
                    {
                      v40 += 2;
                      v30 += 2LL;
                    }
                  }
                  else
                  {
                    ++v40;
                    ++v30;
                  }
                }
              }
              v43 = v40 - v10;
              if ( v40 - v10 <= v37 )
              {
                v38 += v43;
              }
              else
              {
                v37 = v40 - v10;
                v11 = (__int64)&v40[-v30];
                if ( v30 > (unsigned __int64)v10 )
                {
                  v21 = v51;
                  v15 = v10;
                  LOWORD(v10) = v61;
                  goto LABEL_50;
                }
              }
              v21 = v51;
              LOWORD(v30) = v30 - v43;
              v36 = a6;
              v15 = v10;
              LOWORD(v10) = v61;
              while ( (unsigned __int64)++v38 < 0x18 )
              {
LABEL_69:
                v30 = v36[(((unsigned __int16)v30 - (unsigned __int16)v10) & 0x3FFF) + 0x8000];
                if ( v30 < v27 )
                  break;
                if ( v29 == *(_DWORD *)v30 )
                  goto LABEL_34;
              }
LABEL_50:
              v44 = v37 - 3;
              v15 += v37;
              v45 = 8 * v11 - 8;
              if ( v37 - 3 < 7 )
              {
                v11 = v37 - 3 + v45;
                *(_WORD *)v19 = v11;
                v19 += 2;
                goto LABEL_84;
              }
              v46 = v66;
              v11 = v45 | 7;
              *(_WORD *)v19 = v11;
              v47 = v37 - 10;
              v19 += 2;
              if ( v66 )
              {
                v48 = *v66;
                v66 = 0LL;
                if ( v47 < 0xF )
                {
                  *v46 = v48 | (16 * v47);
LABEL_84:
                  if ( v18 <= 0 )
                  {
                    *v21 = 2 * v18 + 1;
                    v18 = 1;
                    v21 = v19;
                    v51 = v19;
                    v19 += 4;
                  }
                  else
                  {
                    v18 = 2 * v18 + 1;
                  }
                  v13 = v53;
                  if ( (unsigned __int64)v19 < v53 )
                  {
                    v22 = v54;
                    v16 = a6;
                    goto LABEL_14;
                  }
                  goto LABEL_90;
                }
                *v46 = v48 | 0xF0;
              }
              else
              {
                v66 = v19;
                if ( v47 < 0xF )
                {
                  *v19++ = v47;
                  goto LABEL_84;
                }
                *v19++ = 15;
              }
              if ( v37 - 25 >= 0xFF )
              {
                *v19 = -1;
                if ( v44 >= 0x10000 )
                {
                  *(_WORD *)(v19 + 1) = 0;
                  *(_DWORD *)(v19 + 3) = v44;
                  v19 += 7;
                }
                else
                {
                  *(_WORD *)(v19 + 1) = v44;
                  v19 += 3;
                }
              }
              else
              {
                *v19++ = v37 - 25;
              }
              goto LABEL_84;
            }
            if ( (v33 & 0xFFFFFF) == 0 )
              goto LABEL_32;
          }
        }
      }
      *v19++ = v29;
      ++v15;
      ++v27;
      v34 = v19;
      if ( v18 <= 0 )
      {
        v19 += 4;
        *v21 = 2 * v18;
        v18 = 1;
        v21 = v34;
        if ( (unsigned __int64)v19 >= v13 )
          goto LABEL_90;
        v51 = v34;
        v23 = (unsigned __int8 *)v52;
      }
      else
      {
        v23 = (unsigned __int8 *)v52;
        v18 *= 2;
      }
    }
    v17 = v64 - 5;
    v6 = v55;
    v20 = v56;
    if ( (unsigned __int64)v15 < v64 - 5 )
      continue;
    break;
  }
LABEL_90:
  if ( (unsigned __int64)v15 >= v64 )
  {
LABEL_96:
    if ( (unsigned __int64)v19 >= v57 )
      return 3221225507LL;
    for ( ; v18 > 0; v18 = 2 * v18 + 1 )
      ;
    v50 = (_DWORD)v19 - v62;
    *v21 = 2 * v18 + 1;
    if ( v50 < 8 )
      v50 = 8;
    *a5 = v50;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v19 < v57 )
    {
      v49 = *v15++;
      *v19++ = v49;
      if ( v18 <= 0 )
      {
        *v21 = 2 * v18;
        v18 = 1;
        v21 = v19;
        v19 += 4;
      }
      else
      {
        v18 *= 2;
      }
      if ( (unsigned __int64)v15 >= v64 )
        goto LABEL_96;
    }
    return 3221225507LL;
  }
}
