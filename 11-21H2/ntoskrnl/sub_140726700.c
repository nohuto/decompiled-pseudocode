/*
 * XREFs of sub_140726700 @ 0x140726700
 * Callers:
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406D7100 (SeSetSecurityDescriptorInfoEx.c)
 *     SeSetSecurityDescriptorInfo @ 0x1407258E0 (SeSetSecurityDescriptorInfo.c)
 * Callees:
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_14025ACE4 @ 0x14025ACE4 (sub_14025ACE4.c)
 *     sub_1402A47B0 @ 0x1402A47B0 (sub_1402A47B0.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069A9C0 @ 0x14069A9C0 (sub_14069A9C0.c)
 *     sub_1406BBE6C @ 0x1406BBE6C (sub_1406BBE6C.c)
 *     sub_1406CBD5C @ 0x1406CBD5C (sub_1406CBD5C.c)
 *     sub_140727F00 @ 0x140727F00 (sub_140727F00.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_14079DB4C @ 0x14079DB4C (sub_14079DB4C.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409B9738 @ 0x1409B9738 (sub_1409B9738.c)
 *     sub_1409BA380 @ 0x1409BA380 (sub_1409BA380.c)
 *     sub_1409CA928 @ 0x1409CA928 (sub_1409CA928.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140726700(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  _BOOL8 v8; // r12
  __int64 v9; // rsi
  PVOID v12; // r15
  __int64 *p_SubjectContext; // r11
  __int16 v14; // ax
  void *v15; // r14
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  ACL *v19; // r13
  __int16 v20; // r8
  int v21; // edx
  bool v22; // r9
  __int64 v23; // rax
  unsigned __int8 *v24; // r14
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int8 *v28; // r12
  __int16 v29; // cx
  unsigned __int16 *v30; // r15
  __int16 v31; // dx
  unsigned int v32; // r13d
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v37; // rbx
  char *v38; // rdi
  __int16 v39; // ax
  __int64 v40; // rdx
  __int16 v41; // cx
  __int64 v42; // rcx
  __int64 *v43; // rsi
  __int64 v44; // rcx
  char *v45; // rdi
  int v46; // esi
  void *v47; // rcx
  PVOID v48; // r12
  PVOID v49; // r14
  PVOID v50; // rdi
  PVOID v51; // rbx
  _BYTE *AceByType; // rax
  _BYTE *v54; // rsi
  char *v55; // rax
  __int64 v56; // rsi
  ULONG v57; // ecx
  char v58; // al
  __int64 v59; // r9
  int v60; // edx
  unsigned __int8 *v61; // rsi
  void *v62; // r11
  __int16 v63; // r10
  unsigned __int8 *v64; // r8
  unsigned __int8 *v65; // rdx
  __int16 v66; // r10
  __int64 v67; // rax
  __int64 v68; // rax
  __int16 v69; // cx
  __int64 v70; // rcx
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int8 *v74; // rax
  unsigned __int8 v75; // cl
  __int64 v76; // rax
  unsigned int v77; // r8d
  unsigned int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // r8d
  PVOID v82; // rax
  __int64 v83; // r8
  unsigned int v84; // r8d
  int v85; // ebx
  unsigned int v86; // eax
  unsigned int v87; // r8d
  unsigned int v88; // r8d
  __int64 v89; // r8
  int v90; // eax
  __int64 v91; // rdx
  __int16 v92; // r10
  __int64 v93; // rax
  int v94; // eax
  unsigned __int8 v95; // cl
  __int16 v96; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  int v98; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v99; // [rsp+64h] [rbp-A4h]
  bool v100; // [rsp+65h] [rbp-A3h]
  char v101; // [rsp+66h] [rbp-A2h]
  char v102; // [rsp+67h] [rbp-A1h]
  char v103; // [rsp+68h] [rbp-A0h]
  char v104; // [rsp+69h] [rbp-9Fh]
  char v105; // [rsp+6Ah] [rbp-9Eh]
  char v106; // [rsp+6Bh] [rbp-9Dh]
  char v107; // [rsp+6Ch] [rbp-9Ch]
  char v108; // [rsp+6Dh] [rbp-9Bh]
  char v109; // [rsp+6Eh] [rbp-9Ah]
  char v110; // [rsp+6Fh] [rbp-99h]
  __int64 v111; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h]
  void *v113; // [rsp+80h] [rbp-88h]
  PVOID v114; // [rsp+88h] [rbp-80h]
  int v115; // [rsp+90h] [rbp-78h] BYREF
  PVOID v116; // [rsp+98h] [rbp-70h]
  PVOID v117; // [rsp+A0h] [rbp-68h]
  PVOID v118; // [rsp+A8h] [rbp-60h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-50h]
  __int64 v121; // [rsp+C0h] [rbp-48h]
  size_t Size; // [rsp+C8h] [rbp-40h]
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v124; // [rsp+D8h] [rbp-30h]
  BOOL v125; // [rsp+DCh] [rbp-2Ch]
  void *v126; // [rsp+E0h] [rbp-28h]
  __int64 *v127; // [rsp+E8h] [rbp-20h]
  void *v128; // [rsp+F0h] [rbp-18h] BYREF
  void *v129; // [rsp+F8h] [rbp-10h] BYREF
  void *v130; // [rsp+100h] [rbp-8h] BYREF
  void *v131; // [rsp+108h] [rbp+0h] BYREF
  void *v132; // [rsp+110h] [rbp+8h] BYREF
  char *v133; // [rsp+118h] [rbp+10h]
  __int64 *v134; // [rsp+120h] [rbp+18h]
  PVOID v135; // [rsp+128h] [rbp+20h] BYREF
  PVOID v136; // [rsp+130h] [rbp+28h] BYREF
  __int64 v137; // [rsp+138h] [rbp+30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+140h] [rbp+38h] BYREF
  __int16 Sid; // [rsp+160h] [rbp+58h] BYREF
  int v140; // [rsp+168h] [rbp+60h]
  _BOOL8 v141; // [rsp+1B0h] [rbp+A8h]

  v9 = a3;
  v141 = v8;
  *(_DWORD *)PoolType.Value = a6;
  LOBYTE(v8) = 0;
  v12 = 0LL;
  p_SubjectContext = a8;
  v121 = a7;
  v14 = *(_WORD *)(a3 + 2);
  v134 = a4;
  v120 = a3;
  v127 = a8;
  v103 = 0;
  v102 = 0;
  LOBYTE(v111) = 0;
  v104 = 0;
  v110 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v115 = 0;
  v135 = 0LL;
  P = 0LL;
  v113 = 0LL;
  v128 = 0LL;
  v116 = 0LL;
  v130 = 0LL;
  v117 = 0LL;
  v129 = 0LL;
  v114 = 0LL;
  v131 = 0LL;
  v118 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v99 = 0;
  LOBYTE(v124) = 0;
  v125 = v8;
  v98 = 0;
  v96 = 0x8000;
  v136 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v67 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v67 )
        v15 = (void *)(a3 + v67);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v16 = *a4;
    p_SubjectContext = (__int64 *)&SubjectContext;
    v127 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v16 + 2) >= 0 )
  {
    v46 = -1073741593;
    goto LABEL_77;
  }
  v20 = *(_WORD *)(v9 + 2);
  v100 = (v20 & 0x80u) != 0;
  v101 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  v22 = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v85 = a2 | 0x1FF;
    v86 = v85 & 0xFFFFFF7F;
    if ( v21 )
      v86 = v85;
    a2 = v86 & 0xFFFFFEFF;
    if ( v22 )
      a2 = v86;
    if ( !v19 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
        a2 |= 8u;
      else
        v125 = (v20 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v16 + 2) >= 0 )
    {
      v24 = *(unsigned __int8 **)(v16 + 8);
    }
    else
    {
      v23 = *(unsigned int *)(v16 + 4);
      if ( !(_DWORD)v23 )
        goto LABEL_248;
      v24 = (unsigned __int8 *)(v16 + v23);
    }
    v126 = v24;
    v25 = v24 == 0LL;
LABEL_16:
    if ( !v25 )
      goto LABEL_17;
LABEL_248:
    v46 = -1073741734;
    goto LABEL_77;
  }
  v78 = a2 >> 2;
  LOBYTE(v78) = (a2 & 4) == 0;
  v124 = v78;
  if ( v20 >= 0 )
  {
    v24 = *(unsigned __int8 **)(v9 + 8);
  }
  else
  {
    v79 = *(unsigned int *)(v9 + 4);
    if ( (_DWORD)v79 )
      v24 = (unsigned __int8 *)(v9 + v79);
    else
      v24 = 0LL;
  }
  v126 = v24;
  v102 = 1;
  if ( (a5 & 8) == 0 )
  {
    v25 = sub_1406BBE6C(p_SubjectContext, v24, (v20 & 0x80u) != 0) == 0;
    goto LABEL_16;
  }
LABEL_17:
  if ( !RtlValidSid(v24) )
    goto LABEL_248;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v9 + 2) >= 0 )
    {
      v28 = *(unsigned __int8 **)(v9 + 16);
    }
    else
    {
      v80 = *(unsigned int *)(v9 + 8);
      if ( (_DWORD)v80 )
        v28 = (unsigned __int8 *)(v9 + v80);
      else
        v28 = 0LL;
    }
    v103 = 1;
  }
  else
  {
    v26 = *a4;
    if ( *(__int16 *)(*a4 + 2) >= 0 )
    {
      v28 = *(unsigned __int8 **)(v26 + 16);
    }
    else
    {
      v27 = *(unsigned int *)(v26 + 8);
      if ( !(_DWORD)v27 )
      {
LABEL_192:
        v46 = -1073741733;
        goto LABEL_77;
      }
      v28 = (unsigned __int8 *)(v26 + v27);
    }
  }
  if ( !v28 || !RtlValidSid(v28) )
    goto LABEL_192;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = v19;
    Src = v19;
    goto LABEL_26;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    do
    {
      AceByType = RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v54 = AceByType;
      if ( AceByType )
      {
        v75 = AceByType[1];
        v55 = AceByType + 8;
        v25 = (*((_DWORD *)v54 + 1) & 0xFFFFFFF8) == 0;
        v133 = v55;
        v99 = v75;
        if ( !v25 )
        {
LABEL_193:
          v46 = -1073740730;
          goto LABEL_77;
        }
      }
      else
      {
        v55 = v133;
      }
      if ( !(unsigned __int8)sub_14079DB4C(v127, v55, v99) )
        goto LABEL_193;
      ++Index;
    }
    while ( v54 );
  }
  v56 = sub_140232910(v127);
  v137 = v56;
  LODWORD(v133) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_87:
    v57 = a2 & 0x100;
    Index = v57;
    if ( (a2 & 0x100) != 0 )
    {
      v46 = sub_1409BA380((PACL)Src);
      if ( v46 < 0 )
        goto LABEL_77;
      v58 = a5;
      if ( (a5 & 2) != 0 )
      {
        v57 = Index;
LABEL_89:
        v59 = v120;
        if ( (a2 & 8) != 0 )
        {
          v81 = *(unsigned __int16 *)(v120 + 2);
          v60 = v58 & 2;
          v115 = v60;
          if ( (v58 & 2) == 0 )
          {
            v62 = Src;
            v113 = Src;
            v96 = v81 & 0x2000 | 0x8010;
            v61 = (unsigned __int8 *)Src;
            if ( (v81 & 0xA00) == 0xA00 )
              v96 = v81 & 0x2000 | 0x8810;
            goto LABEL_92;
          }
          v46 = sub_1409B9738(
                  (_DWORD)v19,
                  (*(_WORD *)(*a4 + 2) & 0x2800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)Src,
                  (v81 & 0x2800 | (v81 >> 1) & 0x18) >> 1,
                  (__int64)v24,
                  (__int64)v28,
                  v121,
                  2,
                  (__int64)&v128,
                  (__int64)&v98);
          if ( v46 < 0 )
          {
            v47 = v128;
            goto LABEL_63;
          }
          v61 = (unsigned __int8 *)v128;
          v60 = v115;
          v59 = v120;
          v105 = 1;
          v113 = v128;
          v96 = 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 0x2004)));
          v57 = Index;
        }
        else
        {
          v60 = v58 & 2;
          v113 = v19;
          v115 = v60;
          v61 = (unsigned __int8 *)v19;
        }
        v62 = Src;
LABEL_92:
        if ( (a2 & 0x20) != 0 )
        {
          v77 = *(unsigned __int16 *)(v59 + 2);
          if ( v60 )
          {
            v46 = sub_1409B9738(
                    (_DWORD)v19,
                    (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v62,
                    (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                    (__int64)v24,
                    (__int64)v28,
                    v121,
                    2,
                    (__int64)&v129,
                    (__int64)&v98);
            if ( v46 < 0 )
            {
              v48 = v129;
              v47 = v113;
              goto LABEL_64;
            }
            v60 = v115;
            v59 = v120;
            v62 = Src;
            v61 = (unsigned __int8 *)v113;
            v63 = (2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)))) | v96;
            v106 = 1;
            v57 = Index;
            v96 = v63;
            v117 = v129;
          }
          else
          {
            v117 = v62;
            v63 = v77 & 0x2000 | 0x10 | v96;
            v96 = v63;
            if ( (v77 & 0xA00) == 0xA00 )
            {
              v63 |= 0x800u;
              v96 = v63;
            }
          }
        }
        else
        {
          v63 = v96;
          v117 = v19;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v87 = *(unsigned __int16 *)(v59 + 2);
          if ( v60 )
          {
            v46 = sub_1409B9738(
                    (_DWORD)v19,
                    (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v62,
                    (v87 & 0x800 | (v87 >> 1) & 0x18) >> 1,
                    (__int64)v24,
                    (__int64)v28,
                    v121,
                    2,
                    (__int64)&v130,
                    (__int64)&v98);
            if ( v46 < 0 )
            {
              v49 = v130;
              v47 = v113;
              v48 = v117;
              goto LABEL_65;
            }
            v60 = v115;
            v59 = v120;
            v62 = Src;
            v61 = (unsigned __int8 *)v113;
            v63 = (2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)))) | v96;
            v107 = 1;
            v57 = Index;
            v96 = v63;
            v116 = v130;
          }
          else
          {
            v116 = v62;
            v63 |= v87 & 0x2000 | 0x10;
            v96 = v63;
            if ( (v87 & 0xA00) == 0xA00 )
            {
              v63 |= 0x800u;
              v96 = v63;
            }
          }
        }
        else
        {
          v116 = v19;
        }
        if ( (_DWORD)v133 )
        {
          v84 = *(unsigned __int16 *)(v59 + 2);
          if ( v60 )
          {
            v46 = sub_1409B9738(
                    (_DWORD)v19,
                    (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v62,
                    (v84 & 0x800 | (v84 >> 1) & 0x18) >> 1,
                    (__int64)v24,
                    (__int64)v28,
                    v121,
                    2,
                    (__int64)&v131,
                    (__int64)&v98);
            if ( v46 < 0 )
            {
              v50 = v131;
              v47 = v113;
              v49 = v116;
              v48 = v117;
              goto LABEL_66;
            }
            v64 = (unsigned __int8 *)v131;
            v60 = v115;
            v59 = v120;
            v62 = Src;
            v61 = (unsigned __int8 *)v113;
            v63 = (2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)))) | v96;
            v108 = 1;
            v57 = Index;
            v96 = v63;
            v114 = v131;
          }
          else
          {
            v114 = v62;
            v63 |= v84 & 0x2000 | 0x10;
            v96 = v63;
            v25 = (v84 & 0xA00) == 2560;
            v64 = (unsigned __int8 *)v62;
            if ( v25 )
            {
              v63 |= 0x800u;
              v96 = v63;
            }
          }
        }
        else
        {
          v64 = (unsigned __int8 *)v19;
          v114 = v19;
        }
        if ( v57 )
        {
          v88 = *(unsigned __int16 *)(v59 + 2);
          if ( v60 )
          {
            v46 = sub_1409B9738(
                    (_DWORD)v19,
                    (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v62,
                    (v88 & 0x800 | (v88 >> 1) & 0x18) >> 1,
                    (__int64)v24,
                    (__int64)v28,
                    v121,
                    2,
                    (__int64)&v132,
                    (__int64)&v98);
            if ( v46 < 0 )
            {
              v51 = v132;
              v47 = v113;
              v50 = v114;
              v49 = v116;
              v48 = v117;
LABEL_67:
              if ( v47 && v105 )
                ExFreePoolWithTag(v47, 0);
              if ( v48 && v106 )
                ExFreePoolWithTag(v48, 0);
              if ( v49 && v107 )
                ExFreePoolWithTag(v49, 0);
              if ( v50 && v108 )
                ExFreePoolWithTag(v50, 0);
              if ( v51 && v109 )
                ExFreePoolWithTag(v51, 0);
              if ( v12 && v110 )
                ExFreePoolWithTag(v12, 0);
              if ( (_BYTE)v111 )
                ExFreePoolWithTag(v136, 0);
              goto LABEL_77;
            }
            v65 = (unsigned __int8 *)v132;
            v59 = v120;
            v62 = Src;
            v61 = (unsigned __int8 *)v113;
            v109 = 1;
            v63 = (2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)))) | v96;
            v118 = v132;
            v96 = v63;
          }
          else
          {
            v65 = (unsigned __int8 *)v62;
            v118 = v62;
            v63 |= v88 & 0x2000 | 0x10;
            v96 = v63;
            if ( (v88 & 0xA00) == 0xA00 )
            {
              v63 |= 0x800u;
              v96 = v63;
            }
          }
          v64 = (unsigned __int8 *)v114;
        }
        else
        {
          v65 = (unsigned __int8 *)v19;
          v118 = v19;
        }
        if ( (_DWORD)Size )
        {
          v66 = *(_WORD *)(v59 + 2) & 0x2000 | 0x10 | v63;
          v96 = v66;
          if ( (*(_WORD *)(v59 + 2) & 0xA00) == 0xA00 )
            v96 = v66 | 0x800;
        }
        else
        {
          v62 = v19;
        }
        v46 = sub_14069A9C0(
                v61,
                (unsigned __int8 *)v62,
                (unsigned __int8 *)v117,
                (unsigned __int8 *)v116,
                v64,
                v65,
                (char **)&P,
                0LL);
        if ( v46 < 0 )
          goto LABEL_62;
        v12 = P;
        Src = P;
        if ( !v113 && P && !*((_WORD *)P + 2) )
        {
          ExFreePoolWithTag(P, 0);
          v12 = 0LL;
          Src = 0LL;
        }
        v9 = v120;
        v110 = 1;
LABEL_26:
        if ( (a2 & 4) != 0 )
        {
          v29 = *(_WORD *)(v9 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v29 & 4) != 0 )
            {
              if ( v29 >= 0 )
              {
                v89 = *(_QWORD *)(v9 + 32);
              }
              else
              {
                v90 = *(_DWORD *)(v9 + 16);
                if ( v90 )
                  LODWORD(v89) = v9 + v90;
                else
                  LODWORD(v89) = 0;
              }
            }
            else
            {
              LODWORD(v89) = 0;
            }
            v91 = *a4;
            v92 = *(_WORD *)(*a4 + 2);
            if ( (v92 & 4) != 0 )
            {
              if ( v92 >= 0 )
              {
                v93 = *(_QWORD *)(v91 + 32);
              }
              else
              {
                v94 = *(_DWORD *)(v91 + 16);
                if ( v94 )
                  LODWORD(v93) = v91 + v94;
                else
                  LODWORD(v93) = 0;
              }
            }
            else
            {
              LODWORD(v93) = 0;
            }
            v46 = sub_1409B9738(
                    v93,
                    v92 & 0x140C,
                    v89,
                    v29 & 0x140C,
                    (__int64)v24,
                    (__int64)v28,
                    v121,
                    1,
                    (__int64)&v135,
                    (__int64)&v98);
            if ( v46 < 0 )
            {
LABEL_62:
              v47 = v113;
LABEL_63:
              v48 = v117;
LABEL_64:
              v49 = v116;
LABEL_65:
              v50 = v114;
LABEL_66:
              v51 = v118;
              goto LABEL_67;
            }
            v30 = (unsigned __int16 *)v135;
            v104 = 1;
            v96 |= v98 & 0x1408 | 4;
          }
          else
          {
            if ( (v29 & 4) != 0 )
            {
              if ( v29 < 0 )
              {
                v76 = *(unsigned int *)(v9 + 16);
                if ( (_DWORD)v76 )
                  v30 = (unsigned __int16 *)(v9 + v76);
                else
                  v30 = 0LL;
              }
              else
              {
                v30 = *(unsigned __int16 **)(v9 + 32);
              }
            }
            else
            {
              v30 = 0LL;
            }
            v31 = v29 & 0x1000 | 4 | v96;
            v96 = v31;
            if ( (v29 & 0x500) == 0x500 )
              v96 = v31 | 0x400;
          }
          if ( v100 )
          {
            v128 = 0LL;
            v129 = 0LL;
            P = 0LL;
            v130 = 0LL;
            v131 = 0LL;
            v132 = 0LL;
            v137 = 0LL;
            sub_1409CA928(
              (_DWORD)v127,
              (unsigned int)&v128,
              (unsigned int)&v129,
              (unsigned int)&P,
              (__int64)&v130,
              (__int64)&v131,
              (__int64)&v132,
              (__int64)&v137);
            v46 = sub_1406CBD5C((__int64)v30, v101, (unsigned __int8 *)P, (ACL **)&v136, &v111);
            if ( v46 < 0 )
              goto LABEL_59;
            v30 = (unsigned __int16 *)v136;
          }
        }
        else
        {
          v68 = *a4;
          v69 = *(_WORD *)(*a4 + 2);
          if ( (v69 & 4) != 0 )
          {
            if ( v69 >= 0 )
            {
              v30 = *(unsigned __int16 **)(v68 + 32);
            }
            else
            {
              v70 = *(unsigned int *)(v68 + 16);
              if ( (_DWORD)v70 )
                v30 = (unsigned __int16 *)(v68 + v70);
              else
                v30 = 0LL;
            }
          }
          else
          {
            v30 = 0LL;
          }
        }
        v32 = 4 * v24[1] + 8;
        v33 = 4 * v28[1] + 8;
        LODWORD(Size) = v33;
        if ( Src )
          v34 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        if ( v30 )
          v35 = (v30[1] + 3) & 0xFFFFFFFC;
        else
          v35 = 0;
        PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v32 + v33 + 20 + v35 + v34, 0x64536553u);
        v37 = PoolWithTag;
        if ( PoolWithTag )
        {
          v38 = (char *)(PoolWithTag + 5);
          v25 = !v125;
          *(_OWORD *)PoolWithTag = 0LL;
          PoolWithTag[4] = 0;
          v39 = v96;
          *(_BYTE *)v37 = 1;
          if ( !v25 )
            v39 = v96 | 0x800;
          v40 = v120;
          v41 = *((_WORD *)v37 + 1) | v39;
          *((_WORD *)v37 + 1) = v41;
          if ( (*(_WORD *)(v40 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v37 + 1) = *(_BYTE *)(v40 + 1);
            *((_WORD *)v37 + 1) = v41 | 0x4000;
          }
          if ( Src )
          {
            memmove(v37 + 5, Src, *((unsigned __int16 *)Src + 1));
            sub_140727F00(v37 + 5, v121);
            v37[3] = (_DWORD)v38 - (_DWORD)v37;
            v42 = *((unsigned __int16 *)Src + 1);
            if ( v34 > (unsigned int)v42 )
              memset(&v38[v42], 0, v34 - (unsigned int)v42);
            v38 += v34;
          }
          else
          {
            v37[3] = 0;
          }
          v43 = v134;
          if ( (v96 & 0x10) == 0 )
            *((_WORD *)v37 + 1) |= *(_WORD *)(*v134 + 2) & 0x2830;
          if ( v30 )
          {
            memmove(v38, v30, v30[1]);
            sub_140727F00(v38, v121);
            v37[4] = (_DWORD)v38 - (_DWORD)v37;
            v44 = v30[1];
            if ( v35 > (unsigned int)v44 )
              memset(&v38[v44], 0, v35 - (unsigned int)v44);
            v38 += v35;
          }
          else
          {
            v37[4] = 0;
          }
          if ( (v96 & 4) != 0 )
            goto LABEL_54;
          *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2) & 0x140C;
          if ( !(_BYTE)v124 )
            goto LABEL_54;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          v46 = RtlInitializeSid(&Sid, &PoolType, 1u);
          if ( v46 >= 0 )
          {
            v140 = 4;
            Index = 0;
            while ( 1 )
            {
              v71 = *((_WORD *)v37 + 1);
              if ( (v71 & 4) != 0 )
              {
                if ( v71 >= 0 )
                {
                  v73 = *((_QWORD *)v37 + 4);
                }
                else
                {
                  v72 = (unsigned int)v37[4];
                  v73 = (_DWORD)v72 ? (__int64)v37 + v72 : 0LL;
                }
              }
              else
              {
                v73 = 0LL;
              }
              v74 = sub_1402A47B0(v73, &Sid, &Index);
              if ( !v74 )
                break;
              v95 = v74[1] & 0xF4 | 8;
              ++Index;
              v74[1] = v95;
            }
            v43 = v134;
LABEL_54:
            memmove(v38, v126, v32);
            v37[1] = (_DWORD)v38 - (_DWORD)v37;
            v45 = &v38[v32];
            if ( !v102 )
              *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2) & 1;
            memmove(v45, v28, (unsigned int)Size);
            v25 = v103 == 0;
            v37[2] = (_DWORD)v45 - (_DWORD)v37;
            if ( v25 )
              *((_WORD *)v37 + 1) |= *(_WORD *)(*v43 + 2) & 2;
            *v43 = (__int64)v37;
            v46 = 0;
          }
        }
        else
        {
          v46 = -1073741801;
        }
LABEL_59:
        if ( v104 )
          ExFreePoolWithTag(v135, 0);
        v12 = Src;
        goto LABEL_62;
      }
      v46 = sub_1409BA380(v19);
      if ( v46 < 0 )
        goto LABEL_77;
      v57 = Index;
    }
    v58 = a5;
    goto LABEL_89;
  }
  if ( v56 )
  {
    Index = 0;
    while ( 1 )
    {
      v82 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
      v113 = v82;
      if ( v82 )
      {
        if ( (*((_DWORD *)v82 + 1) & 0xFF000000) != 0 )
          goto LABEL_193;
        if ( !sub_14025ACE4(v56, (__int64)v82 + 8, v83, &v115) )
          break;
        v82 = v113;
      }
      ++Index;
      if ( !v82 )
        goto LABEL_87;
    }
  }
  v46 = -1073741790;
LABEL_77:
  if ( v127 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v46;
}
