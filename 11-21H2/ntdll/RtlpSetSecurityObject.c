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
        __int64 *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  BOOL v8; // r11d
  __int64 v10; // rbx
  __int16 v12; // r15
  __int16 v13; // dx
  __int64 v14; // rdi
  __int64 v15; // rcx
  void *v16; // r14
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rax
  __int64 v23; // rax
  void *v24; // rcx
  char valid; // al
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int16 v29; // cx
  unsigned __int16 *v30; // r14
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // ebx
  unsigned int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // r8
  char *v37; // rsi
  __int16 v38; // ax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // r14
  __int64 v42; // rbx
  int v43; // eax
  char *v44; // rsi
  int ServerAcl; // ebx
  __int64 v46; // r14
  __int64 v48; // r8
  __int64 v49; // rdx
  __int16 v50; // r10
  __int64 v51; // rax
  int v52; // esi
  unsigned int v53; // eax
  unsigned int v54; // eax
  void *v55; // rax
  void *v56; // rax
  __int64 v57; // r14
  __int64 AceByType; // rax
  __int64 v59; // rdi
  __int64 v60; // r8
  HANDLE v61; // rcx
  __int64 v62; // r9
  __int64 *v63; // rdi
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rdx
  int v69; // r14d
  unsigned int v70; // edx
  int v71; // edi
  void *v72; // r8
  __int64 v73; // rax
  __int64 v74; // r14
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // edx
  __int16 v79; // ax
  int v80; // edx
  _QWORD *Heap; // rdi
  _QWORD *v82; // r8
  int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 AceBySid; // rax
  char v87; // cl
  __int64 v88; // [rsp+50h] [rbp-B0h] BYREF
  char v89; // [rsp+58h] [rbp-A8h]
  char v90; // [rsp+59h] [rbp-A7h]
  char v91; // [rsp+5Ah] [rbp-A6h]
  char v92; // [rsp+5Bh] [rbp-A5h]
  char v93; // [rsp+5Ch] [rbp-A4h]
  char v94; // [rsp+5Dh] [rbp-A3h]
  char v95; // [rsp+5Eh] [rbp-A2h]
  char v96; // [rsp+5Fh] [rbp-A1h]
  char v97; // [rsp+60h] [rbp-A0h]
  char v98; // [rsp+61h] [rbp-9Fh]
  char v99[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v100; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v101; // [rsp+68h] [rbp-98h] BYREF
  int InformationToken; // [rsp+70h] [rbp-90h] BYREF
  __int64 v103; // [rsp+78h] [rbp-88h] BYREF
  char v104; // [rsp+80h] [rbp-80h]
  bool v105; // [rsp+81h] [rbp-7Fh]
  __int64 v106; // [rsp+88h] [rbp-78h] BYREF
  int v107; // [rsp+90h] [rbp-70h] BYREF
  void *v108; // [rsp+98h] [rbp-68h]
  void *v109; // [rsp+A0h] [rbp-60h]
  __int64 *v110; // [rsp+A8h] [rbp-58h]
  __int64 v111; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  __int16 v113; // [rsp+C0h] [rbp-40h]
  _DWORD Size[3]; // [rsp+C4h] [rbp-3Ch]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  BOOL v116; // [rsp+D8h] [rbp-28h]
  unsigned int v117; // [rsp+DCh] [rbp-24h]
  __int64 v118; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v120; // [rsp+F0h] [rbp-10h] BYREF
  char v121[8]; // [rsp+F8h] [rbp-8h] BYREF
  _WORD *v122; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v123; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v124; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v125; // [rsp+118h] [rbp+18h] BYREF
  __int64 v126; // [rsp+120h] [rbp+20h]
  _BYTE v127[24]; // [rsp+128h] [rbp+28h] BYREF
  int v128; // [rsp+140h] [rbp+40h]
  int v129; // [rsp+144h] [rbp+44h]
  char v130[8]; // [rsp+160h] [rbp+60h] BYREF
  int v131; // [rsp+168h] [rbp+68h]

  v10 = a8;
  v126 = a3;
  v12 = 0x8000;
  v111 = a7;
  v13 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v110 = a4;
  *(_QWORD *)&Size[1] = a8;
  v91 = 0;
  v90 = 0;
  v99[0] = 0;
  v92 = 0;
  v98 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v123 = 0LL;
  Src = 0LL;
  v122 = 0LL;
  v101 = 0LL;
  v118 = 0LL;
  v103 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v89 = 0;
  LOBYTE(v117) = 0;
  v116 = v8;
  v124 = 0LL;
  if ( (v13 & 0x10) == 0 )
    goto LABEL_2;
  if ( v13 >= 0 )
  {
    v14 = *(_QWORD *)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = a3 + *(unsigned int *)(a3 + 12);
  }
LABEL_3:
  v15 = *a4;
  v106 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_69:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (void *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_69;
  }
  v16 = *(void **)(v15 + 24);
LABEL_7:
  Handle = 0LL;
  v88 = (__int64)v16;
  v125 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v113 = v13 & 0x80;
  v104 = v113 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v105 = (v13 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v52 = a2 | 0x1FF;
    v53 = v52 & 0xFFFFFF7F;
    if ( v18 )
      v53 = v52;
    a2 = v53 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v53;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v13 & 0x10) != 0 )
        a2 |= 8u;
      else
        v116 = (v13 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v20 = *(unsigned int *)(v15 + 4);
    v21 = v15 + v20 == 0;
    v22 = (void *)(v15 + v20);
    v108 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v54 = a2 >> 2;
  LOBYTE(v54) = (a2 & 4) == 0;
  v117 = v54;
  if ( v13 >= 0 )
  {
    v55 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v108 = 0LL;
      goto LABEL_105;
    }
    v55 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v108 = v55;
LABEL_105:
  v90 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v127, 56LL, v121);
    ServerAcl = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)ServerAcl;
    if ( v128 == 2 && v129 < 1 )
      return (unsigned int)-1073741659;
    v10 = *(_QWORD *)&Size[1];
    if ( !RtlpValidOwnerSubjectContext(*(void **)&Size[1], (__int64)v108, v104, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v22 = v108;
LABEL_12:
  if ( !(unsigned __int8)RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v56 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v109 = 0LL;
LABEL_118:
        v24 = v109;
        v91 = 1;
        goto LABEL_18;
      }
      v56 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v109 = v56;
    goto LABEL_118;
  }
  v23 = *v110;
  if ( *(__int16 *)(*v110 + 2) >= 0 )
  {
    v24 = *(void **)(v23 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v23 + 8) )
    {
LABEL_239:
      ServerAcl = -1073741733;
      goto LABEL_57;
    }
    v24 = (void *)(v23 + *(unsigned int *)(v23 + 8));
  }
  v109 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_239;
  valid = RtlValidSid(v24);
  v27 = 0LL;
  if ( !valid )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v28 = v103;
    Src = v16;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v84 = *v110;
      if ( (*(_BYTE *)(*v110 + 2) & 4) != 0 )
      {
        if ( *(__int16 *)(v84 + 2) >= 0 )
        {
          v30 = *(unsigned __int16 **)(v84 + 32);
        }
        else if ( *(_DWORD *)(v84 + 16) )
        {
          v30 = (unsigned __int16 *)(v84 + *(unsigned int *)(v84 + 16));
        }
        else
        {
          v30 = 0LL;
        }
      }
      else
      {
        v30 = 0LL;
      }
      goto LABEL_30;
    }
    v29 = *(_WORD *)(a3 + 2);
    if ( (a5 & 1) == 0 )
    {
      if ( (v29 & 4) == 0 )
        goto LABEL_84;
      if ( v29 >= 0 )
      {
        v30 = *(unsigned __int16 **)(a3 + 32);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a3 + 16) )
        v30 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
      else
