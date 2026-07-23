/*
 * XREFs of RtlpSetSecurityObject @ 0x18000E648
 * Callers:
 *     RtlSetSecurityObject @ 0x18000E610 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180092070 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x18000B6FC (RtlpValidTrustSubjectContext.c)
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18000F1D0 (RtlpApplyAclToObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18000F57C (RtlpValidFilterAclSubjectContext.c)
 *     RtlFindAceByType @ 0x180010EE0 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x180010F38 (RtlpCombineAcls.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180011714 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x180048720 (RtlValidSid.c)
 *     RtlpComputeMergedAcl @ 0x180091978 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A6640 (NtOpenProcessToken.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800F31B4 (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F3758 (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800F4974 (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        char a5,
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v10; // rbx
  __int16 v12; // r15
  __int16 v13; // dx
  ACL *v14; // rdi
  char *v15; // rcx
  ACL *v16; // r14
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  char *v22; // rax
  _QWORD *v23; // rax
  char *v24; // rcx
  PVOID v25; // rdi
  __int16 v26; // cx
  unsigned __int16 *v27; // r14
  int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  _DWORD *v32; // rdi
  char *v33; // rsi
  __int16 v34; // ax
  __int64 v35; // rcx
  __int64 v36; // rcx
  PVOID *v37; // r14
  __int64 v38; // rbx
  int v39; // eax
  char *v40; // rsi
  NTSTATUS InformationToken; // ebx
  PVOID v42; // r14
  __int64 v44; // r8
  _QWORD *v45; // rdx
  __int16 v46; // r10
  __int64 v47; // rax
  int v48; // esi
  unsigned int v49; // eax
  unsigned int v50; // eax
  void *v51; // rax
  void *v52; // rax
  void *v53; // r14
  _DWORD *AceByType; // rax
  _DWORD *v55; // rdi
  HANDLE v56; // rcx
  PVOID v57; // rdi
  void *v58; // r14
  _DWORD *v59; // rax
  __int64 v60; // r8
  _DWORD *v61; // rbx
  int v62; // r14d
  unsigned int v63; // edx
  int v64; // edi
  PVOID v65; // r8
  PACL v66; // rax
  PACL v67; // r14
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  __int16 v72; // ax
  int v73; // edx
  _QWORD *Heap; // rdi
  void *v75; // r8
  int v76; // edx
  char *v77; // rax
  char *v78; // rcx
  __int64 AceBySid; // rax
  char v80; // cl
  PACL IdentifierAuthority; // [rsp+50h] [rbp-B0h] BYREF
  char v82; // [rsp+58h] [rbp-A8h]
  char v83; // [rsp+59h] [rbp-A7h]
  char v84; // [rsp+5Ah] [rbp-A6h]
  char v85; // [rsp+5Bh] [rbp-A5h]
  char v86; // [rsp+5Ch] [rbp-A4h]
  char v87; // [rsp+5Dh] [rbp-A3h]
  char v88; // [rsp+5Eh] [rbp-A2h]
  char v89; // [rsp+5Fh] [rbp-A1h]
  char v90; // [rsp+60h] [rbp-A0h]
  char v91; // [rsp+61h] [rbp-9Fh]
  char v92[2]; // [rsp+62h] [rbp-9Eh] BYREF
  ULONG Index; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v94; // [rsp+68h] [rbp-98h] BYREF
  NTSTATUS DefaultTrustSubjectContext; // [rsp+70h] [rbp-90h] BYREF
  PVOID v96; // [rsp+78h] [rbp-88h] BYREF
  char v97; // [rsp+80h] [rbp-80h]
  bool v98; // [rsp+81h] [rbp-7Fh]
  PACL Acl; // [rsp+88h] [rbp-78h] BYREF
  int v100; // [rsp+90h] [rbp-70h] BYREF
  void *v101; // [rsp+98h] [rbp-68h]
  void *v102; // [rsp+A0h] [rbp-60h]
  PVOID *v103; // [rsp+A8h] [rbp-58h]
  __int64 v104; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  __int16 v106; // [rsp+C0h] [rbp-40h]
  _DWORD Size[3]; // [rsp+C4h] [rbp-3Ch]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  BOOL v109; // [rsp+D8h] [rbp-28h]
  unsigned int v110; // [rsp+DCh] [rbp-24h]
  PVOID v111; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v112; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v113; // [rsp+F0h] [rbp-10h] BYREF
  ULONG ReturnLength; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v115; // [rsp+100h] [rbp+0h] BYREF
  PVOID BaseAddress; // [rsp+108h] [rbp+8h] BYREF
  PVOID v117; // [rsp+110h] [rbp+10h] BYREF
  PVOID v118; // [rsp+118h] [rbp+18h]
  __int64 v119; // [rsp+120h] [rbp+20h]
  _BYTE TokenInformation[24]; // [rsp+128h] [rbp+28h] BYREF
  int v121; // [rsp+140h] [rbp+40h]
  int v122; // [rsp+144h] [rbp+44h]
  char Sid[8]; // [rsp+160h] [rbp+60h] BYREF
  int v124; // [rsp+168h] [rbp+68h]

  v10 = TokenHandle;
  v119 = a3;
  v12 = 0x8000;
  v104 = a7;
  v13 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v103 = a4;
  *(_QWORD *)&Size[1] = TokenHandle;
  v84 = 0;
  v83 = 0;
  v92[0] = 0;
  v85 = 0;
  v91 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v115 = 0LL;
  v94 = 0LL;
  v111 = 0LL;
  v96 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v82 = 0;
  LOBYTE(v110) = 0;
  v109 = v8;
  v117 = 0LL;
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
LABEL_69:
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
    goto LABEL_69;
  }
  v16 = (ACL *)*((_QWORD *)v15 + 3);
LABEL_7:
  Handle = 0LL;
  IdentifierAuthority = v16;
  v118 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v106 = v13 & 0x80;
  v97 = v106 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v98 = (v13 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v48 = a2 | 0x1FF;
    v49 = v48 & 0xFFFFFF7F;
    if ( v18 )
      v49 = v48;
    a2 = v49 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v49;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v13 & 0x10) != 0 )
        a2 |= 8u;
      else
        v109 = (v13 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*((_DWORD *)v15 + 1) )
      return (unsigned int)-1073741734;
    v20 = *((unsigned int *)v15 + 1);
    v21 = &v15[v20] == 0LL;
    v22 = &v15[v20];
    v101 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v50 = a2 >> 2;
  LOBYTE(v50) = (a2 & 4) == 0;
  v110 = v50;
  if ( v13 >= 0 )
  {
    v51 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v101 = 0LL;
      goto LABEL_105;
    }
    v51 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v101 = v51;
LABEL_105:
  v83 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    InformationToken = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)InformationToken;
    if ( v121 == 2 && v122 < 1 )
      return (unsigned int)-1073741659;
    v10 = *(HANDLE *)&Size[1];
    if ( !RtlpValidOwnerSubjectContext(*(void **)&Size[1], v101, v97, &DefaultTrustSubjectContext) )
      return (unsigned int)-1073741734;
  }
  v22 = (char *)v101;
LABEL_12:
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v52 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v102 = 0LL;
LABEL_118:
        v24 = (char *)v102;
        v84 = 1;
        goto LABEL_18;
      }
      v52 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v102 = v52;
    goto LABEL_118;
  }
  v23 = *v103;
  if ( *((__int16 *)*v103 + 1) >= 0 )
  {
    v24 = (char *)v23[2];
  }
  else
  {
    if ( !*((_DWORD *)v23 + 2) )
    {
LABEL_239:
      InformationToken = -1073741733;
      goto LABEL_57;
    }
    v24 = (char *)v23 + *((unsigned int *)v23 + 2);
  }
  v102 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_239;
  if ( !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v25 = v96;
    Src = v16;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v77 = (char *)*v103;
      if ( (*((_BYTE *)*v103 + 2) & 4) != 0 )
      {
        if ( *((__int16 *)v77 + 1) >= 0 )
        {
          v27 = (unsigned __int16 *)*((_QWORD *)v77 + 4);
        }
        else if ( *((_DWORD *)v77 + 4) )
        {
          v27 = (unsigned __int16 *)&v77[*((unsigned int *)v77 + 4)];
        }
        else
        {
          v27 = 0LL;
        }
      }
      else
      {
        v27 = 0LL;
      }
      goto LABEL_30;
    }
    v26 = *(_WORD *)(a3 + 2);
    if ( (a5 & 1) == 0 )
    {
      if ( (v26 & 4) == 0 )
        goto LABEL_84;
      if ( v26 >= 0 )
      {
        v27 = *(unsigned __int16 **)(a3 + 32);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a3 + 16) )
        v27 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
      else
LABEL_84:
        v27 = 0LL;
LABEL_27:
      v12 |= v26 & 0x1000 | 4;
      if ( (v26 & 0x500) == 0x500 )
        v12 |= 0x400u;
      goto LABEL_29;
    }
    if ( (v26 & 4) == 0 )
      goto LABEL_207;
    if ( v26 >= 0 )
    {
      v44 = *(_QWORD *)(a3 + 32);
      goto LABEL_74;
    }
    if ( *(_DWORD *)(a3 + 16) )
      LODWORD(v44) = a3 + *(_DWORD *)(a3 + 16);
    else
LABEL_207:
      LODWORD(v44) = 0;
LABEL_74:
    v45 = *v103;
    v46 = *((_WORD *)*v103 + 1);
    if ( (v46 & 4) == 0 )
      goto LABEL_209;
    if ( v46 >= 0 )
    {
      v47 = v45[4];
      goto LABEL_78;
    }
    if ( *((_DWORD *)v45 + 4) )
      LODWORD(v47) = (_DWORD)v45 + *((_DWORD *)v45 + 4);
    else
LABEL_209:
      LODWORD(v47) = 0;
LABEL_78:
    InformationToken = RtlpComputeMergedAcl(
                         v47,
                         v46 & 0x140C,
                         v44,
                         v26 & 0x140C,
                         (__int64)v101,
                         (__int64)v102,
                         v104,
                         1,
                         (__int64)&BaseAddress,
                         (__int64)&v100);
    if ( InformationToken < 0 )
      goto LABEL_58;
    v27 = (unsigned __int16 *)BaseAddress;
    v85 = 1;
    v12 |= v100 & 0x1408 | 4;
LABEL_29:
    if ( v106 )
    {
      LODWORD(Acl) = 76;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
      if ( !Heap )
      {
LABEL_216:
        InformationToken = -1073741801;
        goto LABEL_55;
      }
      InformationToken = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      v75 = Heap;
      if ( InformationToken >= 0 )
      {
        InformationToken = NtQueryInformationToken(Handle, 4u, Heap, (ULONG)Acl, (PULONG)&Acl);
        NtClose(Handle);
        if ( InformationToken >= 0 )
        {
          LOBYTE(v76) = v98;
          InformationToken = RtlpCreateServerAcl((_DWORD)v27, v76, *Heap, (unsigned int)&v117, (__int64)v92);
          RtlFreeHeap(ProcessHeap, 0, Heap);
          if ( InformationToken < 0 )
          {
LABEL_55:
            if ( v85 )
              RtlFreeHeap(ProcessHeap, 0, BaseAddress);
            goto LABEL_57;
          }
          v27 = (unsigned __int16 *)v117;
          goto LABEL_30;
        }
        v75 = Heap;
      }
      RtlFreeHeap(ProcessHeap, 0, v75);
      goto LABEL_55;
    }
LABEL_30:
    v28 = 4 * *((unsigned __int8 *)v101 + 1) + 8;
    Size[0] = v28;
    v29 = 4 * *((unsigned __int8 *)v102 + 1) + 8;
    Size[1] = v29;
    if ( Src )
      v30 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    if ( v27 )
      v31 = (v27[1] + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    v32 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v29 + v31 + v30 + v28 + 20);
    if ( v32 )
    {
      *(_OWORD *)v32 = 0LL;
      v32[4] = 0;
      *(_BYTE *)v32 = 1;
      v33 = (char *)(v32 + 5);
      if ( v109 )
        v12 |= 0x800u;
      v34 = v12 | *((_WORD *)v32 + 1);
      *((_WORD *)v32 + 1) = v34;
      if ( (*(_WORD *)(v119 + 2) & 0x4000) != 0 )
      {
        *((_BYTE *)v32 + 1) = *(_BYTE *)(v119 + 1);
        *((_WORD *)v32 + 1) = v34 | 0x4000;
      }
      if ( Src )
      {
        memmove(v32 + 5, Src, *((unsigned __int16 *)Src + 1));
        RtlpApplyAclToObject(v32 + 5, v104);
        v32[3] = 20;
        v35 = *((unsigned __int16 *)Src + 1);
        if ( v30 > (unsigned int)v35 )
          memset(&v33[v35], 0, v30 - (unsigned int)v35);
        v33 += v30;
      }
      else
      {
        v32[3] = 0;
      }
      if ( (v12 & 0x10) == 0 )
        *((_WORD *)v32 + 1) |= *((_WORD *)*v103 + 1) & 0x2830;
      if ( v27 )
      {
        memmove(v33, v27, v27[1]);
        RtlpApplyAclToObject(v33, v104);
        v32[4] = (_DWORD)v33 - (_DWORD)v32;
        v36 = v27[1];
        if ( v31 > (unsigned int)v36 )
          memset(&v33[v36], 0, v31 - (unsigned int)v36);
        v33 += v31;
      }
      else
      {
        v32[4] = 0;
      }
      v37 = v103;
      if ( (v12 & 4) != 0 || (*((_WORD *)v32 + 1) |= *((_WORD *)*v103 + 1) & 0x140C, !(_BYTE)v110) )
      {
LABEL_50:
        v38 = Size[0];
        memmove(v33, v101, Size[0]);
        v39 = (int)v33;
        v40 = &v33[v38];
        InformationToken = 0;
        v32[1] = v39 - (_DWORD)v32;
        if ( !v83 )
          *((_WORD *)v32 + 1) |= *((_WORD *)*v37 + 1) & 1;
        memmove(v40, v102, Size[1]);
        v32[2] = (_DWORD)v40 - (_DWORD)v32;
        if ( !v84 )
          *((_WORD *)v32 + 1) |= *((_WORD *)*v37 + 1) & 2;
        RtlFreeHeap(ProcessHeap, 0, *v37);
        *v37 = v32;
      }
      else
      {
        LODWORD(IdentifierAuthority) = 0;
        WORD2(IdentifierAuthority) = 768;
        InformationToken = RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
        if ( InformationToken >= 0 )
        {
          v124 = 4;
          Index = 0;
          while ( 1 )
          {
            if ( (*((_BYTE *)v32 + 2) & 4) == 0 )
              goto LABEL_235;
            if ( *((__int16 *)v32 + 1) < 0 )
              break;
            v78 = (char *)*((_QWORD *)v32 + 4);
LABEL_237:
            AceBySid = RtlFindAceBySid(v78, Sid, &Index, 0LL);
            if ( !AceBySid )
              goto LABEL_50;
            v80 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
            ++Index;
            *(_BYTE *)(AceBySid + 1) = v80;
          }
          if ( v32[4] )
          {
            v78 = (char *)v32 + (unsigned int)v32[4];
            goto LABEL_237;
          }
LABEL_235:
          v78 = 0LL;
          goto LABEL_237;
        }
      }
      goto LABEL_55;
    }
    goto LABEL_216;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    v53 = 0LL;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 0x11u, &Index);
      v55 = AceByType;
      if ( AceByType )
      {
        v21 = (AceByType[1] & 0xFFFFFFF8) == 0;
        v53 = AceByType + 2;
        v82 = *((_BYTE *)AceByType + 1);
        if ( !v21 )
          return (unsigned int)-1073740730;
      }
      if ( v10 )
      {
        DefaultTrustSubjectContext = NtQueryInformationToken(v10, 0xAu, TokenInformation, 0x38u, &ReturnLength);
        InformationToken = DefaultTrustSubjectContext;
        if ( DefaultTrustSubjectContext < 0 )
          return (unsigned int)InformationToken;
        if ( v121 == 2 && v122 < 1 )
          return (unsigned int)-1073741659;
        v10 = *(HANDLE *)&Size[1];
        v56 = *(HANDLE *)&Size[1];
      }
      else
      {
        DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
        InformationToken = DefaultTrustSubjectContext;
        if ( DefaultTrustSubjectContext < 0 )
          return (unsigned int)InformationToken;
        v56 = Handle;
        v10 = *(HANDLE *)&Size[1];
      }
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v56, v53) )
        break;
      NtClose(Handle);
      ++Index;
      if ( !v55 )
        goto LABEL_138;
      v14 = Acl;
    }
    NtClose(Handle);
    return (unsigned int)-1073740730;
  }
LABEL_138:
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v10);
  InformationToken = DefaultTrustSubjectContext;
  if ( DefaultTrustSubjectContext < 0 )
    return (unsigned int)InformationToken;
  v57 = v118;
  Size[1] = a2 & 0x80;
  v58 = *(void **)v118;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_146:
    DefaultTrustSubjectContext = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
    {
      InformationToken = RtlpValidFilterAclSubjectContext(Acl);
      if ( InformationToken < 0 )
        goto LABEL_156;
      if ( (a5 & 2) != 0 )
      {
        v62 = (int)IdentifierAuthority;
      }
      else
      {
        v62 = (int)IdentifierAuthority;
        InformationToken = RtlpValidFilterAclSubjectContext(IdentifierAuthority);
        if ( InformationToken < 0 )
          goto LABEL_156;
      }
    }
    else
    {
      v62 = (int)IdentifierAuthority;
    }
    RtlFreeHeap(ProcessHeap, 0, v57);
    if ( (a2 & 8) != 0 )
    {
      v63 = *(unsigned __int16 *)(a3 + 2);
      v64 = a5 & 2;
      if ( (a5 & 2) != 0 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             v62,
                             (*((_WORD *)*v103 + 1) & 0x2800 | (*((unsigned __int16 *)*v103 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)Acl,
                             (v63 & 0x2800 | (v63 >> 1) & 0x18) >> 1,
                             (__int64)v101,
                             (__int64)v102,
                             v104,
                             2,
                             (__int64)&v94,
                             (__int64)&v100);
        if ( InformationToken < 0 )
          goto LABEL_57;
        v86 = 1;
        v12 = 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 0x2004)));
      }
      else
      {
        v94 = Acl;
        v12 = v63 & 0x2000 | 0x8010;
        if ( (v63 & 0xA00) == 0xA00 )
          v12 = v63 & 0x2000 | 0x8810;
      }
      v66 = IdentifierAuthority;
    }
    else
    {
      v66 = IdentifierAuthority;
      v64 = a5 & 2;
      v94 = IdentifierAuthority;
    }
    v67 = Acl;
    if ( (a2 & 0x20) != 0 )
    {
      v68 = *(unsigned __int16 *)(a3 + 2);
      if ( v64 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v103 + 1) & 0x800 | (*((unsigned __int16 *)*v103 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)Acl,
                             (v68 & 0x800 | (v68 >> 1) & 0x18) >> 1,
                             (__int64)v101,
                             (__int64)v102,
                             v104,
                             2,
                             (__int64)&v96,
                             (__int64)&v100);
        if ( InformationToken < 0 )
          goto LABEL_57;
        v87 = 1;
        v12 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v96 = Acl;
        v12 |= v68 & 0x2000 | 0x10;
        if ( (v68 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v66 = IdentifierAuthority;
    }
    else
    {
      v96 = v66;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v69 = *(unsigned __int16 *)(a3 + 2);
      if ( v64 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v103 + 1) & 0x800 | (*((unsigned __int16 *)*v103 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)v67,
                             (v69 & 0x800 | (v69 >> 1) & 0x18) >> 1,
                             (__int64)v101,
                             (__int64)v102,
                             v104,
                             2,
                             (__int64)&v111,
                             (__int64)&v100);
        if ( InformationToken < 0 )
          goto LABEL_57;
        v88 = 1;
        v12 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v111 = v67;
        v12 |= v69 & 0x2000 | 0x10;
        if ( (v69 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v66 = IdentifierAuthority;
    }
    else
    {
      v111 = v66;
    }
    if ( Size[1] )
    {
      v70 = *(unsigned __int16 *)(a3 + 2);
      if ( v64 )
      {
        InformationToken = RtlpComputeMergedAcl(
                             (_DWORD)IdentifierAuthority,
                             (*((_WORD *)*v103 + 1) & 0x800 | (*((unsigned __int16 *)*v103 + 1) >> 1) & 0x18u) >> 1,
                             (_DWORD)v67,
                             (v70 & 0x800 | (v70 >> 1) & 0x18) >> 1,
                             (__int64)v101,
                             (__int64)v102,
                             v104,
                             2,
                             (__int64)&v112,
                             (__int64)&v100);
        if ( InformationToken < 0 )
          goto LABEL_57;
        v89 = 1;
        v12 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v112 = v67;
        v12 |= v70 & 0x2000 | 0x10;
        if ( (v70 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v66 = IdentifierAuthority;
    }
    else
    {
      v112 = v66;
    }
    if ( !DefaultTrustSubjectContext )
    {
      v113 = v66;
      goto LABEL_185;
    }
    v71 = *(unsigned __int16 *)(a3 + 2);
    if ( !v64 )
    {
      v113 = v67;
      v12 |= v71 & 0x2000 | 0x10;
      if ( (v71 & 0xA00) == 0xA00 )
        v12 |= 0x800u;
      goto LABEL_184;
    }
    InformationToken = RtlpComputeMergedAcl(
                         (_DWORD)IdentifierAuthority,
                         (*((_WORD *)*v103 + 1) & 0x800 | (*((unsigned __int16 *)*v103 + 1) >> 1) & 0x18u) >> 1,
                         (_DWORD)v67,
                         (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                         (__int64)v101,
                         (__int64)v102,
                         v104,
                         2,
                         (__int64)&v113,
                         (__int64)&v100);
    if ( InformationToken >= 0 )
    {
      v90 = 1;
      v12 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
LABEL_184:
      LODWORD(v66) = (_DWORD)IdentifierAuthority;
LABEL_185:
      if ( Size[0] )
      {
        v72 = *(_WORD *)(a3 + 2);
        v12 |= v72 & 0x2000 | 0x10;
        if ( (v72 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      else
      {
        LODWORD(v67) = (_DWORD)v66;
      }
      v25 = v96;
      v73 = (int)v67;
      v42 = v94;
      InformationToken = RtlpCombineAcls(
                           (_DWORD)v94,
                           v73,
                           (_DWORD)v96,
                           (_DWORD)v111,
                           (__int64)v112,
                           (__int64)v113,
                           (__int64)&v115,
                           0LL);
      if ( InformationToken < 0 )
      {
LABEL_59:
        if ( v42 && v86 )
          RtlFreeHeap(ProcessHeap, 0, v42);
        if ( v25 && v87 )
          RtlFreeHeap(ProcessHeap, 0, v25);
        if ( v111 && v88 )
          RtlFreeHeap(ProcessHeap, 0, v111);
        if ( v112 && v89 )
          RtlFreeHeap(ProcessHeap, 0, v112);
        if ( v113 && v90 )
          RtlFreeHeap(ProcessHeap, 0, v113);
        if ( Src && v91 )
          RtlFreeHeap(ProcessHeap, 0, Src);
        if ( v92[0] )
        {
          v65 = v117;
          goto LABEL_158;
        }
        return (unsigned int)InformationToken;
      }
      Src = v115;
      if ( !v42 && v115 && !*((_WORD *)v115 + 2) )
      {
        RtlFreeHeap(ProcessHeap, 0, v115);
        Src = 0LL;
      }
      v91 = 1;
      goto LABEL_22;
    }
LABEL_57:
    v25 = v96;
LABEL_58:
    v42 = v94;
    goto LABEL_59;
  }
  if ( !v58 )
  {
LABEL_154:
    InformationToken = -1073741790;
    goto LABEL_156;
  }
  Index = 0;
  while ( 1 )
  {
    v59 = RtlFindAceByType(Acl, 0x14u, &Index);
    v61 = v59;
    if ( v59 )
      break;
LABEL_145:
    ++Index;
    if ( !v61 )
      goto LABEL_146;
  }
  if ( (v59[1] & 0xFF000000) == 0 )
  {
    if ( !RtlpValidTrustSubjectContext(v58, v59 + 2, v60, &DefaultTrustSubjectContext) )
      goto LABEL_154;
    goto LABEL_145;
  }
  InformationToken = -1073740730;
LABEL_156:
  v65 = v57;
LABEL_158:
  RtlFreeHeap(ProcessHeap, 0, v65);
  return (unsigned int)InformationToken;
}
