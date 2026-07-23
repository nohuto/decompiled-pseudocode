/*
 * XREFs of sub_140915854 @ 0x140915854
 * Callers:
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F68C @ 0x14071F68C (sub_14071F68C.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C5730 @ 0x1407C5730 (sub_1407C5730.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_140915854(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *Size,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char v10; // r15
  __int64 v12; // rsi
  int v13; // ebx
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  char v21; // al
  unsigned int *v22; // r14
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // rdx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // ecx
  unsigned int v31; // r13d
  __int64 v32; // rsi
  ULONG_PTR v33; // rcx
  ULONG_PTR v34; // rdx
  __int64 v35; // rax
  ULONG_PTR v36; // r14
  ULONG_PTR v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r13
  ULONG_PTR v40; // rcx
  int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned int v46; // ecx
  ULONG_PTR v47; // rcx
  ULONG_PTR v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  ULONG_PTR v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v58; // [rsp+48h] [rbp-79h] BYREF
  int v59; // [rsp+50h] [rbp-71h]
  __int64 v60; // [rsp+58h] [rbp-69h] BYREF
  __int64 v61; // [rsp+60h] [rbp-61h]
  int v62; // [rsp+68h] [rbp-59h] BYREF
  int v63[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v64; // [rsp+78h] [rbp-49h]
  __int64 v65; // [rsp+80h] [rbp-41h] BYREF
  __int64 v66; // [rsp+88h] [rbp-39h] BYREF
  __int64 v67; // [rsp+90h] [rbp-31h] BYREF
  unsigned int *v68; // [rsp+98h] [rbp-29h]
  _DWORD *v69; // [rsp+A0h] [rbp-21h]
  __int64 v70; // [rsp+A8h] [rbp-19h]
  __int128 v71; // [rsp+B0h] [rbp-11h] BYREF
  unsigned int v72; // [rsp+108h] [rbp+47h]
  char v73; // [rsp+118h] [rbp+57h]

  v73 = a3;
  *(_QWORD *)v63 = 0LL;
  v70 = 0LL;
  v66 = 0xFFFFFFFFLL;
  v10 = a3;
  v61 = 0LL;
  v67 = 0xFFFFFFFFLL;
  v12 = 0LL;
  v13 = 0;
  v68 = 0LL;
  v14 = 0LL;
  v69 = 0LL;
  v59 = 0;
  v72 = 0;
  v64 = 0LL;
  v60 = 0xFFFFFFFFLL;
  v65 = 0xFFFFFFFFLL;
  v58 = 0xFFFFFFFFLL;
  v62 = 0;
  v71 = 0LL;
  if ( !(_BYTE)a3 )
    sub_140AB4370(0xFFFFFFFFLL, a2, a3);
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    v13 = sub_14067F480((_QWORD *)a1, v63);
    if ( v13 < 0 )
    {
      if ( !v10 )
        goto LABEL_100;
      return (unsigned int)v13;
    }
    v12 = *(_QWORD *)v63;
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = *(_QWORD *)(a2 + 8);
  if ( !v73 )
    sub_1407C300C(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( (unsigned __int8)sub_140AB45A0(a1, v12) )
  {
    v21 = *(_BYTE *)(a1 + 48);
LABEL_13:
    v13 = (v21 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_98;
  }
  if ( (unsigned __int8)sub_140AB45A0(a2, v12) )
  {
    v21 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( *(_QWORD *)(v19 + 288) == v12 )
  {
    v22 = (unsigned int *)(v19 + 280);
    v68 = (unsigned int *)(v19 + 280);
  }
  else
  {
    v22 = 0LL;
  }
  if ( *(_QWORD *)(v20 + 288) == v12 )
  {
    v14 = v20 + 280;
    v69 = (_DWORD *)(v20 + 280);
  }
  if ( !v22 )
  {
LABEL_23:
    v23 = *(_QWORD *)(v19 + 32);
    v24 = *(unsigned int *)(v19 + 40);
    if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
      v25 = sub_1406BF400(v23, v24, &v66);
    else
      v25 = sub_1407C9820(v23, v24, (unsigned int *)&v66);
    v70 = v25;
    if ( !v25 )
    {
      v13 = -1073741670;
      goto LABEL_98;
    }
    v22 = (unsigned int *)(v25 + 36);
    v68 = (unsigned int *)(v25 + 36);
  }
  if ( v14 )
    goto LABEL_36;
  v26 = *(_QWORD *)(v20 + 32);
  v27 = *(unsigned int *)(v20 + 40);
  if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
    v28 = sub_1406BF400(v26, v27, &v67);
  else
    v28 = sub_1407C9820(v26, v27, (unsigned int *)&v67);
  v61 = v28;
  v29 = v28;
  if ( v28 )
  {
    v69 = (_DWORD *)(v28 + 36);
LABEL_36:
    v30 = 0;
    v31 = 0;
    while ( v31 < *v22 )
    {
      v32 = v64;
      if ( !v64 )
      {
        v33 = *(_QWORD *)(v19 + 32);
        v34 = v22[1];
        v35 = (*(_BYTE *)(v33 + 140) & 1) != 0
            ? sub_1406BF400(v33, v34, &v60)
            : sub_1407C9820(v33, v34, (unsigned int *)&v60);
        v64 = v35;
        v32 = v35;
        if ( !v35 )
        {
          v13 = -1073741670;
          goto LABEL_89;
        }
      }
      v36 = *(_QWORD *)(v19 + 32);
      v37 = *(unsigned int *)(v32 + 4LL * v31);
      v63[0] = *(_DWORD *)(v32 + 4LL * v31);
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        v38 = sub_1406BF400(v36, v37, &v58);
      else
        v38 = sub_1407C9820(v36, v37, (unsigned int *)&v58);
      v39 = v38;
      if ( !v38 )
      {
        v13 = -1073741670;
LABEL_64:
        v45 = 0LL;
        goto LABEL_81;
      }
      v40 = *(_QWORD *)(v20 + 32);
      v41 = *(_WORD *)(v38 + 16) & 1;
      *((_QWORD *)&v71 + 1) = v38 + 20;
      LOWORD(v71) = *(_WORD *)(v38 + 2);
      if ( sub_14071F68C(v40, (__int64)v69, (__int64)&v71, (unsigned int)(v41 << 16), 0LL, (__int64)&v62) && v62 == -1 )
      {
        if ( v72 == a4 )
        {
          v44 = v19;
          v45 = 0LL;
          goto LABEL_78;
        }
        ++v72;
      }
      v42 = *(_QWORD *)(v19 + 32);
      v31 = ++v59;
      if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
        sub_1406BF450(v42, &v58);
      else
        sub_1407C97C0(v42, (unsigned int *)&v58);
      if ( v32 )
      {
        v43 = *(_QWORD *)(v19 + 32);
        if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
          sub_1406BF450(v43, &v60);
        else
          sub_1407C97C0(v43, (unsigned int *)&v60);
        v64 = 0LL;
      }
      v30 = v72;
      if ( v72 > a4 )
        goto LABEL_64;
      v22 = v68;
    }
    v46 = *v69 + v30;
    if ( v46 <= a4 )
    {
      v13 = -2147483622;
      if ( a9 )
        *a9 = v46;
      goto LABEL_64;
    }
    v47 = *(_QWORD *)(v20 + 32);
    v48 = (unsigned int)v69[1];
    if ( (*(_BYTE *)(v47 + 140) & 1) != 0 )
      v49 = sub_1406BF400(v47, v48, &v65);
    else
      v49 = sub_1407C9820(v47, v48, (unsigned int *)&v65);
    v45 = v49;
    if ( !v49
      || ((v50 = a4 - v72,
           v36 = *(_QWORD *)(v20 + 32),
           v51 = *(unsigned int *)(v49 + 4 * v50),
           v63[0] = *(_DWORD *)(v49 + 4 * v50),
           (*(_BYTE *)(v36 + 140) & 1) == 0)
        ? (v52 = sub_1407C9820(v36, v51, (unsigned int *)&v58))
        : (v52 = sub_1406BF400(v36, v51, &v58)),
          (v39 = v52) == 0) )
    {
      v13 = -1073741670;
      goto LABEL_81;
    }
    v44 = v20;
LABEL_78:
    v13 = sub_1407C5730(v44, v63[0], v39, a5, Size, a7, a8);
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      sub_1406BF450(v36, &v58);
    else
      sub_1407C97C0(v36, (unsigned int *)&v58);
LABEL_81:
    if ( v64 )
    {
      v53 = *(_QWORD *)(v19 + 32);
      if ( (*(_BYTE *)(v53 + 140) & 1) != 0 )
        sub_1406BF450(v53, &v60);
      else
        sub_1407C97C0(v53, (unsigned int *)&v60);
    }
    if ( v45 )
    {
      v54 = *(_QWORD *)(v20 + 32);
      if ( (*(_BYTE *)(v54 + 140) & 1) != 0 )
        sub_1406BF450(v54, &v65);
      else
        sub_1407C97C0(v54, (unsigned int *)&v65);
    }
LABEL_89:
    v29 = v61;
    goto LABEL_90;
  }
  v13 = -1073741670;
LABEL_90:
  if ( v70 )
  {
    v55 = *(_QWORD *)(v19 + 32);
    if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
      sub_1406BF450(v55, &v66);
    else
      sub_1407C97C0(v55, (unsigned int *)&v66);
  }
  if ( v29 )
  {
    v56 = *(_QWORD *)(v20 + 32);
    if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
      sub_1406BF450(v56, &v67);
    else
      sub_1407C97C0(v56, (unsigned int *)&v67);
  }
LABEL_98:
  if ( !v73 )
  {
    sub_1407C2FB4(v19, v20);
LABEL_100:
    sub_140AB4260(v16, v15, v17, v18);
  }
  return (unsigned int)v13;
}