LABEL_84:
        v30 = 0LL;
LABEL_27:
      v12 |= v29 & 0x1000 | 4;
      if ( (v29 & 0x500) == 0x500 )
        v12 |= 0x400u;
      goto LABEL_29;
    }
    if ( (v29 & 4) == 0 )
      goto LABEL_207;
    if ( v29 >= 0 )
    {
      v48 = *(_QWORD *)(a3 + 32);
      goto LABEL_74;
    }
    if ( *(_DWORD *)(a3 + 16) )
      LODWORD(v48) = a3 + *(_DWORD *)(a3 + 16);
    else
LABEL_207:
      LODWORD(v48) = 0;
LABEL_74:
    v49 = *v110;
    v50 = *(_WORD *)(*v110 + 2);
    if ( (v50 & 4) == 0 )
      goto LABEL_209;
    if ( v50 >= 0 )
    {
      v51 = *(_QWORD *)(v49 + 32);
      goto LABEL_78;
    }
    if ( *(_DWORD *)(v49 + 16) )
      LODWORD(v51) = v49 + *(_DWORD *)(v49 + 16);
    else
LABEL_209:
      LODWORD(v51) = 0;
LABEL_78:
    ServerAcl = RtlpComputeMergedAcl(
                  v51,
                  v50 & 0x140C,
                  v48,
                  v29 & 0x140C,
                  (__int64)v108,
                  (__int64)v109,
                  v111,
                  1,
                  (__int64)&v123,
                  (__int64)&v107);
    if ( ServerAcl < 0 )
      goto LABEL_58;
    v30 = v123;
    v92 = 1;
    v12 |= v107 & 0x1408 | 4;
