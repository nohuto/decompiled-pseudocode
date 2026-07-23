/*
 * XREFs of sub_14038473C @ 0x14038473C
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

__int64 __fastcall sub_14038473C(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  __int64 v14; // rbx
  int v15; // r15d
  unsigned int v17; // ebp
  int v18; // edx
  __int64 result; // rax
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // r13
  char v24; // r14
  unsigned int v25; // r12d
  char *v26; // rdi
  int v27; // ecx
  char v28; // al
  __int64 v29; // rbp
  __int64 v30; // rcx
  char *v31; // r8
  bool v32; // zf
  __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // eax
  _DWORD *v36; // rbx
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // rcx
  bool v40; // zf
  unsigned int v41; // ebx
  _QWORD *v42; // rax
  void *v43; // r9
  __int64 v44; // r8
  __int64 v45; // r10
  __int64 v46; // r11
  __int64 v47; // rcx
  unsigned int v48; // ebx
  void **v49; // rbp
  _QWORD *v50; // rax
  void *v51; // r9
  __int64 v52; // r8
  __int64 v53; // r10
  __int64 v54; // r11
  __int64 v55; // rcx
  unsigned int v56; // [rsp+40h] [rbp-68h]
  unsigned int v57; // [rsp+40h] [rbp-68h]
  int v58; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+64h] [rbp-44h]
  int v60; // [rsp+68h] [rbp-40h]
  unsigned int v63; // [rsp+C8h] [rbp+20h] BYREF

  v63 = 0;
  v14 = a2;
  v58 = 0;
  v15 = 0;
  v17 = a8;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v20 = a9;
  v60 = v18;
  v59 = result;
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v59;
  }
  v23 = a14;
  v24 = a11;
  if ( !v18 && !a11 )
    v15 = a1 | *a14;
  v25 = 0;
  a7 = v15;
  v26 = (char *)(a4 + 8);
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v20 + 24);
      if ( !v27 && !v15 )
        return result;
      if ( (v26[1] & 8) == 0 )
      {
        v28 = *v26;
        if ( v27 )
        {
          if ( !v28 )
            goto LABEL_13;
        }
        else
        {
          if ( !v28 )
          {
LABEL_13:
            if ( !v18 && !v24 && v15 )
            {
              v29 = (__int64)(v26 + 8);
              if ( sub_14023BDE8((__int64)(v26 + 8)) )
                goto LABEL_46;
              if ( sub_14023E074((__int64)(v26 + 8)) )
              {
LABEL_47:
                v36 = v23 + 2;
                sub_140244144(a2, a7, v29, *((_DWORD *)v26 + 1), (_BYTE *)v23 + 22, v23 + 2);
LABEL_48:
                v37 = ~*v36;
                v15 &= v37;
                *v23 &= v37;
LABEL_49:
                v14 = a2;
                goto LABEL_24;
              }
              v17 = a8;
            }
            if ( !*(_DWORD *)(v20 + 24) )
              goto LABEL_24;
            v30 = (-(__int64)(v24 != 0) & 0x110) + 232;
LABEL_21:
            v31 = v26 + 8;
LABEL_22:
            if ( sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v30), 0LL, v31, 0, v24, a12) )
              sub_14022D208(v20, v17, 0, v25, *((_DWORD *)v26 + 1), 0);
            goto LABEL_24;
          }
          if ( v28 != 9 )
            goto LABEL_24;
        }
        switch ( v28 )
        {
          case 5:
            v35 = *((_DWORD *)v26 + 2);
            if ( (v35 & 1) != 0 )
            {
              if ( v26 != (char *)-12LL )
              {
                if ( a10
                  && sub_1402FD65C(
                       (PSID_AND_ATTRIBUTES_HASH)(a2 + (-(__int64)(v24 != 0) & 0x110) + 232),
                       0LL,
                       &v26[16 * (v35 & 1) + ((8LL * (v35 & 2)) | 0xC)],
                       0,
                       v24,
                       a12)
                  && (unsigned __int8)sub_14064A78C(v26 + 12, v20, v17, &v63) )
                {
                  sub_14022D208(v20, v17, v63, v25, *((_DWORD *)v26 + 1), 0);
                }
                goto LABEL_49;
              }
              v14 = a2;
            }
            v31 = &v26[16 * (v35 & 1) + ((8LL * (v35 & 2)) | 0xC)];
            v30 = (-(__int64)(v24 != 0) & 0x110) + 232;
            goto LABEL_22;
          case 4:
            v38 = (-(__int64)(v24 != 0) & 0x110) + 232;
            if ( sub_1402FD65C(
                   (PSID_AND_ATTRIBUTES_HASH)(v38 + a2),
                   0LL,
                   &v26[4 * (unsigned __int8)v26[13] + 20],
                   0,
                   v24,
                   a12)
              && sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v38 + a3), 0LL, v26 + 12, 0, v24, a12) )
            {
              sub_14022D208(v20, v17, 0, v25, *((_DWORD *)v26 + 1), 0);
            }
            goto LABEL_49;
          case 1:
            v39 = (-(__int64)(v24 != 0) & 0x110) + 232;
LABEL_58:
            if ( sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v14 + v39), 0LL, v26 + 8, 1, v24, a12)
              && (*(_DWORD *)(v20 + 24) & *((_DWORD *)v26 + 1)) != 0 )
            {
              return sub_14022D300(*(_DWORD *)(v20 + 24) & *((_DWORD *)v26 + 1), 0x20000, v25, *(_QWORD *)(v20 + 40), 0);
            }
            break;
          case 6:
            if ( !sub_1402FD65C(
                    (PSID_AND_ATTRIBUTES_HASH)(v14 + (-(__int64)(v24 != 0) & 0x110) + 232),
                    0LL,
                    &v26[16 * (*((_DWORD *)v26 + 2) & 1) + ((8LL * (*((_DWORD *)v26 + 2) & 2)) | 0xC)],
                    1,
                    v24,
                    a12) )
              break;
            if ( (*((_DWORD *)v26 + 2) & 1) != 0 && v26 != (char *)-12LL && a10 )
            {
              if ( !(unsigned __int8)sub_14064A78C(v26 + 12, v20, v17, &v63) )
                break;
              result = *(unsigned int *)(v20 + 48LL * v63 + 24);
              v40 = ((unsigned int)result & *((_DWORD *)v26 + 1)) == 0;
            }
            else
            {
              result = *((unsigned int *)v26 + 1);
              v40 = ((unsigned int)result & *(_DWORD *)(v20 + 24)) == 0;
            }
            if ( !v40 )
              return result;
            break;
          case 9:
            v41 = 4 * (unsigned __int8)v26[9] + 8;
            if ( *((unsigned __int16 *)v26 + 1) - v41 == 8 )
              goto LABEL_49;
            if ( a5 && !*a6 )
              sub_140218B60(a5, a6);
            v42 = *(_QWORD **)(a2 + 1096);
            if ( v42 )
            {
              v43 = (void *)v42[72];
              v44 = v42[74];
              v45 = v42[73];
              v46 = v42[75];
            }
            else
            {
              v43 = 0LL;
              v44 = 0LL;
              v45 = 0LL;
              v46 = 0LL;
            }
            v56 = *((unsigned __int16 *)v26 + 1) - v41 - 8;
            v47 = v41;
            v14 = a2;
            sub_140219130(
              (_DWORD *)a2,
              *(void **)(a2 + 776),
              (void *)*a6,
              v43,
              v44,
              v45,
              v46,
              &v26[v47 + 8],
              v56,
              0,
              v24,
              &v58);
            if ( v58 == 1 )
            {
              if ( !v60 && !v24 && v15 )
              {
                v29 = (__int64)(v26 + 8);
                if ( sub_14023BDE8((__int64)(v26 + 8)) )
                {
LABEL_46:
                  v36 = v23 + 1;
                  sub_1402FDE54(
                    a2,
                    a7,
                    v29,
                    *((_DWORD *)v26 + 1),
                    (_BYTE *)v23 + 21,
                    v23 + 1,
                    (_BYTE *)v23 + 20,
                    v23 + 4,
                    (_BYTE *)v23 + 24);
                  goto LABEL_48;
                }
                if ( sub_14023E074((__int64)(v26 + 8)) )
                  goto LABEL_47;
                v17 = a8;
              }
              if ( *(_DWORD *)(v20 + 24) )
              {
                v30 = v24 != 0 ? 504LL : 232LL;
                goto LABEL_21;
              }
            }
            break;
          default:
            if ( a13 && v28 == 10 && KeGetCurrentIrql() < 2u )
            {
              v48 = 4 * (unsigned __int8)v26[9] + 8;
              if ( *((unsigned __int16 *)v26 + 1) - v48 == 8 )
                goto LABEL_49;
              v49 = (void **)a6;
              if ( a5 && !*a6 )
                sub_140218B60(a5, a6);
              v50 = *(_QWORD **)(a2 + 1096);
              if ( v50 )
              {
                v51 = (void *)v50[72];
                v52 = v50[74];
                v53 = v50[73];
                v54 = v50[75];
              }
              else
              {
                v51 = 0LL;
                v52 = 0LL;
                v53 = 0LL;
                v54 = 0LL;
              }
              v57 = *((unsigned __int16 *)v26 + 1) - v48 - 8;
              v55 = v48;
              v14 = a2;
              sub_140219130(
                (_DWORD *)a2,
                *(void **)(a2 + 776),
                *v49,
                v51,
                v52,
                v53,
                v54,
                &v26[v55 + 8],
                v57,
                1,
                v24,
                &v58);
              if ( ((v58 + 1) & 0xFFFFFFFD) == 0 )
              {
                v39 = v24 != 0 ? 504LL : 232LL;
                goto LABEL_58;
              }
            }
            break;
        }
      }
LABEL_24:
      ++v25;
      v17 = a8;
      v26 += *((unsigned __int16 *)v26 + 1);
      result = v59;
      v32 = v25 == v59;
      if ( v25 >= v59 )
        goto LABEL_30;
      v18 = v60;
    }
  }
  v32 = 1;
LABEL_30:
  if ( v32 )
  {
    v33 = v20 + 24;
    if ( *(_DWORD *)(v20 + 24) )
    {
      if ( v17 )
      {
        v34 = v17;
        do
        {
          result = sub_14022D300(*(_DWORD *)v33, 0x800000, 0, *(_QWORD *)(v33 + 16), 0);
          v33 += 48LL;
          --v34;
        }
        while ( v34 );
      }
    }
  }
  return result;
}
