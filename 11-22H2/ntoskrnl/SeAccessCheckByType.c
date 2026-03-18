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
  __int64 v59; // rdx
  __int64 v60; // r8
  char v61; // r12
  __int64 v62; // rax
  unsigned int v63; // ecx
  __int64 v64; // r8
  _DWORD *v65; // r9
  struct _ERESOURCE *v66; // rcx
  __int64 v67; // rsi
  __int16 v68; // cx
  __int64 v69; // rax
  __int64 v70; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v73; // rdx
  unsigned int v74; // r14d
  __int16 v75; // ax
  __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // ebx
  PVOID v80; // r15
  unsigned int v81; // ecx
  unsigned int *v82; // rdx
  _DWORD *v83; // r8
  __int64 v84; // r13
  __int64 v85; // r12
  unsigned int *Pool2; // rax
  unsigned int *v87; // rdx
  __int64 v88; // r13
  int *v89; // rax
  char *v90; // r14
  _DWORD *v91; // rax
  int *v92; // rax
  int v93; // r12d
  char *v94; // r15
  int v95; // r10d
  unsigned int v96; // r13d
  unsigned int v97; // ecx
  __int64 v98; // rdx
  _DWORD *i; // rsi
  __int64 v100; // rbx
  PVOID v101; // r8
  int v102; // eax
  int v103; // edx
  _QWORD *v104; // rax
  __int64 v105; // r10
  __int64 v106; // rdx
  __int64 v107; // rcx
  void *v108; // r9
  int v109; // eax
  int v110; // ecx
  _QWORD *v111; // rax
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rcx
  void *v115; // r9
  unsigned int v116; // eax
  unsigned int v117; // ecx
  int *v118; // r12
  PVOID v119; // rbx
  ULONG_PTR v120; // r8
  __int16 v121; // cx
  __int16 v122; // ax
  unsigned __int8 v123; // al
  struct _KTHREAD *v124; // rdx
  unsigned __int8 v125; // al
  struct _KTHREAD *v126; // rdx
  int v127; // ebx
  unsigned int v128; // r12d
  unsigned int v129; // eax
  unsigned int v130; // edx
  __int64 v131; // rax
  unsigned int v132; // r8d
  unsigned int v133; // r9d
  __m128i v134; // xmm1
  unsigned int v135; // r10d
  __int64 v136; // rax
  __int64 v137; // rax
  int v138; // r8d
  int *v139; // rcx
  __int64 v140; // rdx
  unsigned int v141; // ecx
  unsigned int j; // eax
  __int64 v143; // rcx
  struct _KTHREAD *v144; // rax
  PERESOURCE *v145; // rbx
  __int64 v146; // rcx
  PVOID v147; // rdi
  int Tag; // [rsp+20h] [rbp-2B8h]
  int Taga; // [rsp+20h] [rbp-2B8h]
  int Object; // [rsp+28h] [rbp-2B0h]
  int Objecta; // [rsp+28h] [rbp-2B0h]
  int Objectb; // [rsp+28h] [rbp-2B0h]
  unsigned __int8 v153; // [rsp+A0h] [rbp-238h]
  int v154; // [rsp+A4h] [rbp-234h]
  char v155; // [rsp+A8h] [rbp-230h]
  char v156; // [rsp+A9h] [rbp-22Fh]
  char v157; // [rsp+AAh] [rbp-22Eh]
  unsigned int v158; // [rsp+B0h] [rbp-228h] BYREF
  PVOID v159; // [rsp+B8h] [rbp-220h]
  char v160; // [rsp+C0h] [rbp-218h] BYREF
  char v161; // [rsp+C1h] [rbp-217h] BYREF
  char v162[6]; // [rsp+C2h] [rbp-216h] BYREF
  PVOID v163; // [rsp+C8h] [rbp-210h] BYREF
  int v164; // [rsp+D0h] [rbp-208h]
  int v165; // [rsp+D4h] [rbp-204h]
  unsigned int v166; // [rsp+D8h] [rbp-200h]
  unsigned int v167; // [rsp+DCh] [rbp-1FCh] BYREF
  char v168; // [rsp+E0h] [rbp-1F8h]
  unsigned int v169; // [rsp+E8h] [rbp-1F0h]
  unsigned int v170; // [rsp+F0h] [rbp-1E8h]
  BOOL v171; // [rsp+F4h] [rbp-1E4h]
  __int64 v172; // [rsp+F8h] [rbp-1E0h] BYREF
  int v173; // [rsp+100h] [rbp-1D8h]
  _DWORD Length[3]; // [rsp+104h] [rbp-1D4h]
  volatile void *Address; // [rsp+110h] [rbp-1C8h]
  int *v176; // [rsp+118h] [rbp-1C0h]
  int v177; // [rsp+120h] [rbp-1B8h] BYREF
  PVOID v178; // [rsp+128h] [rbp-1B0h] BYREF
  __int64 v179; // [rsp+130h] [rbp-1A8h]
  int *v180; // [rsp+138h] [rbp-1A0h]
  __int64 v181; // [rsp+140h] [rbp-198h]
  _OWORD *v182; // [rsp+148h] [rbp-190h] BYREF
  PVOID v183; // [rsp+150h] [rbp-188h]
  PVOID v184; // [rsp+158h] [rbp-180h] BYREF
  __int64 v185; // [rsp+160h] [rbp-178h] BYREF
  PVOID P; // [rsp+168h] [rbp-170h] BYREF
  __int64 v187; // [rsp+170h] [rbp-168h] BYREF
  volatile void *v188; // [rsp+178h] [rbp-160h]
  int v189; // [rsp+180h] [rbp-158h] BYREF
  int v190; // [rsp+184h] [rbp-154h] BYREF
  unsigned int v191; // [rsp+188h] [rbp-150h]
  int v192; // [rsp+18Ch] [rbp-14Ch] BYREF
  int v193; // [rsp+190h] [rbp-148h] BYREF
  int v194[2]; // [rsp+198h] [rbp-140h] BYREF
  PVOID v195; // [rsp+1A0h] [rbp-138h] BYREF
  __int16 *v196; // [rsp+1A8h] [rbp-130h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1B0h] [rbp-128h] BYREF
  void *Src; // [rsp+1D0h] [rbp-108h]
  void *v199; // [rsp+1E8h] [rbp-F0h]
  void *v200; // [rsp+1F0h] [rbp-E8h]
  __int128 v201; // [rsp+1F8h] [rbp-E0h] BYREF
  _DWORD *v202; // [rsp+208h] [rbp-D0h]
  _DWORD *v203; // [rsp+210h] [rbp-C8h]
  unsigned int *v204; // [rsp+218h] [rbp-C0h]
  _OWORD *v205; // [rsp+220h] [rbp-B8h]
  __int64 v206; // [rsp+228h] [rbp-B0h]
  unsigned int *v207; // [rsp+230h] [rbp-A8h]
  _DWORD *v208; // [rsp+238h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+240h] [rbp-98h] BYREF
  __int64 v210; // [rsp+260h] [rbp-78h]
  __int128 v211; // [rsp+268h] [rbp-70h] BYREF
  __int64 v212; // [rsp+278h] [rbp-60h]
  int v213; // [rsp+280h] [rbp-58h]
  __int128 v214; // [rsp+288h] [rbp-50h] BYREF

  Src = a2;
  v166 = a6;
  v205 = a7;
  v14 = (__int64)a10;
  v204 = a10;
  v15 = a11;
  v203 = a11;
  v202 = a9;
  v196 = a1;
  v199 = a2;
  v200 = a3;
  v158 = a4;
  v206 = a5;
  v169 = a6;
  v191 = a6;
  v182 = a7;
  v188 = a8;
  v180 = a9;
  *(_QWORD *)&Length[1] = a10;
  v207 = a10;
  Address = a11;
  v208 = a11;
  v190 = 0;
  v183 = 0LL;
  v189 = 0;
  v193 = 0;
  v159 = 0LL;
  v192 = 0;
  v176 = 0LL;
  v163 = 0LL;
  v172 = 0LL;
  v185 = 0LL;
  v167 = 0;
  v165 = 0;
  v214 = 0LL;
  v184 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v201 = 0LL;
  v171 = 0;
  v168 = 0;
  v178 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0;
  v179 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v210 = 0LL;
  v181 = 0LL;
  v157 = 0;
  v156 = 0;
  v177 = 0;
  v195 = 0LL;
  v162[0] = 0;
  v160 = 0;
  v161 = 0;
  *(_QWORD *)v194 = 0LL;
  v187 = 0LL;
  v164 = -1073741790;
  Length[0] = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v153 = PreviousMode;
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
  LODWORD(v182) = -1;
  LODWORD(v187) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *a11 = 0;
    *a10 = v158;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v20 = v188;
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
  if ( (unsigned __int64)v180 < 0x7FFFFFFF0000LL )
    v23 = (__int64)a9;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  v20 = v188;
  ProbeForWrite(v188, Length[0], 4u);
  if ( v188 && Length[0] >= 0x14u )
    *(_DWORD *)v188 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v214 = *a7;
  result = 0LL;
  PreviousMode = v153;
