/*
 * XREFs of SeAccessCheckByType @ 0x1402B3A90
 * Callers:
 *     NtAccessCheck @ 0x140346210 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140355000 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1405B7900 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14022525C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByMandatory @ 0x1402281D4 (SepConstrainByMandatory.c)
 *     SepConstrainByConstraintMask @ 0x1402294E4 (SepConstrainByConstraintMask.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     SepAccessCheck @ 0x140232C80 (SepAccessCheck.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402604E0 (ExpReleaseResourceForThreadLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8C20 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E40 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureObjectTypeList @ 0x1402B5968 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x1402B5B78 (SepTrustLevelCheck.c)
 *     SepFilterCheck @ 0x1402B5C70 (SepFilterCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 *     SePrivilegePolicyCheck @ 0x1402B64C0 (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     RtlpOwnerAcesPresent @ 0x140337480 (RtlpOwnerAcesPresent.c)
 *     SeLogAccessFailure @ 0x14035ACFC (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x140363CFC (SepLpacCausedAccessFailure.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8284 (ExpFastResourceLegacyAcquireShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1403CA140 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B7B28 (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1405B7BCC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1405B7C84 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1405B7DF8 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405B7F0C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405B7F40 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1405B9948 (SepRmReferenceFindCap.c)
 *     SeReleaseSid @ 0x1406BB2A4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1407336A0 (ObReferenceObjectByHandleWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x140737050 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407378D0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int16 *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        unsigned int *a10,
        _DWORD *a11,
        char a12)
{
  __int64 v14; // rdx
  _DWORD *v15; // r8
  __int64 PreviousMode; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 result; // rax
  _QWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // r13
  int v25; // ebx
  int v26; // eax
  __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // r14d
  int v34; // esi
  unsigned int v35; // r15d
  char v36; // r15
  char v37; // si
  unsigned int v38; // ecx
  _DWORD *v39; // r12
  unsigned __int8 v40; // di
  PVOID v41; // rsi
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // eax
  struct _KTHREAD *v47; // r8
  __int64 v48; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v50; // rbx
  ULONG_PTR v51; // r10
  __int16 v52; // cx
  __int16 v53; // ax
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v55; // rdx
  unsigned __int8 v56; // dl
  __int64 v57; // rcx
  __int64 v58; // rsi
  char v59; // r12
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // r8
  _DWORD *v63; // r9
  struct _ERESOURCE *v64; // rcx
  __int64 v65; // rsi
  __int16 v66; // cx
  __int64 v67; // rax
  ACL *v68; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v71; // rdx
  unsigned int v72; // r14d
  __int16 v73; // ax
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // eax
  unsigned int v77; // ebx
  PVOID v78; // r15
  unsigned int v79; // ecx
  unsigned int *v80; // rdx
  _DWORD *v81; // r8
  __int64 v82; // r13
  __int64 v83; // r12
  unsigned int *Pool2; // rax
  unsigned int *v85; // rdx
  __int64 v86; // r13
  int *v87; // rax
  char *v88; // r14
  _DWORD *v89; // rax
  int *v90; // rax
  int v91; // r12d
  char *v92; // r15
  int v93; // r10d
  unsigned int v94; // r13d
  unsigned int v95; // ecx
  __int64 v96; // rdx
  _DWORD *i; // rsi
  __int64 v98; // rbx
  PVOID v99; // r8
  int v100; // eax
  int v101; // edx
  _QWORD *v102; // rax
  __int64 v103; // r10
  __int64 v104; // rdx
  __int64 v105; // rcx
  void *v106; // r9
  int v107; // eax
  int v108; // ecx
  _QWORD *v109; // rax
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // rcx
  void *v113; // r9
  unsigned int v114; // eax
  unsigned int v115; // ecx
  int *v116; // r12
  PVOID v117; // rbx
  ULONG_PTR v118; // r8
  __int16 v119; // cx
  __int16 v120; // ax
  unsigned __int8 v121; // al
  struct _KTHREAD *v122; // rdx
  unsigned __int8 v123; // al
  struct _KTHREAD *v124; // rdx
  int v125; // ebx
  unsigned int v126; // r12d
  unsigned int v127; // eax
  unsigned int v128; // edx
  __int64 v129; // rax
  unsigned int v130; // r8d
  unsigned int v131; // r9d
  __m128i v132; // xmm1
  unsigned int v133; // r10d
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // r8d
  int *v137; // rcx
  __int64 v138; // rdx
  unsigned int v139; // ecx
  unsigned int j; // eax
  __int64 v141; // rcx
  struct _KTHREAD *v142; // rax
  PERESOURCE *v143; // rbx
  __int64 v144; // rcx
  PVOID v145; // rdi
  int Tag; // [rsp+20h] [rbp-2B8h]
  int Taga; // [rsp+20h] [rbp-2B8h]
  int Object; // [rsp+28h] [rbp-2B0h]
  int Objecta; // [rsp+28h] [rbp-2B0h]
  int Objectb; // [rsp+28h] [rbp-2B0h]
  unsigned __int8 v151; // [rsp+A0h] [rbp-238h]
  int v152; // [rsp+A4h] [rbp-234h]
  char v153; // [rsp+A8h] [rbp-230h]
  char v154; // [rsp+A9h] [rbp-22Fh]
  char v155; // [rsp+AAh] [rbp-22Eh]
  unsigned int v156; // [rsp+B0h] [rbp-228h] BYREF
  PVOID v157; // [rsp+B8h] [rbp-220h]
  char v158; // [rsp+C0h] [rbp-218h] BYREF
  char v159; // [rsp+C1h] [rbp-217h] BYREF
  int v160; // [rsp+C2h] [rbp-216h] BYREF
  PVOID v161; // [rsp+C8h] [rbp-210h] BYREF
  int v162; // [rsp+D0h] [rbp-208h]
  int v163; // [rsp+D4h] [rbp-204h]
  unsigned int v164; // [rsp+D8h] [rbp-200h]
  unsigned int v165; // [rsp+DCh] [rbp-1FCh] BYREF
  char v166; // [rsp+E0h] [rbp-1F8h]
  unsigned int v167; // [rsp+E8h] [rbp-1F0h]
  unsigned int v168; // [rsp+F0h] [rbp-1E8h]
  BOOL v169; // [rsp+F4h] [rbp-1E4h]
  __int64 v170; // [rsp+F8h] [rbp-1E0h] BYREF
  int v171; // [rsp+100h] [rbp-1D8h]
  _DWORD Length[3]; // [rsp+104h] [rbp-1D4h]
  volatile void *Address; // [rsp+110h] [rbp-1C8h]
  int *v174; // [rsp+118h] [rbp-1C0h]
  int v175; // [rsp+120h] [rbp-1B8h] BYREF
  PVOID v176; // [rsp+128h] [rbp-1B0h] BYREF
  ACL *v177; // [rsp+130h] [rbp-1A8h]
  int *v178; // [rsp+138h] [rbp-1A0h]
  __int64 v179; // [rsp+140h] [rbp-198h]
  _OWORD *v180; // [rsp+148h] [rbp-190h] BYREF
  PVOID v181; // [rsp+150h] [rbp-188h]
  PVOID v182; // [rsp+158h] [rbp-180h] BYREF
  __int64 v183; // [rsp+160h] [rbp-178h] BYREF
  PVOID P; // [rsp+168h] [rbp-170h] BYREF
  __int64 v185; // [rsp+170h] [rbp-168h] BYREF
  volatile void *v186; // [rsp+178h] [rbp-160h]
  int v187; // [rsp+180h] [rbp-158h] BYREF
  int v188; // [rsp+184h] [rbp-154h] BYREF
  unsigned int v189; // [rsp+188h] [rbp-150h]
  int v190; // [rsp+18Ch] [rbp-14Ch] BYREF
  int v191; // [rsp+190h] [rbp-148h] BYREF
  BOOLEAN DominatesTrust[8]; // [rsp+198h] [rbp-140h] BYREF
  PVOID v193; // [rsp+1A0h] [rbp-138h] BYREF
  __int16 *v194; // [rsp+1A8h] [rbp-130h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1B0h] [rbp-128h] BYREF
  void *Src; // [rsp+1D0h] [rbp-108h]
  void *v197; // [rsp+1E8h] [rbp-F0h]
  void *v198; // [rsp+1F0h] [rbp-E8h]
  __int128 v199; // [rsp+1F8h] [rbp-E0h] BYREF
  _DWORD *v200; // [rsp+208h] [rbp-D0h]
  _DWORD *v201; // [rsp+210h] [rbp-C8h]
  unsigned int *v202; // [rsp+218h] [rbp-C0h]
  _OWORD *v203; // [rsp+220h] [rbp-B8h]
  __int64 v204; // [rsp+228h] [rbp-B0h]
  unsigned int *v205; // [rsp+230h] [rbp-A8h]
  _DWORD *v206; // [rsp+238h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+240h] [rbp-98h] BYREF
  __int64 v208; // [rsp+260h] [rbp-78h]
  __int128 v209; // [rsp+268h] [rbp-70h] BYREF
  __int64 v210; // [rsp+278h] [rbp-60h]
  int v211; // [rsp+280h] [rbp-58h]
  __int128 v212; // [rsp+288h] [rbp-50h] BYREF

  Src = a2;
  v164 = a6;
  v203 = a7;
  v14 = (__int64)a10;
  v202 = a10;
  v15 = a11;
  v201 = a11;
  v200 = a9;
  v194 = a1;
  v197 = a2;
  v198 = a3;
  v156 = a4;
  v204 = a5;
  v167 = a6;
  v189 = a6;
  v180 = a7;
  v186 = a8;
  v178 = a9;
  *(_QWORD *)&Length[1] = a10;
  v205 = a10;
  Address = a11;
  v206 = a11;
  v188 = 0;
  v181 = 0LL;
  v187 = 0;
  v191 = 0;
  v157 = 0LL;
  v190 = 0;
  v174 = 0LL;
  v161 = 0LL;
  v170 = 0LL;
  v183 = 0LL;
  v165 = 0;
  v163 = 0;
  v212 = 0LL;
  v182 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v199 = 0LL;
  v169 = 0;
  v166 = 0;
  v176 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0;
  v177 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v208 = 0LL;
  v179 = 0LL;
  v155 = 0;
  v154 = 0;
  v175 = 0;
  v193 = 0LL;
  LOBYTE(v160) = 0;
  v158 = 0;
  v159 = 0;
  *(_QWORD *)DominatesTrust = 0LL;
  v185 = 0LL;
  v162 = -1073741790;
  Length[0] = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v151 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v18 = (__int64)a9;
    v17 = *(_DWORD *)v18;
  }
  else
  {
    v17 = *a9;
  }
  Length[0] = v17;
  LODWORD(v180) = -1;
  LODWORD(v185) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *a11 = 0;
    *a10 = v156;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v20 = v186;
      goto LABEL_24;
    }
    ProbeForWrite(Address, 4LL * a6, 4u);
    ProbeForWrite(*(volatile void **)&Length[1], 4LL * a6, 4u);
  }
  else
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a11 < 0x7FFFFFFF0000LL )
      v21 = (__int64)a11;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v22 = (__int64)a10;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  v23 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v178 < 0x7FFFFFFF0000LL )
    v23 = (__int64)a9;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  v20 = v186;
  ProbeForWrite(v186, Length[0], 4u);
  if ( v186 && Length[0] >= 0x14u )
    *(_DWORD *)v186 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v212 = *a7;
  result = 0LL;
  PreviousMode = v151;
LABEL_24:
  v24 = Src;
  if ( (int)result < 0 )
    return result;
  if ( (v156 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
LABEL_322:
    v152 = v25;
LABEL_323:
    v40 = v151;
LABEL_324:
    v37 = a12;
    goto LABEL_325;
  }
  if ( (unsigned __int64)a3 + 6 <= 2 )
    v26 = SepReferenceTokenUsingPseudoHandle((__int64)a3, v14, (ULONG_PTR *)&v161, &v160, DominatesTrust);
  else
    v26 = ObReferenceObjectByHandleWithTag(
            a3,
            8u,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            0x74726853u,
            &v161,
            0LL);
  v25 = v26;
  v152 = v26;
  if ( v26 < 0 )
  {
    v161 = 0LL;
    goto LABEL_323;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v161 + 48) != 2 )
    {
      v25 = -1073741732;
      goto LABEL_322;
    }
    if ( *((int *)v161 + 49) < 1 )
    {
      v25 = -1073741659;
      goto LABEL_322;
    }
  }
  v25 = SeCaptureObjectTypeList(v204, v167, v151, &v182);
  v152 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v25 = SeCaptureSecurityDescriptor((_DWORD)v194, v151, 1, 0, (__int64)&v170);
  v152 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( !v170 )
    goto LABEL_321;
  v194 = (__int16 *)(v170 + 2);
  v27 = *(_WORD *)(v170 + 2);
  if ( v27 >= 0 )
  {
    v29 = *(_QWORD *)(v170 + 8);
  }
  else
  {
    v28 = *(unsigned int *)(v170 + 4);
    if ( !(_DWORD)v28 )
      goto LABEL_321;
    v29 = v170 + v28;
  }
  if ( !v29 )
    goto LABEL_321;
  if ( v27 < 0 )
  {
    v30 = *(unsigned int *)(v170 + 8);
    if ( (_DWORD)v30 )
    {
      v31 = v170 + v30;
      goto LABEL_49;
    }
LABEL_321:
    v25 = -1073741703;
    goto LABEL_322;
  }
  v31 = *(_QWORD *)(v170 + 16);
LABEL_49:
  if ( !v31 )
    goto LABEL_321;
  if ( (_BYTE)v160 )
    v32 = *(_QWORD *)DominatesTrust;
  else
    v32 = *((_QWORD *)v161 + 138);
  LOBYTE(Object) = 1;
  v33 = (int)v161;
  v34 = v170;
  v25 = SepTrustLevelCheck(&v180, v170, 0LL, v161, v32, Object, &v180);
  v152 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v35 = v156 & 0xFDFFFFFF;
  if ( ((unsigned int)v180 & v156 & 0xFDFFFFFF) != (v156 & 0xFDFFFFFF) )
  {
    v158 = 1;
    goto LABEL_71;
  }
  LOBYTE(PreviousMode) = 1;
  v25 = SepFilterCheck(v34, (unsigned int)&v176, v33, PreviousMode, (__int64)&v185);
  v152 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( ((unsigned int)v185 & v35) != v35 )
  {
    v159 = 1;
LABEL_71:
    LOBYTE(v25) = v169;
    v14 = 3221225506LL;
LABEL_72:
    v36 = 0;
    goto LABEL_73;
  }
  v25 = SepMandatoryIntegrityCheck((unsigned int)&v212, v34, 0, v33, 1, (__int64)&v199);
  v152 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  LOBYTE(v25) = 0;
  v169 = v25;
  if ( DWORD2(v199) && (v35 & (unsigned int)v199) != v35 )
  {
    v14 = 3221225506LL;
  }
  else
  {
    v14 = 0LL;
    if ( (v156 & 0x2000000) == 0 )
      goto LABEL_61;
  }
  if ( (*((_DWORD *)v161 + 50) & 0x4000) != 0 )
  {
    LOBYTE(v25) = HIDWORD(v199) <= 0x2000;
    v169 = HIDWORD(v199) <= 0x2000;
  }
LABEL_61:
  if ( (int)v14 < 0 && !(_BYTE)v25 )
    goto LABEL_72;
  v14 = (unsigned int)SePrivilegePolicyCheck(
                        (unsigned int)&v156,
                        (unsigned int)&v165,
                        0,
                        (_DWORD)v161,
                        (__int64)&P,
                        v151);
  if ( v156 || !v165 )
    goto LABEL_72;
  v36 = 1;
LABEL_73:
  if ( (int)v14 < 0 && !(_BYTE)v25 )
  {
    v37 = a12;
    if ( a12 )
    {
      v38 = 0;
      v15 = *(_DWORD **)&Length[1];
      PreviousMode = (__int64)Address;
      while ( 1 )
      {
        v168 = v38;
        if ( v38 >= v167 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v38) = v14;
        v15[v38++] = 0;
      }
    }
    else
    {
      *(_DWORD *)Address = v14;
      **(_DWORD **)&Length[1] = 0;
    }
    v162 = v14;
    v25 = 0;
    v152 = 0;
    v39 = v157;
    v40 = v151;
    goto LABEL_326;
  }
  v41 = P;
  if ( P )
  {
    v42 = *(_DWORD *)P;
    v43 = 12 * *(_DWORD *)P;
    v44 = v43 + 8;
    if ( !*(_DWORD *)P )
      v44 = 8;
    if ( v44 > Length[0] )
    {
      v45 = v43 + 8;
      if ( !v42 )
        v45 = 8;
      *v178 = v45;
      v25 = -1073741789;
      v152 = -1073741789;
      v40 = v151;
      ExFreePoolWithTag(v41, 0);
      goto LABEL_324;
    }
    v46 = v43 + 8;
    if ( !v42 )
      v46 = 8;
    memmove(v20, P, v46);
    ExFreePoolWithTag(v41, 0);
  }
  else
  {
    if ( Length[0] < 0x14u )
    {
      *v178 = 20;
      v25 = -1073741789;
      v152 = -1073741789;
      v39 = v157;
      v37 = a12;
      v40 = v151;
      goto LABEL_326;
    }
    *v20 = 0LL;
  }
  if ( v24 )
  {
    v25 = SeCaptureSid(v24, Tag, 1, (__int64)&v183);
    v152 = v25;
    if ( v25 < 0 )
    {
      v183 = 0LL;
      goto LABEL_323;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v50 = (char *)v161;
  v51 = *((_QWORD *)v161 + 6);
  v52 = *(_WORD *)(v51 + 26);
  v53 = v52 & 0x41;
  if ( FeatureFastResource2 )
  {
    if ( v53 != 1 )
    {
      if ( (v52 & 1) == 0 )
        goto LABEL_115;
      CurrentIrql = KeGetCurrentIrql();
      v55 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v55->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( !CurrentIrql && (v55->MiscFlags & 0x400) == 0 && !v55->WaitBlock[3].SpareLong )
          goto LABEL_372;
        v52 = *(_WORD *)(v51 + 26);
        goto LABEL_113;
      }
LABEL_368:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_366:
    KeBugCheckEx(0x1C6u, 0xFuLL, v51, 0LL, 0LL);
  }
  if ( v53 == 1 )
    goto LABEL_366;
  if ( (v52 & 1) == 0 )
    goto LABEL_115;
  v56 = KeGetCurrentIrql();
  v47 = KeGetCurrentThread();
  if ( v56 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v56, 1uLL, 0LL);
  if ( (v47->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_368;
  if ( !v56 && (v47->MiscFlags & 0x400) == 0 && !v47->WaitBlock[3].SpareLong )
    goto LABEL_372;
LABEL_113:
  v50 = (char *)v161;
  if ( (v52 & 1) != 0 )
  {
    ExpFastResourceLegacyAcquireShared(*((_QWORD *)v161 + 6));
    goto LABEL_116;
  }
LABEL_115:
  ExpAcquireResourceSharedLite(*((_QWORD *)v161 + 6), 1, (__int64)v47, v48);
LABEL_116:
  if ( *v194 >= 0 )
  {
    v58 = *(_QWORD *)(v170 + 8);
  }
  else
  {
    v57 = *(unsigned int *)(v170 + 4);
    if ( (_DWORD)v57 )
      v58 = v170 + v57;
    else
      v58 = 0LL;
  }
  LOBYTE(Objecta) = 0;
  LOBYTE(Tag) = 0;
  v59 = SepSidInTokenSidHash(v50 + 232, 0LL, v58, 0LL, Tag, Objecta);
  v153 = v59;
  if ( v59 && *((_DWORD *)v50 + 32) )
  {
    LOBYTE(Objectb) = 0;
    LOBYTE(Taga) = 1;
    v59 = SepSidInTokenSidHash(v50 + 504, 0LL, v58, 0LL, Taga, Objectb);
    v153 = v59;
  }
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v50 + 50) & 0x20) == 0 )
  {
    v60 = *((_QWORD *)v50 + 27);
    if ( v60 )
    {
      if ( (*(_DWORD *)(v60 + 32) & 0x20) != 0 )
      {
        v37 = a12;
        if ( a12 )
        {
          v61 = 0;
          v62 = *(_QWORD *)&Length[1];
          v63 = Address;
          while ( 1 )
          {
            v168 = v61;
            if ( v61 >= v167 )
              break;
            v63[v61] = -1073741790;
            *(_DWORD *)(v62 + 4LL * v61++) = 0;
          }
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          **(_DWORD **)&Length[1] = 0;
        }
        v162 = -1073741790;
        v152 = 0;
        v40 = v151;
        v64 = (struct _ERESOURCE *)*((_QWORD *)v50 + 6);
LABEL_134:
        ExReleaseResourceLite(v64);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = 0;
LABEL_325:
        v39 = v157;
        goto LABEL_326;
      }
    }
  }
  v65 = v170;
  if ( SepRmEnforceCap )
  {
    v66 = *(_WORD *)(v170 + 2);
    if ( (v66 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v66 >= 0 )
      {
        v68 = *(ACL **)(v170 + 24);
      }
      else
      {
        v67 = *(unsigned int *)(v170 + 12);
        if ( !(_DWORD)v67 )
        {
          v177 = 0LL;
          goto LABEL_148;
        }
        v68 = (ACL *)(v170 + v67);
      }
      v177 = v68;
      if ( v68 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v68);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          v71 = v179;
          if ( Cap < 0 )
            v71 = SepRmDefaultCap;
          v179 = v71;
          v155 = 1;
        }
      }
    }
  }
LABEL_148:
  v72 = v156;
  if ( (v156 & 0x2060000) != 0
    && v59
    && ((v73 = *(_WORD *)(v65 + 2), (v73 & 4) != 0)
      ? (v73 >= 0
       ? (v74 = *(_QWORD *)(v65 + 32))
       : (v75 = *(unsigned int *)(v65 + 16), (_DWORD)v75)
       ? (v74 = v65 + v75)
       : (v74 = 0LL))
      : (v74 = 0LL),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v74)) )
  {
    if ( (v72 & 0x2000000) != 0 )
    {
      v76 = 393216;
      v77 = v165 | 0x60000;
    }
    else
    {
      v76 = v72 & 0x60000;
      v77 = v165 | v72 & 0x60000;
    }
    v163 = v76;
    v165 = v77;
    v72 &= 0xFFF9FFFF;
    v156 = v72;
  }
  else
  {
    v77 = v165;
  }
  if ( v72 || v155 && !v36 )
  {
    v78 = v161;
  }
  else
  {
    v78 = v161;
    if ( (*((_DWORD *)v161 + 50) & 0x2000) != 0 || !v163 )
    {
      v37 = a12;
      if ( a12 )
      {
        v79 = 0;
        v80 = v205;
        v81 = v206;
        while ( 1 )
        {
          v168 = v79;
          if ( v79 >= v167 )
            break;
          if ( v77 )
          {
            v81[v79] = 0;
            v162 = 0;
            v80[v79] = v77;
          }
          else
          {
            v81[v79] = -1073741790;
            v162 = -1073741790;
            v80[v79] = 0;
          }
          ++v79;
        }
      }
      else if ( v77 )
      {
        *(_DWORD *)Address = 0;
        v162 = 0;
        **(_DWORD **)&Length[1] = v77;
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        v162 = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v152 = 0;
      v40 = v151;
      v64 = (struct _ERESOURCE *)*((_QWORD *)v78 + 6);
      goto LABEL_134;
    }
  }
  v82 = v189;
  v83 = 8LL * v189;
  if ( a12 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * v189, 1632068947LL);
    v85 = Pool2;
    v181 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v78 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v25 = -1073741670;
      goto LABEL_322;
    }
    v86 = v82;
    v87 = (int *)&Pool2[v86];
  }
  else
  {
    v85 = (unsigned int *)&v188;
    v181 = &v188;
    v87 = &v187;
    v86 = v189;
  }
  v178 = v87;
  LODWORD(v209) = v163;
  SepAccessCheck(
    v65,
    v183,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v78,
    v72,
    (__int128 *)v182,
    v167,
    &v212,
    v77,
    v151,
    v85,
    0LL,
    v87,
    a12,
    v153,
    (int *)&v209,
    (__int64 *)&v176,
    0LL,
    0LL);
  v88 = (char *)v178;
  if ( SepRmEnforceCap && *v178 >= 0 && v155 )
  {
    v37 = a12;
    if ( a12 )
    {
      v89 = (_DWORD *)ExAllocatePool2(256LL, v83, 1632068947LL);
      v39 = v89;
      v157 = v89;
      if ( !v89 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v161 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        v152 = -1073741670;
        v40 = v151;
        goto LABEL_326;
      }
      v90 = &v89[v86];
    }
    else
    {
      v157 = &v191;
      v90 = &v190;
    }
    v174 = v90;
    v91 = *(_DWORD *)v88;
    v92 = (char *)v181;
    v93 = *(_DWORD *)v181;
    v163 = *(_DWORD *)v181;
    LOBYTE(v171) = 0;
    v94 = v167;
    if ( v167 )
    {
      v25 = SepCopyObjectTypeList(v182, v167, &v193);
      v152 = v25;
      if ( v25 < 0 )
      {
        v40 = v151;
        goto LABEL_325;
      }
      v93 = v163;
    }
    v95 = 0;
    v167 = 0;
    v96 = v179;
    for ( i = v161; v95 < *(_DWORD *)(v179 + 60); v96 = v179 )
    {
      v98 = *(_QWORD *)(v96 + 8LL * v95 + 64);
      if ( !*(_QWORD *)(v98 + 24) )
        goto LABEL_234;
      v99 = v176;
      if ( !v176 )
      {
        v100 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v177, (__int64 *)&v176);
        v101 = (unsigned __int8)v171;
        if ( v100 < 0 )
          v101 = 1;
        v171 = v101;
        v99 = v176;
      }
      v102 = (_QWORD *)*((_QWORD *)i + 137);
      v103 = v102 ? v102[75] : 0LL;
      v104 = v102 ? v102[73] : 0LL;
      v105 = v102 ? v102[74] : 0LL;
      v106 = v102 ? (void *)v102[72] : 0LL;
      v107 = AuthzBasepEvaluateAceCondition(
               i,
               *((void **)i + 97),
               v99,
               v106,
               v105,
               v104,
               v103,
               *(_DWORD **)(v98 + 24),
               *(_DWORD *)(v98 + 16),
               1u,
               0,
               &v175);
      v152 = v107;
      v108 = v175;
      if ( v175 == 1 )
        goto LABEL_234;
      if ( v107 < 0 )
        goto LABEL_253;
      if ( (i[50] & 0x10) != 0 )
      {
        v109 = (_QWORD *)*((_QWORD *)i + 137);
        if ( v109 )
          v110 = v109[75];
        else
          v110 = 0LL;
        if ( v109 )
          v111 = v109[73];
        else
          v111 = 0LL;
        if ( v109 )
          v112 = v109[74];
        else
          v112 = 0LL;
        if ( v109 )
          v113 = (void *)v109[72];
        else
          v113 = 0LL;
        v152 = AuthzBasepEvaluateAceCondition(
                 i,
                 *((void **)i + 97),
                 v176,
                 v113,
                 v112,
                 v111,
                 v110,
                 *(_DWORD **)(v98 + 24),
                 *(_DWORD *)(v98 + 16),
                 1u,
                 1u,
                 &v175);
        if ( v152 < 0 )
        {
LABEL_253:
          ExReleaseResourceLite(*((PERESOURCE *)i + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v25 = v152;
          goto LABEL_323;
        }
        v108 = v175;
      }
      if ( (_BYTE)v171 || v108 == 1 )
      {
LABEL_234:
        v152 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v152 < 0 )
          goto LABEL_253;
        v114 = v156;
        if ( (*(_DWORD *)(v98 + 48) & 1) != 0 )
        {
          if ( (v156 & 0x2000000) == 0 )
            v114 = v165 | v156;
          v115 = 0;
        }
        else
        {
          v115 = v165;
        }
        v116 = (int *)v157;
        v117 = v193;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v183,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)i,
          v114,
          (__int128 *)v193,
          v94,
          &v212,
          v115,
          v151,
          (unsigned int *)v157,
          0LL,
          v174,
          a12,
          v153,
          (int *)&v209,
          (__int64 *)&v176,
          0LL,
          0LL);
        if ( v154 )
          v93 = *v116 & v163;
        else
          v93 = *v116;
        v163 = v93;
        if ( v93 )
          v91 = *v174;
        else
          v91 = -1073741790;
        v154 = 1;
        if ( v117 )
          SepMergeObjectTypeListAccesses(v182, v117, v94);
        if ( v91 < 0 )
          break;
      }
      else
      {
        v93 = v163;
      }
      v95 = v167 + 1;
      v167 = v95;
    }
    *(_DWORD *)v88 = v91;
    *(_DWORD *)v92 &= v93;
  }
  else
  {
    i = v161;
    v92 = (char *)v181;
    v94 = v167;
  }
  v118 = *((_QWORD *)i + 6);
  v119 = *(_WORD *)(v118 + 26);
  v120 = v119 & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v120 != 1 )
    {
      if ( (v119 & 1) == 0 )
        goto LABEL_271;
      v123 = KeGetCurrentIrql();
      v124 = KeGetCurrentThread();
      if ( v123 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v123, 2uLL, 0LL);
      if ( v123 || (v124->MiscFlags & 0x400) != 0 || v124->WaitBlock[3].SpareLong )
        goto LABEL_262;
LABEL_372:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_370:
    KeBugCheckEx(0x1C6u, 0xFuLL, v118, 0LL, 0LL);
  }
  if ( v120 == 1 )
    goto LABEL_370;
  if ( (v119 & 1) == 0 )
    goto LABEL_271;
  v121 = KeGetCurrentIrql();
  v122 = KeGetCurrentThread();
  if ( v121 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v121, 2uLL, 0LL);
  if ( !v121 && (v122->MiscFlags & 0x400) == 0 && !v122->WaitBlock[3].SpareLong )
    goto LABEL_372;
LABEL_262:
  if ( (v119 & 1) != 0 )
  {
    ExpFastResourceLegacyRelease(*((_QWORD *)i + 6));
    goto LABEL_272;
  }
LABEL_271:
  ExpReleaseResourceForThreadLite(*((_QWORD *)i + 6), (ULONG_PTR)KeGetCurrentThread());
LABEL_272:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v125 = v156 & 0x2000000;
  if ( (v156 & 0x2000000) != 0 )
  {
    if ( !v169 || !*(_WORD *)((char *)&v210 + 5) && (*((_DWORD *)v161 + 50) & 0x3000000) != 0x3000000 )
    {
      v126 = v164;
      v127 = v164;
      v37 = a12;
      if ( !a12 )
        v127 = 0;
      SepConstrainByMandatory((__int64)&v199, v156, v92, v88, 0LL, v127);
      goto LABEL_304;
    }
  }
  else if ( v169 && !*(_WORD *)((char *)&v210 + 5) )
  {
    if ( (*((_DWORD *)v161 + 50) & 0x3000000) != 0x3000000 || HIDWORD(v209) )
    {
      v37 = a12;
      if ( a12 )
      {
        v139 = 0;
        v15 = *(_DWORD **)&Length[1];
        PreviousMode = (__int64)Address;
        while ( 1 )
        {
          v168 = v139;
          if ( v139 >= v94 )
            break;
          *(_DWORD *)(PreviousMode + 4LL * v139) = -1073741790;
          v15[v139++] = 0;
        }
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v162 = -1073741790;
      v25 = 0;
      v152 = 0;
      v39 = v157;
      v40 = v151;
      goto LABEL_326;
    }
    HIBYTE(v210) = 1;
    v37 = a12;
    if ( a12 )
    {
      v128 = 0;
      if ( v94 < 0x10 || (v129 = v94 - 1, v92 <= &v88[4 * v129]) && &v92[4 * v129] >= v88 )
      {
        v131 = v165;
        v126 = v164;
      }
      else
      {
        v126 = v164;
        v130 = v164 & 0xFFFFFFF0;
        v131 = v165;
        v132 = _mm_or_si128(
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v156), 0),
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v165), 0));
        v133 = 8;
        do
        {
          *(_OWORD *)&v88[4 * v128] = 0LL;
          *(__m128i *)&v92[4 * v128] = v132;
          v134 = v133 - 4;
          *(_OWORD *)&v88[4 * v134] = 0LL;
          *(__m128i *)&v92[4 * v134] = v132;
          *(_OWORD *)&v88[4 * v133] = 0LL;
          *(__m128i *)&v92[4 * v133] = v132;
          v135 = v133 + 4;
          *(_OWORD *)&v88[4 * v135] = 0LL;
          *(__m128i *)&v92[4 * v135] = v132;
          v128 += 16;
          v133 += 16;
        }
        while ( v128 < v130 );
      }
      if ( v128 < v94 )
      {
        v136 = v131 | v156;
        v137 = (int *)&v92[4 * v128];
        v138 = v94 - v128;
        do
        {
          *(int *)((char *)v137 + v88 - v92) = 0;
          *v137++ = v136;
          --v138;
        }
        while ( v138 );
      }
      goto LABEL_304;
    }
    *(_DWORD *)v88 = 0;
    *(_DWORD *)v92 = v165 | v156;
    goto LABEL_303;
  }
  v37 = a12;
LABEL_303:
  v126 = v164;
LABEL_304:
  if ( v125 )
  {
    if ( !v37 )
      v126 = 0;
    SepConstrainByConstraintMask((int)v180, v156, v92, v88, 0LL, v126, &v158);
    SepConstrainByConstraintMask(v185, v156, v92, v88, 0LL, v126, &v159);
  }
  v15 = Address;
  *(_DWORD *)Address = *(_DWORD *)v88;
  v14 = *(_QWORD *)&Length[1];
  **(_DWORD **)&Length[1] = *(_DWORD *)v92;
  v162 = *(_DWORD *)v88;
  PreviousMode = (__int64)v174;
  v39 = v157;
  if ( SepRmEnforceCap && v154 && *(int *)v88 >= 0 )
  {
    *v15 = *v174;
    *(_DWORD *)v14 &= *v39;
    v162 = *(_DWORD *)PreviousMode;
  }
  if ( v37 )
  {
    for ( j = 1; ; j = v168 + 1 )
    {
      v168 = j;
      if ( j >= v94 )
        break;
      v141 = 4LL * j;
      v15[(unsigned __int64)v141 / 4] = *(_DWORD *)&v88[v141];
      *(_DWORD *)(v14 + v141) = *(_DWORD *)&v92[v141];
      if ( SepRmEnforceCap && v154 && *(int *)&v88[v141] >= 0 )
      {
        v15[j] = *(_DWORD *)(4LL * j + PreviousMode);
        *(_DWORD *)(v14 + 4LL * j) &= v39[j];
      }
    }
  }
  v25 = 0;
  v152 = 0;
  v40 = v151;
LABEL_326:
  if ( v170 && v161 )
  {
    if ( v158 || v159 )
      goto LABEL_335;
    if ( HIDWORD(v209) || (*((_DWORD *)v161 + 50) & 0x4000) == 0 )
    {
LABEL_336:
      if ( v25 >= 0
        && v162 < 0
        && !HIDWORD(v209)
        && (*((_DWORD *)v161 + 50) & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v209, v156) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_342;
    }
    if ( v25 >= 0 )
    {
      if ( v162 < 0 || HIBYTE(v210) )
      {
LABEL_335:
        v142 = KeGetCurrentThread();
        --v142->KernelApcDisable;
        v143 = (PERESOURCE *)v161;
        ExAcquireResourceSharedLite(*((PERESOURCE *)v161 + 6), 1u);
        SeLogAccessFailure(v143, v170, v165 | v156, v162 >= 0);
        ExReleaseResourceLite(v143[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v25 = v152;
        goto LABEL_336;
      }
      goto LABEL_336;
    }
  }
LABEL_342:
  if ( v37 )
  {
    if ( v181 )
      ExFreePoolWithTag(v181, 0);
    if ( v39 )
      ExFreePoolWithTag(v39, 0);
  }
  if ( v161 )
    ObfDereferenceObjectWithTag(v161, 0x74726853u);
  if ( v182 )
    ExFreePoolWithTag(v182, 0);
  if ( v183 )
  {
    LOBYTE(v15) = 1;
    SeReleaseSid(v183, v40, v15, PreviousMode);
  }
  if ( v170 )
    SeReleaseSecurityDescriptor(v170, v40, 0LL, PreviousMode);
  if ( v155 )
  {
    v144 = *(_QWORD *)(v179 + 32);
    if ( v144 )
      SepRmDereferenceCapTable(v144, v14, v15);
  }
  if ( v193 )
    ExFreePoolWithTag(v193, 0);
  v145 = v176;
  if ( v176 )
  {
    AuthzBasepFreeSecurityAttributesList(v176, v14, (__int64)v15, PreviousMode);
    ExFreePoolWithTag(v145, 0);
  }
  return (unsigned int)v25;
}
