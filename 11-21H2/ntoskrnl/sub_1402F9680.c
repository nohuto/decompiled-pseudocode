/*
 * XREFs of sub_1402F9680 @ 0x1402F9680
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
 *     sub_14064A78C @ 0x14064A78C (sub_14064A78C.c)
 */

__int64 __fastcall sub_1402F9680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r10d
  __int64 v14; // rbp
  int v15; // esi
  char v16; // di
  __int64 v17; // r13
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r12
  char v22; // r15
  char v23; // al
  unsigned __int8 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int16 v27; // r13
  size_t v28; // r8
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rbp
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // rdx
  unsigned int *v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rcx
  unsigned __int16 v43; // cx
  unsigned int v44; // edi
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r10
  void *v49; // r11
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r12d
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rcx
  char v57; // al
  __int64 v58; // rdx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // rcx
  int v65; // [rsp+28h] [rbp-B0h]
  int v66; // [rsp+60h] [rbp-78h]
  unsigned int v67; // [rsp+64h] [rbp-74h] BYREF
  unsigned int Size; // [rsp+68h] [rbp-70h]
  int Size_4; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v70; // [rsp+70h] [rbp-68h]
  int v71; // [rsp+74h] [rbp-64h]
  unsigned int v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+80h] [rbp-58h]
  char v76; // [rsp+F0h] [rbp+18h]
  __int64 v77; // [rsp+F0h] [rbp+18h]
  __int64 v78; // [rsp+F8h] [rbp+20h]

  v78 = a4;
  v13 = a7;
  v14 = a1;
  v15 = *(_DWORD *)(a1 + 200) & 0x2000;
  v16 = a11;
  v17 = a2;
  v67 = 0;
  v66 = v15;
  Size_4 = -1;
  if ( a11 && a7 )
  {
    v36 = a7;
    v37 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v37 - 1) = *v37;
      v37 += 12;
      --v36;
    }
    while ( v36 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v20 = 0;
  v72 = result;
  if ( !(_DWORD)result )
    goto LABEL_34;
  v21 = a6;
  v22 = a12;
  do
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_33;
    v23 = *v19;
    if ( *v19 )
    {
      if ( v23 == 5 )
      {
        if ( (*((_DWORD *)v19 + 2) & 1) != 0 )
        {
          if ( v19 != (char *)-12LL )
          {
            if ( a9 )
            {
              v54 = 504LL;
              if ( !a11 )
                v54 = 232LL;
              if ( (unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v54), a11, v22) )
              {
                if ( !(unsigned __int8)sub_14064A78C(v19 + 12, a8, a7, &v67) )
                {
                  v16 = a11;
                  v13 = v55;
                  goto LABEL_32;
                }
                sub_14022D208(a8, a7, v67, v20, *((_DWORD *)v19 + 1), 1);
              }
              v16 = a11;
              goto LABEL_31;
            }
            goto LABEL_132;
          }
          v16 = a11;
        }
        v56 = 504LL;
        if ( !v16 )
          v56 = 232LL;
        v57 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v56), v16, a12);
        v13 = a7;
        if ( v57 )
        {
          v42 = a8;
          if ( a7 == 1 )
          {
            v22 = a12;
            *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
            goto LABEL_32;
          }
          v65 = 1;
          goto LABEL_98;
        }
        goto LABEL_23;
      }
      if ( v23 != 4 )
      {
        if ( v23 == 1 )
        {
          v40 = 504LL;
          if ( !v16 )
            v40 = 232LL;
          v41 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v40), v16, a12);
          v13 = a7;
          if ( v41 )
          {
LABEL_62:
            v42 = a8;
            if ( v13 == 1 )
            {
              v22 = a12;
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_32;
            }
            v65 = 2;
LABEL_98:
            v58 = v13;
LABEL_99:
            v59 = 0;
            goto LABEL_101;
          }
