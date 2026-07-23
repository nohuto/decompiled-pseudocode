/*
 * XREFs of sub_1406B5B9C @ 0x1406B5B9C
 * Callers:
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1405F4040 @ 0x1405F4040 (sub_1405F4040.c)
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C99C0 @ 0x1409C99C0 (sub_1409C99C0.c)
 *     sub_1409CA168 @ 0x1409CA168 (sub_1409CA168.c)
 *     sub_1409CE4F8 @ 0x1409CE4F8 (sub_1409CE4F8.c)
 *     sub_1409CE5B0 @ 0x1409CE5B0 (sub_1409CE5B0.c)
 *     sub_1409CE630 @ 0x1409CE630 (sub_1409CE630.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406B5B9C(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v18; // rdx
  _QWORD **PrimaryToken; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r15
  unsigned int v24; // r14d
  __int64 v25; // r15
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r14
  __int16 v30; // ax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // rax
  _WORD *v36; // rax
  __int16 v37; // ax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rax
  __int16 v42; // ax
  __int64 v43; // rax
  _WORD *v44; // rsi
  __int16 v45; // ax
  unsigned __int16 *v46; // r13
  __int16 v47; // r9
  int v48; // eax
  _WORD *v49; // r12
  __int16 v50; // ax
  __int16 v51; // r10
  __int16 v52; // ax
  __int16 v53; // r11
  _WORD *v54; // r15
  _WORD *v55; // r14
  SIZE_T v56; // rax
  __int64 v57; // rcx
  SIZE_T v58; // rax
  __int64 v59; // rcx
  SIZE_T v60; // rax
  __int64 v61; // rcx
  SIZE_T v62; // rax
  __int64 v63; // rcx
  int v64; // edx
  bool v65; // cf
  unsigned int v66; // eax
  int v67; // edi
  int v68; // edi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int16 v77; // ax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // r12d
  int v84; // r13d
  __int64 v85; // rdi
  unsigned int v86; // ebx
  int v87; // [rsp+58h] [rbp-99h]
  __int64 v88; // [rsp+60h] [rbp-91h]
  __int64 v89; // [rsp+68h] [rbp-89h] BYREF
  _WORD *v90; // [rsp+70h] [rbp-81h]
  unsigned int v91; // [rsp+78h] [rbp-79h]
  _QWORD **v92; // [rsp+80h] [rbp-71h]
  PVOID P; // [rsp+88h] [rbp-69h] BYREF
  PVOID v94[3]; // [rsp+90h] [rbp-61h] BYREF
  void *Source2; // [rsp+A8h] [rbp-49h]
  void *v96; // [rsp+B0h] [rbp-41h]
  __int64 v97; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v99; // [rsp+138h] [rbp+47h]
  __int16 v101; // [rsp+150h] [rbp+5Fh]
  __int16 v102; // [rsp+160h] [rbp+6Fh]

  v89 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v94[0] = 0LL;
  v14 = 0;
  v97 = 0LL;
  v15 = 0LL;
  v90 = 0LL;
  v16 = 0LL;
  v91 = 0;
  v87 = 0;
  v101 = 0;
  v96 = 0LL;
  v99 = 0;
  Source2 = 0LL;
  v102 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  v92 = PrimaryToken;
  if ( !PrimaryToken )
  {
    sub_1409CF1A0(3221225596LL);
    return;
  }
  LOBYTE(v18) = 1;
  v23 = sub_140724320(141LL, v18, 0LL, &SubjectContext);
  if ( v23 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    LOBYTE(v20) = 1;
    if ( (unsigned __int8)sub_140724320(139LL, v20, 0LL, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v23 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && *a3 )
  {
    v90 = a3;
  }
  else if ( a2 )
  {
    HIDWORD(v89) = sub_1409CA168(a2, v94, v21, v22);
    if ( v89 < 0 )
      goto LABEL_206;
    v36 = 0LL;
    if ( v94[0] )
      v36 = v94[0];
    v90 = v36;
  }
  v24 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v37 = *(_WORD *)(a10 + 2);
    if ( (v37 & 0x10) == 0 )
      goto LABEL_64;
    if ( v37 >= 0 )
    {
      v39 = *(_QWORD *)(a10 + 24);
      goto LABEL_66;
    }
    v38 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v38 )
      v39 = a10 + v38;
    else
LABEL_64:
      v39 = 0LL;
LABEL_66:
    sub_1405F4040(v39, v24, (__int64)v92, &v89);
    sub_1409CE4F8(v90, v24, v92, &v89);
    if ( (v89 & 0x80000) != 0 && v23 )
      v14 |= a8 & 0x10;
  }
  v25 = a13;
  v26 = *(_WORD *)(a13 + 2);
  if ( (v26 & 0x10) == 0 )
  {
LABEL_39:
    v28 = 0LL;
    goto LABEL_14;
  }
  if ( v26 < 0 )
  {
    v27 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v27 )
    {
      v28 = a13 + v27;
      goto LABEL_14;
    }
    goto LABEL_39;
  }
  v28 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v88 = v28;
  if ( !a10 )
    goto LABEL_15;
  v33 = *(_WORD *)(a10 + 2);
  if ( (v33 & 0x10) == 0 )
    goto LABEL_37;
  if ( v33 >= 0 )
  {
    v16 = *(_QWORD *)(a10 + 24);
  }
  else
  {
    v35 = *(unsigned int *)(a10 + 12);
    if ( !(_DWORD)v35 )
    {
LABEL_37:
      v16 = 0LL;
      goto LABEL_15;
    }
    v16 = a10 + v35;
  }
LABEL_15:
  v29 = a9;
  if ( !a9 )
    goto LABEL_16;
  v40 = *(_WORD *)(a9 + 2);
  if ( (v40 & 0x10) == 0 )
  {
LABEL_74:
    v15 = 0LL;
    goto LABEL_16;
  }
  if ( v40 < 0 )
  {
    v41 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v41 )
    {
      v15 = a9 + v41;
      goto LABEL_16;
    }
    goto LABEL_74;
  }
  v15 = *(_QWORD *)(a9 + 24);
LABEL_16:
  if ( a11 )
  {
    v30 = *(_WORD *)(a11 + 2);
    if ( (v30 & 0x10) == 0 )
    {
LABEL_18:
      v31 = 0LL;
      goto LABEL_19;
    }
    if ( v30 >= 0 )
    {
      v31 = *(_QWORD *)(a11 + 24);
    }
    else
    {
      v34 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v34 )
        goto LABEL_18;
      v31 = a11 + v34;
    }
  }
  else
  {
    v31 = 0LL;
  }
LABEL_19:
  if ( !a12 )
  {
    v32 = 0LL;
    goto LABEL_21;
  }
  v42 = *(_WORD *)(a12 + 2);
  if ( (v42 & 0x10) == 0 )
  {
LABEL_80:
    v32 = 0LL;
    goto LABEL_21;
  }
  if ( v42 < 0 )
  {
    v43 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v43 )
    {
      v32 = a12 + v43;
      goto LABEL_21;
    }
    goto LABEL_80;
  }
  v32 = *(_QWORD *)(a12 + 24);
LABEL_21:
  if ( !v28 || !*(_WORD *)(v28 + 4) )
  {
    if ( v16 && *(_WORD *)(v16 + 4) )
      v13 = v14 & 8;
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 |= v14 & 0x10;
    if ( v31 && *(_WORD *)(v31 + 4) )
      v13 |= v14 & 0x20;
    if ( v32 && *(_WORD *)(v32 + 4) )
    {
      v67 = v14 & 0x40;
LABEL_149:
      v13 |= v67;
    }
    goto LABEL_27;
  }
  if ( !v14 )
    goto LABEL_27;
  v44 = (_WORD *)(v28 + 8);
  if ( v16 && (v45 = *(_WORD *)(v16 + 4)) != 0 )
  {
    v46 = (unsigned __int16 *)(v16 + 8);
    v101 = v45;
    v47 = v45;
  }
  else
  {
    v47 = 0;
    v46 = 0LL;
  }
  if ( v15 && (v48 = *(unsigned __int16 *)(v15 + 4), (_WORD)v48) )
  {
    v49 = (_WORD *)(v15 + 8);
    v87 = v48;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v31 && (v50 = *(_WORD *)(v31 + 4)) != 0 )
  {
    v99 = *(_WORD *)(v31 + 4);
    v96 = (void *)(v31 + 8);
    v51 = v50;
  }
  else
  {
    v51 = 0;
  }
  if ( v32 && (v52 = *(_WORD *)(v32 + 4)) != 0 )
  {
    v102 = *(_WORD *)(v32 + 4);
    Source2 = (void *)(v32 + 8);
    v53 = v52;
  }
  else
  {
    v53 = 0;
  }
  v54 = Source2;
  v55 = v96;
  do
  {
    if ( *(_BYTE *)v44 != 17 )
    {
      if ( *(_BYTE *)v44 == 18 )
      {
        if ( (v14 & 0x20) != 0 )
        {
          if ( !v55
            || v44[1] != v55[1]
            || (v60 = RtlCompareMemory(v44, v55, (unsigned __int16)v55[1]),
                v61 = (unsigned __int16)v55[1],
                v28 = v88,
                v60 != v61) )
          {
            v13 |= 0x20u;
            v14 &= ~0x20u;
            goto LABEL_127;
          }
          v47 = v101;
          v51 = --v99;
          v55 = (_WORD *)(((unsigned __int64)v55 + v61) & -(__int64)(v99 != 0));
          goto LABEL_129;
        }
      }
      else if ( *(_BYTE *)v44 == 19 )
      {
        if ( (v14 & 0x40) != 0 )
        {
          if ( !v54
            || v44[1] != v54[1]
            || (v58 = RtlCompareMemory(v44, v54, (unsigned __int16)v54[1]),
                v59 = (unsigned __int16)v54[1],
                v28 = v88,
                v58 != v59) )
          {
            v13 |= 0x40u;
            v14 &= ~0x40u;
            goto LABEL_127;
          }
          v47 = v101;
          v51 = v99;
          v53 = --v102;
          v54 = (_WORD *)(((unsigned __int64)v54 + v59) & -(__int64)(v102 != 0));
        }
      }
      else if ( (v14 & 8) != 0 )
      {
        if ( !v46
          || *(_BYTE *)v46 != *(_BYTE *)v44
          || v44[1] != v46[1]
          || (v56 = RtlCompareMemory(v44, v46, v46[1]), v57 = v46[1], v28 = v88, v56 != v57) )
        {
          v13 |= 8u;
          v14 &= ~8u;
          goto LABEL_127;
        }
        v47 = --v101;
        v46 = (unsigned __int16 *)(((unsigned __int64)v46 + v57) & -(__int64)(v101 != 0));
        goto LABEL_128;
      }
      goto LABEL_130;
    }
    if ( (v14 & 0x10) == 0 )
      goto LABEL_130;
    if ( !v49
      || v44[1] != v49[1]
      || (v62 = RtlCompareMemory(v44, v49, (unsigned __int16)v49[1]),
          v63 = (unsigned __int16)v49[1],
          v28 = v88,
          v62 != v63) )
    {
      v13 |= 0x10u;
      v14 &= ~0x10u;
LABEL_127:
      v47 = v101;
LABEL_128:
      v51 = v99;
LABEL_129:
      v53 = v102;
LABEL_130:
      v64 = v87;
      goto LABEL_131;
    }
    v47 = v101;
    v64 = v87 - 1;
    v51 = v99;
    v53 = v102;
    v65 = v87-- != 1;
    v49 = (_WORD *)(((unsigned __int64)v49 + v63) & -(__int64)v65);
LABEL_131:
    v44 = (_WORD *)((char *)v44 + (unsigned __int16)v44[1]);
    v66 = *(unsigned __int16 *)(v28 + 4);
    ++v91;
  }
  while ( v91 < v66 && v14 );
  v29 = a9;
  v25 = a13;
  if ( v47 )
    v13 |= v14 & 8;
  if ( v51 )
    v13 |= v14 & 0x20;
  if ( v53 )
    v13 |= v14 & 0x40;
  if ( v64 )
  {
    v67 = v14 & 0x10;
    goto LABEL_149;
  }
LABEL_27:
  if ( v29 )
  {
    v68 = v89;
    if ( (v89 & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v70 = *(_QWORD *)(v25 + 8);
        }
        else
        {
          v69 = *(unsigned int *)(v25 + 4);
          v70 = (_DWORD)v69 ? v25 + v69 : 0LL;
        }
        if ( *(__int16 *)(v29 + 2) >= 0 )
        {
          v72 = *(_QWORD *)(v29 + 8);
        }
        else
        {
          v71 = *(unsigned int *)(v29 + 4);
          v72 = (_DWORD)v71 ? v29 + v71 : 0LL;
        }
        if ( !(unsigned __int8)sub_1409CE630(v72, v70) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v74 = *(_QWORD *)(v25 + 16);
        }
        else
        {
          v73 = *(unsigned int *)(v25 + 8);
          v74 = (_DWORD)v73 ? v25 + v73 : 0LL;
        }
        if ( *(__int16 *)(v29 + 2) >= 0 )
        {
          v76 = *(_QWORD *)(v29 + 16);
        }
        else
        {
          v75 = *(unsigned int *)(v29 + 8);
          v76 = (_DWORD)v75 ? v29 + v75 : 0LL;
        }
        if ( !(unsigned __int8)sub_1409CE630(v76, v74) )
          v13 |= 2u;
      }
    }
    if ( (v68 & 0x40000) != 0 )
    {
      v77 = *(_WORD *)(v25 + 2);
      if ( (v77 & 4) == 0 )
        goto LABEL_182;
      if ( v77 >= 0 )
      {
        v79 = *(_QWORD *)(v25 + 32);
      }
      else
      {
        v78 = *(unsigned int *)(v25 + 16);
        if ( (_DWORD)v78 )
        {
          v79 = v25 + v78;
          goto LABEL_184;
        }
LABEL_182:
        v79 = 0LL;
      }
LABEL_184:
      v80 = *(_WORD *)(v29 + 2);
      if ( (v80 & 4) == 0 )
        goto LABEL_188;
      if ( v80 >= 0 )
      {
        v82 = *(_QWORD *)(v29 + 32);
        goto LABEL_190;
      }
      v81 = *(unsigned int *)(v29 + 16);
      if ( (_DWORD)v81 )
        v82 = v29 + v81;
      else
LABEL_188:
        v82 = 0LL;
LABEL_190:
      if ( !(unsigned __int8)sub_1409CE5B0(v82, v79) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v83 = v97;
LABEL_198:
      v84 = (int)v90;
      v85 = *v92[19];
      if ( (v13 & 8) != 0 )
        sub_1409C99C0(
          (unsigned int)&SubjectContext,
          (unsigned int)&qword_140001B08,
          (_DWORD)v90,
          v83,
          a5,
          v85,
          a10,
          8,
          v25);
      if ( (v13 & 0x20) != 0 )
        sub_1409C99C0((unsigned int)&SubjectContext, (unsigned int)&qword_140001B08, v84, v83, a5, v85, a11, 32, v25);
      if ( (v13 & 0x40) != 0 )
        sub_1409C99C0((unsigned int)&SubjectContext, (unsigned int)&qword_140001B08, v84, v83, a5, v85, a12, 64, v25);
      v86 = v13 & 0xFFFFFF97;
      if ( v86 )
        sub_1409C99C0((unsigned int)&SubjectContext, (unsigned int)&qword_140001B08, v84, v83, a5, v85, v29, v86, v25);
      goto LABEL_206;
    }
    HIDWORD(v89) = sub_140696CCC(a2, &P);
    if ( v89 >= 0 )
    {
      v83 = 0;
      if ( P )
        v83 = (int)P;
      goto LABEL_198;
    }
LABEL_206:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v94[0] )
      ExFreePoolWithTag(v94[0], 0);
  }
  if ( v89 < 0 )
    sub_1409CF1A0(HIDWORD(v89));
  SeReleaseSubjectContext(&SubjectContext);
}
