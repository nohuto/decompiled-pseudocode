/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x180121434
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180120D00 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x180121B00 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int64 i; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r9
  _BYTE *v9; // rsi
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // r12
  int v12; // r14d
  _BYTE *v13; // rbp
  _DWORD *v14; // r15
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r11
  unsigned __int8 *v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // rdi
  __int64 XpressCallback; // rax
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r13
  unsigned __int64 v35; // rdx
  unsigned __int8 *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int16 v39; // ax
  int v40; // ecx
  int v41; // eax
  unsigned __int64 v42; // rcx
  _BYTE *v43; // rax
  char v44; // al
  __int64 v45; // rax
  char v46; // al
  unsigned int v47; // esi
  unsigned __int64 v49; // [rsp+20h] [rbp-78h]
  unsigned __int64 v50; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v51; // [rsp+30h] [rbp-68h]
  unsigned __int64 v52; // [rsp+38h] [rbp-60h]
  _QWORD v53[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-48h]
  _BYTE *v55; // [rsp+A0h] [rbp+8h]
  int v56; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v58; // [rsp+D0h] [rbp+38h]
  unsigned __int64 v60; // [rsp+D8h] [rbp+40h]

  v56 = a3;
  i = (unsigned __int64)&a1[a2];
  v7 = a3 + a4;
  v58 = i;
  v52 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v8 = i - 38;
  v50 = v7 - 41;
  v9 = (_BYTE *)(a3 + 5);
  v60 = i - 38;
  v53[0] = 0LL;
  v53[1] = 0LL;
  v10 = a1 + 1;
  v11 = (unsigned __int8 *)(i - 38);
  v55 = 0LL;
  if ( i - 38 >= i )
    v11 = &a1[a2];
  v54 = a2;
  v49 = (unsigned __int64)v11;
  v12 = 2;
  v13 = 0LL;
  *(_BYTE *)(a3 + 4) = *a1;
  v14 = (_DWORD *)a3;
  if ( a2 >= 0x40 )
  {
    v15 = a6;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = v15 + 8LL * *v10;
        v17 = v10[2] + 4LL * v10[1];
        v18 = *(unsigned __int8 **)(v16 + 16 * v17);
        *(_QWORD *)(v16 + 16 * v17) = v10;
        v19 = *v10;
        if ( *(_WORD *)v18 == *(_WORD *)v10 && v18[2] == v10[2] && v10 - v18 < 0x2000 )
          break;
        *v9++ = v19;
        ++v10;
        v20 = v9;
        if ( v12 <= 0 )
        {
          v9 += 4;
          *v14 = 2 * v12;
          v12 = 1;
          if ( v10 >= v11 )
          {
            v14 = v20;
            if ( (unsigned __int64)v10 >= v8 )
              goto LABEL_88;
            XpressCallback = RtlpMakeXpressCallback(v53, v8, v10);
            v8 = v60;
            v11 = (unsigned __int8 *)XpressCallback;
            v49 = XpressCallback;
          }
          v14 = v20;
          if ( (unsigned __int64)v9 >= v50 )
            goto LABEL_88;
          v15 = a6;
        }
        else
        {
          v15 = a6;
          v12 *= 2;
        }
      }
      v22 = v10[3];
      v23 = v18[3];
      v51 = v10;
      if ( (_BYTE)v22 != (_BYTE)v23 )
      {
        v24 = v19 + 2 * v17;
        v15 = a6;
        v25 = *(unsigned __int8 **)(a6 + 8 * (v24 + v22) + 22448);
        *(_QWORD *)(a6 + 8 * (v24 + v23) + 22448) = v18;
        if ( v10 - v25 >= 0x2000 || (v26 = *(unsigned int *)v10, (_DWORD)v26 != *(_DWORD *)v25) )
        {
          v8 = v60;
          v10 += 3;
          LOWORD(v18) = (_WORD)v18 + 3;
          goto LABEL_39;
        }
        v18 = v25;
        *(_QWORD *)(a6 + 8 * (v24 + (v26 >> 24)) + 22448) = v10;
      }
      v27 = v10[4];
      v28 = v18[4];
      if ( (_BYTE)v27 != (_BYTE)v28 )
      {
        v29 = 2
            * ((unsigned __int8)__ROR1__(v10[1] ^ __ROL1__(v10[3] + *v10, 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v10 ^ __ROR1__(v10[2] + v10[1] + 97, 1), 3));
        v30 = v29 + v27;
        v15 = a6;
        v31 = *(unsigned __int8 **)(a6 + 8 * v30 + 22448);
        *(_QWORD *)(a6 + 8 * (v29 + v28) + 22448) = v18;
        if ( v10 - v31 >= 0x2000
          || *(_DWORD *)v10 != *(_DWORD *)v31
          || (v32 = v10[4], (_BYTE)v32 != v31[4])
          || v10 == v31 )
        {
          v8 = v60;
          v10 += 4;
          LOWORD(v18) = (_WORD)v18 + 4;
          goto LABEL_38;
        }
        v18 = v31;
        *(_QWORD *)(a6 + 8 * (v29 + v32) + 22448) = v10;
      }
      v33 = v10[5];
      v34 = v18[5];
      if ( (_BYTE)v33 == (_BYTE)v34 )
      {
        v15 = a6;
      }
      else
      {
        v35 = 2
            * ((v10[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v10, v10[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v10[1] ^ __ROL1__(v10[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v10[4] ^ (__ROR1__(*v10, 1) + 69), 3)));
        v36 = *(unsigned __int8 **)(a6 + 8 * (v35 + v33) + 22448);
        *(_QWORD *)(a6 + 8 * (v35 + v34) + 22448) = v18;
        if ( v10 - v36 >= 0x2000
          || *(_DWORD *)v10 != *(_DWORD *)v36
          || v10[4] != v36[4]
          || (v37 = v10[5], (_BYTE)v37 != v36[5])
          || v10 == v36 )
        {
          v8 = v60;
          v10 += 5;
          LOWORD(v18) = (_WORD)v18 + 5;
          v15 = a6;
          goto LABEL_37;
        }
        v15 = a6;
        v18 = v36;
        *(_QWORD *)(a6 + 8 * (v35 + v37) + 22448) = v10;
      }
      v8 = v60;
      v10 += 6;
      v18 += 6;
      if ( (unsigned __int64)v10 >= v60 )
      {
LABEL_52:
        for ( i = v58; (unsigned __int64)v10 < v58; ++v18 )
        {
          if ( *v10 != *v18 )
            break;
          ++v10;
        }
        goto LABEL_38;
      }
      while ( 1 )
      {
        v40 = *(_DWORD *)v10;
        v41 = *(_DWORD *)v18;
        if ( *(_DWORD *)v10 != *(_DWORD *)v18 )
          break;
        v40 = *((_DWORD *)v10 + 1);
        v41 = *((_DWORD *)v18 + 1);
        if ( v40 != v41 )
        {
          v10 += 4;
          v18 += 4;
          break;
        }
        v40 = *((_DWORD *)v10 + 2);
        v41 = *((_DWORD *)v18 + 2);
        if ( v40 != v41 )
        {
          v10 += 8;
          v18 += 8;
          break;
        }
        v40 = *((_DWORD *)v10 + 3);
        v41 = *((_DWORD *)v18 + 3);
        if ( v40 != v41 )
        {
          v10 += 12;
          v18 += 12;
          break;
        }
        v40 = *((_DWORD *)v10 + 4);
        v41 = *((_DWORD *)v18 + 4);
        if ( v40 != v41 )
        {
          v10 += 16;
          v18 += 16;
          break;
        }
        v40 = *((_DWORD *)v10 + 5);
        v41 = *((_DWORD *)v18 + 5);
        if ( v40 != v41 )
        {
          v10 += 20;
          v18 += 20;
          break;
        }
        v40 = *((_DWORD *)v10 + 6);
        v41 = *((_DWORD *)v18 + 6);
        if ( v40 != v41 )
        {
          v10 += 24;
          v18 += 24;
          break;
        }
        v40 = *((_DWORD *)v10 + 7);
        v41 = *((_DWORD *)v18 + 7);
        if ( v40 != v41 )
        {
          v10 += 28;
          v18 += 28;
          break;
        }
        v10 += 32;
        v18 += 32;
        if ( (unsigned __int64)v10 >= v60 )
          goto LABEL_52;
      }
      if ( (_BYTE)v40 != (_BYTE)v41 )
        goto LABEL_37;
      if ( v10[1] != v18[1] )
      {
        ++v10;
        LOWORD(v18) = (_WORD)v18 + 1;
LABEL_37:
        i = v58;
LABEL_38:
        v13 = v55;
        goto LABEL_39;
      }
      v13 = v55;
      i = v58;
      if ( v10[2] == v18[2] )
      {
        v10 += 3;
        LOWORD(v18) = (_WORD)v18 + 3;
      }
      else
      {
        v10 += 2;
        LOWORD(v18) = (_WORD)v18 + 2;
      }
LABEL_39:
      v38 = v10 - v51 - 3;
      v39 = 8 * ((_WORD)v10 - (_WORD)v18) - 8;
      if ( v38 >= 7 )
      {
        v42 = v10 - v51 - 10;
        *(_WORD *)v9 = v39 | 7;
        v9 += 2;
        v43 = v9;
        if ( v13 )
        {
          v44 = *v13;
          if ( v42 < 0xF )
          {
            *v13 = v44 | (16 * v42);
            v13 = 0LL;
            v55 = 0LL;
            goto LABEL_81;
          }
          *v13 = v44 | 0xF0;
          v13 = 0LL;
        }
        else
        {
          v13 = v9;
          if ( v42 < 0xF )
          {
            *v9++ = v42;
            v55 = v43;
            goto LABEL_81;
          }
          *v9++ = 15;
        }
        v55 = v13;
        if ( (unsigned __int64)(v10 - v51 - 25) >= 0xFF )
        {
          *v9 = -1;
          if ( v38 >= 0x10000 )
          {
            *(_WORD *)(v9 + 1) = 0;
            *(_DWORD *)(v9 + 3) = v38;
            v9 += 7;
          }
          else
          {
            *(_WORD *)(v9 + 1) = v38;
            v9 += 3;
          }
        }
        else
        {
          *v9++ = (_BYTE)v10 - (_BYTE)v51 - 25;
        }
      }
      else
      {
        *(_WORD *)v9 = v38 + v39;
        v9 += 2;
      }
LABEL_81:
      if ( v12 <= 0 )
      {
        *v14 = 2 * v12 + 1;
        v12 = 1;
        v14 = v9;
        v9 += 4;
      }
      else
      {
        v12 = 2 * v12 + 1;
      }
      v11 = (unsigned __int8 *)v49;
      if ( (unsigned __int64)v10 >= v49 )
      {
        if ( (unsigned __int64)v10 >= v8 )
          goto LABEL_88;
        v45 = RtlpMakeXpressCallback(v53, v8, v10);
        v8 = v60;
        v11 = (unsigned __int8 *)v45;
        v15 = a6;
        v49 = v45;
      }
      if ( (unsigned __int64)v9 >= v50 )
      {
LABEL_88:
        v7 = v52;
        LODWORD(a3) = v56;
        break;
      }
    }
  }
  if ( (unsigned __int64)v10 < i )
  {
    while ( (unsigned __int64)v9 < v7 )
    {
      v46 = *v10++;
      *v9++ = v46;
      if ( v12 <= 0 )
      {
        *v14 = 2 * v12;
        v12 = 1;
        v14 = v9;
        v9 += 4;
      }
      else
      {
        v12 *= 2;
      }
      if ( (unsigned __int64)v10 >= i )
        goto LABEL_95;
    }
    return 3221225507LL;
  }
LABEL_95:
  if ( (unsigned __int64)v9 >= v7 )
    return 3221225507LL;
  for ( ; v12 > 0; v12 = 2 * v12 + 1 )
    ;
  v47 = (_DWORD)v9 - a3;
  *v14 = 2 * v12 + 1;
  if ( v47 < 8 )
    v47 = 8;
  *a5 = v47;
  return 0LL;
}