LABEL_24:
  v24 = Src;
  if ( (int)result < 0 )
    return result;
  if ( (v158 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
LABEL_322:
    v154 = v25;
LABEL_323:
    v40 = v153;
LABEL_324:
    v37 = a12;
    goto LABEL_325;
  }
  if ( (unsigned __int64)a3 + 6 <= 2 )
    v26 = SepReferenceTokenUsingPseudoHandle((__int64)a3, v14, (ULONG_PTR *)&v163, v162, (__int64 *)v194);
  else
    v26 = ObReferenceObjectByHandleWithTag(
            a3,
            8u,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            0x74726853u,
            &v163,
            0LL);
  v25 = v26;
  v154 = v26;
  if ( v26 < 0 )
  {
    v163 = 0LL;
    goto LABEL_323;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v163 + 48) != 2 )
    {
      v25 = -1073741732;
      goto LABEL_322;
    }
    if ( *((int *)v163 + 49) < 1 )
    {
      v25 = -1073741659;
      goto LABEL_322;
    }
  }
  v25 = SeCaptureObjectTypeList(v206, v169, v153, &v184);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v25 = SeCaptureSecurityDescriptor((_DWORD)v196, v153, 1, 0, (__int64)&v172);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( !v172 )
    goto LABEL_321;
  v196 = (__int16 *)(v172 + 2);
  v27 = *(_WORD *)(v172 + 2);
  if ( v27 >= 0 )
  {
    v29 = *(_QWORD *)(v172 + 8);
  }
  else
  {
    v28 = *(unsigned int *)(v172 + 4);
    if ( !(_DWORD)v28 )
      goto LABEL_321;
    v29 = v172 + v28;
  }
  if ( !v29 )
    goto LABEL_321;
  if ( v27 < 0 )
  {
    v30 = *(unsigned int *)(v172 + 8);
    if ( (_DWORD)v30 )
    {
      v31 = v172 + v30;
      goto LABEL_49;
    }
LABEL_321:
    v25 = -1073741703;
    goto LABEL_322;
  }
  v31 = *(_QWORD *)(v172 + 16);
