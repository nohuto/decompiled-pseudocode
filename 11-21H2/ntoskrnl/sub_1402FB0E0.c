/*
 * XREFs of sub_1402FB0E0 @ 0x1402FB0E0
 * Callers:
 *     sub_1402FA820 @ 0x1402FA820 (sub_1402FA820.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14022D208 @ 0x14022D208 (sub_14022D208.c)
 *     sub_14023BDE8 @ 0x14023BDE8 (sub_14023BDE8.c)
 *     sub_14023E074 @ 0x14023E074 (sub_14023E074.c)
 *     sub_140244144 @ 0x140244144 (sub_140244144.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_1402FDE54 @ 0x1402FDE54 (sub_1402FDE54.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14064A78C @ 0x14064A78C (sub_14064A78C.c)
 */

__int64 __fastcall sub_1402FB0E0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // r14d
  unsigned int v14; // ebp
  int v15; // r12d
  __int64 result; // rax
  __int64 v17; // r13
  _DWORD *v19; // rax
  __int64 v20; // rcx
  char v21; // r15
  char *v22; // rsi
  char v23; // al
  int v24; // r14d
  unsigned __int8 *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  unsigned __int8 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r10d
  unsigned __int64 v32; // r13
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // r14
  unsigned int v37; // eax
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // rbx
  int v41; // eax
  unsigned __int16 v42; // cx
  unsigned int v43; // ebx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r10
  void *v48; // r11
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // r13d
  __int64 v55; // rcx
  __int64 v56; // rcx
  _SID_AND_ATTRIBUTES_HASH *v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rcx
  char v60; // [rsp+28h] [rbp-B0h]
  int v61; // [rsp+60h] [rbp-78h]
  unsigned int v62; // [rsp+64h] [rbp-74h]
  unsigned int v63; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v64; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v65; // [rsp+70h] [rbp-68h]
  int v66; // [rsp+74h] [rbp-64h]
  int v67; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v68; // [rsp+7Ch] [rbp-5Ch]
  int v69; // [rsp+80h] [rbp-58h]
  int v70; // [rsp+84h] [rbp-54h]
  __int64 v71; // [rsp+88h] [rbp-50h]
  __int64 v72; // [rsp+90h] [rbp-48h]
  unsigned __int8 v75; // [rsp+F8h] [rbp+20h]
  __int64 v76; // [rsp+F8h] [rbp+20h]

  v13 = 0;
  v14 = a8;
  v15 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v17 = a2;
  v63 = 0;
  v61 = 0;
  v67 = -1;
  v68 = result;
  if ( a8 )
  {
    v19 = (_DWORD *)(a9 + 24);
    v20 = a8;
    do
    {
      *v19 = a1;
      v19 += 12;
      --v20;
    }
    while ( v20 );
    result = v68;
  }
  v21 = a11;
  if ( !v15 && !a11 )
  {
    v13 = a1 | *(_DWORD *)a13;
    v61 = v13;
  }
  v64 = v13;
  v22 = (char *)(a4 + 8);
  v62 = 0;
  if ( !(_DWORD)result )
    return result;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v13 )
      return result;
    if ( (v22[1] & 8) != 0 )
      goto LABEL_31;
    if ( (_DWORD)result )
      goto LABEL_10;
    if ( *v22 )
    {
      if ( *v22 != 9 )
        goto LABEL_31;
LABEL_10:
      v23 = *v22;
      if ( !*v22 )
        goto LABEL_11;
      if ( v23 == 5 )
      {
        if ( (*((_DWORD *)v22 + 2) & 1) != 0 && v22 != (char *)-12LL )
        {
          if ( a10 )
          {
            v55 = 504LL;
            if ( !v21 )
              v55 = 232LL;
            if ( (unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v17 + v55), v21, a12)
              && (unsigned __int8)sub_14064A78C(v22 + 12, a9, v14, &v63) )
            {
              sub_14022D208(a9, v14, v63, v62, *((_DWORD *)v22 + 1), 0);
            }
          }
          goto LABEL_31;
        }
        v56 = 504LL;
        v60 = a12;
        if ( !v21 )
          v56 = 232LL;
        v57 = (_SID_AND_ATTRIBUTES_HASH *)(v17 + v56);
      }
      else
      {
        if ( v23 != 4 )
        {
          switch ( v23 )
          {
            case 1:
              v51 = 504LL;
              if ( !v21 )
                v51 = 232LL;
              if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v17 + v51), v21, a12) )
                goto LABEL_31;
              break;
            case 6:
              v59 = 504LL;
              if ( !v21 )
                v59 = 232LL;
              if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v17 + v59), v21, a12) )
                goto LABEL_31;
              if ( (*((_DWORD *)v22 + 2) & 1) != 0 && v22 != (char *)-12LL && a10 )
              {
                if ( !(unsigned __int8)sub_14064A78C(v22 + 12, a9, v14, &v63) )
                  goto LABEL_31;
                result = *(unsigned int *)(a9 + 48LL * v63 + 24);
                if ( ((unsigned int)result & *((_DWORD *)v22 + 1)) == 0 )
                  goto LABEL_31;
                return result;
              }
              break;
            case 9:
              v42 = *((_WORD *)v22 + 1);
              v43 = 4 * (unsigned __int8)v22[9] + 8;
              if ( v42 - v43 == 8 )
                goto LABEL_31;
              if ( a5 && !*a6 )
              {
                sub_140218B60(a5, a6);
                v42 = *((_WORD *)v22 + 1);
              }
              v44 = *(_QWORD **)(v17 + 1096);
              if ( v44 )
              {
                v45 = v44[75];
                v46 = v44[73];
                v47 = v44[74];
                v48 = (void *)v44[72];
              }
              else
              {
                v45 = 0LL;
                v46 = 0LL;
                v47 = 0LL;
                v48 = 0LL;
              }
              sub_140219130(
                (_DWORD *)v17,
                *(void **)(v17 + 776),
                (void *)*a6,
                v48,
                v47,
                v46,
                v45,
                &v22[v43 + 8],
                v42 - v43 - 8,
                0,
                v21,
                &v67);
              if ( v67 != 1 )
                goto LABEL_31;
              if ( !v15 && !v21 && v13 )
              {
                if ( sub_14023BDE8((__int64)(v22 + 8)) )
                {
LABEL_63:
                  sub_1402FDE54(
                    v17,
                    v64,
                    v22 + 8,
                    *((unsigned int *)v22 + 1),
                    a13 + 21,
                    a13 + 4,
                    a13 + 20,
                    a13 + 16,
                    a13 + 24);
                  v41 = ~*(_DWORD *)(a13 + 4);
                  v13 &= v41;
                  *(_DWORD *)a13 &= v41;
                  v61 = v13;
                  goto LABEL_31;
                }
                if ( sub_14023E074((__int64)(v22 + 8)) )
                {
LABEL_92:
                  sub_140244144(
                    v17,
                    v64,
                    (__int64)(v22 + 8),
                    *((_DWORD *)v22 + 1),
                    (_BYTE *)(a13 + 22),
                    (_DWORD *)(a13 + 8));
                  v52 = ~*(_DWORD *)(a13 + 8);
                  v13 &= v52;
                  *(_DWORD *)a13 &= v52;
                  v61 = v13;
                  goto LABEL_31;
                }
                v14 = a8;
              }
              if ( !*(_DWORD *)(a9 + 24) )
                goto LABEL_31;
              v49 = v21 ? 504LL : 232LL;
              if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v49 + v17), v21, a12) )
                goto LABEL_31;
              v50 = *((_DWORD *)v22 + 1);
