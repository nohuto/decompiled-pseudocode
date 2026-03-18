/*
 * XREFs of RtlpNewSecurityObject @ 0x14072A400
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1402B34E0 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x1407C1C80 (SeAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlSidDominates @ 0x140226A30 (RtlSidDominates.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     SeAccessCheck @ 0x140231650 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     RtlSubAuthoritySid @ 0x140297AD0 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x1402AD1F0 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x140334720 (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x140334990 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x140337620 (RtlpOwnerAcesPresent.c)
 *     SepLocateTokenIntegrity @ 0x140370C78 (SepLocateTokenIntegrity.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     SeUnlockSubjectContext @ 0x1406C3130 (SeUnlockSubjectContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C381C (SePrivilegedServiceAuditAlarm.c)
 *     RtlpInheritAcl2 @ 0x1406C40D0 (RtlpInheritAcl2.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7934 (SepValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     SePrivilegeCheck @ 0x14072F2B0 (SePrivilegeCheck.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x140736880 (RtlValidAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407369D0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpCreateServerAcl @ 0x140793D50 (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x14079DE10 (RtlpCombineAcls.c)
 *     RtlpNormalizeAcl @ 0x1407ACE00 (RtlpNormalizeAcl.c)
 *     RtlpComputeMergedAcl @ 0x1409BC7B4 (RtlpComputeMergedAcl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  unsigned __int8 *v10; // r12
  char *v11; // rbx
  _OWORD *v12; // r11
  char *v13; // r10
  char *v14; // r15
  char *v15; // r13
  char v16; // r9
  __int16 v17; // ax
  char v18; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int8 *v22; // rdi
  unsigned __int16 *v23; // r14
  unsigned __int8 *v24; // rsi
  unsigned __int8 *v25; // r13
  unsigned __int8 *v26; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v28; // r15
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // r8
  void *Pool2; // rax
  size_t v36; // r8
  char *v37; // r13
  __int64 v38; // rax
  __int64 v39; // r8
  char *v40; // r12
  __int64 v41; // r8
  __int16 v42; // cx
  char *v43; // rdx
  unsigned int *v44; // rax
  char *v45; // rdx
  __int64 v46; // r15
  char *v47; // rax
  char v48; // r13
  int v49; // r14d
  unsigned __int8 v50; // bl
  int v51; // r10d
  int v52; // r9d
  int v53; // r8d
  char *v54; // rsi
  int v55; // edi
  unsigned int v56; // eax
  int v57; // r15d
  void *v58; // rax
  int ServerAcl; // ebx
  PVOID v60; // r8
  __int16 v61; // dx
  int v62; // ecx
  unsigned int v63; // r14d
  char v64; // r12
  __int16 v65; // dx
  int v66; // r9d
  int v67; // r8d
  unsigned __int8 *v68; // r15
  char *v69; // rdi
  int v70; // esi
  unsigned __int8 v71; // r13
  unsigned int v72; // eax
  void *v73; // rax
  char *v74; // rdx
  __int16 v75; // cx
  char *v76; // rbx
  __int64 v77; // r12
  __int16 v78; // ax
  __int64 v79; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v81; // r8
  unsigned int v82; // edi
  int v83; // r15d
  _OWORD *v84; // r13
  __int16 v85; // ax
  __int64 v86; // rbx
  unsigned __int8 *v87; // rax
  __int64 v88; // r8
  int v89; // edx
  int v90; // ebx
  void *v91; // rsi
  unsigned __int8 *v92; // r12
  unsigned __int8 v93; // r14
  __int16 v94; // ax
  __int64 v95; // rcx
  unsigned __int8 *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int16 v99; // ax
  __int64 v100; // rax
  __int16 v101; // ax
  __int64 v102; // rax
  struct _KTHREAD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // ecx
  char *v110; // rcx
  unsigned int v111; // r9d
  char *v112; // r8
  unsigned __int16 v113; // dx
  int *v114; // rbx
  int v115; // r13d
  char *v116; // rsi
  unsigned int v117; // eax
  int v118; // r14d
  unsigned __int16 *v119; // rax
  int *v120; // rdi
  __int16 v121; // si
  PVOID v122; // r14
  int v123; // eax
  int v124; // r15d
  int v125; // eax
  void *v126; // rbx
  int v127; // ecx
  unsigned int v128; // r8d
  unsigned __int8 *v129; // rax
  char v130; // r13
  _OWORD *v131; // rdx
  int v132; // r14d
  __int16 v133; // si
  unsigned __int8 *v134; // r12
  char *v135; // rdi
  int v136; // esi
  unsigned __int16 *v137; // r9
  unsigned int v138; // eax
  int v139; // r15d
  unsigned __int16 *v140; // rax
  __int16 v141; // cx
  char v142; // r13
  struct _SECURITY_SUBJECT_CONTEXT *v143; // r12
  char v144; // bl
  bool v145; // al
  unsigned __int16 *v146; // rcx
  unsigned int v147; // r13d
  unsigned int v148; // r12d
  int v149; // esi
  unsigned int v150; // ebx
  int v151; // r14d
  unsigned int v152; // r15d
  __int64 v153; // rax
  __int64 v154; // r8
  __int16 v155; // dx
  unsigned __int16 *v156; // rdi
  __int64 v157; // rsi
  unsigned __int8 *v158; // rcx
  unsigned int v159; // edx
  PGENERIC_MAPPING v160; // r13
  int v161; // r14d
  unsigned int v162; // r8d
  __int64 v163; // rcx
  int v164; // esi
  bool v165; // zf
  unsigned __int16 *v166; // r14
  unsigned __int8 *v167; // rdx
  unsigned int v168; // r8d
  PGENERIC_MAPPING v169; // r14
  int v170; // r9d
  unsigned int v171; // ecx
  int v172; // eax
  int v173; // eax
  int v174; // ecx
  __int64 v175; // rcx
  __int64 v176; // rsi
  int v177; // eax
  char *v178; // rdi
  PVOID v179; // rdi
  int v181; // esi
  char v182; // bl
  unsigned __int16 v183; // ax
  int v184; // r8d
  int v185; // edx
  int v186; // r15d
  GENERIC_MAPPING *v187; // rsi
  __int16 v188; // cx
  unsigned int v189; // ecx
  char *v190; // rdx
  char v191; // al
  __int64 v192; // rax
  __int16 v193; // ax
  __int64 v194; // rax
  __int16 v195; // ax
  __int64 v196; // rax
  PGENERIC_MAPPING v197; // r8
  PGENERIC_MAPPING v198; // r8
  int v199; // ecx
  int v200; // eax
  __int64 v201; // rax
  __int64 v202; // rdx
  void *v203; // rdx
  __int64 v204; // rax
  __int64 v205; // rax
  char *v206; // rax
  __int64 v207; // rax
  __int16 v208; // ax
  __int64 v209; // rcx
  __int64 v210; // rax
  unsigned __int8 *v211; // rax
  int v212; // edi
  unsigned __int8 *v213; // rsi
  int v214; // edx
  BOOLEAN v215; // bl
  BOOLEAN v216; // bl
  int v217; // r9d
  int v218; // r9d
  int GenericAll; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-F0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-E0h]
  __int16 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  unsigned int i; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int16 *v224; // [rsp+98h] [rbp-78h]
  char v225; // [rsp+A0h] [rbp-70h]
  PVOID v226; // [rsp+A8h] [rbp-68h]
  char v227; // [rsp+B0h] [rbp-60h]
  __int64 v228; // [rsp+B8h] [rbp-58h]
  char v229; // [rsp+C0h] [rbp-50h]
  unsigned int v230; // [rsp+C4h] [rbp-4Ch]
  __int16 v231; // [rsp+C8h] [rbp-48h] BYREF
  int v232; // [rsp+CCh] [rbp-44h]
  char v233; // [rsp+D0h] [rbp-40h] BYREF
  char v234; // [rsp+D1h] [rbp-3Fh]
  char v235; // [rsp+D2h] [rbp-3Eh]
  bool v236; // [rsp+D3h] [rbp-3Dh]
  char v237; // [rsp+D4h] [rbp-3Ch] BYREF
  char v238; // [rsp+D5h] [rbp-3Bh]
  char v239; // [rsp+D6h] [rbp-3Ah]
  char v240; // [rsp+D7h] [rbp-39h]
  bool v241; // [rsp+D8h] [rbp-38h]
  __int64 GrantedAccess; // [rsp+DCh] [rbp-34h] BYREF
  PVOID P; // [rsp+E8h] [rbp-28h]
  _WORD v244[2]; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int AccessStatus; // [rsp+F4h] [rbp-1Ch] BYREF
  void *v246; // [rsp+F8h] [rbp-18h]
  void *v247; // [rsp+100h] [rbp-10h]
  int v248; // [rsp+108h] [rbp-8h] BYREF
  _OWORD *v249; // [rsp+110h] [rbp+0h]
  PGENERIC_MAPPING v250; // [rsp+118h] [rbp+8h]
  __int64 v251; // [rsp+120h] [rbp+10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+128h] [rbp+18h]
  __int64 v253; // [rsp+130h] [rbp+20h]
  PVOID SecurityDescriptor; // [rsp+138h] [rbp+28h] BYREF
  __int64 v255; // [rsp+140h] [rbp+30h]
  PSID Sid; // [rsp+148h] [rbp+38h]
  __int64 v257; // [rsp+150h] [rbp+40h]
  int *v258; // [rsp+158h] [rbp+48h]
  unsigned __int16 *v259; // [rsp+160h] [rbp+50h]
  PVOID v260; // [rsp+168h] [rbp+58h] BYREF
  PVOID v261; // [rsp+170h] [rbp+60h]
  PVOID v262; // [rsp+178h] [rbp+68h] BYREF
  char *v263; // [rsp+180h] [rbp+70h]
  __int64 v264; // [rsp+188h] [rbp+78h]
  void *v265; // [rsp+190h] [rbp+80h] BYREF
  void *Src; // [rsp+198h] [rbp+88h]
  __int64 *v267; // [rsp+1A0h] [rbp+90h]
  _OWORD v268[2]; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v269; // [rsp+1C8h] [rbp+B8h]
  int v270; // [rsp+1D0h] [rbp+C0h]
  unsigned __int16 v271; // [rsp+1D4h] [rbp+C4h]
  unsigned __int8 *v272; // [rsp+1D8h] [rbp+C8h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E0h] [rbp+D0h] BYREF
  int v274[2]; // [rsp+200h] [rbp+F0h] BYREF
  _BYTE v275[120]; // [rsp+208h] [rbp+F8h] BYREF
  ACL Acl; // [rsp+280h] [rbp+170h] BYREF

  v10 = 0LL;
  v250 = a9;
  v11 = 0LL;
  v12 = a2;
  v264 = a10;
  v13 = 0LL;
  v267 = a3;
  v269 = 0LL;
  v227 = 0;
  v14 = 0LL;
  v239 = 0;
  v15 = 0LL;
  v238 = 0;
  v229 = 0;
  AccessMode = 256;
  v244[0] = 0;
  v231 = 0;
  v235 = 0;
  v237 = 0;
  v257 = a4;
  v16 = a7;
  v258 = v274;
  v249 = a2;
  v253 = a1;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  P = 0LL;
  v226 = 0LL;
  v248 = 0;
  v224 = 0LL;
  v260 = 0LL;
  v261 = 0LL;
  Sid = 0LL;
  v263 = 0LL;
  v251 = 0LL;
  v255 = 0LL;
  v259 = 0LL;
  v228 = 0LL;
  GrantedAccess = 0LL;
  Src = 0LL;
  v272 = 0LL;
  v265 = 0LL;
  SecurityDescriptor = 0LL;
  v233 = 1;
  v262 = 0LL;
  v240 = 0;
  v230 = a7;
  memset(v268, 0, sizeof(v268));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v234 = 1;
  }
  else
  {
    v12 = v268;
    v234 = 0;
    v249 = v268;
    LOBYTE(v268[0]) = 1;
  }
  v17 = *((_WORD *)v12 + 1);
  v18 = (v17 & 0x80u) != 0;
  v225 = (v17 & 0x80u) != 0;
  v236 = (v17 & 0x40) != 0;
  if ( a8 || (v17 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8 )
    {
      v103 = KeGetCurrentThread();
      --v103->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u);
    }
    v20 = *(_QWORD *)a8;
    if ( *(_QWORD *)a8 )
    {
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v225 = 1;
    }
    else
    {
      v20 = *(_QWORD *)(a8 + 16);
    }
    v21 = *(_QWORD *)(a8 + 16);
    v22 = *(unsigned __int8 **)(v20 + 168);
    v23 = *(unsigned __int16 **)(v20 + 184);
    v24 = *(unsigned __int8 **)(v21 + 168);
    v25 = *(unsigned __int8 **)(*(_QWORD *)(v20 + 152) + 16LL * *(unsigned int *)(v20 + 144));
    v26 = *(unsigned __int8 **)(*(_QWORD *)(v21 + 152) + 16LL * *(unsigned int *)(v21 + 144));
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v20);
    if ( TokenIntegrity )
      v28 = *TokenIntegrity;
    else
      v28 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectSecurityContext);
    v30 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v31 = 4LL * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v31 = 0LL;
    if ( v22 )
      v32 = 4LL * v22[1] + 8;
    else
      v32 = 0LL;
    if ( v24 )
      v33 = 4LL * v24[1] + 32;
    else
      v33 = 24LL;
    if ( v23 )
      v34 = v23[1];
    else
      v34 = 0LL;
    Pool2 = (void *)ExAllocatePool2(
                      64LL,
                      v33 + v34 + v32 + v31 + 4 * (v28[1] + v25[1] + (unsigned __int64)v26[1]),
                      1683187027LL);
    v261 = Pool2;
    if ( !Pool2 )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(Pool2, v25, 4LL * v25[1] + 8);
    v36 = 4LL * v28[1] + 8;
    v37 = (char *)v261 + 4 * v25[1] + 8;
    Sid = v37;
    memmove(v37, v28, v36);
    v38 = v28[1];
    v14 = &v37[4 * v38 + 8];
    v251 = (__int64)v14;
    if ( v30 )
    {
      v39 = v30[1];
      v263 = &v37[4 * v38 + 8];
      memmove(v263, v30, 4 * v39 + 8);
      v14 += 4 * v30[1] + 8;
      v251 = (__int64)v14;
      v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
      v263 = 0LL;
    }
    if ( v22 )
    {
      v11 = v14;
      memmove(v14, v22, 4LL * v22[1] + 8);
      v14 += 4 * v22[1] + 8;
      v251 = (__int64)v14;
    }
    else
    {
      v11 = 0LL;
    }
    memmove(v14, v26, 4LL * v26[1] + 8);
    v40 = &v14[4 * v26[1] + 8];
    v259 = (unsigned __int16 *)v40;
    if ( v24 )
    {
      v41 = v24[1];
      v255 = (__int64)v40;
      v15 = v40;
      memmove(v40, v24, 4 * v41 + 8);
      v40 += 4 * v24[1] + 8;
      v259 = (unsigned __int16 *)v40;
    }
    else
    {
      v255 = 0LL;
    }
    if ( v23 )
    {
      memmove(v40, v23, v23[1]);
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v259 = 0LL;
    }
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v12 = v249;
    v16 = v230;
    v18 = v225;
    v13 = (char *)v261;
  }
  v42 = *((_WORD *)v12 + 1);
  if ( v42 < 0 )
  {
    v97 = *((unsigned int *)v12 + 1);
    if ( !(_DWORD)v97 )
    {
      v44 = (unsigned int *)v12 + 2;
      goto LABEL_35;
    }
    v43 = (char *)v12 + v97;
    v44 = (unsigned int *)v12 + 2;
  }
  else
  {
    v43 = (char *)*((_QWORD *)v12 + 1);
    v44 = (unsigned int *)v12 + 2;
  }
  v246 = v43;
  if ( v43 )
  {
    HIBYTE(v231) = 1;
LABEL_39:
    v46 = v253;
    goto LABEL_40;
  }
LABEL_35:
  if ( (v16 & 0x20) == 0 )
  {
    v45 = v14;
    if ( !v18 )
      v45 = v13;
    v246 = v45;
    if ( v45 )
      goto LABEL_39;
    ServerAcl = -1073741700;
LABEL_579:
    v166 = v224;
    v179 = v224;
    goto LABEL_405;
  }
  v46 = v253;
  if ( !v253 )
  {
    ServerAcl = -1073741734;
    goto LABEL_579;
  }
  if ( *(__int16 *)(v253 + 2) >= 0 )
  {
    v203 = *(void **)(v253 + 8);
  }
  else
  {
    v202 = *(unsigned int *)(v253 + 4);
    if ( !(_DWORD)v202 )
    {
LABEL_428:
      ServerAcl = -1073741734;
      goto LABEL_579;
    }
    v203 = (void *)(v253 + v202);
  }
  v246 = v203;
  HIBYTE(v231) = 1;
  if ( !v203 )
    goto LABEL_428;
LABEL_40:
  if ( v42 < 0 )
  {
    v98 = *v44;
    if ( !(_DWORD)v98 )
      goto LABEL_43;
    v47 = (char *)v12 + v98;
  }
  else
  {
    v47 = (char *)*((_QWORD *)v12 + 2);
  }
  v247 = v47;
  if ( v47 )
    goto LABEL_47;
LABEL_43:
  if ( (v16 & 0x40) == 0 )
  {
    if ( v18 )
      v11 = v15;
    goto LABEL_46;
  }
  if ( !v46 )
  {
    ServerAcl = -1073741733;
    goto LABEL_579;
  }
  if ( *(__int16 *)(v46 + 2) >= 0 )
  {
    v11 = *(char **)(v46 + 16);
  }
  else
  {
    v204 = *(unsigned int *)(v46 + 8);
    if ( !(_DWORD)v204 )
      goto LABEL_436;
    v11 = (char *)(v46 + v204);
  }
LABEL_46:
  v247 = v11;
  if ( !v11 )
  {
LABEL_436:
    ServerAcl = -1073741733;
    goto LABEL_579;
  }
LABEL_47:
  AccessStatus = v16 & 4;
  v48 = (v16 & 4) != 0;
  v49 = v16 & 2;
  v50 = v49 != 0;
  v241 = v49 != 0;
  if ( (v42 & 0x20) != 0 )
    v51 = 8;
  else
    v51 = 0;
  if ( (v42 & 0x800) != 0 )
    v52 = 1024;
  else
    v52 = 0;
  if ( (v42 & 0x2000) != 0 )
    v53 = 4096;
  else
    v53 = 0;
  if ( (v42 & 0x10) != 0 )
  {
    if ( v42 >= 0 )
    {
      v10 = (unsigned __int8 *)*((_QWORD *)v12 + 3);
    }
    else
    {
      v105 = *((unsigned int *)v12 + 3);
      if ( (_DWORD)v105 )
        v10 = (unsigned __int8 *)v12 + v105;
    }
  }
  if ( !v46 )
    goto LABEL_55;
  v99 = *(_WORD *)(v46 + 2);
  if ( (v99 & 0x10) == 0 )
    goto LABEL_55;
  if ( v99 < 0 )
  {
    v100 = *(unsigned int *)(v46 + 12);
    if ( (_DWORD)v100 )
    {
      v54 = (char *)(v46 + v100);
      goto LABEL_56;
    }
LABEL_55:
    v54 = 0LL;
    goto LABEL_56;
  }
  v54 = *(char **)(v46 + 24);
LABEL_56:
  v55 = v51 | v52 | v53 | ((v42 & 0x10) != 0 ? 4 : 0);
  if ( !v55 && !v54 )
  {
    LOBYTE(AccessMode) = 0;
    P = 0LL;
    LODWORD(GrantedAccess) = v49 != 0 ? 0x400 : 0;
    goto LABEL_66;
  }
  v56 = 200;
  v57 = 0;
  i = 200;
  while ( 1 )
  {
    v58 = (void *)ExAllocatePool2(256LL, v56, 1665230163LL);
    P = v58;
    if ( !v58 )
    {
      ServerAcl = -1073741801;
      goto LABEL_579;
    }
    ServerAcl = RtlpInheritAcl2(
                  v54,
                  v10,
                  v55,
                  a6,
                  v50,
                  v48,
                  (__int64)v246,
                  (__int64)v247,
                  v251,
                  v255,
                  (__int64)v250,
                  2,
                  v257,
                  a5,
                  &i,
                  (unsigned __int16 *)v58,
                  &AccessMode,
                  (int *)&GrantedAccess);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v60 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_63;
    if ( (unsigned int)++v57 >= 2 )
      goto LABEL_63;
    v56 = i;
    v50 = v241;
  }
  if ( i )
  {
    v60 = P;
  }
  else
  {
    ExFreePoolWithTag(P, 0);
    v60 = 0LL;
  }
LABEL_63:
  P = v60;
  if ( ServerAcl >= 0 )
  {
    v227 = 1;
    if ( (GrantedAccess & 8) != 0 )
      v199 = 32816;
    else
      v199 = 32784;
    v63 = 0;
    if ( (GrantedAccess & 0x1000) != 0 )
      v200 = 0x2000;
    else
      v200 = 0;
    v12 = v249;
    v232 = v199 | v200 | (2 * (GrantedAccess & 0x400));
    goto LABEL_70;
  }
  P = v60;
  if ( ServerAcl != -2147483637 )
    goto LABEL_487;
  v12 = v249;
LABEL_66:
  v61 = *((_WORD *)v12 + 1);
  v62 = 34816;
  if ( !v49 )
    v62 = 0x8000;
  if ( (v61 & 0x30) != 0x30 )
  {
    v232 = v62;
    v63 = 0;
    goto LABEL_70;
  }
  if ( (v61 & 0x10) == 0 )
  {
    v63 = 0;
    P = 0LL;
    goto LABEL_455;
  }
  if ( v61 >= 0 )
  {
    v206 = (char *)*((_QWORD *)v12 + 3);
  }
  else
  {
    v205 = *((unsigned int *)v12 + 3);
    if ( !(_DWORD)v205 )
    {
      v63 = 0;
      P = 0LL;
      goto LABEL_455;
    }
    v206 = (char *)v12 + v205;
  }
  v63 = 0;
  P = v206;
LABEL_455:
  LOBYTE(AccessMode) = 1;
  v232 = v62 | v61 & 0x2000 | 0x10;
LABEL_70:
  v64 = AccessStatus != 0;
  v65 = *((_WORD *)v12 + 1);
  if ( (v65 & 0x20) != 0 )
    v66 = 8;
  else
    v66 = 0;
  if ( (v65 & 0x800) != 0 )
    v67 = 1024;
  else
    v67 = 0;
  if ( (v65 & 0x10) != 0 )
  {
    if ( v65 >= 0 )
    {
      v68 = (unsigned __int8 *)*((_QWORD *)v12 + 3);
    }
    else
    {
      v106 = *((unsigned int *)v12 + 3);
      if ( (_DWORD)v106 )
        v68 = (unsigned __int8 *)v12 + v106;
      else
        v68 = 0LL;
    }
  }
  else
  {
    v68 = 0LL;
  }
  if ( !v253 )
    goto LABEL_77;
  v101 = *(_WORD *)(v253 + 2);
  if ( (v101 & 0x10) == 0 )
    goto LABEL_77;
  if ( v101 >= 0 )
  {
    v69 = *(char **)(v253 + 24);
    goto LABEL_78;
  }
  v102 = *(unsigned int *)(v253 + 12);
  if ( (_DWORD)v102 )
    v69 = (char *)(v253 + v102);
  else
LABEL_77:
    v69 = 0LL;
LABEL_78:
  v70 = v66 | v67 | ((*((_WORD *)v12 + 1) & 0x10) != 0 ? 4 : 0);
  if ( v70 || v69 )
  {
    v71 = v241;
    v72 = 200;
    for ( i = 200; ; v72 = i )
    {
      v73 = (void *)ExAllocatePool2(256LL, v72, 1665230163LL);
      v226 = v73;
      if ( !v73 )
      {
        v166 = v224;
        ServerAcl = -1073741801;
        v179 = 0LL;
        goto LABEL_405;
      }
      ServerAcl = RtlpInheritAcl2(
                    v69,
                    v68,
                    v70,
                    a6,
                    v71,
                    v64,
                    (__int64)v246,
                    (__int64)v247,
                    v251,
                    v255,
                    (__int64)v250,
                    2,
                    v257,
                    a5,
                    &i,
                    (unsigned __int16 *)v73,
                    v244,
                    (int *)&GrantedAccess + 1);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v226, 0);
      v74 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_85;
      if ( ++v63 >= 2 )
        goto LABEL_85;
    }
    if ( i )
    {
      v74 = (char *)v226;
LABEL_85:
      v63 = 0;
      goto LABEL_86;
    }
    ExFreePoolWithTag(v226, 0);
    v63 = 0;
    v74 = 0LL;
LABEL_86:
    v226 = v74;
    HIDWORD(GrantedAccess) = ServerAcl;
    if ( ServerAcl >= 0 )
    {
      v12 = v249;
      v76 = v74;
      v239 = 1;
      goto LABEL_91;
    }
    v226 = v74;
    if ( ServerAcl == -2147483637 )
    {
      v12 = v249;
      goto LABEL_89;
    }
    goto LABEL_487;
  }
  v226 = 0LL;
  HIDWORD(GrantedAccess) = -2147483637;
LABEL_89:
  v75 = *((_WORD *)v12 + 1);
  if ( (v75 & 0x30) == 0x30 )
  {
    if ( (v75 & 0x10) != 0 )
    {
      if ( v75 >= 0 )
      {
        v76 = (char *)*((_QWORD *)v12 + 3);
        v226 = v76;
      }
      else
      {
        v207 = *((unsigned int *)v12 + 3);
        if ( (_DWORD)v207 )
        {
          v76 = (char *)v12 + v207;
          v226 = (char *)v12 + v207;
        }
        else
        {
          v76 = 0LL;
          v226 = 0LL;
        }
      }
    }
    else
    {
      v76 = 0LL;
      v226 = 0LL;
    }
  }
  else
  {
    v76 = (char *)v226;
  }
LABEL_91:
  v77 = (__int64)v263;
  i = 0;
  while ( 1 )
  {
    v78 = *((_WORD *)v12 + 1);
    if ( (v78 & 0x10) != 0 )
    {
      if ( v78 >= 0 )
      {
        v79 = *((_QWORD *)v12 + 3);
      }
      else
      {
        v104 = *((unsigned int *)v12 + 3);
        v79 = (_DWORD)v104 ? (__int64)v12 + v104 : 0LL;
      }
    }
    else
    {
      v79 = 0LL;
    }
    AceByType = RtlFindAceByType(v79, 20, &i);
    if ( !AceByType )
      break;
    if ( AceByType != (unsigned __int8 *)-8LL
      && !(unsigned __int8)RtlpValidTrustSubjectContext(
                             v77,
                             (__int64)(AceByType + 8),
                             v81,
                             (_DWORD *)&GrantedAccess + 1) )
    {
      goto LABEL_539;
    }
    ++i;
    v12 = v249;
  }
  v82 = v230;
  v83 = 4;
  v84 = v249;
  if ( (v230 & 0x800) == 0 )
  {
LABEL_96:
    v262 = v76;
    goto LABEL_97;
  }
  i = 0;
  do
  {
    v208 = *((_WORD *)v84 + 1);
    if ( (v208 & 0x10) != 0 )
    {
      if ( v208 >= 0 )
      {
        v209 = *((_QWORD *)v84 + 3);
      }
      else
      {
        v210 = *((unsigned int *)v84 + 3);
        if ( (_DWORD)v210 )
          v209 = (__int64)v84 + v210;
        else
          v209 = 0LL;
      }
    }
    else
    {
      v209 = 0LL;
    }
    v211 = RtlFindAceByType(v209, 20, &i);
    ++i;
    if ( !v211 )
    {
      if ( v77 )
      {
        if ( !v264 )
        {
          v166 = v224;
          ServerAcl = -1073741811;
          v179 = v226;
          goto LABEL_405;
        }
        v212 = *(_DWORD *)(v264 + 4);
        v213 = (unsigned __int8 *)v77;
        goto LABEL_493;
      }
      goto LABEL_96;
    }
  }
  while ( (v211[1] & 8) != 0 );
  v212 = *((_DWORD *)v211 + 1);
  v213 = v211 + 8;
  v63 = v211[1];
  if ( !v264 || (v212 & *(_DWORD *)(v264 + 4)) != v212 || v211 == (unsigned __int8 *)-8LL )
    goto LABEL_486;
LABEL_493:
  ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
  if ( ServerAcl < 0
    || (LOBYTE(PreviouslyGrantedAccess) = 20,
        ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2LL, v63, v213, PreviouslyGrantedAccess, v212, GenericMapping),
        ServerAcl < 0) )
  {
LABEL_540:
    v166 = v224;
    v179 = v226;
    goto LABEL_405;
  }
  v179 = v226;
  ServerAcl = RtlpComputeMergedAcl(
                (int)v226,
                (*((_WORD *)v84 + 1) & 0x800 | (*((unsigned __int16 *)v84 + 1) >> 1) & 0x18u) >> 1,
                (int)&Acl,
                4,
                (__int64)v246,
                (__int64)v247,
                (__int64)v250,
                2,
                (__int64)&v262,
                (__int64)&GrantedAccess);
  if ( ServerAcl < 0 )
  {
    v166 = v224;
    goto LABEL_405;
  }
  v82 = v230;
  v240 = 1;
LABEL_97:
  v85 = *((_WORD *)v84 + 1);
  if ( (v85 & 0x10) != 0 )
  {
    if ( v85 >= 0 )
    {
      v86 = *((_QWORD *)v84 + 3);
    }
    else
    {
      v107 = *((unsigned int *)v84 + 3);
      if ( (_DWORD)v107 )
        v86 = (__int64)v84 + v107;
      else
        v86 = 0LL;
    }
  }
  else
  {
    v86 = 0LL;
  }
  HIDWORD(GrantedAccess) = 0;
  v270 = 0;
  v271 = 256;
  i = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v87 = RtlFindAceByType(v86, 21, &i);
      if ( !v87 )
      {
LABEL_101:
        ++i;
        if ( !v87 )
        {
          ServerAcl = HIDWORD(GrantedAccess);
          goto LABEL_103;
        }
        continue;
      }
      break;
    }
    if ( (*((_DWORD *)v87 + 1) & 0xFF000000) != 0 )
      goto LABEL_509;
    if ( (v87[1] & 0x40) == 0 )
    {
      v214 = *(_DWORD *)(v87 + 10) - v270;
      if ( !v214 )
        v214 = *((unsigned __int16 *)v87 + 7) - v271;
      if ( v214 || v87[9] != 1 || *((_DWORD *)v87 + 4) )
      {
LABEL_509:
        ServerAcl = -1073741811;
        goto LABEL_103;
      }
      goto LABEL_101;
    }
    if ( (unsigned __int8)RtlpValidTrustSubjectContext(v77, (__int64)(v87 + 8), v88, (_DWORD *)&GrantedAccess + 1) )
    {
      ++i;
      continue;
    }
    break;
  }
  ServerAcl = -1073741790;
LABEL_103:
  if ( ServerAcl < 0 )
    goto LABEL_487;
  v89 = (v82 >> 8) & 1 | 2;
  if ( (v82 & 0x200) == 0 )
    v89 = (v82 >> 8) & 1;
  v90 = v89 | 4;
  if ( (v82 & 0x400) == 0 )
    v90 = v89;
  if ( v90 )
  {
    v91 = Src;
    v92 = (unsigned __int8 *)Src;
    goto LABEL_110;
  }
  v94 = *((_WORD *)v84 + 1);
  if ( (v94 & 0x10) != 0 )
  {
    if ( v94 >= 0 )
    {
      v95 = *((_QWORD *)v84 + 3);
    }
    else
    {
      v108 = *((unsigned int *)v84 + 3);
      if ( (_DWORD)v108 )
        v95 = (__int64)v84 + v108;
      else
        v95 = 0LL;
    }
  }
  else
  {
    v95 = 0LL;
  }
  v96 = RtlFindAceByType(v95, 17, 0LL);
  v91 = v96;
  if ( !v96 )
  {
    v92 = v272;
    goto LABEL_110;
  }
  v93 = v96[1];
  v92 = v96 + 8;
  v90 = *((_DWORD *)v96 + 1);
  if ( v93 == 8 || (v93 & 0x10) != 0 )
  {
    v91 = 0LL;
    v92 = 0LL;
    v90 = 0;
LABEL_110:
    v93 = 0;
  }
  else if ( (v93 & 8) != 0 && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v166 = v224;
    ServerAcl = -1073740730;
    v179 = v226;
    goto LABEL_405;
  }
  if ( !v90 )
  {
    if ( Sid && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
    {
      v90 = 1;
      goto LABEL_153;
    }
LABEL_156:
    if ( v92 )
    {
      memset(v275, 0, sizeof(v275));
      *(_QWORD *)v274 = 8388610LL;
      LODWORD(v272) = 0;
      WORD2(v272) = 4096;
      if ( (unsigned __int64)v92 <= 0x7FFFFFFF0000LL || (*v92 & 0xF) != 1 || v92[1] > 0xFu )
      {
        v166 = v224;
        ServerAcl = -1073741704;
        v179 = v226;
        goto LABEL_405;
      }
      v109 = *(_DWORD *)(v92 + 2) - (_DWORD)v272;
      if ( !v109 )
        v109 = *((unsigned __int16 *)v92 + 3) - WORD2(v272);
      if ( v109 )
      {
LABEL_486:
        ServerAcl = -1073741811;
        goto LABEL_487;
      }
      if ( (v93 & 0xE0) != 0 )
      {
        v166 = v224;
        ServerAcl = -1073741811;
        v179 = v226;
        goto LABEL_405;
      }
      if ( (v90 & 0xFFFFFFF8) != 0 )
      {
        v166 = v224;
        ServerAcl = -1073741811;
        v179 = v226;
        goto LABEL_405;
      }
      if ( !(unsigned __int8)RtlValidAcl(v274) )
      {
        v166 = v224;
        ServerAcl = -1073741705;
        v179 = v226;
        goto LABEL_405;
      }
      v110 = v275;
      v111 = 0;
      if ( LOWORD(v274[1]) )
      {
        while ( v110 < (char *)v274 + HIWORD(v274[0]) )
        {
          ++v111;
          v110 += *((unsigned __int16 *)v110 + 1);
          if ( v111 >= LOWORD(v274[1]) )
            goto LABEL_167;
        }
        v179 = v226;
        ServerAcl = -1073741705;
        v166 = 0LL;
        goto LABEL_405;
      }
LABEL_167:
      v112 = (char *)v274 + HIWORD(v274[0]);
      if ( v110 > v112 )
        v110 = 0LL;
      v113 = 4 * (v92[1] + 4);
      if ( !v110 || &v110[v113] > v112 )
      {
        v179 = v226;
        ServerAcl = -1073741671;
        v166 = 0LL;
        goto LABEL_405;
      }
      *((_WORD *)v110 + 1) = v113;
      v110[1] = v93;
      *v110 = 17;
      *((_DWORD *)v110 + 1) = v90;
      memmove(v110 + 8, v92, 4LL * v92[1] + 8);
      ++LOWORD(v274[1]);
      v114 = v274;
      LOBYTE(v274[0]) = 2;
    }
    else
    {
      v114 = 0LL;
      v258 = 0LL;
    }
    if ( (v230 & 0x700) != 0 )
    {
      v115 = 0x2000;
    }
    else if ( !v91 && v114 )
    {
      v83 = 0;
      v115 = 0x2000;
    }
    else
    {
      v183 = *((_WORD *)v84 + 1);
      if ( (v183 & 0x20) != 0 )
        v184 = 8;
      else
        v184 = 0;
      if ( (v183 & 0x800) != 0 )
        v185 = 1024;
      else
        v185 = 0;
      v115 = 0x2000;
      if ( (v183 & 0x2000) != 0 )
        v186 = 4096;
      else
        v186 = 0;
      v83 = (v183 >> 2) & 4 | v184 | v185 | v186;
    }
    if ( v253 )
    {
      v193 = *(_WORD *)(v253 + 2);
      if ( (v193 & 0x10) != 0 )
      {
        if ( v193 >= 0 )
        {
          v116 = *(char **)(v253 + 24);
LABEL_176:
          if ( v83 || v116 )
          {
            v117 = 200;
            v118 = 0;
            i = 200;
            while ( 1 )
            {
              v119 = (unsigned __int16 *)ExAllocatePool2(256LL, v117, 1665230163LL);
              v120 = (int *)v119;
              if ( !v119 )
              {
                v166 = v224;
                ServerAcl = -1073741801;
                v179 = v226;
                goto LABEL_405;
              }
              ServerAcl = RtlpInheritAcl2(
                            v116,
                            (unsigned __int8 *)v114,
                            v83,
                            a6,
                            1u,
                            0,
                            (__int64)v246,
                            (__int64)v247,
                            v251,
                            v255,
                            (__int64)v250,
                            3,
                            v257,
                            a5,
                            &i,
                            v119,
                            (_BYTE *)v244 + 1,
                            (int *)&GrantedAccess);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v120, 0);
              v120 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_182;
              if ( (unsigned int)++v118 >= 2 )
                goto LABEL_182;
              v117 = i;
              v114 = v258;
            }
            if ( !i )
            {
              ExFreePoolWithTag(v120, 0);
              v120 = 0LL;
            }
LABEL_182:
            if ( ServerAcl == -2147483637 )
              goto LABEL_304;
            if ( ServerAcl >= 0 )
            {
              v121 = GrantedAccess;
              goto LABEL_185;
            }
            goto LABEL_487;
          }
LABEL_304:
          v120 = v258;
          v121 = 0;
          LODWORD(GrantedAccess) = 0;
LABEL_185:
          v122 = P;
          v123 = RtlpCombineAcls(
                   (_DWORD)P,
                   (_DWORD)v120,
                   (_DWORD)v226,
                   (_DWORD)v226,
                   (__int64)v262,
                   (__int64)v226,
                   (__int64)&v265,
                   (__int64)&v248);
          v124 = v232;
          ServerAcl = v123;
          if ( (v232 & 0x2000) != 0 )
            v125 = 0x40000000;
          else
            v125 = 0;
          v270 = v125 | v248;
          if ( v120 && v120 != v258 )
            ExFreePoolWithTag(v120, 0);
          if ( ServerAcl < 0 )
          {
LABEL_487:
            v166 = v224;
            goto LABEL_488;
          }
          v126 = v265;
          if ( v265 )
          {
            if ( v227 && v122 )
              ExFreePoolWithTag(v122, 0);
            P = v126;
            v122 = v126;
            v238 = 1;
            if ( (v121 & 8) != 0 )
              v127 = 48;
            else
              v127 = 16;
            if ( (v121 & 0x1000) == 0 )
              v115 = 0;
            v124 |= v127 | (2 * (v121 & 0x400)) | v115;
            v232 = v124;
          }
          v128 = v230;
          v248 = v230 & 8;
          if ( (v230 & 8) == 0 )
          {
            v129 = RtlFindAceByType((__int64)v122, 17, 0LL);
            if ( v129 )
              v92 = v129 + 8;
            if ( v92 )
            {
              if ( !SubjectSecurityContext )
              {
                v166 = v224;
                ServerAcl = -1073741700;
                v179 = v226;
                goto LABEL_405;
              }
              ServerAcl = RtlSidDominates(Sid, v92, (bool *)&v233);
              if ( ServerAcl < 0 )
                goto LABEL_487;
              v128 = v230;
              if ( !v233 )
                v235 = 1;
            }
            else
            {
              v128 = v230;
            }
          }
          v130 = AccessStatus != 0;
          v131 = v249;
          v132 = v128 & 1;
          v133 = *((_WORD *)v249 + 1);
          if ( (v133 & 4) != 0 )
          {
            if ( v133 >= 0 )
            {
              v134 = (unsigned __int8 *)*((_QWORD *)v249 + 4);
            }
            else
            {
              v192 = *((unsigned int *)v249 + 4);
              if ( (_DWORD)v192 )
                v134 = (unsigned __int8 *)v249 + v192;
              else
                v134 = 0LL;
            }
          }
          else
          {
            v134 = 0LL;
          }
          if ( !v253 )
            goto LABEL_209;
          v195 = *(_WORD *)(v253 + 2);
          if ( (v195 & 4) == 0 )
            goto LABEL_209;
          if ( v195 >= 0 )
          {
            v135 = *(char **)(v253 + 32);
            goto LABEL_210;
          }
          v196 = *(unsigned int *)(v253 + 16);
          if ( (_DWORD)v196 )
            v135 = (char *)(v253 + v196);
          else
LABEL_209:
            v135 = 0LL;
LABEL_210:
          v136 = v133 & 0x140C;
          if ( v136 || v135 )
          {
            v138 = 200;
            v139 = 0;
            for ( i = 200; ; v138 = i )
            {
              v140 = (unsigned __int16 *)ExAllocatePool2(256LL, v138, 1665230163LL);
              v224 = v140;
              if ( !v140 )
              {
                v179 = v226;
                ServerAcl = -1073741801;
                v166 = 0LL;
                goto LABEL_405;
              }
              ServerAcl = RtlpInheritAcl2(
                            v135,
                            v134,
                            v136,
                            a6,
                            v132,
                            v130,
                            (__int64)v246,
                            (__int64)v247,
                            v251,
                            v255,
                            (__int64)v250,
                            1,
                            v257,
                            a5,
                            &i,
                            v140,
                            &v231,
                            (int *)&GrantedAccess);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v224, 0);
              v137 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_218;
              if ( (unsigned int)++v139 >= 2 )
                goto LABEL_218;
            }
            if ( i )
            {
              v137 = v224;
            }
            else
            {
              ExFreePoolWithTag(v224, 0);
              v137 = 0LL;
            }
LABEL_218:
            v224 = v137;
            if ( ServerAcl >= 0 )
            {
              v142 = 1;
              LOBYTE(v135) = v231;
              v128 = v230;
              v124 = GrantedAccess & 0x1408 | 4 | v232;
              v229 = 1;
              v232 = v124;
              goto LABEL_228;
            }
            v224 = v137;
            if ( ServerAcl != -2147483637 )
              goto LABEL_487;
            LOBYTE(v135) = v231;
            v124 = v232;
            v131 = v249;
            v128 = v230;
          }
          else
          {
            v137 = 0LL;
            v224 = 0LL;
          }
          if ( v132 )
          {
            v124 |= 0x400u;
            v232 = v124;
          }
          v141 = *((_WORD *)v131 + 1);
          if ( (v141 & 0xC) == 0xC )
          {
            if ( (v141 & 4) != 0 )
            {
              if ( v141 >= 0 )
              {
                v137 = (unsigned __int16 *)*((_QWORD *)v131 + 4);
              }
              else
              {
                v201 = *((unsigned int *)v131 + 4);
                if ( (_DWORD)v201 )
                  v137 = (unsigned __int16 *)((char *)v131 + v201);
                else
                  v137 = 0LL;
              }
            }
            else
            {
              v137 = 0LL;
            }
            v224 = v137;
            LOBYTE(v135) = 1;
            v124 |= v141 & 0x1000 | 4;
          }
          else
          {
            if ( !v259 )
              goto LABEL_227;
            v137 = v259;
            v224 = v259;
            v124 |= 4u;
          }
          v232 = v124;
LABEL_227:
          v142 = 0;
LABEL_228:
          v143 = SubjectSecurityContext;
          if ( (v128 & 0x1000) != 0 || !v234 || !SubjectSecurityContext || !v253 )
          {
            v144 = HIBYTE(AccessMode);
LABEL_231:
            if ( v132 && !v137 )
            {
              v124 |= 0x1000u;
              v232 = v124;
            }
            v145 = !v270 || (v270 & 0x1B0) != v270;
            if ( v144 != 1 )
              goto LABEL_236;
            v181 = v248;
            if ( (_BYTE)AccessMode && !v248 && v145 )
            {
              if ( !v143 )
              {
                v166 = v224;
                ServerAcl = -1073741700;
                v179 = v226;
                goto LABEL_405;
              }
              RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              v215 = SePrivilegeCheck(&RequiredPrivileges, v143, 1);
              SePrivilegedServiceAuditAlarm(0, (__int64 *)v143, (__int64)&RequiredPrivileges, v215);
              if ( !v215 )
              {
                v166 = v224;
                ServerAcl = -1073741727;
                v179 = v226;
                goto LABEL_405;
              }
              LOBYTE(v128) = v230;
            }
            if ( v235 && !v181 )
            {
              if ( !v143 )
              {
                v166 = v224;
                ServerAcl = -1073741700;
                v179 = v226;
                goto LABEL_405;
              }
              RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v216 = SePrivilegeCheck(&RequiredPrivileges, v143, 1);
              SePrivilegedServiceAuditAlarm(0, (__int64 *)v143, (__int64)&RequiredPrivileges, v216);
              if ( !v216 )
              {
                v166 = v224;
                ServerAcl = -1073741727;
                v179 = v226;
                goto LABEL_405;
              }
              LOBYTE(v128) = v230;
            }
            v182 = v225;
            if ( HIBYTE(v231) && (v128 & 0x10) == 0 && !SepValidOwnerSubjectContext((__int64 *)v143, v246, v225) )
            {
              v166 = v224;
              ServerAcl = -1073741734;
              v179 = v226;
              goto LABEL_405;
            }
            if ( !(_BYTE)v135 || !v182 )
            {
LABEL_236:
              v146 = v224;
LABEL_237:
              v147 = 4 * *((unsigned __int8 *)v246 + 1) + 8;
              AccessStatus = v147;
              if ( v247 )
                v148 = 4 * *((unsigned __int8 *)v247 + 1) + 8;
              else
                v148 = 0;
              v149 = v124 & 0x10;
              if ( (v124 & 0x10) != 0 && P )
                v150 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
              else
                v150 = 0;
              v151 = v124 & 4;
              v270 = v151;
              if ( (v124 & 4) != 0 && v146 )
                v152 = (v146[1] + 3) & 0xFFFFFFFC;
              else
                v152 = 0;
              v153 = ExAllocatePool2(256LL, v148 + v152 + v150 + v147 + 20, 1683187027LL);
              v228 = v153;
              v154 = v153;
              if ( v153 )
              {
                v155 = v232;
                v156 = (unsigned __int16 *)(v153 + 20);
                *(_OWORD *)v153 = 0LL;
                *(_DWORD *)(v153 + 16) = 0;
                *(_WORD *)(v153 + 2) |= v155;
                *(_BYTE *)v153 = 1;
                if ( v149 && P )
                {
                  v157 = v153 + 20;
                  if ( (v230 & 0x4000) != 0 )
                  {
                    v198 = v250;
                    if ( v227 )
                      v198 = 0LL;
                    RtlpNormalizeAcl(v156, P, v198);
                    if ( v156[2] )
                    {
                      v150 = v156[1];
                    }
                    else
                    {
                      v157 = 0LL;
                      v150 = 0;
                    }
                  }
                  else
                  {
                    memmove(v156, P, *((unsigned __int16 *)P + 1));
                    if ( !v227 )
                    {
                      if ( v156 )
                      {
                        v158 = (unsigned __int8 *)(v156 + 4);
                        v159 = 0;
                        if ( v156[2] )
                        {
                          v160 = v250;
                          v161 = 1651;
                          do
                          {
                            v162 = *v158;
                            if ( ((unsigned __int8)v162 < 0xBu || (unsigned __int8)(v162 - 13) <= 1u)
                              && (v158[1] & 8) == 0 )
                            {
                              v217 = *((_DWORD *)v158 + 1);
                              if ( v217 < 0 )
                                v217 |= v160->GenericRead;
                              if ( (v217 & 0x40000000) != 0 )
                                v217 |= v160->GenericWrite;
                              if ( (v217 & 0x20000000) != 0 )
                                v217 |= v160->GenericExecute;
                              if ( (v217 & 0x10000000) != 0 )
                                v217 |= v160->GenericAll;
                              v218 = v217 & 0xFFFFFFF;
                              *((_DWORD *)v158 + 1) = v218;
                              if ( (unsigned __int8)v162 <= 0xAu && _bittest(&v161, v162) )
                                GenericAll = v160->GenericAll;
                              else
                                GenericAll = v160->GenericAll | 0x1000000;
                              *((_DWORD *)v158 + 1) = v218 & GenericAll;
                            }
                            ++v159;
                            v158 += *((unsigned __int16 *)v158 + 1);
                          }
                          while ( v159 < v156[2] );
                          v151 = v270;
                          v147 = AccessStatus;
                        }
                      }
                    }
                    v163 = *((unsigned __int16 *)P + 1);
                    if ( v150 > (unsigned int)v163 )
                      memset((char *)v156 + v163, 0, v150 - (unsigned int)v163);
                  }
                  if ( v157 )
                  {
                    v154 = v228;
                    v156 = (unsigned __int16 *)((char *)v156 + v150);
                    v164 = v157 - v228;
                  }
                  else
                  {
                    v164 = 0;
                    v154 = v228;
                  }
                  *(_DWORD *)(v154 + 12) = v164;
                }
                v165 = v151 == 0;
                v166 = v224;
                if ( v165 )
                {
                  v176 = v228;
                }
                else if ( v224 )
                {
                  if ( (v230 & 0x4000) != 0 )
                  {
                    v197 = v250;
                    if ( v229 )
                      v197 = 0LL;
                    RtlpNormalizeAcl(v156, v224, v197);
                    v152 = v156[1];
                  }
                  else
                  {
                    memmove(v156, v224, v224[1]);
                    if ( !v229 )
                    {
                      if ( v156 )
                      {
                        v167 = (unsigned __int8 *)(v156 + 4);
                        v168 = 0;
                        if ( v156[2] )
                        {
                          v169 = v250;
                          v170 = 1651;
                          do
                          {
                            v171 = *v167;
                            if ( ((unsigned __int8)v171 < 0xBu || (unsigned __int8)(v171 - 13) <= 1u)
                              && (v167[1] & 8) == 0 )
                            {
                              v172 = *((_DWORD *)v167 + 1);
                              if ( v172 < 0 )
                                v172 |= v169->GenericRead;
                              if ( (v172 & 0x40000000) != 0 )
                                v172 |= v169->GenericWrite;
                              if ( (v172 & 0x20000000) != 0 )
                                v172 |= v169->GenericExecute;
                              if ( (v172 & 0x10000000) != 0 )
                                v172 |= v169->GenericAll;
                              v173 = v172 & 0xFFFFFFF;
                              *((_DWORD *)v167 + 1) = v173;
                              if ( (unsigned __int8)v171 <= 0xAu && _bittest(&v170, v171) )
                                v174 = v169->GenericAll;
                              else
                                v174 = v169->GenericAll | 0x1000000;
                              *((_DWORD *)v167 + 1) = v173 & v174;
                            }
                            ++v168;
                            v167 += *((unsigned __int16 *)v167 + 1);
                          }
                          while ( v168 < v156[2] );
                          v166 = v224;
                        }
                      }
                    }
                    v175 = v166[1];
                    if ( v152 > (unsigned int)v175 )
                      memset((char *)v156 + v175, 0, v152 - (unsigned int)v175);
                  }
                  v176 = v228;
                  *(_DWORD *)(v228 + 16) = (_DWORD)v156 - v228;
                  v156 = (unsigned __int16 *)((char *)v156 + v152);
                }
                else
                {
                  v176 = v228;
                  *(_DWORD *)(v154 + 16) = 0;
                }
                memmove(v156, v246, v147);
                v177 = (int)v156;
                v178 = (char *)v156 + v147;
                *(_DWORD *)(v176 + 4) = v177 - v176;
                if ( v247 )
                {
                  memmove(v178, v247, v148);
                  *(_DWORD *)(v176 + 8) = (_DWORD)v178 - v176;
                }
                v179 = v226;
                ServerAcl = 0;
              }
              else
              {
                v166 = v224;
                ServerAcl = -1073741670;
                v179 = v226;
                v176 = 0LL;
              }
              goto LABEL_291;
            }
            v166 = v224;
            ServerAcl = RtlpCreateServerAcl((_DWORD)v224, v236, v251, (unsigned int)&v260, (__int64)&v237);
            if ( ServerAcl >= 0 )
            {
              if ( v142 && v166 )
                ExFreePoolWithTag(v166, 0);
              v146 = (unsigned __int16 *)v260;
              v224 = (unsigned __int16 *)v260;
              v260 = 0LL;
              goto LABEL_237;
            }
LABEL_488:
            v179 = v226;
            goto LABEL_405;
          }
          v187 = v250;
          HIDWORD(GrantedAccess) = 0;
          AccessStatus = 0;
          ServerAcl = RtlpNewSecurityObject(
                        v253,
                        0,
                        (unsigned int)&SecurityDescriptor,
                        v257,
                        a5,
                        a6,
                        v128 | 1,
                        (__int64)SubjectSecurityContext,
                        (__int64)v250,
                        v264);
          if ( ServerAcl >= 0 )
          {
            v188 = *((_WORD *)SecurityDescriptor + 1);
            if ( (v188 & 4) != 0 )
            {
              if ( v188 >= 0 )
              {
                v190 = (char *)*((_QWORD *)SecurityDescriptor + 4);
              }
              else
              {
                v189 = *((_DWORD *)SecurityDescriptor + 4);
                if ( v189 )
                  v190 = (char *)SecurityDescriptor + v189;
                else
                  v190 = 0LL;
              }
            }
            else
            {
              v190 = 0LL;
            }
            v191 = RtlpOwnerAcesPresent(0x10u, (__int64)v190);
            v144 = HIBYTE(AccessMode);
            if ( v191
              && !SeAccessCheck(
                    SecurityDescriptor,
                    v143,
                    0,
                    0x40000u,
                    0,
                    0LL,
                    v187,
                    SHIBYTE(AccessMode),
                    (PACCESS_MASK)&GrantedAccess + 1,
                    (PNTSTATUS)&AccessStatus) )
            {
LABEL_539:
              ServerAcl = -1073741790;
              goto LABEL_540;
            }
            LOBYTE(v128) = v230;
            v137 = v224;
            goto LABEL_231;
          }
          goto LABEL_487;
        }
        v194 = *(unsigned int *)(v253 + 12);
        if ( (_DWORD)v194 )
        {
          v116 = (char *)(v253 + v194);
          goto LABEL_176;
        }
      }
    }
    v116 = 0LL;
    goto LABEL_176;
  }
LABEL_153:
  if ( v91 )
    goto LABEL_156;
  if ( SubjectSecurityContext )
  {
    v93 = 0;
    v92 = (unsigned __int8 *)Sid;
    goto LABEL_156;
  }
  v166 = v224;
  ServerAcl = -1073741700;
  v179 = v226;
LABEL_405:
  v176 = v228;
LABEL_291:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v237 && v260 )
    ExFreePoolWithTag(v260, 0);
  if ( v261 )
    ExFreePoolWithTag(v261, 0);
  if ( (v238 || v227) && P )
    ExFreePoolWithTag(P, 0);
  if ( v239 && v179 )
    ExFreePoolWithTag(v179, 0);
  if ( v262 && v240 )
    ExFreePoolWithTag(v262, 0);
  if ( v229 )
  {
    if ( v166 )
      ExFreePoolWithTag(v166, 0);
  }
  *v267 = v176;
  return (unsigned int)ServerAcl;
}