LABEL_49:
  if ( !v31 )
    goto LABEL_321;
  if ( v162[0] )
    v32 = *(_QWORD *)v194;
  else
    v32 = *((_QWORD *)v163 + 138);
  LOBYTE(Object) = 1;
  v33 = (int)v163;
  v34 = v172;
  v25 = SepTrustLevelCheck(&v182, v172, 0LL, v163, v32, Object, &v182);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v35 = v158 & 0xFDFFFFFF;
  if ( ((unsigned int)v182 & v158 & 0xFDFFFFFF) != (v158 & 0xFDFFFFFF) )
  {
    v160 = 1;
    goto LABEL_71;
  }
  LOBYTE(PreviousMode) = 1;
  v25 = SepFilterCheck(v34, (unsigned int)&v178, v33, PreviousMode, (__int64)&v187);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( ((unsigned int)v187 & v35) != v35 )
  {
    v161 = 1;
LABEL_71:
    LOBYTE(v25) = v171;
    v14 = 3221225506LL;
LABEL_72:
    v36 = 0;
    goto LABEL_73;
  }
  v25 = SepMandatoryIntegrityCheck((unsigned int)&v214, v34, 0, v33, 1, (__int64)&v201);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  LOBYTE(v25) = 0;
  v171 = v25;
  if ( DWORD2(v201) && (v35 & (unsigned int)v201) != v35 )
  {
    v14 = 3221225506LL;
  }
  else
  {
    v14 = 0LL;
    if ( (v158 & 0x2000000) == 0 )
      goto LABEL_61;
  }
  if ( (*((_DWORD *)v163 + 50) & 0x4000) != 0 )
  {
    LOBYTE(v25) = HIDWORD(v201) <= 0x2000;
    v171 = HIDWORD(v201) <= 0x2000;
  }
