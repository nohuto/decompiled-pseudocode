/*
 * XREFs of sub_140384600 @ 0x140384600
 * Callers:
 *     sub_1403841DC @ 0x1403841DC (sub_1403841DC.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14022D208 @ 0x14022D208 (sub_14022D208.c)
 *     sub_14022D300 @ 0x14022D300 (sub_14022D300.c)
 *     sub_14023BDE8 @ 0x14023BDE8 (sub_14023BDE8.c)
 *     sub_14023E074 @ 0x14023E074 (sub_14023E074.c)
 *     sub_140244144 @ 0x140244144 (sub_140244144.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_1402FDE54 @ 0x1402FDE54 (sub_1402FDE54.c)
 *     sub_14064A78C @ 0x14064A78C (sub_14064A78C.c)
 */

__int64 __fastcall sub_140384600(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v15; // ecx
  int v17; // ecx
  char v18; // r14
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 result; // rax
  unsigned int v23; // r12d
  char *v24; // rdi
  char v25; // al
  bool v26; // al
  unsigned int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // r15
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r15
  _DWORD *v33; // rbx
  int v34; // eax
  char *v35; // r8
  char v36; // bl
  __int64 v37; // r9
  int v38; // ecx
  unsigned int v39; // ebx
  void **v40; // r15
  _QWORD *v41; // rax
  void *v42; // r9
  __int64 v43; // r8
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned int v46; // ebx
  void **v47; // r15
  _QWORD *v48; // rax
  void *v49; // r9
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r11
  _DWORD *v53; // rcx
  int v54; // edx
  __int64 v55; // r8
  int v56; // [rsp+28h] [rbp-80h]
  unsigned int v57; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v58; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+20h]

  v60 = a4;
  v58 = a2;
  v57 = 0;
  v15 = *(_DWORD *)(a1 + 200);
  v59 = 0;
  v17 = v15 & 0x2000;
  v18 = a11;
  v19 = a2;
  v20 = a8;
  v21 = a7;
  a6 = v17;
  if ( (_BYTE)a11 && a7 )
  {
    v28 = a8 + 28;
    v29 = a7;
    do
    {
      sub_14022D300(*(_DWORD *)v28, 0x800000, 0, *(_QWORD *)(v28 + 12), 1);
      v30 = *(_DWORD *)v28;
      *(_DWORD *)v28 &= v31;
      *(_DWORD *)(v28 - 4) = v30;
      v28 += 48LL;
      --v29;
    }
    while ( v29 );
    v17 = a6;
    a4 = v60;
    v19 = v58;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v23 = 0;
  v24 = (char *)(a3 + 8);
  a11 = result;
  while ( v23 < a11 )
  {
    if ( (v24[1] & 8) != 0 )
      goto LABEL_11;
    v25 = *v24;
    if ( *v24 )
    {
      if ( v25 == 5 )
      {
        v34 = *((_DWORD *)v24 + 2);
        if ( (v34 & 1) != 0 && v24 != (char *)-12LL )
        {
          if ( !a9
            || !sub_1402FD65C(
                  (PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)),
                  0LL,
                  &v24[16 * (v34 & 1) + ((8LL * (v34 & 2)) | 0xC)],
                  0,
                  v18,
                  a12)
            || !(unsigned __int8)sub_14064A78C(v24 + 12, v20, (unsigned int)v21, &v57) )
          {
            goto LABEL_11;
          }
          v56 = 1;
          goto LABEL_31;
        }
        v35 = &v24[16 * (v34 & 1) + ((8LL * (v34 & 2)) | 0xC)];
LABEL_34:
        v26 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)), 0LL, v35, 0, v18, a12);
        goto LABEL_7;
      }
      if ( v25 != 4 )
      {
        if ( v25 == 1 )
          goto LABEL_72;
        if ( v25 == 6 )
        {
          if ( !sub_1402FD65C(
                  (PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)),
                  0LL,
                  &v24[16 * (*((_DWORD *)v24 + 2) & 1) + ((8LL * (*((_DWORD *)v24 + 2) & 2)) | 0xC)],
                  1,
                  v18,
                  a12) )
            goto LABEL_11;
          if ( (*((_DWORD *)v24 + 2) & 1) != 0 && v24 != (char *)-12LL )
          {
            if ( !a9 )
            {
              v37 = *(_QWORD *)(v20 + 40);
              v38 = *((_DWORD *)v24 + 1) & ~*(_DWORD *)(v20 + 28);
              *(_DWORD *)(v20 + 32) |= v38;
              sub_14022D300(v38, 0x20000, v23, v37, 0);
              goto LABEL_11;
            }
            if ( !(unsigned __int8)sub_14064A78C(v24 + 12, v20, (unsigned int)v21, &v57) )
              goto LABEL_11;
            v56 = 2;
LABEL_31:
            v27 = v57;
LABEL_10:
            sub_14022D208(v20, (unsigned int)v21, v27, v23, *((_DWORD *)v24 + 1), v56);
            goto LABEL_11;
          }
LABEL_73:
          v56 = 2;
LABEL_9:
          v27 = 0;
          goto LABEL_10;
        }
        if ( v25 != 9 )
        {
          if ( !a13 )
            goto LABEL_11;
          if ( v25 != 10 )
            goto LABEL_11;
          if ( KeGetCurrentIrql() >= 2u )
            goto LABEL_11;
          v46 = 4 * (unsigned __int8)v24[9] + 8;
          if ( *((unsigned __int16 *)v24 + 1) - v46 == 8 )
            goto LABEL_11;
          v47 = (void **)a5;
          if ( a4 && !*a5 )
            sub_140218B60(a4, a5);
          v48 = *(_QWORD **)(a1 + 1096);
          if ( v48 )
          {
            v49 = (void *)v48[72];
            v50 = v48[74];
            v51 = v48[73];
            v52 = v48[75];
          }
          else
          {
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
          }
          sub_140219130(
            (_DWORD *)a1,
            *(void **)(a1 + 776),
            *v47,
            v49,
            v50,
            v51,
            v52,
            &v24[v46 + 8],
            *((unsigned __int16 *)v24 + 1) - v46 - 8,
            1,
            v18,
            &v59);
          if ( ((v59 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_11;
LABEL_72:
          if ( !sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)), 0LL, v24 + 8, 1, v18, a12) )
            goto LABEL_11;
          goto LABEL_73;
        }
        v39 = 4 * (unsigned __int8)v24[9] + 8;
        if ( *((unsigned __int16 *)v24 + 1) - v39 == 8 )
          goto LABEL_11;
        v40 = (void **)a5;
        if ( a4 && !*a5 )
          sub_140218B60(a4, a5);
        v41 = *(_QWORD **)(a1 + 1096);
        if ( v41 )
        {
          v42 = (void *)v41[72];
          v43 = v41[74];
          v44 = v41[73];
          v45 = v41[75];
        }
        else
        {
          v42 = 0LL;
          v43 = 0LL;
          v44 = 0LL;
          v45 = 0LL;
        }
        sub_140219130(
          (_DWORD *)a1,
          *(void **)(a1 + 776),
          *v40,
          v42,
          v43,
          v44,
          v45,
          &v24[v39 + 8],
          *((unsigned __int16 *)v24 + 1) - v39 - 8,
          0,
          v18,
          &v59);
        if ( v59 != 1 )
          goto LABEL_11;
        if ( !a6 && !v18 )
        {
          v32 = (__int64)(v24 + 8);
          if ( sub_14023BDE8((__int64)(v24 + 8)) )
          {
LABEL_23:
            v33 = (_DWORD *)(a14 + 4);
            sub_1402FDE54(
              a1,
              -1,
              v32,
              *((_DWORD *)v24 + 1),
              (_BYTE *)(a14 + 21),
              (_DWORD *)(a14 + 4),
              (_BYTE *)(a14 + 20),
              (_DWORD *)(a14 + 16),
              (_BYTE *)(a14 + 24));
            goto LABEL_22;
          }
          if ( sub_14023E074((__int64)(v24 + 8)) )
            goto LABEL_21;
        }
        v35 = v24 + 8;
        goto LABEL_34;
      }
      v36 = a12;
      if ( !sub_1402FD65C(
              (PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)),
              0LL,
              &v24[4 * (unsigned __int8)v24[13] + 20],
              0,
              v18,
              a12) )
        goto LABEL_11;
      v26 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v19 + 232), 0LL, v24 + 12, 0, 0, v36);
    }
    else
    {
      if ( !v17 && !v18 )
      {
        v32 = (__int64)(v24 + 8);
        if ( sub_14023BDE8((__int64)(v24 + 8)) )
          goto LABEL_23;
        if ( sub_14023E074((__int64)(v24 + 8)) )
        {
LABEL_21:
          v33 = (_DWORD *)(a14 + 8);
          sub_140244144(a1, -1, v32, *((_DWORD *)v24 + 1), (_BYTE *)(a14 + 22), (_DWORD *)(a14 + 8));
LABEL_22:
          *(_DWORD *)a14 &= ~*v33;
          goto LABEL_11;
        }
      }
      v26 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(a1 + (v18 != 0 ? 504LL : 232LL)), 0LL, v24 + 8, 0, v18, a12);
    }
LABEL_7:
    if ( v26 )
    {
      v56 = 1;
      goto LABEL_9;
    }
LABEL_11:
    result = *((unsigned __int16 *)v24 + 1);
    ++v23;
    v17 = a6;
    v24 += result;
    a4 = v60;
    v19 = v58;
  }
  if ( v18 && (_DWORD)v21 )
  {
    v53 = (_DWORD *)(v20 + 28);
    v54 = ~a10;
    v55 = v21;
    do
    {
      result = *(v53 - 1) & (*v53 | (unsigned int)v54);
      *v53 = result;
      v53 += 12;
      --v55;
    }
    while ( v55 );
  }
  return result;
}
