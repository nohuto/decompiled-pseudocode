/*
 * XREFs of RtlpSetSecurityObject @ 0x180079E78
 * Callers:
 *     RtlSetSecurityObject @ 0x180079E40 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x18008C6A0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800136C4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlFindAceByType @ 0x180015720 (RtlFindAceByType.c)
 *     RtlValidSid @ 0x18001B310 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpValidTrustSubjectContext @ 0x180068748 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068E18 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18007A4D8 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008BE44 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A1400 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpCreateServerAcl @ 0x1800F2C28 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1800F31C0 (RtlpNormalizeAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F347C (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800F46B4 (RtlFindAceBySid.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        size_t a8)
{
  BOOL v8; // r11d
  size_t v10; // rbx
  __int16 v12; // r14
  __int16 v13; // dx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int8 *v16; // r15
  void *ProcessHeap; // r12
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  _BYTE *v22; // rax
  __int64 v23; // rax
  _BYTE *v24; // rcx
  unsigned __int8 *v25; // rdi
  __int16 v26; // cx
  unsigned __int16 *v27; // r15
  char v28; // si
  int v29; // ecx
  int v30; // r8d
  unsigned int v31; // ebx
  unsigned int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int16 *v35; // rsi
  __int16 v36; // ax
  __int64 v37; // r12
  void *v38; // rcx
  __int64 v39; // rdx
  int v40; // r12d
  int v41; // r12d
  __int64 v42; // rcx
  __int64 *v43; // r14
  __int64 v44; // rbx
  char *v45; // rsi
  int v46; // eax
  char *v47; // rsi
  int ServerAcl; // ebx
  unsigned __int8 *v49; // r15
  __int64 v51; // r8
  __int64 v52; // rax
  __int16 v53; // dx
  __int64 v54; // rcx
  int v55; // esi
  unsigned int v56; // eax
  unsigned int v57; // eax
  void *v58; // rax
  __int64 v59; // r8
  void *v60; // rax
  unsigned __int8 *v61; // r15
  unsigned __int8 *v62; // rax
  unsigned __int8 *v63; // rdi
  __int64 v64; // r8
  size_t v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // r15
  unsigned __int8 *AceByType; // rax
  __int64 v69; // r8
  unsigned __int8 *v70; // rbx
  unsigned __int8 *v71; // r15
  int v72; // edi
  unsigned int v73; // edx
  unsigned __int8 *v74; // rax
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // edx
  __int16 v79; // ax
  __int64 v80; // r8
  unsigned __int8 *v81; // rdx
  _QWORD *Heap; // rdi
  __int64 v83; // r8
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 AceBySid; // rax
  char v88; // cl
  char v89; // [rsp+50h] [rbp-B0h]
  char v90[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 *v91; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v92; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v93; // [rsp+64h] [rbp-9Ch]
  char v94; // [rsp+65h] [rbp-9Bh]
  char v95; // [rsp+66h] [rbp-9Ah]
  char v96; // [rsp+67h] [rbp-99h]
  char v97; // [rsp+68h] [rbp-98h]
  char v98; // [rsp+69h] [rbp-97h]
  char v99; // [rsp+6Ah] [rbp-96h]
  char v100; // [rsp+6Bh] [rbp-95h]
  char v101; // [rsp+6Ch] [rbp-94h]
  unsigned __int8 *v102; // [rsp+70h] [rbp-90h] BYREF
  int InformationToken; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v104; // [rsp+80h] [rbp-80h] BYREF
  bool v105; // [rsp+88h] [rbp-78h]
  bool v106; // [rsp+89h] [rbp-77h]
  int v107; // [rsp+90h] [rbp-70h] BYREF
  int v108; // [rsp+98h] [rbp-68h]
  void *v109; // [rsp+A0h] [rbp-60h]
  void *v110; // [rsp+A8h] [rbp-58h]
  __int64 *v111; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v112; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  void *Src; // [rsp+C8h] [rbp-38h]
  size_t v115; // [rsp+D0h] [rbp-30h]
  __int16 v116; // [rsp+D8h] [rbp-28h]
  _DWORD Size[3]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v118; // [rsp+E8h] [rbp-18h]
  BOOL v119; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v120; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 *v121; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int8 *v122; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v123; // [rsp+108h] [rbp+8h] BYREF
  __int64 v124; // [rsp+110h] [rbp+10h] BYREF
  char v125[8]; // [rsp+118h] [rbp+18h] BYREF
  _WORD *v126; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v127; // [rsp+128h] [rbp+28h] BYREF
  void *v128; // [rsp+130h] [rbp+30h]
  __int64 v129; // [rsp+138h] [rbp+38h]
  _BYTE v130[24]; // [rsp+140h] [rbp+40h] BYREF
  int v131; // [rsp+158h] [rbp+58h]
  int v132; // [rsp+15Ch] [rbp+5Ch]
  char v133[8]; // [rsp+178h] [rbp+78h] BYREF
  int v134; // [rsp+180h] [rbp+80h]

  v10 = a8;
  v108 = a5;
  v12 = 0x8000;
  v13 = *(_WORD *)(a3 + 2);
  v129 = a3;
  v113 = a7;
  LOBYTE(v8) = 0;
  v111 = a4;
  v115 = a8;
  v95 = 0;
  v94 = 0;
  v90[0] = 0;
  v89 = 0;
  v101 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v120 = 0LL;
  Src = 0LL;
  v126 = 0LL;
  v102 = 0LL;
  v121 = 0LL;
  v104 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v93 = 0;
  LOBYTE(v118) = 0;
  v119 = v8;
  v124 = 0LL;
  if ( (v13 & 0x10) == 0 )
    goto LABEL_2;
  if ( v13 >= 0 )
  {
    v14 = *(unsigned __int8 **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (unsigned __int8 *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = *a4;
  v112 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_75:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (unsigned __int8 *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_75;
  }
  v16 = *(unsigned __int8 **)(v15 + 24);
LABEL_7:
  *(_QWORD *)&Size[1] = 0LL;
  v91 = v16;
  v127 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v128 = ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v116 = v13 & 0x80;
  v105 = v116 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v106 = (v13 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v55 = a2 | 0x1FF;
    v56 = v55 & 0xFFFFFF7F;
    if ( v18 )
      v56 = v55;
    a2 = v56 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v56;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v13 & 0x10) != 0 )
        a2 |= 8u;
      else
        v119 = (v13 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v20 = *(unsigned int *)(v15 + 4);
    v21 = v15 + v20 == 0;
    v22 = (_BYTE *)(v15 + v20);
    v110 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v57 = a2 >> 2;
  LOBYTE(v57) = (a2 & 4) == 0;
  v118 = v57;
  if ( v13 >= 0 )
  {
    v58 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v110 = 0LL;
      goto LABEL_108;
    }
    v58 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v110 = v58;
LABEL_108:
  v94 = 1;
  if ( (v108 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v130, 56LL, v125);
    ServerAcl = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)ServerAcl;
    if ( v131 == 2 && v132 < 1 )
      return (unsigned int)-1073741659;
    v10 = v115;
    LOBYTE(v59) = v105;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v115, v110, v59, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v22 = v110;
LABEL_12:
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v60 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v109 = 0LL;
LABEL_121:
        v24 = v109;
        v95 = 1;
        goto LABEL_18;
      }
      v60 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v109 = v60;
    goto LABEL_121;
  }
  v23 = *v111;
  if ( *(__int16 *)(*v111 + 2) >= 0 )
  {
    v24 = *(_BYTE **)(v23 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v23 + 8) )
    {
LABEL_249:
      ServerAcl = -1073741733;
      goto LABEL_61;
    }
    v24 = (_BYTE *)(v23 + *(unsigned int *)(v23 + 8));
  }
  v109 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_249;
  if ( !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v25 = v104;
    Src = v16;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v85 = *v111;
      if ( (*(_BYTE *)(*v111 + 2) & 4) != 0 )
      {
        if ( *(__int16 *)(v85 + 2) >= 0 )
        {
          v27 = *(unsigned __int16 **)(v85 + 32);
          goto LABEL_30;
        }
        if ( *(_DWORD *)(v85 + 16) )
        {
          v27 = (unsigned __int16 *)(v85 + *(unsigned int *)(v85 + 16));
          goto LABEL_30;
        }
      }
      v27 = 0LL;
      goto LABEL_30;
    }
    v26 = *(_WORD *)(a3 + 2);
    if ( (v108 & 1) == 0 )
    {
      if ( (v26 & 4) == 0 )
        goto LABEL_212;
      if ( v26 >= 0 )
      {
        v27 = *(unsigned __int16 **)(a3 + 32);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a3 + 16) )
        v27 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
      else
LABEL_212:
        v27 = 0LL;
LABEL_27:
      v28 = 0;
      v12 |= v26 & 0x1000 | 4;
      if ( (v26 & 0x500) == 0x500 )
        v12 |= 0x400u;
      goto LABEL_29;
    }
    if ( (v26 & 4) == 0 )
      goto LABEL_208;
    if ( v26 >= 0 )
    {
      v51 = *(_QWORD *)(a3 + 32);
      goto LABEL_80;
    }
    if ( *(_DWORD *)(a3 + 16) )
      LODWORD(v51) = a3 + *(_DWORD *)(a3 + 16);
    else
LABEL_208:
      LODWORD(v51) = 0;
LABEL_80:
    v52 = *v111;
    v53 = *(_WORD *)(*v111 + 2);
    if ( (v53 & 4) == 0 )
      goto LABEL_210;
    if ( v53 >= 0 )
    {
      v54 = *(_QWORD *)(v52 + 32);
      goto LABEL_84;
    }
    if ( *(_DWORD *)(v52 + 16) )
      LODWORD(v54) = v52 + *(_DWORD *)(v52 + 16);
    else
LABEL_210:
      LODWORD(v54) = 0;
LABEL_84:
    ServerAcl = RtlpComputeMergedAcl(
                  v54,
                  v53 & 0x140C,
                  v51,
                  *(_WORD *)(a3 + 2) & 0x140C,
                  (__int64)v110,
                  (__int64)v109,
                  v113,
                  1,
                  (__int64)&v120,
                  (__int64)&v107);
    if ( ServerAcl < 0 )
      goto LABEL_62;
    v28 = 1;
    v89 = 1;
    v27 = v120;
    v12 |= v107 & 0x1408 | 4;
LABEL_29:
    if ( v116 )
    {
      LODWORD(v112) = 76;
      Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 76LL);
      if ( !Heap )
      {
LABEL_218:
        ServerAcl = -1073741801;
        goto LABEL_59;
      }
      ServerAcl = NtOpenProcessToken(-1LL, 8LL, &Size[1]);
      v83 = (__int64)Heap;
      if ( ServerAcl >= 0 )
      {
        ServerAcl = NtQueryInformationToken(*(_QWORD *)&Size[1], 4LL, Heap, (unsigned int)v112, &v112);
        NtClose(*(HANDLE *)&Size[1]);
        if ( ServerAcl >= 0 )
        {
          LOBYTE(v84) = v106;
          ServerAcl = RtlpCreateServerAcl((_DWORD)v27, v84, *Heap, (unsigned int)&v124, (__int64)v90);
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
          if ( ServerAcl < 0 )
          {
LABEL_59:
            if ( v89 )
              RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v120);
            goto LABEL_61;
          }
          if ( v90[0] )
          {
            if ( v28 )
              RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v120);
            v120 = (unsigned __int16 *)v124;
            v90[0] = 0;
            v89 = 1;
          }
          v27 = (unsigned __int16 *)v124;
          goto LABEL_30;
        }
        v83 = (__int64)Heap;
      }
      RtlFreeHeap((__int64)ProcessHeap, 0, v83);
      goto LABEL_59;
    }
LABEL_30:
    v29 = 4 * *((unsigned __int8 *)v110 + 1) + 8;
    Size[0] = v29;
    v30 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
    LODWORD(v115) = v30;
    if ( Src )
      v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v27 )
      v32 = (v27[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v30 + v31 + v32 + v29 + 20);
    v34 = v33;
    if ( v33 )
    {
      v35 = (unsigned __int16 *)(v33 + 20);
      *(_OWORD *)v33 = 0LL;
      *(_DWORD *)(v33 + 16) = 0;
      *(_BYTE *)v33 = 1;
      if ( v119 )
        v12 |= 0x800u;
      v36 = *(_WORD *)(v33 + 2) | v12;
      *(_WORD *)(v34 + 2) = v36;
      if ( (*(_WORD *)(v129 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v34 + 1) = *(_BYTE *)(v129 + 1);
        *(_WORD *)(v34 + 2) = v36 | 0x4000;
      }
      if ( !Src )
        goto LABEL_87;
      v37 = v34 + 20;
      v38 = (void *)(v34 + 20);
      if ( (v108 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v38, Src, v113);
        if ( *(_WORD *)(v34 + 24) )
        {
          v31 = *(unsigned __int16 *)(v34 + 22);
        }
        else
        {
          v37 = 0LL;
          v31 = 0;
        }
      }
      else
      {
        memmove(v38, Src, *((unsigned __int16 *)Src + 1));
        RtlpApplyAclToObject(v34 + 20, v113);
        v39 = *((unsigned __int16 *)Src + 1);
        if ( v31 > (unsigned int)v39 )
          memset_thunk_772440563353939046((char *)v35 + v39, 0, v31 - (unsigned int)v39);
      }
      if ( v37 )
      {
        v35 = (unsigned __int16 *)((char *)v35 + v31);
        v40 = v37 - v34;
      }
      else
      {
LABEL_87:
        v40 = 0;
      }
      *(_DWORD *)(v34 + 12) = v40;
      if ( (v12 & 0x10) == 0 )
        *(_WORD *)(v34 + 2) |= *(_WORD *)(*v111 + 2) & 0x2830;
      if ( v27 )
      {
        memmove(v35, v27, v27[1]);
        RtlpApplyAclToObject(v35, v113);
        v41 = v34;
        *(_DWORD *)(v34 + 16) = (_DWORD)v35 - v34;
        v42 = v27[1];
        if ( v32 > (unsigned int)v42 )
          memset_thunk_772440563353939046((char *)v35 + v42, 0, v32 - (unsigned int)v42);
      }
      else
      {
        *(_DWORD *)(v34 + 16) = 0;
        v41 = v34;
      }
      v21 = (v12 & 4) == 0;
      v43 = v111;
      if ( v21 && (*(_WORD *)(v34 + 2) |= *(_WORD *)(*v111 + 2) & 0x140C, (_BYTE)v118) )
      {
        LODWORD(v91) = 0;
        WORD2(v91) = 768;
        ServerAcl = RtlInitializeSid((__int64)v133, (__int64)&v91, 1u);
        if ( ServerAcl >= 0 )
        {
          v92 = 0;
          v134 = 4;
          while ( 1 )
          {
            if ( (*(_BYTE *)(v34 + 2) & 4) == 0 )
              goto LABEL_243;
            if ( *(__int16 *)(v34 + 2) < 0 )
              break;
            v86 = *(_QWORD *)(v34 + 32);
LABEL_245:
            AceBySid = RtlFindAceBySid(v86, v133, &v92, 0LL);
            if ( !AceBySid )
            {
              v43 = v111;
              goto LABEL_51;
            }
            v88 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
            ++v92;
            *(_BYTE *)(AceBySid + 1) = v88;
          }
          if ( *(_DWORD *)(v34 + 16) )
          {
            v86 = v34 + *(unsigned int *)(v34 + 16);
            goto LABEL_245;
          }
LABEL_243:
          v86 = 0LL;
          goto LABEL_245;
        }
        ProcessHeap = v128;
      }
      else
      {
LABEL_51:
        if ( *(_DWORD *)(v34 + 16) && (v108 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl(v35, v35, 0LL);
          v32 = v35[1];
        }
        v44 = Size[0];
        v45 = (char *)v35 + v32;
        memmove(v45, v110, Size[0]);
        v46 = (int)v45;
        v47 = &v45[v44];
        ServerAcl = 0;
        *(_DWORD *)(v34 + 4) = v46 - v41;
        if ( !v94 )
          *(_WORD *)(v34 + 2) |= *(_WORD *)(*v43 + 2) & 1;
        memmove(v47, v109, (unsigned int)v115);
        *(_DWORD *)(v34 + 8) = (_DWORD)v47 - v41;
        if ( !v95 )
          *(_WORD *)(v34 + 2) |= *(_WORD *)(*v43 + 2) & 2;
        ProcessHeap = v128;
        RtlFreeHeap((__int64)v128, 0, *v43);
        *v43 = v34;
      }
      goto LABEL_59;
    }
    goto LABEL_218;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_141:
    InformationToken = RtlpGetDefaultTrustSubjectContext(v10, (__int64 *)&v127);
    ServerAcl = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)ServerAcl;
    v66 = (__int64)v127;
    LODWORD(v115) = a2 & 0x80;
    v67 = *v127;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v67 )
      {
LABEL_181:
        ServerAcl = -1073741790;
        goto LABEL_183;
      }
      v92 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v112, 20, &v92);
        v70 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            ServerAcl = -1073740730;
            goto LABEL_183;
          }
          if ( !RtlpValidTrustSubjectContext(v67, (__int64)(AceByType + 8), v69, &InformationToken) )
            goto LABEL_181;
        }
        ++v92;
      }
      while ( v70 );
    }
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
    {
      ServerAcl = RtlpValidFilterAclSubjectContext((__int64)v112, v67);
      if ( ServerAcl < 0
        || (v108 & 2) == 0 && (ServerAcl = RtlpValidFilterAclSubjectContext((__int64)v91, v67), ServerAcl < 0) )
      {
LABEL_183:
        v80 = v66;
        goto LABEL_185;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v66);
    v71 = v112;
    v72 = v108 & 2;
    if ( (a2 & 8) != 0 )
    {
      v73 = *(unsigned __int16 *)(a3 + 2);
      if ( (v108 & 2) != 0 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      (_DWORD)v91,
                      (*(_WORD *)(*v111 + 2) & 0x2800 | (*(unsigned __int16 *)(*v111 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v112,
                      (v73 & 0x2800 | (v73 >> 1) & 0x18) >> 1,
                      (__int64)v110,
                      (__int64)v109,
                      v113,
                      2,
                      (__int64)&v102,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_61;
        v96 = 1;
        v12 = 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 0x2004)));
      }
      else
      {
        v102 = v112;
        v12 = v73 & 0x2000 | 0x8010;
        if ( (v73 & 0xA00) == 0xA00 )
          v12 = v73 & 0x2000 | 0x8810;
      }
      v74 = v91;
    }
    else
    {
      v74 = v91;
      v102 = v91;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v75 = *(unsigned __int16 *)(a3 + 2);
      if ( v72 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      (_DWORD)v91,
                      (*(_WORD *)(*v111 + 2) & 0x800 | (*(unsigned __int16 *)(*v111 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v71,
                      (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                      (__int64)v110,
                      (__int64)v109,
                      v113,
                      2,
                      (__int64)&v104,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_61;
        v97 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v104 = v71;
        v12 |= v75 & 0x2000 | 0x10;
        if ( (v75 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v74 = v91;
    }
    else
    {
      v104 = v74;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v76 = *(unsigned __int16 *)(a3 + 2);
      if ( v72 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      (_DWORD)v91,
                      (*(_WORD *)(*v111 + 2) & 0x800 | (*(unsigned __int16 *)(*v111 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v71,
                      (v76 & 0x800 | (v76 >> 1) & 0x18) >> 1,
                      (__int64)v110,
                      (__int64)v109,
                      v113,
                      2,
                      (__int64)&v121,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_61;
        v98 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v121 = v71;
        v12 |= v76 & 0x2000 | 0x10;
        if ( (v76 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v74 = v91;
    }
    else
    {
      v121 = v74;
    }
    if ( (_DWORD)v115 )
    {
      v77 = *(unsigned __int16 *)(a3 + 2);
      if ( v72 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      (_DWORD)v91,
                      (*(_WORD *)(*v111 + 2) & 0x800 | (*(unsigned __int16 *)(*v111 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v71,
                      (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                      (__int64)v110,
                      (__int64)v109,
                      v113,
                      2,
                      (__int64)&v122,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_61;
        v99 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v122 = v71;
        v12 |= v77 & 0x2000 | 0x10;
        if ( (v77 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v74 = v91;
    }
    else
    {
      v122 = v74;
    }
    if ( !InformationToken )
    {
      v123 = v74;
      goto LABEL_178;
    }
    v78 = *(unsigned __int16 *)(a3 + 2);
    if ( !v72 )
    {
      v123 = v71;
      v12 |= v78 & 0x2000 | 0x10;
      if ( (v78 & 0xA00) == 0xA00 )
        v12 |= 0x800u;
      goto LABEL_177;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  (_DWORD)v91,
                  (*(_WORD *)(*v111 + 2) & 0x800 | (*(unsigned __int16 *)(*v111 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v71,
                  (v78 & 0x800 | (v78 >> 1) & 0x18) >> 1,
                  (__int64)v110,
                  (__int64)v109,
                  v113,
                  2,
                  (__int64)&v123,
                  (__int64)&v107);
    if ( ServerAcl >= 0 )
    {
      v100 = 1;
      v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
LABEL_177:
      v74 = v91;
LABEL_178:
      if ( Size[0] )
      {
        v79 = *(_WORD *)(a3 + 2);
        v12 |= v79 & 0x2000 | 0x10;
        if ( (v79 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      else
      {
        v71 = v74;
      }
      v25 = v104;
      v81 = v71;
      v49 = v102;
      ServerAcl = RtlpCombineAcls(v102, v81, v104, v121, v122, v123, (__int64 *)&v126, 0LL);
      if ( ServerAcl < 0 )
        goto LABEL_63;
      Src = v126;
      if ( !v49 && v126 && !v126[2] )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v126);
        Src = 0LL;
      }
      v101 = 1;
      goto LABEL_22;
    }
LABEL_61:
    v25 = v104;
LABEL_62:
    v49 = v102;
LABEL_63:
    if ( v49 && v96 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v49);
    if ( v25 && v97 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v25);
    if ( v121 && v98 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v121);
    if ( v122 && v99 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v122);
    if ( v123 && v100 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v123);
    if ( Src && v101 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Src);
    if ( !v90[0] )
      return (unsigned int)ServerAcl;
    v80 = v124;
LABEL_185:
    RtlFreeHeap((__int64)ProcessHeap, 0, v80);
    return (unsigned int)ServerAcl;
  }
  v92 = 0;
  v61 = 0LL;
  while ( 1 )
  {
    v62 = RtlFindAceByType((__int64)v14, 17, &v92);
    v63 = v62;
    if ( v62 )
    {
      v21 = (*((_DWORD *)v62 + 1) & 0xFFFFFFF8) == 0;
      v61 = v62 + 8;
      v93 = v62[1];
      if ( !v21 )
        break;
    }
    if ( v10 )
    {
      InformationToken = NtQueryInformationToken(v10, 10LL, v130, 56LL, v125);
      ServerAcl = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)ServerAcl;
      if ( v131 == 2 && v132 < 1 )
        return (unsigned int)-1073741659;
      v10 = v115;
      v65 = v115;
    }
    else
    {
      InformationToken = NtOpenProcessToken(-1LL, 8LL, &Size[1]);
      ServerAcl = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)ServerAcl;
      v65 = *(_QWORD *)&Size[1];
      v10 = v115;
    }
    LOBYTE(v64) = v93;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v65, v61, v64, &InformationToken) )
    {
      NtClose(*(HANDLE *)&Size[1]);
      break;
    }
    NtClose(*(HANDLE *)&Size[1]);
    ++v92;
    if ( !v63 )
      goto LABEL_141;
    v14 = v112;
  }
  return (unsigned int)-1073740730;
}