LABEL_61:
  if ( (int)v14 < 0 && !(_BYTE)v25 )
    goto LABEL_72;
  v14 = (unsigned int)SePrivilegePolicyCheck(
                        (unsigned int)&v158,
                        (unsigned int)&v167,
                        0,
                        (_DWORD)v163,
                        (__int64)&P,
                        v153);
  if ( v158 || !v167 )
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
        v170 = v38;
        if ( v38 >= v169 )
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
    v164 = v14;
    v25 = 0;
    v154 = 0;
    v39 = v159;
    v40 = v153;
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
      *v180 = v45;
      v25 = -1073741789;
      v154 = -1073741789;
      v40 = v153;
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
      *v180 = 20;
      v25 = -1073741789;
      v154 = -1073741789;
      v39 = v159;
      v37 = a12;
      v40 = v153;
      goto LABEL_326;
    }
    *v20 = 0LL;
  }
  if ( v24 )
  {
    v25 = SeCaptureSid(v24, Tag, 1, (__int64)&v185);
    v154 = v25;
    if ( v25 < 0 )
    {
      v185 = 0LL;
      goto LABEL_323;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v50 = (char *)v163;
  v51 = *((_QWORD *)v163 + 6);
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
  v50 = (char *)v163;
  if ( (v52 & 1) != 0 )
  {
    ExpFastResourceLegacyAcquireShared(*((_QWORD *)v163 + 6));
    goto LABEL_116;
  }
LABEL_115:
  ExpAcquireResourceSharedLite(*((_QWORD *)v163 + 6), 1, (__int64)v47, v48);
LABEL_116:
  if ( *v196 >= 0 )
  {
    v58 = *(_QWORD *)(v172 + 8);
  }
  else
  {
    v57 = *(unsigned int *)(v172 + 4);
    if ( (_DWORD)v57 )
      v58 = v172 + v57;
    else
      v58 = 0LL;
  }
  LOBYTE(Objecta) = 0;
  LOBYTE(Tag) = 0;
  v61 = SepSidInTokenSidHash(v50 + 232, 0LL, v58, 0LL, Tag, Objecta);
  v155 = v61;
  if ( v61 && *((_DWORD *)v50 + 32) )
  {
    LOBYTE(Objectb) = 0;
    LOBYTE(Taga) = 1;
    v61 = SepSidInTokenSidHash(v50 + 504, 0LL, v58, 0LL, Taga, Objectb);
    v155 = v61;
  }
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v50 + 50) & 0x20) == 0 )
  {
    v62 = *((_QWORD *)v50 + 27);
    if ( v62 )
    {
      if ( (*(_DWORD *)(v62 + 32) & 0x20) != 0 )
      {
        v37 = a12;
        if ( a12 )
        {
          v63 = 0;
          v64 = *(_QWORD *)&Length[1];
          v65 = Address;
          while ( 1 )
          {
            v170 = v63;
            if ( v63 >= v169 )
              break;
            v65[v63] = -1073741790;
            *(_DWORD *)(v64 + 4LL * v63++) = 0;
          }
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          **(_DWORD **)&Length[1] = 0;
        }
        v164 = -1073741790;
        v154 = 0;
        v40 = v153;
        v66 = (struct _ERESOURCE *)*((_QWORD *)v50 + 6);
LABEL_134:
        ExReleaseResourceLite(v66);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = 0;
LABEL_325:
        v39 = v159;
        goto LABEL_326;
      }
    }
  }
  v67 = v172;
  if ( SepRmEnforceCap )
  {
    v68 = *(_WORD *)(v172 + 2);
    if ( (v68 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v68 >= 0 )
      {
        v70 = *(_QWORD *)(v172 + 24);
      }
      else
      {
        v69 = *(unsigned int *)(v172 + 12);
        if ( !(_DWORD)v69 )
        {
          v179 = 0LL;
          goto LABEL_148;
        }
        v70 = v172 + v69;
      }
      v179 = v70;
      if ( v70 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v70, v59, v60);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          v73 = v181;
          if ( Cap < 0 )
            v73 = SepRmDefaultCap;
          v181 = v73;
          v157 = 1;
        }
      }
    }
  }
