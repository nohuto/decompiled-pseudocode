/*
 * XREFs of SeAccessCheckWithHint @ 0x1402316A0
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x1402287B0 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x140231630 (SeAccessCheck.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403AC540 (RtlpAllowsLowBoxAccess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AFEAC (ExCpuSetResourceManagerAccessCheck.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBE48 (ExpCheckWakeTimerAccess.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F3170 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14022525C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepFreeResourceInfo @ 0x1402295F8 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     SepAccessCheck @ 0x140232C80 (SepAccessCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8C20 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidDominatesForTrust @ 0x1402B33C0 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x1402B5C70 (SepFilterCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     SepLocateTokenTrustLevel @ 0x1403347F0 (SepLocateTokenTrustLevel.c)
 *     SeLogAccessFailure @ 0x14035ACFC (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x140363CFC (SepLpacCausedAccessFailure.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B7B28 (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x1405B7C84 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1405B7DF8 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1405B7F40 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1405B9948 (SepRmReferenceFindCap.c)
 *     SeUnlockSubjectContext @ 0x1406C31E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C3220 (SeLockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        unsigned int *a10,
        NTSTATUS *a11)
{
  unsigned int v13; // r14d
  unsigned int v15; // r8d
  int v16; // ebx
  __int16 v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // r13d
  void *v24; // r11
  _QWORD *ClientToken; // rdi
  void *v26; // rdi
  NTSTATUS v27; // eax
  unsigned int v28; // edi
  PSECURITY_SUBJECT_CONTEXT v29; // r9
  _DWORD *v30; // r13
  int v31; // eax
  _DWORD *v32; // rcx
  char v33; // dl
  int v34; // eax
  char v35; // cl
  __int64 v36; // rax
  unsigned __int8 *v37; // rdi
  unsigned int *v38; // r15
  __int64 v39; // rax
  BOOLEAN v40; // r8
  __int16 v41; // r9
  unsigned int v42; // r10d
  unsigned __int64 v43; // r12
  _QWORD *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rsi
  char v49; // r15
  __int16 v50; // cx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _WORD *SeOwnerRightsSid; // rsi
  char *v54; // rdi
  unsigned int v55; // r12d
  unsigned __int8 v56; // cl
  char *v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // edi
  char v60; // al
  int v61; // r12d
  unsigned int v62; // edi
  int v63; // eax
  int *v64; // r12
  PACCESS_TOKEN v65; // r9
  PACCESS_TOKEN v66; // r8
  __int64 v67; // rdx
  char v68; // si
  __int64 v69; // r8
  __int64 v70; // r9
  _DWORD *v71; // r10
  int *v72; // r15
  int v73; // r11d
  int v74; // edi
  BOOLEAN v75; // al
  PVOID v76; // rbx
  bool result; // al
  unsigned int v78; // r15d
  bool v79; // zf
  char v80; // di
  char v81; // bl
  _DWORD *v82; // rax
  int v83; // eax
  PSECURITY_SUBJECT_CONTEXT v84; // rdi
  PACCESS_TOKEN PrimaryToken; // rbx
  char v86; // r14
  int v87; // ecx
  __int64 v88; // rax
  __int16 v89; // cx
  __int64 v90; // rax
  ACL *v91; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned int v96; // r12d
  int v97; // eax
  int v98; // ecx
  __int64 v99; // r8
  PVOID v100; // rcx
  int v101; // eax
  int v102; // r10d
  _QWORD *v103; // rax
  void *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r10
  __int64 v107; // r11
  int v108; // eax
  int v109; // ecx
  _QWORD *v110; // rax
  void *v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r10
  int v115; // esi
  int v116; // eax
  int v117; // ecx
  int v118; // eax
  char v119; // al
  int v120; // ecx
  __int64 v121; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v122; // rcx
  int v123; // [rsp+20h] [rbp-100h]
  int v124; // [rsp+28h] [rbp-F8h]
  char v125; // [rsp+A0h] [rbp-80h] BYREF
  char v126; // [rsp+A1h] [rbp-7Fh]
  BOOLEAN v127; // [rsp+A2h] [rbp-7Eh] BYREF
  char v128; // [rsp+A3h] [rbp-7Dh]
  char v129; // [rsp+A4h] [rbp-7Ch]
  BOOLEAN DominatesTrust; // [rsp+A5h] [rbp-7Bh] BYREF
  bool v131; // [rsp+A6h] [rbp-7Ah]
  int v132; // [rsp+A8h] [rbp-78h]
  int v133; // [rsp+ACh] [rbp-74h]
  char v134; // [rsp+B0h] [rbp-70h]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-68h]
  int v136; // [rsp+C0h] [rbp-60h]
  int v137; // [rsp+C4h] [rbp-5Ch]
  _DWORD *v138; // [rsp+C8h] [rbp-58h]
  int v139; // [rsp+D0h] [rbp-50h]
  int v140; // [rsp+D4h] [rbp-4Ch]
  __int64 v141; // [rsp+D8h] [rbp-48h]
  int *v142; // [rsp+E0h] [rbp-40h]
  PVOID P; // [rsp+E8h] [rbp-38h] BYREF
  int v144; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v145; // [rsp+F8h] [rbp-28h]
  int v146; // [rsp+100h] [rbp-20h] BYREF
  int v147; // [rsp+104h] [rbp-1Ch] BYREF
  ACL *v148; // [rsp+108h] [rbp-18h]
  __int128 v149; // [rsp+110h] [rbp-10h] BYREF
  __int64 v150; // [rsp+120h] [rbp+0h]
  _QWORD *v151; // [rsp+128h] [rbp+8h]
  __int64 v152; // [rsp+130h] [rbp+10h]
  int v153; // [rsp+138h] [rbp+18h] BYREF
  __int64 v154; // [rsp+140h] [rbp+20h]
  int *v155; // [rsp+148h] [rbp+28h]
  _QWORD *v156; // [rsp+150h] [rbp+30h]
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 v158; // [rsp+178h] [rbp+58h]
  _OWORD v159[2]; // [rsp+180h] [rbp+60h] BYREF

  v13 = a5;
  SubjectContext = a3;
  v15 = 0;
  v154 = a1;
  v16 = -1;
  *a10 = 0;
  *a11 = -1073741790;
  v126 = a4;
  v132 = a6;
  v156 = a7;
  v152 = a8;
  v142 = (int *)a10;
  v155 = a11;
  v125 = 0;
  v148 = 0LL;
  v158 = 0LL;
  v145 = 0LL;
  v128 = 0;
  v133 = 0;
  P = 0LL;
  v144 = 0;
  v146 = 0;
  v147 = -1073741790;
  v153 = -1;
  v149 = 0LL;
  memset(v159, 0, 28);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v131 = (a2 & 8) != 0;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v13 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v13;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
LABEL_295:
    *a11 = -1073741790;
    return 0;
  }
  if ( a3->ClientToken && a3->ImpersonationLevel < SecurityImpersonation )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    goto LABEL_295;
  }
  if ( !a4 )
    SeLockSubjectContext(a3);
  v17 = *(_WORD *)(a1 + 2);
  v18 = 0;
  DominatesTrust = 0;
  v127 = 0;
  if ( (v17 & 0x10) == 0 )
    goto LABEL_26;
  do
  {
    if ( v17 >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v19 )
        goto LABEL_26;
      v20 = a1 + v19;
    }
    if ( !v20 )
      goto LABEL_26;
    v15 = *(unsigned __int16 *)(v20 + 4);
    v21 = v20 + 8;
    v22 = 0;
    if ( !*(_WORD *)(v20 + 4) )
      goto LABEL_26;
    while ( v22 < v18 || *(_BYTE *)v21 != 20 )
    {
      ++v22;
      v21 += *(unsigned __int16 *)(v21 + 2);
      if ( v22 >= v15 )
        goto LABEL_26;
    }
    if ( (*(_BYTE *)(v21 + 1) & 8) == 0 )
      break;
    v18 = v22 + 1;
  }
  while ( v21 );
  if ( !v21 )
    goto LABEL_26;
  v23 = *(_DWORD *)(v21 + 4);
  v24 = (void *)(v21 + 8);
  if ( v21 == -8 )
    goto LABEL_26;
  ClientToken = a3->ClientToken;
  if ( !ClientToken )
    goto LABEL_21;
  v26 = (void *)ClientToken[138];
  v27 = RtlSidDominatesForTrust(*((PSID *)SubjectContext->PrimaryToken + 138), v26, &v127);
  if ( v27 >= 0 )
  {
    if ( v127 )
    {
LABEL_22:
      v27 = RtlSidDominatesForTrust(v26, v24, &DominatesTrust);
      if ( v27 >= 0 )
      {
        if ( DominatesTrust )
          goto LABEL_26;
        v16 = v23 | 0x1000000;
      }
      goto LABEL_25;
    }
LABEL_21:
    v26 = (void *)*((_QWORD *)SubjectContext->PrimaryToken + 138);
    goto LABEL_22;
  }
LABEL_25:
  *a11 = v27;
  if ( v27 < 0 )
    goto LABEL_165;
LABEL_26:
  v28 = a5 & 0xFDFFFFFF;
  if ( (v16 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v79 = !v131;
    v84 = SubjectContext;
    *a11 = -1073741790;
    if ( v79 )
    {
      PrimaryToken = v84->ClientToken;
      if ( !v84->ClientToken )
        PrimaryToken = v84->PrimaryToken;
      v86 = v132 | a5;
      SepLocateTokenTrustLevel(v84);
      SeLogAccessFailure(PrimaryToken, a1, v86, 0);
    }
    if ( v126 )
      return 0;
    v122 = v84;
LABEL_294:
    SeUnlockSubjectContext(v122);
    return 0;
  }
  v29 = SubjectContext;
  *a11 = 0;
  v30 = v29->ClientToken;
  if ( !v29->ClientToken )
    v30 = v29->PrimaryToken;
  if ( (a2 & 4) == 0 )
  {
    v31 = SepFilterCheck(a1, (unsigned int)&P, (_DWORD)v30, 0, (__int64)&v153);
    *a11 = v31;
    if ( v31 >= 0 )
    {
      if ( (v153 & v28) == v28 )
      {
        v29 = SubjectContext;
        *a11 = 0;
        goto LABEL_33;
      }
      v79 = !v131;
      *a11 = -1073741790;
      if ( v79 )
        SeLogAccessFailure(v30, a1, v132 | a5, 0);
    }
LABEL_165:
    if ( v126 )
      return 0;
    v122 = SubjectContext;
    goto LABEL_294;
  }
LABEL_33:
  v32 = v30 + 50;
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v15) = 0;
LABEL_35:
    v33 = 0;
    v138 = v30 + 50;
    goto LABEL_36;
  }
  v79 = (*v32 & 0x2000) == 0;
  LOBYTE(v15) = 1;
  v138 = v30 + 50;
  if ( v79 )
    goto LABEL_35;
  v33 = 1;
LABEL_36:
  v134 = v33;
  v127 = 0;
  if ( !SepAllowAccessUponLogoff && (*v32 & 0x20) == 0 )
  {
    v88 = *((_QWORD *)v30 + 27);
    if ( v88 )
    {
      if ( (*(_DWORD *)(v88 + 32) & 0x20) != 0 )
      {
        v79 = v126 == 0;
        *v142 = 0;
        *a11 = -1073741790;
        if ( !v79 )
          return 0;
        v122 = v29;
        goto LABEL_294;
      }
    }
  }
  if ( v33 )
    goto LABEL_42;
  v34 = SepMandatoryIntegrityCheck(v152, a1, v15, (_DWORD)v30, 0, (__int64)&v149);
  *a11 = v34;
  if ( v34 < 0 )
    goto LABEL_165;
  if ( !DWORD2(v149) || (v28 & (unsigned int)v149) == v28 )
  {
    *a11 = 0;
    if ( (a5 & 0x2000000) == 0 || (*v138 & 0x4000) == 0 || HIDWORD(v149) > 0x2000 )
      goto LABEL_42;
    goto LABEL_141;
  }
  v82 = v138;
  *a11 = -1073741790;
  if ( (*v82 & 0x4000) == 0 || HIDWORD(v149) > 0x2000 )
    goto LABEL_165;
LABEL_141:
  v127 = 1;
LABEL_42:
  if ( !SepRmEnforceCap )
    goto LABEL_43;
  v89 = *(_WORD *)(a1 + 2);
  if ( (v89 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_43;
  if ( v89 >= 0 )
  {
    v91 = *(ACL **)(a1 + 24);
  }
  else
  {
    v90 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v90 )
    {
      v148 = 0LL;
      v35 = 0;
      goto LABEL_44;
    }
    v91 = (ACL *)(a1 + v90);
  }
  v148 = v91;
  if ( !v91 || (ScopedPolicySid = (void *)SepGetScopedPolicySid(v91)) == 0LL )
  {
LABEL_43:
    v35 = 0;
    goto LABEL_44;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v94 = v145;
  v35 = 1;
  if ( Cap < 0 )
    v94 = SepRmDefaultCap;
  v145 = v94;
  v128 = 1;
LABEL_44:
  if ( (a2 & 1) != 0 )
  {
    v129 = 1;
    if ( (a5 & 0x2060000) == 0 && !v35 )
    {
      v49 = 0;
      v62 = a5;
LABEL_85:
      v63 = v133;
      goto LABEL_86;
    }
  }
  else
  {
    v129 = 0;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v37 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v36 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v36 )
      v37 = (unsigned __int8 *)(a1 + v36);
    else
      v37 = 0LL;
  }
  v38 = v30 + 58;
  if ( v30 == (_DWORD *)-232LL || !v37 )
    goto LABEL_113;
  v39 = v37[1];
  v40 = 0;
  v41 = *(_WORD *)v37;
  LOWORD(v139) = *(_WORD *)v37;
  DominatesTrust = 0;
  v42 = 4 * v39 + 8;
  LODWORD(v39) = v37[4 * v39 + 4];
  v136 = v42;
  v43 = *(_QWORD *)&v38[2 * (v39 & 0xF) + 4] & *(_QWORD *)&v38[2 * ((unsigned __int64)(unsigned int)v39 >> 4) + 36];
  v44 = v30 + 60;
  v151 = v30 + 60;
  if ( !v43 )
  {
LABEL_112:
    v78 = *v38;
    if ( v78 > 0x40 )
    {
      v95 = *v44;
      v96 = 64;
      v150 = *v44;
      do
      {
        v48 = v95 + 16LL * v96;
        if ( **(_WORD **)v48 == v41 )
        {
          if ( !memcmp(v37, *(const void **)v48, v42) )
            goto LABEL_56;
          v41 = v139;
          v42 = v136;
          v95 = v150;
        }
        ++v96;
      }
      while ( v96 < v78 );
    }
LABEL_113:
    v49 = 0;
LABEL_114:
    v62 = a5;
    goto LABEL_85;
  }
LABEL_52:
  LOBYTE(v45) = v43;
  v140 = (unsigned __int8)v43;
  if ( !(_BYTE)v43 )
    goto LABEL_123;
  v46 = *v44;
  v47 = v40;
  v150 = v46;
  v137 = v40;
  while ( 1 )
  {
    LODWORD(v141) = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v45);
    v48 = v46 + 16LL * (unsigned int)(v47 + v141);
    if ( **(_WORD **)v48 == v41 )
      break;
LABEL_121:
    v47 = v137;
    v45 = (unsigned __int8)v140 ^ (1 << v141);
    v46 = v150;
    v140 = v45;
    if ( !(_BYTE)v45 )
    {
      v40 = DominatesTrust;
      v44 = v30 + 60;
LABEL_123:
      v40 += 8;
      v43 >>= 8;
      DominatesTrust = v40;
      if ( !v43 )
      {
        v151 = v44;
        goto LABEL_112;
      }
      goto LABEL_52;
    }
  }
  if ( memcmp(v37, *(const void **)v48, v42) )
  {
    v41 = v139;
    v42 = v136;
    goto LABEL_121;
  }
LABEL_56:
  if ( (v48 != *v151 || (*(_DWORD *)(v48 + 8) & 0x10) != 0) && (*(_DWORD *)(v48 + 8) & 4) == 0 )
    goto LABEL_113;
  v49 = 1;
  if ( v30[32] )
  {
    LOBYTE(v124) = 0;
    LOBYTE(v123) = 1;
    v49 = SepSidInTokenSidHash(v30 + 126, 0LL, v37, 0LL, v123, v124);
  }
  if ( v49 && (a5 & 0x2060000) != 0 )
  {
    if ( !v129 )
    {
      v50 = *(_WORD *)(v154 + 2);
      if ( (v50 & 4) != 0 )
      {
        if ( v50 >= 0 )
        {
          v52 = *(_QWORD *)(v154 + 32);
          goto LABEL_67;
        }
        v51 = *(unsigned int *)(v154 + 16);
        if ( (_DWORD)v51 )
        {
          v52 = v154 + v51;
LABEL_67:
          SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
          if ( v52 )
          {
            v54 = (char *)(v52 + 8);
            v137 = *(unsigned __int16 *)(v52 + 4);
            v55 = 0;
            if ( v137 )
            {
              while ( 2 )
              {
                if ( (v54[1] & 8) != 0 )
                  goto LABEL_78;
                v56 = *v54;
                if ( (unsigned __int8)(*v54 - 5) > 3u && (unsigned __int8)(v56 - 11) > 1u )
                {
                  if ( v56 < 0xFu )
                  {
                    if ( v56 != 4 )
                    {
                      if ( v56 <= 0xAu )
                        goto LABEL_75;
LABEL_216:
                      if ( (unsigned __int8)(v56 - 13) <= 1u )
                      {
LABEL_75:
                        v57 = v54 + 8;
                        goto LABEL_76;
                      }
LABEL_78:
                      ++v55;
                      v54 += *((unsigned __int16 *)v54 + 1);
                      if ( v55 >= v137 )
                        goto LABEL_79;
                      continue;
                    }
                    v57 = v54 + 12;
LABEL_76:
                    if ( v57 )
                    {
                      v58 = *(unsigned __int16 *)v57;
                      if ( (_WORD)v58 == *SeOwnerRightsSid && !memcmp(v57, SeOwnerRightsSid, 4 * (v58 >> 8) + 8) )
                        goto LABEL_114;
                    }
                    goto LABEL_78;
                  }
                  if ( v56 > 0x10u )
                    goto LABEL_216;
                }
                break;
              }
              v57 = &v54[16 * (*((_DWORD *)v54 + 2) & 1) + ((8LL * (*((_DWORD *)v54 + 2) & 2)) | 0xC)];
              goto LABEL_76;
            }
          }
        }
      }
    }
LABEL_79:
    v59 = 393216;
    if ( (a5 & 0x2000000) == 0 )
      v59 = a5 & 0x60000;
    v60 = v128;
    v133 = v59;
    v61 = v132 | v59;
    v13 = a5 & 0xFFF9FFFF;
    v132 |= v59;
    if ( !v128 )
    {
      v49 = 0;
      v132 = v61;
      v133 = v59;
    }
  }
  else
  {
    v60 = v128;
    v61 = v132;
  }
  v62 = v13;
  if ( v13 || v60 )
    goto LABEL_85;
  if ( (*v138 & 0x2000) != 0 || (v63 = v133) == 0 )
  {
    if ( !v126 )
      SeUnlockSubjectContext(SubjectContext);
    result = 1;
    *v142 = v61;
    *v155 = 0;
    return result;
  }
LABEL_86:
  v64 = v155;
  LODWORD(v159[0]) = v63;
  v65 = SubjectContext->ClientToken;
  v66 = SubjectContext->PrimaryToken;
  memset((char *)v159 + 4, 0, 24);
  v68 = SepAccessCheck(
          v154,
          0,
          (_DWORD)v66,
          (_DWORD)v65,
          v13,
          0LL,
          0,
          v152,
          v132,
          a9,
          (__int64)v142,
          (__int64)v156,
          (__int64)v155,
          0,
          v49,
          (__int64)v159,
          (__int64)&P,
          (__int64)&v125,
          0LL);
  v70 = v145;
  v141 = v145;
  if ( !SepRmEnforceCap || (v97 = *v64, v136 = v97, v97 < 0) || !v128 )
  {
    v71 = v138;
    v72 = v142;
    goto LABEL_88;
  }
  v67 = 0LL;
  v129 = 0;
  LOBYTE(v139) = 0;
  v140 = 0;
  v98 = *v142;
  v133 = *v142;
  if ( !*(_DWORD *)(v145 + 60) )
    goto LABEL_269;
  while ( 2 )
  {
    v99 = *(_QWORD *)(v70 + 8LL * (unsigned int)v67 + 64);
    v145 = v99;
    if ( *(_QWORD *)(v99 + 24) )
    {
      v100 = P;
      if ( !P )
      {
        v101 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v148, (__int64 *)&P);
        v100 = P;
        v99 = v145;
        v102 = (unsigned __int8)v139;
        if ( v101 < 0 )
          v102 = 1;
        v139 = v102;
      }
      v103 = (_QWORD *)*((_QWORD *)v30 + 137);
      if ( v103 )
      {
        v104 = (void *)v103[72];
        v105 = v103[74];
        v106 = v103[73];
        v107 = v103[75];
      }
      else
      {
        v104 = 0LL;
        v105 = 0LL;
        v106 = 0LL;
        v107 = 0LL;
      }
      v108 = AuthzBasepEvaluateAceCondition(
               v30,
               *((void **)v30 + 97),
               v100,
               v104,
               v105,
               v106,
               v107,
               *(_DWORD **)(v99 + 24),
               *(_DWORD *)(v99 + 16),
               1u,
               0,
               &v144);
      v109 = v144;
      v137 = v108;
      if ( v144 != 1 )
      {
        if ( v108 < 0 )
        {
          if ( !v126 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v141 + 32) )
            goto LABEL_259;
          goto LABEL_260;
        }
        v71 = v138;
        if ( (*v138 & 0x10) != 0 )
        {
          v110 = (_QWORD *)*((_QWORD *)v30 + 137);
          if ( v110 )
          {
            v111 = (void *)v110[72];
            v112 = v110[74];
            v113 = v110[73];
            v114 = v110[75];
          }
          else
          {
            v111 = 0LL;
            v112 = 0LL;
            v113 = 0LL;
            v114 = 0LL;
          }
          v137 = AuthzBasepEvaluateAceCondition(
                   v30,
                   *((void **)v30 + 97),
                   P,
                   v111,
                   v112,
                   v113,
                   v114,
                   *(_DWORD **)(v145 + 24),
                   *(_DWORD *)(v145 + 16),
                   1u,
                   1u,
                   &v144);
          if ( v137 >= 0 )
          {
            v109 = v144;
            v71 = v138;
            goto LABEL_239;
          }
          if ( !v126 )
            SeUnlockSubjectContext(SubjectContext);
          if ( *(_QWORD *)(v141 + 32) )
LABEL_259:
            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_260:
          *v142 = 0;
          *v64 = v137;
LABEL_262:
          SepFreeResourceInfo(P);
          return 0;
        }
LABEL_239:
        if ( !(_BYTE)v139 && v109 != 1 )
        {
          v97 = v136;
LABEL_254:
          v70 = v141;
          v67 = (unsigned int)(v140 + 1);
          v140 = v67;
          if ( (unsigned int)v67 >= *(_DWORD *)(v141 + 60) )
          {
            v98 = v133;
            goto LABEL_270;
          }
          continue;
        }
      }
    }
    break;
  }
  v115 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  if ( v115 < 0 )
  {
    if ( !v126 )
      SeUnlockSubjectContext(SubjectContext);
    if ( *(_QWORD *)(v141 + 32) )
      ((void (*)(void))SepRmDereferenceCapTable)();
    *v142 = 0;
    *v64 = v115;
    goto LABEL_262;
  }
  v116 = v13;
  if ( (*(_DWORD *)(v145 + 48) & 1) != 0 )
  {
    v116 = v13;
    if ( (v13 & 0x2000000) == 0 )
      v116 = v132 | v13;
    v117 = 0;
  }
  else
  {
    v117 = v132;
  }
  v68 = SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          0,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v116,
          0LL,
          0,
          v152,
          v117,
          a9,
          (__int64)&v146,
          0LL,
          (__int64)&v147,
          0,
          v49,
          (__int64)v159,
          (__int64)&P,
          (__int64)&v125,
          0LL);
  if ( v129 )
    v118 = v146 & v133;
  else
    v118 = v146;
  v133 = v118;
  if ( v118 )
  {
    v97 = v147;
    v136 = v147;
    v129 = 1;
    if ( v147 < 0 )
      goto LABEL_268;
    v71 = v138;
    goto LABEL_254;
  }
  v97 = -1073741790;
LABEL_268:
  v70 = v141;
  v98 = v133;
LABEL_269:
  v71 = v138;
LABEL_270:
  v72 = v142;
  *v64 = v97;
  v119 = v125;
  *v72 &= v98;
  if ( *v64 < 0 )
    v119 = 0;
  v125 = v119;
LABEL_88:
  v73 = v132;
  v74 = v62 & 0x2000000;
  if ( !v134 && v74 )
  {
    if ( (!v127 || !*(_WORD *)((char *)&v159[1] + 5) && (*v71 & 0x3000000) != 0x3000000)
      && DWORD2(v149)
      && (!BYTE4(v149) || !BYTE5(v149) || !BYTE6(v149)) )
    {
      v87 = *v72 & v149;
      if ( v87 != *v72 )
      {
        *v72 = v87;
        if ( v87 )
        {
          *v64 = 0;
          v125 = 1;
        }
        else
        {
          *v64 = -1073741790;
          v125 = 0;
        }
      }
    }
  }
  else
  {
    if ( v127 && !*(_WORD *)((char *)&v159[1] + 5) )
    {
      if ( (*v71 & 0x3000000) != 0x3000000 || HIDWORD(v159[0]) )
      {
        v83 = 0;
        *v64 = -1073741790;
        v125 = 0;
      }
      else
      {
        BYTE7(v159[1]) = 1;
        *v64 = 0;
        v83 = v73 | v13;
        v125 = 1;
      }
      *v72 = v83;
    }
    if ( !v74 )
    {
      v75 = 0;
      LOBYTE(v69) = 0;
      goto LABEL_93;
    }
  }
  v75 = 0;
  v127 = 0;
  if ( v16 != -1 )
  {
    v120 = v16 & *v72;
    if ( v120 == *v72 )
    {
      v75 = 0;
    }
    else
    {
      v75 = 1;
      v127 = 1;
      *v72 = v120;
      if ( v120 )
      {
        *v64 = 0;
        v125 = 1;
      }
      else
      {
        *v64 = -1073741790;
        v125 = 0;
      }
    }
  }
  LOBYTE(v69) = 0;
  if ( v153 != -1 )
  {
    v67 = v153 & (unsigned int)*v72;
    if ( (_DWORD)v67 == *v72 )
    {
      v75 = v127;
    }
    else
    {
      *v72 = v67;
      LOBYTE(v69) = 1;
      v75 = v127;
      if ( (_DWORD)v67 )
      {
        *v64 = 0;
        v125 = 1;
      }
      else
      {
        *v64 = -1073741790;
        v125 = 0;
      }
    }
  }
LABEL_93:
  if ( v30 )
  {
    if ( (v75 || (_BYTE)v69 || !HIDWORD(v159[0]) && (*v71 & 0x4000) != 0 && (*v64 < 0 || BYTE7(v159[1]))) && !v131 )
    {
      v80 = *v64 >= 0;
      v81 = v73 | v13;
      SepLocateTokenTrustLevel(SubjectContext);
      SeLogAccessFailure(v30, v154, v81, v80);
      v70 = v141;
    }
    if ( *v64 < 0
      && !HIDWORD(v159[0])
      && (*v138 & 0x4000) != 0
      && (unsigned __int8)SepLpacCausedAccessFailure(v159, v13) )
    {
      SepLogLpacAccessFailure();
      v70 = v141;
    }
  }
  if ( v128 )
  {
    v121 = *(_QWORD *)(v70 + 32);
    if ( v121 )
      SepRmDereferenceCapTable(v121, v67, v69);
  }
  if ( !v126 )
    SeUnlockSubjectContext(SubjectContext);
  v76 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v76, 0);
  }
  return v68 && v125;
}