LABEL_85:
              sub_14022D208(a9, v14, 0, v62, v50, 0);
              goto LABEL_31;
            default:
              goto LABEL_31;
          }
          result = *((unsigned int *)v22 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_31;
          return result;
        }
        v58 = 504LL;
        if ( !v21 )
          v58 = 232LL;
        if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v58 + v17), v21, a12) )
          goto LABEL_31;
        v57 = (_SID_AND_ATTRIBUTES_HASH *)(v58 + a3);
        v60 = a12;
      }
      if ( !(unsigned __int8)sub_1402FD65C(v57, v21, v60) )
        goto LABEL_31;
      v50 = *((_DWORD *)v22 + 1);
      if ( v14 == 1 )
      {
        *(_DWORD *)(a9 + 24) &= ~v50;
        goto LABEL_31;
      }
      goto LABEL_85;
    }
LABEL_11:
    if ( !v15 && !v21 && v13 )
    {
      v39 = qword_140C5AE78;
      if ( (unsigned __int8)v22[9] >= 2u
        && v22[8] == *(_BYTE *)qword_140C5AE78
        && RtlCompareMemory(v22 + 10, (const void *)(qword_140C5AE78 + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v39 + 8) )
      {
        goto LABEL_63;
      }
      v40 = qword_140C5AE80;
      if ( (unsigned __int8)v22[9] >= 2u
        && v22[8] == *(_BYTE *)qword_140C5AE80
        && RtlCompareMemory(v22 + 10, (const void *)(qword_140C5AE80 + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v40 + 8) )
      {
        goto LABEL_92;
      }
    }
    v24 = *(_DWORD *)(a9 + 24);
    v66 = v24;
    if ( !v24 )
      goto LABEL_59;
    v25 = (unsigned __int8 *)(v22 + 8);
    v26 = 504LL;
    if ( !v21 )
      v26 = 232LL;
    v27 = v26 + v17;
    if ( a7 && RtlEqualSid(Sid1, v22 + 8) )
      v25 = a7;
    if ( a12
      && *(_WORD *)Buf1 == *(_WORD *)v25
      && !memcmp(Buf1, v25, 4 * ((unsigned __int64)*(unsigned __int16 *)Buf1 >> 8) + 8) )
    {
LABEL_28:
      v37 = *((_DWORD *)v22 + 1);
      if ( a8 == 1 )
      {
        *(_DWORD *)(a9 + 24) = v24 & ~v37;
        goto LABEL_30;
      }
      sub_14022D208(a9, a8, 0, v62, v37, 0);
      v13 = v61;
      goto LABEL_31;
    }
    if ( !v27 || !v25 )
    {
LABEL_59:
      v13 = v61;
      goto LABEL_31;
    }
    v28 = v25[1];
    v29 = 0;
    v30 = *(unsigned __int16 *)v25;
    v71 = v30;
    v75 = 0;
    v31 = 4 * v28 + 8;
    v65 = v31;
    v32 = *(_QWORD *)(v27 + 8LL * (v25[4 * ((unsigned __int64)(unsigned int)v30 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v27 + 8 * ((unsigned __int64)v25[4 * ((unsigned __int64)(unsigned int)v30 >> 8) + 4] >> 4) + 144);
    if ( !v32 )
    {
LABEL_35:
      v38 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 > 0x40u )
      {
        v53 = *(_QWORD *)(v27 + 8);
        v54 = 64;
        v76 = v53;
        do
        {
          v36 = v53 + 16LL * v54;
          if ( **(_WORD **)v36 == (_WORD)v30 )
          {
            if ( !memcmp(v25, *(const void **)v36, v31) )
              goto LABEL_24;
            v53 = v76;
            LOWORD(v30) = v71;
            v31 = v65;
          }
          ++v54;
        }
        while ( v54 < v38 );
      }
      goto LABEL_30;
    }
    while ( 1 )
    {
      LOBYTE(v33) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_40:
      v29 += 8;
      v32 >>= 8;
      v75 = v29;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = *(_QWORD *)(v27 + 8);
    v35 = v29;
    v72 = v34;
    v70 = v29;
    while ( 1 )
    {
      v69 = *((unsigned __int8 *)qword_140016050 + (unsigned __int8)v33);
      v36 = v34 + 16LL * (unsigned int)(v35 + v69);
      if ( **(_WORD **)v36 == (_WORD)v30 )
        break;
LABEL_38:
      v35 = v70;
      v33 = (unsigned __int8)v33 ^ (1 << v69);
      if ( !(_BYTE)v33 )
      {
        v29 = v75;
        goto LABEL_40;
      }
    }
    if ( memcmp(v25, *(const void **)v36, v31) )
    {
      v34 = v72;
      LOWORD(v30) = v71;
      v31 = v65;
      goto LABEL_38;
    }
LABEL_24:
    if ( !a11 && v36 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v36 + 8) & 0x10) == 0 || (*(_DWORD *)(v36 + 8) & 4) != 0 )
    {
      v24 = v66;
      goto LABEL_28;
    }
LABEL_30:
    v13 = v61;
LABEL_31:
    result = *((unsigned __int16 *)v22 + 1);
    v14 = a8;
    v22 += result;
    v21 = a11;
    v17 = a2;
    ++v62;
  }
  while ( v62 < v68 );
  return result;
}