LABEL_148:
  v74 = v158;
  if ( (v158 & 0x2060000) != 0
    && v61
    && ((v75 = *(_WORD *)(v67 + 2), (v75 & 4) != 0)
      ? (v75 >= 0
       ? (v76 = *(_QWORD *)(v67 + 32))
       : (v77 = *(unsigned int *)(v67 + 16), (_DWORD)v77)
       ? (v76 = v67 + v77)
       : (v76 = 0LL))
      : (v76 = 0LL),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v76)) )
  {
    if ( (v74 & 0x2000000) != 0 )
    {
      v78 = 393216;
      v79 = v167 | 0x60000;
    }
    else
    {
      v78 = v74 & 0x60000;
      v79 = v167 | v74 & 0x60000;
    }
    v165 = v78;
    v167 = v79;
    v74 &= 0xFFF9FFFF;
    v158 = v74;
  }
  else
  {
    v79 = v167;
  }
  if ( v74 || v157 && !v36 )
  {
    v80 = v163;
  }
  else
  {
    v80 = v163;
    if ( (*((_DWORD *)v163 + 50) & 0x2000) != 0 || !v165 )
    {
      v37 = a12;
      if ( a12 )
      {
        v81 = 0;
        v82 = v207;
        v83 = v208;
        while ( 1 )
        {
          v170 = v81;
          if ( v81 >= v169 )
            break;
          if ( v79 )
          {
            v83[v81] = 0;
            v164 = 0;
            v82[v81] = v79;
          }
          else
          {
            v83[v81] = -1073741790;
            v164 = -1073741790;
            v82[v81] = 0;
          }
          ++v81;
        }
      }
      else if ( v79 )
      {
        *(_DWORD *)Address = 0;
        v164 = 0;
        **(_DWORD **)&Length[1] = v79;
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        v164 = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v154 = 0;
      v40 = v153;
      v66 = (struct _ERESOURCE *)*((_QWORD *)v80 + 6);
      goto LABEL_134;
    }
  }
  v84 = v191;
  v85 = 8LL * v191;
  if ( a12 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * v191, 1632068947LL);
    v87 = Pool2;
    v183 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v80 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v25 = -1073741670;
      goto LABEL_322;
    }
    v88 = v84;
    v89 = (int *)&Pool2[v88];
  }
  else
  {
    v87 = (unsigned int *)&v190;
    v183 = &v190;
    v89 = &v189;
    v88 = v191;
  }
  v180 = v89;
  LODWORD(v211) = v165;
  SepAccessCheck(
    v67,
    v185,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v80,
    v74,
    (__int128 *)v184,
    v169,
    &v214,
    v79,
    v153,
    v87,
    0LL,
    v89,
    a12,
    v155,
    (int *)&v211,
    (__int64 *)&v178,
    0LL,
    0LL);
  v90 = (char *)v180;
  if ( SepRmEnforceCap && *v180 >= 0 && v157 )
  {
    v37 = a12;
    if ( a12 )
    {
      v91 = (_DWORD *)ExAllocatePool2(256LL, v85, 1632068947LL);
      v39 = v91;
      v159 = v91;
      if ( !v91 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v163 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        v154 = -1073741670;
        v40 = v153;
        goto LABEL_326;
      }
      v92 = &v91[v88];
    }
    else
    {
      v159 = &v193;
      v92 = &v192;
    }
    v176 = v92;
    v93 = *(_DWORD *)v90;
    v94 = (char *)v183;
    v95 = *(_DWORD *)v183;
    v165 = *(_DWORD *)v183;
    LOBYTE(v173) = 0;
    v96 = v169;
    if ( v169 )
    {
      v25 = SepCopyObjectTypeList(v184, v169, &v195);
      v154 = v25;
      if ( v25 < 0 )
      {
        v40 = v153;
        goto LABEL_325;
      }
      v95 = v165;
    }
    v97 = 0;
    v169 = 0;
    v98 = v181;
    for ( i = v163; v97 < *(_DWORD *)(v181 + 60); v98 = v181 )
    {
      v100 = *(_QWORD *)(v98 + 8LL * v97 + 64);
      if ( !*(_QWORD *)(v100 + 24) )
        goto LABEL_234;
      v101 = v178;
      if ( !v178 )
      {
        v102 = AuthzBasepInitializeResourceClaimsFromSacl(v179, (__int64 *)&v178);
        v103 = (unsigned __int8)v173;
        if ( v102 < 0 )
          v103 = 1;
        v173 = v103;
        v101 = v178;
      }
      v104 = (_QWORD *)*((_QWORD *)i + 137);
      v105 = v104 ? v104[75] : 0LL;
      v106 = v104 ? v104[73] : 0LL;
      v107 = v104 ? v104[74] : 0LL;
      v108 = v104 ? (void *)v104[72] : 0LL;
      v109 = AuthzBasepEvaluateAceCondition(
               i,
               *((void **)i + 97),
               v101,
               v108,
               v107,
               v106,
               v105,
               *(_DWORD **)(v100 + 24),
               *(_DWORD *)(v100 + 16),
               1u,
               0,
               &v177);
      v154 = v109;
      v110 = v177;
      if ( v177 == 1 )
        goto LABEL_234;
      if ( v109 < 0 )
        goto LABEL_253;
      if ( (i[50] & 0x10) != 0 )
      {
        v111 = (_QWORD *)*((_QWORD *)i + 137);
        if ( v111 )
          v112 = v111[75];
        else
          v112 = 0LL;
        if ( v111 )
          v113 = v111[73];
        else
          v113 = 0LL;
        if ( v111 )
          v114 = v111[74];
        else
          v114 = 0LL;
        if ( v111 )
          v115 = (void *)v111[72];
        else
          v115 = 0LL;
        v154 = AuthzBasepEvaluateAceCondition(
                 i,
                 *((void **)i + 97),
                 v178,
                 v115,
                 v114,
                 v113,
                 v112,
                 *(_DWORD **)(v100 + 24),
                 *(_DWORD *)(v100 + 16),
                 1u,
                 1u,
                 &v177);
        if ( v154 < 0 )
        {
LABEL_253:
          ExReleaseResourceLite(*((PERESOURCE *)i + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v25 = v154;
          goto LABEL_323;
        }
        v110 = v177;
      }
      if ( (_BYTE)v173 || v110 == 1 )
      {
LABEL_234:
        v154 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v154 < 0 )
          goto LABEL_253;
        v116 = v158;
        if ( (*(_DWORD *)(v100 + 48) & 1) != 0 )
        {
          if ( (v158 & 0x2000000) == 0 )
            v116 = v167 | v158;
          v117 = 0;
        }
        else
        {
          v117 = v167;
        }
        v118 = (int *)v159;
        v119 = v195;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v185,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)i,
          v116,
          (__int128 *)v195,
          v96,
          &v214,
          v117,
          v153,
          (unsigned int *)v159,
          0LL,
          v176,
          a12,
          v155,
          (int *)&v211,
          (__int64 *)&v178,
          0LL,
          0LL);
        if ( v156 )
          v95 = *v118 & v165;
        else
          v95 = *v118;
        v165 = v95;
        if ( v95 )
          v93 = *v176;
        else
          v93 = -1073741790;
        v156 = 1;
        if ( v119 )
          SepMergeObjectTypeListAccesses(v184, v119, v96);
        if ( v93 < 0 )
          break;
      }
      else
      {
        v95 = v165;
      }
      v97 = v169 + 1;
      v169 = v97;
    }
    *(_DWORD *)v90 = v93;
    *(_DWORD *)v94 &= v95;
  }
  else
  {
    i = v163;
    v94 = (char *)v183;
    v96 = v169;
  }
  v120 = *((_QWORD *)i + 6);
  v121 = *(_WORD *)(v120 + 26);
  v122 = v121 & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v122 != 1 )
    {
      if ( (v121 & 1) == 0 )
        goto LABEL_271;
      v125 = KeGetCurrentIrql();
      v126 = KeGetCurrentThread();
      if ( v125 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v125, 2uLL, 0LL);
      if ( v125 || (v126->MiscFlags & 0x400) != 0 || v126->WaitBlock[3].SpareLong )
        goto LABEL_262;
LABEL_372:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_370:
    KeBugCheckEx(0x1C6u, 0xFuLL, v120, 0LL, 0LL);
  }
  if ( v122 == 1 )
    goto LABEL_370;
  if ( (v121 & 1) == 0 )
    goto LABEL_271;
  v123 = KeGetCurrentIrql();
  v124 = KeGetCurrentThread();
  if ( v123 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v123, 2uLL, 0LL);
  if ( !v123 && (v124->MiscFlags & 0x400) == 0 && !v124->WaitBlock[3].SpareLong )
    goto LABEL_372;