LABEL_23:
          v22 = a12;
          goto LABEL_32;
        }
        if ( v23 == 6 )
        {
          v62 = 504LL;
          if ( !v16 )
            v62 = 232LL;
          if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v62), v16, a12) )
            goto LABEL_30;
          if ( (*((_DWORD *)v19 + 2) & 1) != 0 && v19 != (char *)-12LL )
          {
            if ( !a9 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_30;
            }
            if ( !(unsigned __int8)sub_14064A78C(v19 + 12, a8, a7, &v67) )
            {
              v22 = a12;
              v13 = v63;
              goto LABEL_32;
            }
            v59 = v67;
            v42 = a8;
            v58 = a7;
            v65 = 2;
LABEL_101:
            sub_14022D208(v42, v58, v59, v20, *((_DWORD *)v19 + 1), v65);
            goto LABEL_30;
          }
          v13 = a7;
          goto LABEL_62;
        }
        if ( v23 != 9 )
          goto LABEL_33;
        v43 = *((_WORD *)v19 + 1);
        v44 = 4 * (unsigned __int8)v19[9] + 8;
        if ( (int)(v43 - v44 - 8) > 0 )
        {
          if ( a4 && !*a5 )
          {
            sub_140218B60(a4, a5);
            v43 = *((_WORD *)v19 + 1);
          }
          v45 = *(_QWORD **)(v14 + 1096);
          if ( v45 )
          {
            v46 = v45[75];
            v47 = v45[73];
            v48 = v45[74];
            v49 = (void *)v45[72];
          }
          else
          {
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
          }
          v50 = v43 - v44 - 8;
          v51 = v44;
          v16 = a11;
          sub_140219130(
            (_DWORD *)v14,
            *(void **)(v14 + 776),
            (void *)*a5,
            v49,
            v48,
            v47,
            v46,
            &v19[v51 + 8],
            v50,
            0,
            a11,
            &Size_4);
          if ( Size_4 != 1 )
            goto LABEL_31;
          if ( !v15 && !a11 )
          {
            if ( sub_14023BDE8((__int64)(v19 + 8)) )
            {
LABEL_125:
              sub_1402FDE54(
                v14,
                0xFFFFFFFFLL,
                v19 + 8,
                *((unsigned int *)v19 + 1),
                a13 + 21,
                a13 + 4,
                a13 + 20,
                a13 + 16,
                a13 + 24);
              v16 = a11;
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
              v15 = v66;
              goto LABEL_31;
            }
            if ( sub_14023E074((__int64)(v19 + 8)) )
            {
LABEL_47:
              sub_140244144(v14, -1, (__int64)(v19 + 8), *((_DWORD *)v19 + 1), (_BYTE *)(a13 + 22), (_DWORD *)(a13 + 8));
              v16 = a11;
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
              v15 = v66;
              goto LABEL_31;
            }
            v15 = v66;
          }
          v64 = 504LL;
          if ( !a11 )
            v64 = 232LL;
          if ( !(unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v64), a11, a12) )
            goto LABEL_30;
          v58 = a7;
          v42 = a8;
          v65 = 1;
          goto LABEL_99;
        }
