/*
 * XREFs of RtlpSetSecurityObject @ 0x18007A4E8
 * Callers:
 *     RtlSetSecurityObject @ 0x18007A4B0 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x18008CEA0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     RtlpCombineAcls @ 0x180012E6C (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800134B4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlFindAceByType @ 0x180015510 (RtlFindAceByType.c)
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpValidTrustSubjectContext @ 0x180068728 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068DF8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18007AB48 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800854DC (RtlpValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008C644 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A34C0 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpCreateServerAcl @ 0x1800F4038 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1800F45D0 (RtlpNormalizeAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F488C (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800F5AC4 (RtlFindAceBySid.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        int a5,
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v10; // rbx
  __int16 v12; // r14
  __int16 v13; // dx
  ACL *v14; // rdi
  char *v15; // rcx
  ACL *v16; // r15
  void *ProcessHeap; // r12
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  char *v22; // rax
  _QWORD *v23; // rax
  char *v24; // rcx
  PVOID v25; // rdi
  __int16 v26; // cx
  unsigned __int16 *v27; // r15
  char v28; // si
  int v29; // ecx
  int v30; // r8d
  unsigned int v31; // ebx
  unsigned int v32; // r13d
  unsigned __int16 *v33; // rax
  unsigned __int16 *v34; // rdi
  unsigned __int16 *v35; // rsi
  unsigned __int16 v36; // ax
  char *v37; // r12
  void *v38; // rcx
  __int64 v39; // rdx
  int v40; // r12d
  int v41; // r12d
  __int64 v42; // rcx
  PVOID *v43; // r14
  __int64 v44; // rbx
  char *v45; // rsi
  int v46; // eax
  char *v47; // rsi
  int InformationToken; // ebx
  PVOID v49; // r15
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int16 v53; // dx
  __int64 v54; // rcx
  int v55; // esi
  unsigned int v56; // eax
  unsigned int v57; // eax
  void *v58; // rax
  __int64 v59; // r8
  void *v60; // rax
  void *v61; // r15
  _DWORD *v62; // rax
  _DWORD *v63; // rdi
  void *v64; // rcx
  PVOID v65; // rdi
  void *v66; // r15
  _DWORD *AceByType; // rax
  __int64 v68; // r8
  _DWORD *v69; // rbx
  PACL v70; // r15
  int v71; // edi
  unsigned int v72; // edx
  PACL v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  __int16 v78; // ax
  PVOID v79; // r8
  unsigned __int8 *v80; // rdx
  _QWORD *Heap; // rdi
  void *v82; // r8
  int v83; // edx
  char *v84; // rax
  char *v85; // rcx
  __int64 AceBySid; // rax
  char v87; // cl
  char v88; // [rsp+50h] [rbp-B0h]
  char v89[7]; // [rsp+51h] [rbp-AFh] BYREF
  PACL IdentifierAuthority; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Index; // [rsp+60h] [rbp-A0h] BYREF
  char v92; // [rsp+64h] [rbp-9Ch]
  char v93; // [rsp+65h] [rbp-9Bh]
  char v94; // [rsp+66h] [rbp-9Ah]
  char v95; // [rsp+67h] [rbp-99h]
  char v96; // [rsp+68h] [rbp-98h]
  char v97; // [rsp+69h] [rbp-97h]
  char v98; // [rsp+6Ah] [rbp-96h]
  char v99; // [rsp+6Bh] [rbp-95h]
  char v100; // [rsp+6Ch] [rbp-94h]
  PVOID v101; // [rsp+70h] [rbp-90h] BYREF
  NTSTATUS DefaultTrustSubjectContext; // [rsp+78h] [rbp-88h] BYREF
  PVOID v103; // [rsp+80h] [rbp-80h] BYREF
  bool v104; // [rsp+88h] [rbp-78h]
  bool v105; // [rsp+89h] [rbp-77h]
  int v106; // [rsp+90h] [rbp-70h] BYREF
  int v107; // [rsp+98h] [rbp-68h]
  void *v108; // [rsp+A0h] [rbp-60h]
  void *v109; // [rsp+A8h] [rbp-58h]
  PVOID *v110; // [rsp+B0h] [rbp-50h]
  PACL Acl; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v112; // [rsp+C0h] [rbp-40h]
  void *Src; // [rsp+C8h] [rbp-38h]
  size_t v114; // [rsp+D0h] [rbp-30h]
  __int16 v115; // [rsp+D8h] [rbp-28h]
  _DWORD Size[3]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v117; // [rsp+E8h] [rbp-18h]
  BOOL v118; // [rsp+ECh] [rbp-14h]
  PVOID BaseAddress; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v120; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v121; // [rsp+100h] [rbp+0h] BYREF
  PVOID v122; // [rsp+108h] [rbp+8h] BYREF
  PVOID v123; // [rsp+110h] [rbp+10h] BYREF
  ULONG ReturnLength; // [rsp+118h] [rbp+18h] BYREF
  PVOID v125; // [rsp+120h] [rbp+20h] BYREF
  PVOID v126; // [rsp+128h] [rbp+28h] BYREF
  PVOID HeapHandle; // [rsp+130h] [rbp+30h]
  __int64 v128; // [rsp+138h] [rbp+38h]
  _BYTE TokenInformation[24]; // [rsp+140h] [rbp+40h] BYREF
  int v130; // [rsp+158h] [rbp+58h]
  int v131; // [rsp+15Ch] [rbp+5Ch]
  char Sid[8]; // [rsp+178h] [rbp+78h] BYREF
  int v133; // [rsp+180h] [rbp+80h]

  v10 = TokenHandle;
  v107 = a5;
  v12 = 0x8000;
  v13 = *(_WORD *)(a3 + 2);
  v128 = a3;
  v112 = a7;
  LOBYTE(v8) = 0;
  v110 = a4;
  v114 = (size_t)TokenHandle;
  v94 = 0;
  v93 = 0;
  v89[0] = 0;
  v88 = 0;
  v100 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v125 = 0LL;
  v101 = 0LL;
  v120 = 0LL;
  v103 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v92 = 0;
  LOBYTE(v117) = 0;
  v118 = v8;
  v123 = 0LL;
  if ( (v13 & 0x10) == 0 )
    goto LABEL_2;
  if ( v13 >= 0 )
  {
    v14 = *(ACL **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = (char *)*a4;
  Acl = v14;
  if ( (v15[2] & 0x10) == 0 )
  {
LABEL_75:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v15 + 1) < 0 )
  {
    if ( *((_DWORD *)v15 + 3) )
    {
      v16 = (ACL *)&v15[*((unsigned int *)v15 + 3)];
      goto LABEL_7;
    }
    goto LABEL_75;
  }
  v16 = (ACL *)*((_QWORD *)v15 + 3);
LABEL_7:
  *(_QWORD *)&Size[1] = 0LL;
  IdentifierAuthority = v16;
  v126 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v115 = v13 & 0x80;
  v104 = v115 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v105 = (v13 & 0x40) != 0;
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
        v118 = (v13 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*((_DWORD *)v15 + 1) )
      return (unsigned int)-1073741734;
    v20 = *((unsigned int *)v15 + 1);
    v21 = &v15[v20] == 0LL;
    v22 = &v15[v20];
    v109 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v57 = a2 >> 2;
  LOBYTE(v57) = (a2 & 4) == 0;
  v117 = v57;
  if ( v13 >= 0 )
  {
    v58 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v109 = 0LL;
      goto LABEL_108;
    }
    v58 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v109 = v58;
LABEL_108:
  v93 = 1;
  if ( (v107 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    InformationToken = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)InformationToken;
    if ( v130 == 2 && v131 < 1 )
      return (unsigned int)-1073741659;
    v10 = (HANDLE)v114;
    LOBYTE(v59) = v104;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v114, v109, v59, &DefaultTrustSubjectContext) )
      return (unsigned int)-1073741734;
  }
  v22 = (char *)v109;
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
        v108 = 0LL;
LABEL_121:
        v24 = (char *)v108;
        v94 = 1;
        goto LABEL_18;
      }
      v60 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v108 = v60;
    goto LABEL_121;
  }
  v23 = *v110;
  if ( *((__int16 *)*v110 + 1) >= 0 )
  {
    v24 = (char *)v23[2];
  }
  else
  {
    if ( !*((_DWORD *)v23 + 2) )
    {
LABEL_249:
      InformationToken = -1073741733;
      goto LABEL_61;
    }
    v24 = (char *)v23 + *((unsigned int *)v23 + 2);
  }
  v108 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_249;
  if ( !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v25 = v103;
    Src = v16;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v84 = (char *)*v110;
      if ( (*((_BYTE *)*v110 + 2) & 4) != 0 )
      {
        if ( *((__int16 *)v84 + 1) >= 0 )
        {
          v27 = (unsigned __int16 *)*((_QWORD *)v84 + 4);
          goto LABEL_30;
        }
        if ( *((_DWORD *)v84 + 4) )
        {
          v27 = (unsigned __int16 *)&v84[*((unsigned int *)v84 + 4)];
          goto LABEL_30;
        }
      }
      v27 = 0LL;
      goto LABEL_30;
    }
    v26 = *(_WORD *)(a3 + 2);
    if ( (v107 & 1) == 0 )
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
    v52 = *v110;
    v53 = *((_WORD *)*v110 + 1);
    if ( (v53 & 4) == 0 )
      goto LABEL_210;
    if ( v53 >= 0 )
    {
      v54 = v52[4];
      goto LABEL_84;
    }
    if ( *((_DWORD *)v52 + 4) )
      LODWORD(v54) = (_DWORD)v52 + *((_DWORD *)v52 + 4);
    else
LABEL_210:
      LODWORD(v54) = 0;
LABEL_84:
    InformationToken = RtlpComputeMergedAcl(
                         v54,
                         v53 & 0x140C,
                         v51,
                         *(_WORD *)(a3 + 2) & 0x140C,
                         (__int64)v109,
                         (__int64)v108,
                         v112,
                         1,
                         (__int64)&BaseAddress,
                         (__int64)&v106);
    if ( InformationToken < 0 )
      goto LABEL_62;
    v28 = 1;
    v88 = 1;
    v27 = (unsigned __int16 *)BaseAddress;
    v12 |= v106 & 0x1408 | 4;
LABEL_29:
    if ( v115 )
    {
      LODWORD(Acl) = 76;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
      if ( !Heap )
      {
LABEL_218:
        InformationToken = -1073741801;
        goto LABEL_59;
      }
      InformationToken = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, (PHANDLE)&Size[1]);
      v82 = Heap;
      if ( InformationToken >= 0 )
      {
        InformationToken = NtQueryInformationToken(*(HANDLE *)&Size[1], 4u, Heap, (ULONG)Acl, (PULONG)&Acl);
        NtClose(*(HANDLE *)&Size[1]);
        if ( InformationToken >= 0 )
        {
          LOBYTE(v83) = v105;
          InformationToken = RtlpCreateServerAcl((_DWORD)v27, v83, *Heap, (unsigned int)&v123, (__int64)v89);
          RtlFreeHeap(ProcessHeap, 0, Heap);
          if ( InformationToken < 0 )
          {
LABEL_59:
            if ( v88 )
              RtlFreeHeap(ProcessHeap, 0, BaseAddress);
            goto LABEL_61;
          }
          if ( v89[0] )
          {
            if ( v28 )
              RtlFreeHeap(ProcessHeap, 0, BaseAddress);
            BaseAddress = v123;
            v89[0] = 0;
            v88 = 1;
          }
          v27 = (unsigned __int16 *)v123;
          goto LABEL_30;
        }
        v82 = Heap;
      }
      RtlFreeHeap(ProcessHeap, 0, v82);
      goto LABEL_59;
    }
LABEL_30:
    v29 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
    Size[0] = v29;
    v30 = 4 * *((unsigned __int8 *)v108 + 1) + 8;
    LODWORD(v114) = v30;
    if ( Src )
      v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v27 )
      v32 = (v27[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = (unsigned __int16 *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v30 + v31 + v32 + v29 + 20);
    v34 = v33;
    if ( v33 )
    {
      v35 = v33 + 10;
      *(_OWORD *)v33 = 0LL;
      *((_DWORD *)v33 + 4) = 0;
      *(_BYTE *)v33 = 1;
      if ( v118 )
        v12 |= 0x800u;
      v36 = v33[1] | v12;
      v34[1] = v36;
      if ( (*(_WORD *)(v128 + 2) & 0x4000) != 0 )
      {
        *((_BYTE *)v34 + 1) = *(_BYTE *)(v128 + 1);
        v34[1] = v36 | 0x4000;
      }
      if ( !Src )
        goto LABEL_87;
      v37 = (char *)(v34 + 10);
      v38 = v34 + 10;
      if ( (v107 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v38, Src, v112);
        if ( v34[12] )
        {
          v31 = v34[11];
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
        RtlpApplyAclToObject(v34 + 10, v112);
        v39 = *((unsigned __int16 *)Src + 1);
        if ( v31 > (unsigned int)v39 )
          memset_thunk_772440563353939046((char *)v35 + v39, 0, v31 - (unsigned int)v39);
      }
      if ( v37 )
      {
        v35 = (unsigned __int16 *)((char *)v35 + v31);
        v40 = (_DWORD)v37 - (_DWORD)v34;
      }
      else
      {
LABEL_87:
        v40 = 0;
      }
      *((_DWORD *)v34 + 3) = v40;
      if ( (v12 & 0x10) == 0 )
        v34[1] |= *((_WORD *)*v110 + 1) & 0x2830;
      if ( v27 )
      {
        memmove(v35, v27, v27[1]);
        RtlpApplyAclToObject(v35, v112);
        v41 = (int)v34;
        *((_DWORD *)v34 + 4) = (_DWORD)v35 - (_DWORD)v34;
        v42 = v27[1];
        if ( v32 > (unsigned int)v42 )
          memset_thunk_772440563353939046((char *)v35 + v42, 0, v32 - (unsigned int)v42);
      }
      else
      {
        *((_DWORD *)v34 + 4) = 0;
        v41 = (int)v34;
      }
      v21 = (v12 & 4) == 0;
      v43 = v110;
      if ( v21 && (v34[1] |= *((_WORD *)*v110 + 1) & 0x140C, (_BYTE)v117) )
      {
        LODWORD(IdentifierAuthority) = 0;
        WORD2(IdentifierAuthority) = 768;
        InformationToken = RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
        if ( InformationToken >= 0 )
        {
          Index = 0;
          v133 = 4;
          while ( 1 )
          {
            if ( (v34[1] & 4) == 0 )
              goto LABEL_243;
            if ( (v34[1] & 0x8000u) != 0 )
              break;
            v85 = (char *)*((_QWORD *)v34 + 4);
LABEL_245:
            AceBySid = RtlFindAceBySid(v85, Sid, &Index, 0LL);
            if ( !AceBySid )
            {
              v43 = v110;
              goto LABEL_51;
            }
            v87 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
            ++Index;
            *(_BYTE *)(AceBySid + 1) = v87;
          }
          if ( *((_DWORD *)v34 + 4) )
          {
            v85 = (char *)v34 + *((unsigned int *)v34 + 4);
            goto LABEL_245;
          }
LABEL_243:
          v85 = 0LL;
          goto LABEL_245;
        }
        ProcessHeap = HeapHandle;
      }
      else
      {
LABEL_51:
        if ( *((_DWORD *)v34 + 4) && (v107 & 0x4000) != 0 )
        {
          RtlpNormalizeAcl(v35, v35, 0LL);
          v32 = v35[1];
        }
        v44 = Size[0];
        v45 = (char *)v35 + v32;
        memmove(v45, v109, Size[0]);
        v46 = (int)v45;
        v47 = &v45[v44];
        InformationToken = 0;
        *((_DWORD *)v34 + 1) = v46 - v41;
        if ( !v93 )
          v34[1] |= *((_WORD *)*v43 + 1) & 1;
        memmove(v47, v108, (unsigned int)v114);
        *((_DWORD *)v34 + 2) = (_DWORD)v47 - v41;
        if ( !v94 )
          v34[1] |= *((_WORD *)*v43 + 1) & 2;
        ProcessHeap = HeapHandle;
        RtlFreeHeap(HeapHandle, 0, *v43);
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
    DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v10, &v126);
    InformationToken = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)InformationToken;
    v65 = v126;
    LODWORD(v114) = a2 & 0x80;
    v66 = *(void **)v126;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v66 )
      {
LABEL_181:
        InformationToken = -1073741790;
        goto LABEL_183;
      }
      Index = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &Index);
        v69 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            InformationToken = -1073740730;
            goto LABEL_183;
          }
          if ( !RtlpValidTrustSubjectContext(v66, AceByType + 2, v68, &DefaultTrustSubjectContext) )
            goto LABEL_181;
        }
        ++Index;
      }
      while ( v69 );
    }
    DefaultTrustSubjectContext = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
    {
      InformationToken = RtlpValidFilterAclSubjectContext(Acl, (__int64)v66);
      if ( InformationToken < 0
        || (v107 & 2) == 0
        && (InformationToken = RtlpValidFilterAclSubjectContext(IdentifierAuthority, (__int64)v66), InformationToken < 0) )
      {
LABEL_183:
        v79 = v65;
        goto LABEL_185;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, v65);
    v70 = Acl;
    v71 = v107 & 2;
    if ( (a2 & 8) != 0 )
    {
      v72 = *(unsigned __int16 *)(a3 + 2);
      if ( (v107 & 2) != 0 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v110 + 1) & 0x2800 | (*((unsigned __int16 *)*v110 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)Acl,
                             (v72 & 0x2800 | (v72 >> 1) & 0x18) >> 1,
                             (__int64)v109,
                             (__int64)v108,
                             v112,
                             2,
                             (__int64)&v101,
                             (__int64)&v106);
        if ( InformationToken < 0 )
          goto LABEL_61;
        v95 = 1;
        v12 = 2 * (v106 & 0x1400 | (2 * (v106 & 8 | 0x2004)));
      }
      else
      {
        v101 = Acl;
        v12 = v72 & 0x2000 | 0x8010;
        if ( (v72 & 0xA00) == 0xA00 )
          v12 = v72 & 0x2000 | 0x8810;
      }
      v73 = IdentifierAuthority;
    }
    else
    {
      v73 = IdentifierAuthority;
      v101 = IdentifierAuthority;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v74 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v110 + 1) & 0x800 | (*((unsigned __int16 *)*v110 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)v70,
                             (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                             (__int64)v109,
                             (__int64)v108,
                             v112,
                             2,
                             (__int64)&v103,
                             (__int64)&v106);
        if ( InformationToken < 0 )
          goto LABEL_61;
        v96 = 1;
        v12 |= 2 * (v106 & 0x1400 | (2 * (v106 & 8 | 4)));
      }
      else
      {
        v103 = v70;
        v12 |= v74 & 0x2000 | 0x10;
        if ( (v74 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = IdentifierAuthority;
    }
    else
    {
      v103 = v73;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v75 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v110 + 1) & 0x800 | (*((unsigned __int16 *)*v110 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)v70,
                             (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                             (__int64)v109,
                             (__int64)v108,
                             v112,
                             2,
                             (__int64)&v120,
                             (__int64)&v106);
        if ( InformationToken < 0 )
          goto LABEL_61;
        v97 = 1;
        v12 |= 2 * (v106 & 0x1400 | (2 * (v106 & 8 | 4)));
      }
      else
      {
        v120 = v70;
        v12 |= v75 & 0x2000 | 0x10;
        if ( (v75 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = IdentifierAuthority;
    }
    else
    {
      v120 = v73;
    }
    if ( (_DWORD)v114 )
    {
      v76 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v110 + 1) & 0x800 | (*((unsigned __int16 *)*v110 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)v70,
                             (v76 & 0x800 | (v76 >> 1) & 0x18) >> 1,
                             (__int64)v109,
                             (__int64)v108,
                             v112,
                             2,
                             (__int64)&v121,
                             (__int64)&v106);
        if ( InformationToken < 0 )
          goto LABEL_61;
        v98 = 1;
        v12 |= 2 * (v106 & 0x1400 | (2 * (v106 & 8 | 4)));
      }
      else
      {
        v121 = v70;
        v12 |= v76 & 0x2000 | 0x10;
        if ( (v76 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = IdentifierAuthority;
    }
    else
    {
      v121 = v73;
    }
    if ( !DefaultTrustSubjectContext )
    {
      v122 = v73;
      goto LABEL_178;
    }
    v77 = *(unsigned __int16 *)(a3 + 2);
    if ( !v71 )
    {
      v122 = v70;
      v12 |= v77 & 0x2000 | 0x10;
      if ( (v77 & 0xA00) == 0xA00 )
        v12 |= 0x800u;
      goto LABEL_177;
    }
    InformationToken = RtlpComputeMergedAcl(
                         (_DWORD)IdentifierAuthority,
                         (*((_WORD *)*v110 + 1) & 0x800 | (*((unsigned __int16 *)*v110 + 1) >> 1) & 0x18u) >> 1,
                         (_DWORD)v70,
                         (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                         (__int64)v109,
                         (__int64)v108,
                         v112,
                         2,
                         (__int64)&v122,
                         (__int64)&v106);
    if ( InformationToken >= 0 )
    {
      v99 = 1;
      v12 |= 2 * (v106 & 0x1400 | (2 * (v106 & 8 | 4)));
LABEL_177:
      v73 = IdentifierAuthority;
LABEL_178:
      if ( Size[0] )
      {
        v78 = *(_WORD *)(a3 + 2);
        v12 |= v78 & 0x2000 | 0x10;
        if ( (v78 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      else
      {
        v70 = v73;
      }
      v25 = v103;
      v80 = (unsigned __int8 *)v70;
      v49 = v101;
      InformationToken = RtlpCombineAcls(
                           (unsigned __int8 *)v101,
                           v80,
                           (unsigned __int8 *)v103,
                           (unsigned __int8 *)v120,
                           (unsigned __int8 *)v121,
                           (unsigned __int8 *)v122,
                           (ACL **)&v125,
                           0LL);
      if ( InformationToken < 0 )
        goto LABEL_63;
      Src = v125;
      if ( !v49 && v125 && !*((_WORD *)v125 + 2) )
      {
        RtlFreeHeap(ProcessHeap, 0, v125);
        Src = 0LL;
      }
      v100 = 1;
      goto LABEL_22;
    }
LABEL_61:
    v25 = v103;
LABEL_62:
    v49 = v101;
LABEL_63:
    if ( v49 && v95 )
      RtlFreeHeap(ProcessHeap, 0, v49);
    if ( v25 && v96 )
      RtlFreeHeap(ProcessHeap, 0, v25);
    if ( v120 && v97 )
      RtlFreeHeap(ProcessHeap, 0, v120);
    if ( v121 && v98 )
      RtlFreeHeap(ProcessHeap, 0, v121);
    if ( v122 && v99 )
      RtlFreeHeap(ProcessHeap, 0, v122);
    if ( Src && v100 )
      RtlFreeHeap(ProcessHeap, 0, Src);
    if ( !v89[0] )
      return (unsigned int)InformationToken;
    v79 = v123;
LABEL_185:
    RtlFreeHeap(ProcessHeap, 0, v79);
    return (unsigned int)InformationToken;
  }
  Index = 0;
  v61 = 0LL;
  while ( 1 )
  {
    v62 = RtlFindAceByType(v14, 0x11u, &Index);
    v63 = v62;
    if ( v62 )
    {
      v21 = (v62[1] & 0xFFFFFFF8) == 0;
      v61 = v62 + 2;
      v92 = *((_BYTE *)v62 + 1);
      if ( !v21 )
        break;
    }
    if ( v10 )
    {
      DefaultTrustSubjectContext = NtQueryInformationToken(v10, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      InformationToken = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)InformationToken;
      if ( v130 == 2 && v131 < 1 )
        return (unsigned int)-1073741659;
      v10 = (HANDLE)v114;
      v64 = (void *)v114;
    }
    else
    {
      DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, (PHANDLE)&Size[1]);
      InformationToken = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)InformationToken;
      v64 = *(void **)&Size[1];
      v10 = (HANDLE)v114;
    }
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v64, v61) )
    {
      NtClose(*(HANDLE *)&Size[1]);
      break;
    }
    NtClose(*(HANDLE *)&Size[1]);
    ++Index;
    if ( !v63 )
      goto LABEL_141;
    v14 = Acl;
  }
  return (unsigned int)-1073740730;
}