LABEL_262:
  if ( (v121 & 1) != 0 )
  {
    ExpFastResourceLegacyRelease(*((_QWORD *)i + 6));
    goto LABEL_272;
  }
LABEL_271:
  ExpReleaseResourceForThreadLite(*((_QWORD *)i + 6), (ULONG_PTR)KeGetCurrentThread());
LABEL_272:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v127 = v158 & 0x2000000;
  if ( (v158 & 0x2000000) != 0 )
  {
    if ( !v171 || !*(_WORD *)((char *)&v212 + 5) && (*((_DWORD *)v163 + 50) & 0x3000000) != 0x3000000 )
    {
      v128 = v166;
      v129 = v166;
      v37 = a12;
      if ( !a12 )
        v129 = 0;
      SepConstrainByMandatory((__int64)&v201, v158, v94, v90, 0LL, v129);
      goto LABEL_304;
    }
  }
  else if ( v171 && !*(_WORD *)((char *)&v212 + 5) )
  {
    if ( (*((_DWORD *)v163 + 50) & 0x3000000) != 0x3000000 || HIDWORD(v211) )
    {
      v37 = a12;
      if ( a12 )
      {
        v141 = 0;
        v15 = *(_DWORD **)&Length[1];
        PreviousMode = (__int64)Address;
        while ( 1 )
        {
          v170 = v141;
          if ( v141 >= v96 )
            break;
          *(_DWORD *)(PreviousMode + 4LL * v141) = -1073741790;
          v15[v141++] = 0;
        }
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v164 = -1073741790;
      v25 = 0;
      v154 = 0;
      v39 = v159;
      v40 = v153;
      goto LABEL_326;
    }
    HIBYTE(v212) = 1;
    v37 = a12;
    if ( a12 )
    {
      v130 = 0;
      if ( v96 < 0x10 || (v131 = v96 - 1, v94 <= &v90[4 * v131]) && &v94[4 * v131] >= v90 )
      {
        v133 = v167;
        v128 = v166;
      }
      else
      {
        v128 = v166;
        v132 = v166 & 0xFFFFFFF0;
        v133 = v167;
        v134 = _mm_or_si128(
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v158), 0),
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v167), 0));
        v135 = 8;
        do
        {
          *(_OWORD *)&v90[4 * v130] = 0LL;
          *(__m128i *)&v94[4 * v130] = v134;
          v136 = v135 - 4;
          *(_OWORD *)&v90[4 * v136] = 0LL;
          *(__m128i *)&v94[4 * v136] = v134;
          *(_OWORD *)&v90[4 * v135] = 0LL;
          *(__m128i *)&v94[4 * v135] = v134;
          v137 = v135 + 4;
          *(_OWORD *)&v90[4 * v137] = 0LL;
          *(__m128i *)&v94[4 * v137] = v134;
          v130 += 16;
          v135 += 16;
        }
        while ( v130 < v132 );
      }
      if ( v130 < v96 )
      {
        v138 = v133 | v158;
        v139 = (int *)&v94[4 * v130];
        v140 = v96 - v130;
        do
        {
          *(int *)((char *)v139 + v90 - v94) = 0;
          *v139++ = v138;
          --v140;
        }
        while ( v140 );
      }
      goto LABEL_304;
    }
    *(_DWORD *)v90 = 0;
    *(_DWORD *)v94 = v167 | v158;
    goto LABEL_303;
  }
  v37 = a12;