LABEL_29:
    if ( v113 )
    {
      LODWORD(v106) = 76;
      Heap = (_QWORD *)RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), 76LL);
      if ( !Heap )
      {
LABEL_216:
        ServerAcl = -1073741801;
        goto LABEL_55;
      }
      ServerAcl = NtOpenProcessToken(-1LL, 8LL, &Handle);
      v82 = Heap;
      if ( ServerAcl >= 0 )
      {
        ServerAcl = NtQueryInformationToken(Handle, 4LL, Heap, (unsigned int)v106, &v106);
        NtClose(Handle);
        if ( ServerAcl >= 0 )
        {
          LOBYTE(v83) = v105;
          ServerAcl = RtlpCreateServerAcl((_DWORD)v30, v83, *Heap, (unsigned int)&v124, (__int64)v99);
          RtlFreeHeap(ProcessHeap, 0LL, Heap);
          if ( ServerAcl < 0 )
          {
LABEL_55:
            if ( v92 )
              RtlFreeHeap(ProcessHeap, 0LL, v123);
            goto LABEL_57;
          }
          v30 = v124;
          goto LABEL_30;
        }
        v82 = Heap;
      }
      RtlFreeHeap(ProcessHeap, 0LL, v82);
      goto LABEL_55;
    }
LABEL_30:
    v31 = 4 * *((unsigned __int8 *)v108 + 1) + 8;
    Size[0] = v31;
    v32 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
    Size[1] = v32;
    if ( Src )
      v33 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v33 = 0;
    if ( v30 )
      v34 = (v30[1] + 3) & 0xFFFFFFFC;
    else
      v34 = 0;
    v35 = RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), v32 + v34 + v33 + v31 + 20);
    if ( v35 )
    {
      *(_OWORD *)v35 = 0LL;
      *(_DWORD *)(v35 + 16) = 0;
      *(_BYTE *)v35 = 1;
      v37 = (char *)(v35 + 20);
      if ( v116 )
        v12 |= 0x800u;
      v38 = v12 | *(_WORD *)(v35 + 2);
      *(_WORD *)(v35 + 2) = v38;
      if ( (*(_WORD *)(v126 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v35 + 1) = *(_BYTE *)(v126 + 1);
        *(_WORD *)(v35 + 2) = v38 | 0x4000;
      }
      if ( Src )
      {
        memmove((void *)(v35 + 20), Src, *((unsigned __int16 *)Src + 1));
        RtlpApplyAclToObject(v35 + 20, v111);
        *(_DWORD *)(v35 + 12) = 20;
        v39 = *((unsigned __int16 *)Src + 1);
        if ( v33 > (unsigned int)v39 )
          memset(&v37[v39], 0, v33 - (unsigned int)v39);
        v37 += v33;
      }
      else
      {
        *(_DWORD *)(v35 + 12) = 0;
      }
      if ( (v12 & 0x10) == 0 )
        *(_WORD *)(v35 + 2) |= *(_WORD *)(*v110 + 2) & 0x2830;
      if ( v30 )
      {
        memmove(v37, v30, v30[1]);
        RtlpApplyAclToObject(v37, v111);
        *(_DWORD *)(v35 + 16) = (_DWORD)v37 - v35;
        v40 = v30[1];
        if ( v34 > (unsigned int)v40 )
          memset(&v37[v40], 0, v34 - (unsigned int)v40);
        v37 += v34;
      }
      else
      {
        *(_DWORD *)(v35 + 16) = 0;
      }
      v41 = v110;
      if ( (v12 & 4) != 0 || (*(_WORD *)(v35 + 2) |= *(_WORD *)(*v110 + 2) & 0x140C, !(_BYTE)v117) )
      {
LABEL_50:
        v42 = Size[0];
        memmove(v37, v108, Size[0]);
        v43 = (int)v37;
        v44 = &v37[v42];
        ServerAcl = 0;
        *(_DWORD *)(v35 + 4) = v43 - v35;
        if ( !v90 )
          *(_WORD *)(v35 + 2) |= *(_WORD *)(*v41 + 2) & 1;
        memmove(v44, v109, Size[1]);
        *(_DWORD *)(v35 + 8) = (_DWORD)v44 - v35;
        if ( !v91 )
          *(_WORD *)(v35 + 2) |= *(_WORD *)(*v41 + 2) & 2;
        RtlFreeHeap(ProcessHeap, 0LL, *v41);
        *v41 = v35;
      }
      else
      {
        LODWORD(v88) = 0;
        LOBYTE(v36) = 1;
        WORD2(v88) = 768;
        ServerAcl = RtlInitializeSid(v130, &v88, v36);
        if ( ServerAcl >= 0 )
        {
          v131 = 4;
          v100 = 0;
          while ( 1 )
          {
            if ( (*(_BYTE *)(v35 + 2) & 4) == 0 )
              goto LABEL_235;
            if ( *(__int16 *)(v35 + 2) < 0 )
              break;
            v85 = *(_QWORD *)(v35 + 32);
LABEL_237:
            AceBySid = RtlFindAceBySid(v85, v130, &v100, 0LL);
            if ( !AceBySid )
              goto LABEL_50;
            v87 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
            ++v100;
            *(_BYTE *)(AceBySid + 1) = v87;
          }
          if ( *(_DWORD *)(v35 + 16) )
          {
            v85 = v35 + *(unsigned int *)(v35 + 16);
            goto LABEL_237;
          }
LABEL_235:
          v85 = 0LL;
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
    v100 = 0;
    v57 = 0LL;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 17LL, &v100, v27);
      v59 = AceByType;
      if ( AceByType )
      {
        v21 = (*(_DWORD *)(AceByType + 4) & 0xFFFFFFF8) == 0;
        v57 = AceByType + 8;
        v89 = *(_BYTE *)(AceByType + 1);
        if ( !v21 )
          return (unsigned int)-1073740730;
      }
      if ( v10 )
      {
        InformationToken = NtQueryInformationToken(v10, 10LL, v127, 56LL, v121);
        ServerAcl = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)ServerAcl;
        if ( v128 == 2 && v129 < 1 )
          return (unsigned int)-1073741659;
        v10 = *(_QWORD *)&Size[1];
        v61 = *(HANDLE *)&Size[1];
      }
      else
      {
        InformationToken = NtOpenProcessToken(-1LL, 8LL, &Handle);
        ServerAcl = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)ServerAcl;
        v61 = Handle;
        v10 = *(_QWORD *)&Size[1];
      }
      LOBYTE(v60) = v89;
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v61, v57, v60, &InformationToken) )
        break;
      NtClose(Handle);
      ++v100;
      if ( !v59 )
        goto LABEL_138;
      v14 = v106;
    }
    NtClose(Handle);
    return (unsigned int)-1073740730;
  }