LABEL_132:
        v16 = a11;
        goto LABEL_33;
      }
      v60 = 504LL;
      if ( !v16 )
        v60 = 232LL;
      if ( (unsigned __int8)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v60), v16, a12) )
      {
        v61 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v17 + 232), 0, a12);
        v13 = a7;
        if ( !v61 )
        {
LABEL_108:
          v22 = a12;
          goto LABEL_32;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_108;
        }
        sub_14022D208(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
      }
      v22 = a12;
      goto LABEL_31;
    }
    if ( !v15 && !v16 )
    {
      if ( sub_14023BDE8((__int64)(v19 + 8)) )
        goto LABEL_125;
      if ( sub_14023E074((__int64)(v19 + 8)) )
        goto LABEL_47;
    }
    v24 = (unsigned __int8 *)(v19 + 8);
    v25 = 504LL;
    if ( !v16 )
      v25 = 232LL;
    v26 = v25 + v14;
    if ( v21 && RtlEqualSid(Sid1, v19 + 8) )
      v24 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(Buf1, v24) )
    {
LABEL_21:
      v13 = a7;
      if ( a7 != 1 )
      {
        sub_14022D208(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
        goto LABEL_29;
      }
      v16 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
      v15 = v66;
      goto LABEL_23;
    }
    if ( !v26 || !v24 )
      goto LABEL_29;
    v27 = *(_WORD *)v24;
    v28 = 4 * (unsigned int)v24[1] + 8;
    v29 = (unsigned __int64)*(unsigned __int16 *)v24 >> 8;
    Size = 4 * v24[1] + 8;
    LOBYTE(v30) = 0;
    v76 = 0;
    v31 = *(_QWORD *)(v26 + 8LL * (v24[4 * v29 + 4] & 0xF) + 16) & *(_QWORD *)(v26
                                                                             + 8
                                                                             * ((unsigned __int64)v24[4 * v29 + 4] >> 4)
                                                                             + 144);
    if ( !v31 )
    {
LABEL_28:
      v35 = *(_DWORD *)v26;
      if ( *(_DWORD *)v26 > 0x40u )
      {
        v52 = *(_QWORD *)(v26 + 8);
        v53 = 64;
        v77 = v52;
        do
        {
          v34 = v52 + 16LL * v53;
          if ( **(_WORD **)v34 == v27 )
          {
            if ( !memcmp(v24, *(const void **)v34, v28) )
              goto LABEL_18;
            v28 = Size;
            v52 = v77;
          }
          ++v53;
        }
        while ( v53 < v35 );
      }
      goto LABEL_29;
    }
    while ( 1 )
    {
      LOBYTE(v32) = v31;
      if ( (_BYTE)v31 )
        break;
LABEL_27:
      LOBYTE(v30) = v30 + 8;
      v31 >>= 8;
      v76 = v30;
      if ( !v31 )
        goto LABEL_28;
    }
    v33 = *(_QWORD *)(v26 + 8);
    v30 = (unsigned __int8)v30;
    v73 = v33;
    v70 = (unsigned __int8)v30;
    while ( 1 )
    {
      v71 = *((unsigned __int8 *)qword_140016050 + (unsigned __int8)v32);
      v34 = v33 + 16LL * (unsigned int)(v30 + v71);
      if ( **(_WORD **)v34 == v27 )
        break;
LABEL_25:
      v33 = v73;
      v32 = (unsigned __int8)v32 ^ (1 << v71);
      if ( !(_BYTE)v32 )
      {
        LOBYTE(v30) = v76;
        goto LABEL_27;
      }
    }
    if ( memcmp(v24, *(const void **)v34, v28) )
    {
      v28 = Size;
      v30 = v70;
      goto LABEL_25;
    }
LABEL_18:
    if ( !a11 && v34 == *(_QWORD *)(v26 + 8) && (*(_DWORD *)(v34 + 8) & 0x10) == 0 || (*(_DWORD *)(v34 + 8) & 4) != 0 )
      goto LABEL_21;
LABEL_29:
    v16 = a11;
    v15 = v66;
LABEL_30:
    v22 = a12;
LABEL_31:
    v13 = a7;
LABEL_32:
    a4 = v78;
LABEL_33:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v14 = a1;
    v19 += result;
    v21 = a6;
    v17 = a2;
  }
  while ( v20 < v72 );
LABEL_34:
  if ( v16 && v13 )
  {
    v38 = (_DWORD *)(a8 + 28);
    v39 = v13;
    do
    {
      result = *(v38 - 1) & (*v38 | (unsigned int)~a10);
      *v38 = result;
      v38 += 12;
      --v39;
    }
    while ( v39 );
  }
  return result;
}