LABEL_303:
  v128 = v166;
LABEL_304:
  if ( v127 )
  {
    if ( !v37 )
      v128 = 0;
    SepConstrainByConstraintMask((int)v182, v158, v94, v90, 0LL, v128, &v160);
    SepConstrainByConstraintMask(v187, v158, v94, v90, 0LL, v128, &v161);
  }
  v15 = Address;
  *(_DWORD *)Address = *(_DWORD *)v90;
  v14 = *(_QWORD *)&Length[1];
  **(_DWORD **)&Length[1] = *(_DWORD *)v94;
  v164 = *(_DWORD *)v90;
  PreviousMode = (__int64)v176;
  v39 = v159;
  if ( SepRmEnforceCap && v156 && *(int *)v90 >= 0 )
  {
    *v15 = *v176;
    *(_DWORD *)v14 &= *v39;
    v164 = *(_DWORD *)PreviousMode;
  }
  if ( v37 )
  {
    for ( j = 1; ; j = v170 + 1 )
    {
      v170 = j;
      if ( j >= v96 )
        break;
      v143 = 4LL * j;
      v15[(unsigned __int64)v143 / 4] = *(_DWORD *)&v90[v143];
      *(_DWORD *)(v14 + v143) = *(_DWORD *)&v94[v143];
      if ( SepRmEnforceCap && v156 && *(int *)&v90[v143] >= 0 )
      {
        v15[j] = *(_DWORD *)(4LL * j + PreviousMode);
        *(_DWORD *)(v14 + 4LL * j) &= v39[j];
      }
    }
  }
  v25 = 0;
  v154 = 0;
  v40 = v153;