LABEL_138:
  InformationToken = RtlpGetDefaultTrustSubjectContext(v10, &v125, v26, v27);
  ServerAcl = InformationToken;
  if ( InformationToken < 0 )
    return (unsigned int)ServerAcl;
  v63 = v125;
  Size[1] = a2 & 0x80;
  v64 = *v125;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_146:
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
    {
      ServerAcl = RtlpValidFilterAclSubjectContext(v106, v64);
      if ( ServerAcl < 0 )
        goto LABEL_156;
      if ( (a5 & 2) != 0 )
      {
        v69 = v88;
      }
      else
      {
        v68 = v64;
        v69 = v88;
        ServerAcl = RtlpValidFilterAclSubjectContext(v88, v68);
        if ( ServerAcl < 0 )
          goto LABEL_156;
      }
    }
    else
    {
      v69 = v88;
    }
    RtlFreeHeap(ProcessHeap, 0LL, v63);
    if ( (a2 & 8) != 0 )
    {
      v70 = *(unsigned __int16 *)(a3 + 2);
      v71 = a5 & 2;
      if ( (a5 & 2) != 0 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v69,
                      (*(_WORD *)(*v110 + 2) & 0x2800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      v106,
                      (v70 & 0x2800 | (v70 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      v111,
                      2,
                      (__int64)&v101,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_57;
        v93 = 1;
        v12 = 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 0x2004)));
      }
      else
      {
        v101 = v106;
        v12 = v70 & 0x2000 | 0x8010;
        if ( (v70 & 0xA00) == 0xA00 )
          v12 = v70 & 0x2000 | 0x8810;
      }
      v73 = v88;
    }
    else
    {
      v73 = v88;
      v71 = a5 & 2;
      v101 = v88;
    }
    v74 = v106;
    if ( (a2 & 0x20) != 0 )
    {
      v75 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v88,
                      (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      v106,
                      (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      v111,
                      2,
                      (__int64)&v103,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_57;
        v94 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v103 = v106;
        v12 |= v75 & 0x2000 | 0x10;
        if ( (v75 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = v88;
    }
    else
    {
      v103 = v73;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v76 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v88,
                      (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      v74,
                      (v76 & 0x800 | (v76 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      v111,
                      2,
                      (__int64)&v118,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_57;
        v95 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v118 = v74;
        v12 |= v76 & 0x2000 | 0x10;
        if ( (v76 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = v88;
    }
    else
    {
      v118 = v73;
    }
    if ( Size[1] )
    {
      v77 = *(unsigned __int16 *)(a3 + 2);
      if ( v71 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v88,
                      (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      v74,
                      (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      v111,
                      2,
                      (__int64)&v119,
                      (__int64)&v107);
        if ( ServerAcl < 0 )
          goto LABEL_57;
        v96 = 1;
        v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
      }
      else
      {
        v119 = v74;
        v12 |= v77 & 0x2000 | 0x10;
        if ( (v77 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      v73 = v88;
    }
    else
    {
      v119 = v73;
    }
    if ( !InformationToken )
    {
      v120 = v73;
      goto LABEL_185;
    }
    v78 = *(unsigned __int16 *)(a3 + 2);
    if ( !v71 )
    {
      v120 = v74;
      v12 |= v78 & 0x2000 | 0x10;
      if ( (v78 & 0xA00) == 0xA00 )
        v12 |= 0x800u;
      goto LABEL_184;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  v88,
                  (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  v74,
                  (v78 & 0x800 | (v78 >> 1) & 0x18) >> 1,
                  (__int64)v108,
                  (__int64)v109,
                  v111,
                  2,
                  (__int64)&v120,
                  (__int64)&v107);
    if ( ServerAcl >= 0 )
    {
      v97 = 1;
      v12 |= 2 * (v107 & 0x1400 | (2 * (v107 & 8 | 4)));
LABEL_184:
      LODWORD(v73) = v88;
LABEL_185:
      if ( Size[0] )
      {
        v79 = *(_WORD *)(a3 + 2);
        v12 |= v79 & 0x2000 | 0x10;
        if ( (v79 & 0xA00) == 0xA00 )
          v12 |= 0x800u;
      }
      else
      {
        LODWORD(v74) = v73;
      }
      v28 = v103;
      v80 = v74;
      v46 = v101;
      ServerAcl = RtlpCombineAcls(v101, v80, v103, v118, v119, v120, (__int64)&v122, 0LL);
      if ( ServerAcl < 0 )
      {
LABEL_59:
        if ( v46 && v93 )
          RtlFreeHeap(ProcessHeap, 0LL, v46);
        if ( v28 && v94 )
          RtlFreeHeap(ProcessHeap, 0LL, v28);
        if ( v118 && v95 )
          RtlFreeHeap(ProcessHeap, 0LL, v118);
        if ( v119 && v96 )
          RtlFreeHeap(ProcessHeap, 0LL, v119);
        if ( v120 && v97 )
          RtlFreeHeap(ProcessHeap, 0LL, v120);
        if ( Src && v98 )
          RtlFreeHeap(ProcessHeap, 0LL, Src);
        if ( v99[0] )
        {
          v72 = v124;
          goto LABEL_158;
        }
        return (unsigned int)ServerAcl;
      }
      Src = v122;
      if ( !v46 && v122 && !v122[2] )
      {
        RtlFreeHeap(ProcessHeap, 0LL, v122);
        Src = 0LL;
      }
      v98 = 1;
      goto LABEL_22;
    }
LABEL_57:
    v28 = v103;
LABEL_58:
    v46 = v101;
    goto LABEL_59;
  }
  if ( !v64 )
  {
LABEL_154:
    ServerAcl = -1073741790;
    goto LABEL_156;
  }
  v100 = 0;
  while ( 1 )
  {
    v65 = RtlFindAceByType(v106, 20LL, &v100, v62);
    v67 = v65;
    if ( v65 )
      break;
LABEL_145:
    ++v100;
    if ( !v67 )
      goto LABEL_146;
  }
  if ( (*(_DWORD *)(v65 + 4) & 0xFF000000) == 0 )
  {
    if ( !RtlpValidTrustSubjectContext(v64, v65 + 8, v66, &InformationToken) )
      goto LABEL_154;
    goto LABEL_145;
  }
  ServerAcl = -1073740730;
LABEL_156:
  v72 = v63;
LABEL_158:
  RtlFreeHeap(ProcessHeap, 0LL, v72);
  return (unsigned int)ServerAcl;
}
