/*
 * XREFs of RtlpNewSecurityObject @ 0x14072A600
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1402B3770 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x1407C1F50 (SeAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlSidDominates @ 0x140226B40 (RtlSidDominates.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     RtlSubAuthoritySid @ 0x140297D60 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x1402AD480 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x1403349B0 (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x140334C20 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x1403378B0 (RtlpOwnerAcesPresent.c)
 *     SepLocateTokenIntegrity @ 0x140370E18 (SepLocateTokenIntegrity.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C384C (SePrivilegedServiceAuditAlarm.c)
 *     RtlpInheritAcl2 @ 0x1406C4100 (RtlpInheritAcl2.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7964 (SepValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     SePrivilegeCheck @ 0x14072F4B0 (SePrivilegeCheck.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736BC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpCreateServerAcl @ 0x140793F40 (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x14079E000 (RtlpCombineAcls.c)
 *     RtlpNormalizeAcl @ 0x1407ACFF0 (RtlpNormalizeAcl.c)
 *     RtlpComputeMergedAcl @ 0x1409BC9B4 (RtlpComputeMergedAcl.c)
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
  UCHAR *v54; // rsi
  int v55; // edi
  ULONG v56; // eax
  int v57; // r15d
  ACL *v58; // rax
  signed int ServerAcl; // ebx
  PVOID v60; // r8
  __int16 v61; // dx
  int v62; // ecx
  ULONG v63; // r14d
  char v64; // r12
  __int16 v65; // dx
  int v66; // r9d
  int v67; // r8d
  unsigned __int8 *v68; // r15
  UCHAR *v69; // rdi
  int v70; // esi
  unsigned __int8 v71; // r13
  ULONG v72; // eax
  ACL *v73; // rax
  char *v74; // rdx
  __int16 v75; // cx
  char *v76; // rbx
  char *v77; // r12
  __int16 v78; // ax
  ACL *v79; // rcx
  PVOID AceByType; // rax
  __int64 v81; // r8
  unsigned int v82; // edi
  int v83; // r15d
  _OWORD *v84; // r13
  __int16 v85; // ax
  ACL *v86; // rbx
  _DWORD *v87; // rax
  __int64 v88; // r8
  int v89; // edx
  int v90; // ebx
  void *v91; // rsi
  unsigned __int8 *v92; // r12
  char v93; // r14
  __int16 v94; // ax
  ACL *v95; // rcx
  char *v96; // rax
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
  ACL *v114; // rbx
  int v115; // r13d
  UCHAR *v116; // rsi
  ULONG v117; // eax
  int v118; // r14d
  ACL *v119; // rax
  ACL *v120; // rdi
  __int16 v121; // si
  ACL *v122; // r14
  signed int v123; // eax
  int v124; // r15d
  int v125; // eax
  ACL *v126; // rbx
  int v127; // ecx
  unsigned int v128; // r8d
  char *v129; // rax
  char v130; // r13
  _OWORD *v131; // rdx
  int v132; // r14d
  __int16 v133; // si
  unsigned __int8 *v134; // r12
  UCHAR *v135; // rdi
  int v136; // esi
  char *v137; // r9
  ULONG v138; // eax
  int v139; // r15d
  ACL *v140; // rax
  __int16 v141; // cx
  char v142; // r13
  struct _SECURITY_SUBJECT_CONTEXT *v143; // r12
  KPROCESSOR_MODE v144; // bl
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
  GENERIC_MAPPING *GenericMapping; // rsi
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
  ACL *v209; // rcx
  __int64 v210; // rax
  char *v211; // rax
  ACCESS_MASK AccessMask; // edi
  char *v213; // rsi
  int v214; // edx
  BOOLEAN v215; // bl
  BOOLEAN v216; // bl
  int v217; // r9d
  int v218; // r9d
  int GenericAll; // eax
  char v220; // [rsp+90h] [rbp-80h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+91h] [rbp-7Fh]
  ULONG Index; // [rsp+94h] [rbp-7Ch] BYREF
  PVOID v223; // [rsp+98h] [rbp-78h]
  char v224; // [rsp+A0h] [rbp-70h]
  PVOID v225; // [rsp+A8h] [rbp-68h]
  char v226; // [rsp+B0h] [rbp-60h]
  __int64 v227; // [rsp+B8h] [rbp-58h]
  char v228; // [rsp+C0h] [rbp-50h]
  unsigned int v229; // [rsp+C4h] [rbp-4Ch]
  char v230; // [rsp+C8h] [rbp-48h] BYREF
  char v231; // [rsp+C9h] [rbp-47h]
  int v232; // [rsp+CCh] [rbp-44h]
  BOOLEAN Dominates; // [rsp+D0h] [rbp-40h] BYREF
  char v234; // [rsp+D1h] [rbp-3Fh]
  char v235; // [rsp+D2h] [rbp-3Eh]
  bool v236; // [rsp+D3h] [rbp-3Dh]
  char v237; // [rsp+D4h] [rbp-3Ch] BYREF
  char v238; // [rsp+D5h] [rbp-3Bh]
  char v239; // [rsp+D6h] [rbp-3Ah]
  char v240; // [rsp+D7h] [rbp-39h]
  bool v241; // [rsp+D8h] [rbp-38h]
  int v242; // [rsp+DCh] [rbp-34h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+E0h] [rbp-30h] BYREF
  PVOID P; // [rsp+E8h] [rbp-28h]
  char v245; // [rsp+F0h] [rbp-20h] BYREF
  char v246[3]; // [rsp+F1h] [rbp-1Fh] BYREF
  NTSTATUS AccessStatus; // [rsp+F4h] [rbp-1Ch] BYREF
  void *v248; // [rsp+F8h] [rbp-18h]
  void *v249; // [rsp+100h] [rbp-10h]
  int v250; // [rsp+108h] [rbp-8h] BYREF
  _OWORD *v251; // [rsp+110h] [rbp+0h]
  PGENERIC_MAPPING v252; // [rsp+118h] [rbp+8h]
  char *v253; // [rsp+120h] [rbp+10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+128h] [rbp+18h]
  __int64 v255; // [rsp+130h] [rbp+20h]
  PVOID SecurityDescriptor; // [rsp+138h] [rbp+28h] BYREF
  __int64 v257; // [rsp+140h] [rbp+30h]
  PSID Sid1; // [rsp+148h] [rbp+38h]
  __int64 v259; // [rsp+150h] [rbp+40h]
  ACL *p_Acl; // [rsp+158h] [rbp+48h]
  char *v261; // [rsp+160h] [rbp+50h]
  PVOID v262; // [rsp+168h] [rbp+58h] BYREF
  PVOID v263; // [rsp+170h] [rbp+60h]
  PVOID v264; // [rsp+178h] [rbp+68h] BYREF
  char *v265; // [rsp+180h] [rbp+70h]
  __int64 v266; // [rsp+188h] [rbp+78h]
  ACL *v267; // [rsp+190h] [rbp+80h] BYREF
  void *Src; // [rsp+198h] [rbp+88h]
  __int64 *v269; // [rsp+1A0h] [rbp+90h]
  _OWORD v270[2]; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v271; // [rsp+1C8h] [rbp+B8h]
  int v272; // [rsp+1D0h] [rbp+C0h]
  unsigned __int16 v273; // [rsp+1D4h] [rbp+C4h]
  unsigned __int8 *v274; // [rsp+1D8h] [rbp+C8h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E0h] [rbp+D0h] BYREF
  ACL Acl; // [rsp+200h] [rbp+F0h] BYREF
  _BYTE v277[120]; // [rsp+208h] [rbp+F8h] BYREF
  ACL v278; // [rsp+280h] [rbp+170h] BYREF

  v10 = 0LL;
  v252 = a9;
  v11 = 0LL;
  v12 = a2;
  v266 = a10;
  v13 = 0LL;
  v269 = a3;
  v271 = 0LL;
  v226 = 0;
  v14 = 0LL;
  v239 = 0;
  v15 = 0LL;
  v238 = 0;
  v228 = 0;
  v231 = 0;
  v220 = 0;
  v245 = 0;
  v246[0] = 0;
  v230 = 0;
  v235 = 0;
  v237 = 0;
  v259 = a4;
  v16 = a7;
  p_Acl = &Acl;
  v251 = a2;
  v255 = a1;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  P = 0LL;
  v225 = 0LL;
  v250 = 0;
  v223 = 0LL;
  v262 = 0LL;
  v263 = 0LL;
  Sid1 = 0LL;
  v265 = 0LL;
  v253 = 0LL;
  v257 = 0LL;
  v261 = 0LL;
  v227 = 0LL;
  AccessMode = 1;
  v242 = 0;
  GrantedAccess = 0;
  Src = 0LL;
  v274 = 0LL;
  v267 = 0LL;
  SecurityDescriptor = 0LL;
  Dominates = 1;
  v264 = 0LL;
  v240 = 0;
  v229 = a7;
  memset(v270, 0, sizeof(v270));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v234 = 1;
  }
  else
  {
    v12 = v270;
    v234 = 0;
    v251 = v270;
    LOBYTE(v270[0]) = 1;
  }
  v17 = *((_WORD *)v12 + 1);
  v18 = (v17 & 0x80u) != 0;
  v224 = (v17 & 0x80u) != 0;
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
        v224 = 1;
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
    v263 = Pool2;
    if ( !Pool2 )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(Pool2, v25, 4LL * v25[1] + 8);
    v36 = 4LL * v28[1] + 8;
    v37 = (char *)v263 + 4 * v25[1] + 8;
    Sid1 = v37;
    memmove(v37, v28, v36);
    v38 = v28[1];
    v14 = &v37[4 * v38 + 8];
    v253 = v14;
    if ( v30 )
    {
      v39 = v30[1];
      v265 = &v37[4 * v38 + 8];
      memmove(v265, v30, 4 * v39 + 8);
      v14 += 4 * v30[1] + 8;
      v253 = v14;
      v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
      v265 = 0LL;
    }
    if ( v22 )
    {
      v11 = v14;
      memmove(v14, v22, 4LL * v22[1] + 8);
      v14 += 4 * v22[1] + 8;
      v253 = v14;
    }
    else
    {
      v11 = 0LL;
    }
    memmove(v14, v26, 4LL * v26[1] + 8);
    v40 = &v14[4 * v26[1] + 8];
    v261 = v40;
    if ( v24 )
    {
      v41 = v24[1];
      v257 = (__int64)v40;
      v15 = v40;
      memmove(v40, v24, 4 * v41 + 8);
      v40 += 4 * v24[1] + 8;
      v261 = v40;
    }
    else
    {
      v257 = 0LL;
    }
    if ( v23 )
    {
      memmove(v40, v23, v23[1]);
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v261 = 0LL;
    }
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v12 = v251;
    v16 = v229;
    v18 = v224;
    v13 = (char *)v263;
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
  v248 = v43;
  if ( v43 )
  {
    v231 = 1;
LABEL_39:
    v46 = v255;
    goto LABEL_40;
  }
LABEL_35:
  if ( (v16 & 0x20) == 0 )
  {
    v45 = v14;
    if ( !v18 )
      v45 = v13;
    v248 = v45;
    if ( v45 )
      goto LABEL_39;
    ServerAcl = -1073741700;
LABEL_579:
    v166 = (unsigned __int16 *)v223;
    v179 = v223;
    goto LABEL_405;
  }
  v46 = v255;
  if ( !v255 )
  {
    ServerAcl = -1073741734;
    goto LABEL_579;
  }
  if ( *(__int16 *)(v255 + 2) >= 0 )
  {
    v203 = *(void **)(v255 + 8);
  }
  else
  {
    v202 = *(unsigned int *)(v255 + 4);
    if ( !(_DWORD)v202 )
    {
LABEL_428:
      ServerAcl = -1073741734;
      goto LABEL_579;
    }
    v203 = (void *)(v255 + v202);
  }
  v248 = v203;
  v231 = 1;
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
  v249 = v47;
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
  v249 = v11;
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
      v54 = (UCHAR *)(v46 + v100);
      goto LABEL_56;
    }
LABEL_55:
    v54 = 0LL;
    goto LABEL_56;
  }
  v54 = *(UCHAR **)(v46 + 24);
LABEL_56:
  v55 = v51 | v52 | v53 | ((v42 & 0x10) != 0 ? 4 : 0);
  if ( !v55 && !v54 )
  {
    v220 = 0;
    P = 0LL;
    v242 = v49 != 0 ? 0x400 : 0;
    goto LABEL_66;
  }
  v56 = 200;
  v57 = 0;
  Index = 200;
  while ( 1 )
  {
    v58 = (ACL *)ExAllocatePool2(256LL, v56, 1665230163LL);
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
                  (__int64)v248,
                  (__int64)v249,
                  (__int64)v253,
                  v257,
                  (__int64)v252,
                  2,
                  v259,
                  a5,
                  &Index,
                  v58,
                  &v220,
                  &v242);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v60 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_63;
    if ( (unsigned int)++v57 >= 2 )
      goto LABEL_63;
    v56 = Index;
    v50 = v241;
  }
  if ( Index )
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
    v226 = 1;
    if ( (v242 & 8) != 0 )
      v199 = 32816;
    else
      v199 = 32784;
    v63 = 0;
    if ( (v242 & 0x1000) != 0 )
      v200 = 0x2000;
    else
      v200 = 0;
    v12 = v251;
    v232 = v199 | v200 | (2 * (v242 & 0x400));
    goto LABEL_70;
  }
  P = v60;
  if ( ServerAcl != -2147483637 )
    goto LABEL_487;
  v12 = v251;
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
  v220 = 1;
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
  if ( !v255 )
    goto LABEL_77;
  v101 = *(_WORD *)(v255 + 2);
  if ( (v101 & 0x10) == 0 )
    goto LABEL_77;
  if ( v101 >= 0 )
  {
    v69 = *(UCHAR **)(v255 + 24);
    goto LABEL_78;
  }
  v102 = *(unsigned int *)(v255 + 12);
  if ( (_DWORD)v102 )
    v69 = (UCHAR *)(v255 + v102);
  else
LABEL_77:
    v69 = 0LL;
LABEL_78:
  v70 = v66 | v67 | ((*((_WORD *)v12 + 1) & 0x10) != 0 ? 4 : 0);
  if ( v70 || v69 )
  {
    v71 = v241;
    v72 = 200;
    for ( Index = 200; ; v72 = Index )
    {
      v73 = (ACL *)ExAllocatePool2(256LL, v72, 1665230163LL);
      v225 = v73;
      if ( !v73 )
      {
        v166 = (unsigned __int16 *)v223;
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
                    (__int64)v248,
                    (__int64)v249,
                    (__int64)v253,
                    v257,
                    (__int64)v252,
                    2,
                    v259,
                    a5,
                    &Index,
                    v73,
                    &v245,
                    (int *)&GrantedAccess);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v225, 0);
      v74 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_85;
      if ( ++v63 >= 2 )
        goto LABEL_85;
    }
    if ( Index )
    {
      v74 = (char *)v225;
LABEL_85:
      v63 = 0;
      goto LABEL_86;
    }
    ExFreePoolWithTag(v225, 0);
    v63 = 0;
    v74 = 0LL;
LABEL_86:
    v225 = v74;
    GrantedAccess = ServerAcl;
    if ( ServerAcl >= 0 )
    {
      v12 = v251;
      v76 = v74;
      v239 = 1;
      goto LABEL_91;
    }
    v225 = v74;
    if ( ServerAcl == -2147483637 )
    {
      v12 = v251;
      goto LABEL_89;
    }
    goto LABEL_487;
  }
  v225 = 0LL;
  GrantedAccess = -2147483637;
LABEL_89:
  v75 = *((_WORD *)v12 + 1);
  if ( (v75 & 0x30) == 0x30 )
  {
    if ( (v75 & 0x10) != 0 )
    {
      if ( v75 >= 0 )
      {
        v76 = (char *)*((_QWORD *)v12 + 3);
        v225 = v76;
      }
      else
      {
        v207 = *((unsigned int *)v12 + 3);
        if ( (_DWORD)v207 )
        {
          v76 = (char *)v12 + v207;
          v225 = (char *)v12 + v207;
        }
        else
        {
          v76 = 0LL;
          v225 = 0LL;
        }
      }
    }
    else
    {
      v76 = 0LL;
      v225 = 0LL;
    }
  }
  else
  {
    v76 = (char *)v225;
  }
LABEL_91:
  v77 = v265;
  Index = 0;
  while ( 1 )
  {
    v78 = *((_WORD *)v12 + 1);
    if ( (v78 & 0x10) != 0 )
    {
      if ( v78 >= 0 )
      {
        v79 = (ACL *)*((_QWORD *)v12 + 3);
      }
      else
      {
        v104 = *((unsigned int *)v12 + 3);
        v79 = (_DWORD)v104 ? (ACL *)((char *)v12 + v104) : 0LL;
      }
    }
    else
    {
      v79 = 0LL;
    }
    AceByType = RtlFindAceByType(v79, 0x14u, &Index);
    if ( !AceByType )
      break;
    if ( AceByType != (PVOID)-8LL
      && !(unsigned __int8)RtlpValidTrustSubjectContext((__int64)v77, (__int64)AceByType + 8, v81, &GrantedAccess) )
    {
      goto LABEL_539;
    }
    ++Index;
    v12 = v251;
  }
  v82 = v229;
  v83 = 4;
  v84 = v251;
  if ( (v229 & 0x800) == 0 )
  {
LABEL_96:
    v264 = v76;
    goto LABEL_97;
  }
  Index = 0;
  do
  {
    v208 = *((_WORD *)v84 + 1);
    if ( (v208 & 0x10) != 0 )
    {
      if ( v208 >= 0 )
      {
        v209 = (ACL *)*((_QWORD *)v84 + 3);
      }
      else
      {
        v210 = *((unsigned int *)v84 + 3);
        if ( (_DWORD)v210 )
          v209 = (ACL *)((char *)v84 + v210);
        else
          v209 = 0LL;
      }
    }
    else
    {
      v209 = 0LL;
    }
    v211 = (char *)RtlFindAceByType(v209, 0x14u, &Index);
    ++Index;
    if ( !v211 )
    {
      if ( v77 )
      {
        if ( !v266 )
        {
          v166 = (unsigned __int16 *)v223;
          ServerAcl = -1073741811;
          v179 = v225;
          goto LABEL_405;
        }
        AccessMask = *(_DWORD *)(v266 + 4);
        v213 = v77;
        goto LABEL_493;
      }
      goto LABEL_96;
    }
  }
  while ( (v211[1] & 8) != 0 );
  AccessMask = *((_DWORD *)v211 + 1);
  v213 = v211 + 8;
  v63 = (unsigned __int8)v211[1];
  if ( !v266 || (AccessMask & *(_DWORD *)(v266 + 4)) != AccessMask || v211 == (char *)-8LL )
    goto LABEL_486;
LABEL_493:
  ServerAcl = RtlCreateAcl(&v278, 0x58u, 2u);
  if ( ServerAcl < 0 || (ServerAcl = RtlAddProcessTrustLabelAce(&v278, 2u, v63, v213, 0x14u, AccessMask), ServerAcl < 0) )
  {
LABEL_540:
    v166 = (unsigned __int16 *)v223;
    v179 = v225;
    goto LABEL_405;
  }
  v179 = v225;
  ServerAcl = RtlpComputeMergedAcl(
                (_DWORD)v225,
                (*((_WORD *)v84 + 1) & 0x800 | (*((unsigned __int16 *)v84 + 1) >> 1) & 0x18u) >> 1,
                (unsigned int)&v278,
                4,
                (__int64)v248,
                (__int64)v249,
                (__int64)v252,
                2,
                (__int64)&v264,
                (__int64)&v242);
  if ( ServerAcl < 0 )
  {
    v166 = (unsigned __int16 *)v223;
    goto LABEL_405;
  }
  v82 = v229;
  v240 = 1;
LABEL_97:
  v85 = *((_WORD *)v84 + 1);
  if ( (v85 & 0x10) != 0 )
  {
    if ( v85 >= 0 )
    {
      v86 = (ACL *)*((_QWORD *)v84 + 3);
    }
    else
    {
      v107 = *((unsigned int *)v84 + 3);
      if ( (_DWORD)v107 )
        v86 = (ACL *)((char *)v84 + v107);
      else
        v86 = 0LL;
    }
  }
  else
  {
    v86 = 0LL;
  }
  GrantedAccess = 0;
  v272 = 0;
  v273 = 256;
  Index = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v87 = RtlFindAceByType(v86, 0x15u, &Index);
      if ( !v87 )
      {
LABEL_101:
        ++Index;
        if ( !v87 )
        {
          ServerAcl = GrantedAccess;
          goto LABEL_103;
        }
        continue;
      }
      break;
    }
    if ( (v87[1] & 0xFF000000) != 0 )
      goto LABEL_509;
    if ( (*((_BYTE *)v87 + 1) & 0x40) == 0 )
    {
      v214 = *(_DWORD *)((char *)v87 + 10) - v272;
      if ( !v214 )
        v214 = *((unsigned __int16 *)v87 + 7) - v273;
      if ( v214 || *((_BYTE *)v87 + 9) != 1 || v87[4] )
      {
LABEL_509:
        ServerAcl = -1073741811;
        goto LABEL_103;
      }
      goto LABEL_101;
    }
    if ( (unsigned __int8)RtlpValidTrustSubjectContext((__int64)v77, (__int64)(v87 + 2), v88, &GrantedAccess) )
    {
      ++Index;
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
      v95 = (ACL *)*((_QWORD *)v84 + 3);
    }
    else
    {
      v108 = *((unsigned int *)v84 + 3);
      if ( (_DWORD)v108 )
        v95 = (ACL *)((char *)v84 + v108);
      else
        v95 = 0LL;
    }
  }
  else
  {
    v95 = 0LL;
  }
  v96 = (char *)RtlFindAceByType(v95, 0x11u, 0LL);
  v91 = v96;
  if ( !v96 )
  {
    v92 = v274;
    goto LABEL_110;
  }
  v93 = v96[1];
  v92 = (unsigned __int8 *)(v96 + 8);
  v90 = *((_DWORD *)v96 + 1);
  if ( v93 == 8 || (v93 & 0x10) != 0 )
  {
    v91 = 0LL;
    v92 = 0LL;
    v90 = 0;
LABEL_110:
    v93 = 0;
  }
  else if ( (v93 & 8) != 0 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    v166 = (unsigned __int16 *)v223;
    ServerAcl = -1073740730;
    v179 = v225;
    goto LABEL_405;
  }
  if ( !v90 )
  {
    if ( Sid1 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v90 = 1;
      goto LABEL_153;
    }
LABEL_156:
    if ( v92 )
    {
      memset(v277, 0, sizeof(v277));
      Acl = (ACL)8388610LL;
      LODWORD(v274) = 0;
      WORD2(v274) = 4096;
      if ( (unsigned __int64)v92 <= 0x7FFFFFFF0000LL || (*v92 & 0xF) != 1 || v92[1] > 0xFu )
      {
        v166 = (unsigned __int16 *)v223;
        ServerAcl = -1073741704;
        v179 = v225;
        goto LABEL_405;
      }
      v109 = *(_DWORD *)(v92 + 2) - (_DWORD)v274;
      if ( !v109 )
        v109 = *((unsigned __int16 *)v92 + 3) - WORD2(v274);
      if ( v109 )
      {
LABEL_486:
        ServerAcl = -1073741811;
        goto LABEL_487;
      }
      if ( (v93 & 0xE0) != 0 )
      {
        v166 = (unsigned __int16 *)v223;
        ServerAcl = -1073741811;
        v179 = v225;
        goto LABEL_405;
      }
      if ( (v90 & 0xFFFFFFF8) != 0 )
      {
        v166 = (unsigned __int16 *)v223;
        ServerAcl = -1073741811;
        v179 = v225;
        goto LABEL_405;
      }
      if ( !RtlValidAcl(&Acl) )
      {
        v166 = (unsigned __int16 *)v223;
        ServerAcl = -1073741705;
        v179 = v225;
        goto LABEL_405;
      }
      v110 = v277;
      v111 = 0;
      if ( Acl.AceCount )
      {
        while ( v110 < (char *)&Acl + Acl.AclSize )
        {
          ++v111;
          v110 += *((unsigned __int16 *)v110 + 1);
          if ( v111 >= Acl.AceCount )
            goto LABEL_167;
        }
        v179 = v225;
        ServerAcl = -1073741705;
        v166 = 0LL;
        goto LABEL_405;
      }
LABEL_167:
      v112 = (char *)&Acl + Acl.AclSize;
      if ( v110 > v112 )
        v110 = 0LL;
      v113 = 4 * (v92[1] + 4);
      if ( !v110 || &v110[v113] > v112 )
      {
        v179 = v225;
        ServerAcl = -1073741671;
        v166 = 0LL;
        goto LABEL_405;
      }
      *((_WORD *)v110 + 1) = v113;
      v110[1] = v93;
      *v110 = 17;
      *((_DWORD *)v110 + 1) = v90;
      memmove(v110 + 8, v92, 4LL * v92[1] + 8);
      ++Acl.AceCount;
      v114 = &Acl;
      Acl.AclRevision = 2;
    }
    else
    {
      v114 = 0LL;
      p_Acl = 0LL;
    }
    if ( (v229 & 0x700) != 0 )
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
    if ( v255 )
    {
      v193 = *(_WORD *)(v255 + 2);
      if ( (v193 & 0x10) != 0 )
      {
        if ( v193 >= 0 )
        {
          v116 = *(UCHAR **)(v255 + 24);
LABEL_176:
          if ( v83 || v116 )
          {
            v117 = 200;
            v118 = 0;
            Index = 200;
            while ( 1 )
            {
              v119 = (ACL *)ExAllocatePool2(256LL, v117, 1665230163LL);
              v120 = v119;
              if ( !v119 )
              {
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741801;
                v179 = v225;
                goto LABEL_405;
              }
              ServerAcl = RtlpInheritAcl2(
                            v116,
                            (unsigned __int8 *)v114,
                            v83,
                            a6,
                            1u,
                            0,
                            (__int64)v248,
                            (__int64)v249,
                            (__int64)v253,
                            v257,
                            (__int64)v252,
                            3,
                            v259,
                            a5,
                            &Index,
                            v119,
                            v246,
                            &v242);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v120, 0);
              v120 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_182;
              if ( (unsigned int)++v118 >= 2 )
                goto LABEL_182;
              v117 = Index;
              v114 = p_Acl;
            }
            if ( !Index )
            {
              ExFreePoolWithTag(v120, 0);
              v120 = 0LL;
            }
LABEL_182:
            if ( ServerAcl == -2147483637 )
              goto LABEL_304;
            if ( ServerAcl >= 0 )
            {
              v121 = v242;
              goto LABEL_185;
            }
            goto LABEL_487;
          }
LABEL_304:
          v120 = p_Acl;
          v121 = 0;
          v242 = 0;
LABEL_185:
          v122 = (ACL *)P;
          v123 = RtlpCombineAcls(
                   (_DWORD)P,
                   (_DWORD)v120,
                   (_DWORD)v225,
                   (_DWORD)v225,
                   (__int64)v264,
                   (__int64)v225,
                   (__int64)&v267,
                   (__int64)&v250);
          v124 = v232;
          ServerAcl = v123;
          if ( (v232 & 0x2000) != 0 )
            v125 = 0x40000000;
          else
            v125 = 0;
          v272 = v125 | v250;
          if ( v120 && v120 != p_Acl )
            ExFreePoolWithTag(v120, 0);
          if ( ServerAcl < 0 )
          {
LABEL_487:
            v166 = (unsigned __int16 *)v223;
            goto LABEL_488;
          }
          v126 = v267;
          if ( v267 )
          {
            if ( v226 && v122 )
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
          v128 = v229;
          v250 = v229 & 8;
          if ( (v229 & 8) == 0 )
          {
            v129 = (char *)RtlFindAceByType(v122, 0x11u, 0LL);
            if ( v129 )
              v92 = (unsigned __int8 *)(v129 + 8);
            if ( v92 )
            {
              if ( !SubjectSecurityContext )
              {
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741700;
                v179 = v225;
                goto LABEL_405;
              }
              ServerAcl = RtlSidDominates(Sid1, v92, &Dominates);
              if ( ServerAcl < 0 )
                goto LABEL_487;
              v128 = v229;
              if ( !Dominates )
                v235 = 1;
            }
            else
            {
              v128 = v229;
            }
          }
          v130 = AccessStatus != 0;
          v131 = v251;
          v132 = v128 & 1;
          v133 = *((_WORD *)v251 + 1);
          if ( (v133 & 4) != 0 )
          {
            if ( v133 >= 0 )
            {
              v134 = (unsigned __int8 *)*((_QWORD *)v251 + 4);
            }
            else
            {
              v192 = *((unsigned int *)v251 + 4);
              if ( (_DWORD)v192 )
                v134 = (unsigned __int8 *)v251 + v192;
              else
                v134 = 0LL;
            }
          }
          else
          {
            v134 = 0LL;
          }
          if ( !v255 )
            goto LABEL_209;
          v195 = *(_WORD *)(v255 + 2);
          if ( (v195 & 4) == 0 )
            goto LABEL_209;
          if ( v195 >= 0 )
          {
            v135 = *(UCHAR **)(v255 + 32);
            goto LABEL_210;
          }
          v196 = *(unsigned int *)(v255 + 16);
          if ( (_DWORD)v196 )
            v135 = (UCHAR *)(v255 + v196);
          else
LABEL_209:
            v135 = 0LL;
LABEL_210:
          v136 = v133 & 0x140C;
          if ( v136 || v135 )
          {
            v138 = 200;
            v139 = 0;
            for ( Index = 200; ; v138 = Index )
            {
              v140 = (ACL *)ExAllocatePool2(256LL, v138, 1665230163LL);
              v223 = v140;
              if ( !v140 )
              {
                v179 = v225;
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
                            (__int64)v248,
                            (__int64)v249,
                            (__int64)v253,
                            v257,
                            (__int64)v252,
                            1,
                            v259,
                            a5,
                            &Index,
                            v140,
                            &v230,
                            &v242);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v223, 0);
              v137 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_218;
              if ( (unsigned int)++v139 >= 2 )
                goto LABEL_218;
            }
            if ( Index )
            {
              v137 = (char *)v223;
            }
            else
            {
              ExFreePoolWithTag(v223, 0);
              v137 = 0LL;
            }
LABEL_218:
            v223 = v137;
            if ( ServerAcl >= 0 )
            {
              v142 = 1;
              LOBYTE(v135) = v230;
              v128 = v229;
              v124 = v242 & 0x1408 | 4 | v232;
              v228 = 1;
              v232 = v124;
              goto LABEL_228;
            }
            v223 = v137;
            if ( ServerAcl != -2147483637 )
              goto LABEL_487;
            LOBYTE(v135) = v230;
            v124 = v232;
            v131 = v251;
            v128 = v229;
          }
          else
          {
            v137 = 0LL;
            v223 = 0LL;
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
                v137 = (char *)*((_QWORD *)v131 + 4);
              }
              else
              {
                v201 = *((unsigned int *)v131 + 4);
                if ( (_DWORD)v201 )
                  v137 = (char *)v131 + v201;
                else
                  v137 = 0LL;
              }
            }
            else
            {
              v137 = 0LL;
            }
            v223 = v137;
            LOBYTE(v135) = 1;
            v124 |= v141 & 0x1000 | 4;
          }
          else
          {
            if ( !v261 )
              goto LABEL_227;
            v137 = v261;
            v223 = v261;
            v124 |= 4u;
          }
          v232 = v124;
LABEL_227:
          v142 = 0;
LABEL_228:
          v143 = SubjectSecurityContext;
          if ( (v128 & 0x1000) != 0 || !v234 || !SubjectSecurityContext || !v255 )
          {
            v144 = AccessMode;
LABEL_231:
            if ( v132 && !v137 )
            {
              v124 |= 0x1000u;
              v232 = v124;
            }
            v145 = !v272 || (v272 & 0x1B0) != v272;
            if ( v144 != 1 )
              goto LABEL_236;
            v181 = v250;
            if ( v220 && !v250 && v145 )
            {
              if ( !v143 )
              {
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741700;
                v179 = v225;
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
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741727;
                v179 = v225;
                goto LABEL_405;
              }
              LOBYTE(v128) = v229;
            }
            if ( v235 && !v181 )
            {
              if ( !v143 )
              {
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741700;
                v179 = v225;
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
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741727;
                v179 = v225;
                goto LABEL_405;
              }
              LOBYTE(v128) = v229;
            }
            v182 = v224;
            if ( v231 && (v128 & 0x10) == 0 && !SepValidOwnerSubjectContext((__int64 *)v143, v248, v224) )
            {
              v166 = (unsigned __int16 *)v223;
              ServerAcl = -1073741734;
              v179 = v225;
              goto LABEL_405;
            }
            if ( !(_BYTE)v135 || !v182 )
            {
LABEL_236:
              v146 = (unsigned __int16 *)v223;
LABEL_237:
              v147 = 4 * *((unsigned __int8 *)v248 + 1) + 8;
              AccessStatus = v147;
              if ( v249 )
                v148 = 4 * *((unsigned __int8 *)v249 + 1) + 8;
              else
                v148 = 0;
              v149 = v124 & 0x10;
              if ( (v124 & 0x10) != 0 && P )
                v150 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
              else
                v150 = 0;
              v151 = v124 & 4;
              v272 = v151;
              if ( (v124 & 4) != 0 && v146 )
                v152 = (v146[1] + 3) & 0xFFFFFFFC;
              else
                v152 = 0;
              v153 = ExAllocatePool2(256LL, v148 + v152 + v150 + v147 + 20, 1683187027LL);
              v227 = v153;
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
                  if ( (v229 & 0x4000) != 0 )
                  {
                    v198 = v252;
                    if ( v226 )
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
                    if ( !v226 )
                    {
                      if ( v156 )
                      {
                        v158 = (unsigned __int8 *)(v156 + 4);
                        v159 = 0;
                        if ( v156[2] )
                        {
                          v160 = v252;
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
                          v151 = v272;
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
                    v154 = v227;
                    v156 = (unsigned __int16 *)((char *)v156 + v150);
                    v164 = v157 - v227;
                  }
                  else
                  {
                    v164 = 0;
                    v154 = v227;
                  }
                  *(_DWORD *)(v154 + 12) = v164;
                }
                v165 = v151 == 0;
                v166 = (unsigned __int16 *)v223;
                if ( v165 )
                {
                  v176 = v227;
                }
                else if ( v223 )
                {
                  if ( (v229 & 0x4000) != 0 )
                  {
                    v197 = v252;
                    if ( v228 )
                      v197 = 0LL;
                    RtlpNormalizeAcl(v156, v223, v197);
                    v152 = v156[1];
                  }
                  else
                  {
                    memmove(v156, v223, *((unsigned __int16 *)v223 + 1));
                    if ( !v228 )
                    {
                      if ( v156 )
                      {
                        v167 = (unsigned __int8 *)(v156 + 4);
                        v168 = 0;
                        if ( v156[2] )
                        {
                          v169 = v252;
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
                          v166 = (unsigned __int16 *)v223;
                        }
                      }
                    }
                    v175 = v166[1];
                    if ( v152 > (unsigned int)v175 )
                      memset((char *)v156 + v175, 0, v152 - (unsigned int)v175);
                  }
                  v176 = v227;
                  *(_DWORD *)(v227 + 16) = (_DWORD)v156 - v227;
                  v156 = (unsigned __int16 *)((char *)v156 + v152);
                }
                else
                {
                  v176 = v227;
                  *(_DWORD *)(v154 + 16) = 0;
                }
                memmove(v156, v248, v147);
                v177 = (int)v156;
                v178 = (char *)v156 + v147;
                *(_DWORD *)(v176 + 4) = v177 - v176;
                if ( v249 )
                {
                  memmove(v178, v249, v148);
                  *(_DWORD *)(v176 + 8) = (_DWORD)v178 - v176;
                }
                v179 = v225;
                ServerAcl = 0;
              }
              else
              {
                v166 = (unsigned __int16 *)v223;
                ServerAcl = -1073741670;
                v179 = v225;
                v176 = 0LL;
              }
              goto LABEL_291;
            }
            v166 = (unsigned __int16 *)v223;
            ServerAcl = RtlpCreateServerAcl((_DWORD)v223, v236, (_DWORD)v253, (unsigned int)&v262, (__int64)&v237);
            if ( ServerAcl >= 0 )
            {
              if ( v142 && v166 )
                ExFreePoolWithTag(v166, 0);
              v146 = (unsigned __int16 *)v262;
              v223 = v262;
              v262 = 0LL;
              goto LABEL_237;
            }
LABEL_488:
            v179 = v225;
            goto LABEL_405;
          }
          GenericMapping = v252;
          GrantedAccess = 0;
          AccessStatus = 0;
          ServerAcl = RtlpNewSecurityObject(
                        v255,
                        0,
                        (unsigned int)&SecurityDescriptor,
                        v259,
                        a5,
                        a6,
                        v128 | 1,
                        (__int64)SubjectSecurityContext,
                        (__int64)v252,
                        v266);
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
            v144 = AccessMode;
            if ( v191
              && !SeAccessCheck(
                    SecurityDescriptor,
                    v143,
                    0,
                    0x40000u,
                    0,
                    0LL,
                    GenericMapping,
                    AccessMode,
                    &GrantedAccess,
                    &AccessStatus) )
            {
LABEL_539:
              ServerAcl = -1073741790;
              goto LABEL_540;
            }
            LOBYTE(v128) = v229;
            v137 = (char *)v223;
            goto LABEL_231;
          }
          goto LABEL_487;
        }
        v194 = *(unsigned int *)(v255 + 12);
        if ( (_DWORD)v194 )
        {
          v116 = (UCHAR *)(v255 + v194);
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
    v92 = (unsigned __int8 *)Sid1;
    goto LABEL_156;
  }
  v166 = (unsigned __int16 *)v223;
  ServerAcl = -1073741700;
  v179 = v225;
LABEL_405:
  v176 = v227;
LABEL_291:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v237 && v262 )
    ExFreePoolWithTag(v262, 0);
  if ( v263 )
    ExFreePoolWithTag(v263, 0);
  if ( (v238 || v226) && P )
    ExFreePoolWithTag(P, 0);
  if ( v239 && v179 )
    ExFreePoolWithTag(v179, 0);
  if ( v264 && v240 )
    ExFreePoolWithTag(v264, 0);
  if ( v228 )
  {
    if ( v166 )
      ExFreePoolWithTag(v166, 0);
  }
  *v269 = v176;
  return (unsigned int)ServerAcl;
}