LABEL_326:
  if ( v172 && v163 )
  {
    if ( v160 || v161 )
      goto LABEL_335;
    if ( HIDWORD(v211) || (*((_DWORD *)v163 + 50) & 0x4000) == 0 )
    {
LABEL_336:
      if ( v25 >= 0
        && v164 < 0
        && !HIDWORD(v211)
        && (*((_DWORD *)v163 + 50) & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v211, v158) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_342;
    }
    if ( v25 >= 0 )
    {
      if ( v164 < 0 || HIBYTE(v212) )
      {
LABEL_335:
        v144 = KeGetCurrentThread();
        --v144->KernelApcDisable;
        v145 = (PERESOURCE *)v163;
        ExAcquireResourceSharedLite(*((PERESOURCE *)v163 + 6), 1u);
        SeLogAccessFailure(v145, v172, v167 | v158, v164 >= 0);
        ExReleaseResourceLite(v145[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v25 = v154;
        goto LABEL_336;
      }
      goto LABEL_336;
    }
  }
LABEL_342:
  if ( v37 )
  {
    if ( v183 )
      ExFreePoolWithTag(v183, 0);
    if ( v39 )
      ExFreePoolWithTag(v39, 0);
  }
  if ( v163 )
    ObfDereferenceObjectWithTag(v163, 0x74726853u);
  if ( v184 )
    ExFreePoolWithTag(v184, 0);
  if ( v185 )
  {
    LOBYTE(v15) = 1;
    SeReleaseSid(v185, v40, v15, PreviousMode);
  }
  if ( v172 )
    SeReleaseSecurityDescriptor(v172, v40, 0LL, PreviousMode);
  if ( v157 )
  {
    v146 = *(_QWORD *)(v181 + 32);
    if ( v146 )
      SepRmDereferenceCapTable(v146, v14, v15);
  }
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  v147 = v178;
  if ( v178 )
  {
    AuthzBasepFreeSecurityAttributesList(v178, v14, (__int64)v15, PreviousMode);
    ExFreePoolWithTag(v147, 0);
  }
  return (unsigned int)v25;
}
