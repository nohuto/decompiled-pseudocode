/*
 * XREFs of sub_1407CE760 @ 0x1407CE760
 * Callers:
 *     sub_1402A49D0 @ 0x1402A49D0 (sub_1402A49D0.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     SeAssignSecurity @ 0x140719100 (SeAssignSecurity.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 * Callees:
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_14025ACE4 @ 0x14025ACE4 (sub_14025ACE4.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069A9C0 @ 0x14069A9C0 (sub_14069A9C0.c)
 *     sub_1406BBE6C @ 0x1406BBE6C (sub_1406BBE6C.c)
 *     sub_1406CBD5C @ 0x1406CBD5C (sub_1406CBD5C.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     sub_140727FB0 @ 0x140727FB0 (sub_140727FB0.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     sub_1409B9738 @ 0x1409B9738 (sub_1409B9738.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407CE760(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  unsigned __int8 *v10; // r13
  _OWORD *v11; // r10
  __int64 v12; // rsi
  char v13; // r8
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // r15
  unsigned __int8 *v17; // r12
  __int16 v18; // ax
  bool v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int8 *v23; // rdi
  unsigned __int16 *v24; // r14
  unsigned __int8 *v25; // rsi
  unsigned __int8 *v26; // r12
  unsigned __int8 *v27; // r13
  unsigned __int8 **v28; // rax
  unsigned __int8 *v29; // r15
  __int64 v30; // rax
  unsigned __int8 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // r8
  PVOID PoolWithTag; // rax
  size_t v37; // r8
  __int64 v38; // r8
  unsigned __int8 *v39; // rdi
  __int64 v40; // r8
  unsigned int v41; // edx
  char *v42; // rax
  unsigned __int8 *v43; // rax
  char *v44; // rcx
  unsigned __int8 *v45; // rcx
  char v46; // bl
  int v47; // r14d
  unsigned __int8 v48; // r15
  int v49; // eax
  int v50; // r9d
  UCHAR *v51; // rsi
  int v52; // edi
  __int16 v53; // dx
  int v54; // ecx
  ULONG v55; // r14d
  char v56; // r13
  __int16 v57; // dx
  int v58; // eax
  unsigned __int8 *v59; // r12
  UCHAR *v60; // rsi
  int v61; // edi
  char *v62; // rsi
  __int16 v63; // cx
  __int64 v64; // r15
  __int16 v65; // ax
  ACL *v66; // rcx
  PVOID AceByType; // rax
  __int64 v68; // r8
  unsigned int v69; // edi
  int v70; // r12d
  _OWORD *v71; // r13
  __int16 v72; // ax
  ACL *v73; // rbx
  _DWORD *v74; // rax
  __int64 v75; // r8
  signed int v76; // ebx
  int v77; // edx
  int v78; // ebx
  void *v79; // rsi
  unsigned __int8 *v80; // r14
  char v81; // di
  int v82; // ecx
  char *v83; // rcx
  unsigned int v84; // r9d
  char *v85; // r8
  unsigned __int16 v86; // dx
  ACL *v87; // rbx
  UCHAR *v88; // r14
  ACCESS_MASK v89; // eax
  int v90; // r15d
  ACL *v91; // rax
  ACL *v92; // rsi
  int v93; // edi
  ACL *v94; // r14
  __int16 v95; // di
  PACL v96; // r12
  signed int v97; // eax
  int v98; // r15d
  int v99; // eax
  ACL *v100; // rbx
  int v101; // ecx
  int v102; // edx
  unsigned int v103; // edx
  char *v104; // rax
  unsigned __int8 *v105; // rdx
  char v106; // bl
  __int16 v107; // ax
  int v108; // edi
  __int16 v109; // r14
  unsigned __int8 *v110; // r12
  UCHAR *v111; // rsi
  int v112; // r14d
  unsigned __int16 *v113; // r12
  __int16 v114; // cx
  struct _SECURITY_SUBJECT_CONTEXT *v115; // r14
  KPROCESSOR_MODE v116; // bl
  bool v117; // al
  unsigned int v118; // r14d
  unsigned int v119; // r13d
  int v120; // esi
  unsigned int v121; // edi
  ULONG v122; // r15d
  unsigned int v123; // r12d
  char *v124; // rax
  char *v125; // r8
  __int16 v126; // dx
  unsigned __int16 *v127; // rbx
  ACCESS_MASK *v128; // rsi
  unsigned int v129; // r14d
  PGENERIC_MAPPING v130; // r15
  int v131; // r12d
  __int64 AclSize; // rcx
  bool v133; // zf
  void *v134; // r15
  unsigned __int8 *v135; // rdx
  unsigned int v136; // r9d
  PGENERIC_MAPPING v137; // r13
  int v138; // r10d
  unsigned int v139; // r8d
  int v140; // eax
  int v141; // eax
  int v142; // ecx
  char *v143; // rdi
  __int64 v144; // rcx
  char *v145; // rbx
  int v147; // edi
  ACCESS_MASK v148; // eax
  int v149; // r13d
  ACL *v150; // rax
  int v151; // r15d
  __int16 v152; // ax
  ACL *v153; // rcx
  char *v154; // rax
  unsigned int v155; // edx
  int v156; // r8d
  int v157; // r12d
  GENERIC_MAPPING *GenericMapping; // r13
  __int16 v159; // cx
  unsigned int v160; // ecx
  char *v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int16 v165; // cx
  unsigned int v166; // ecx
  __int16 v167; // cx
  __int64 v168; // rcx
  __int16 v169; // ax
  __int64 v170; // rax
  __int16 v171; // ax
  __int64 v172; // rax
  ULONG v173; // eax
  int v174; // r12d
  ACL *v175; // rax
  int v176; // r15d
  ACL *v177; // rax
  ULONG v178; // eax
  int v179; // r15d
  ACL *v180; // rax
  signed int v181; // r14d
  struct _KTHREAD *v182; // rax
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rax
  int v188; // ecx
  int v189; // eax
  __int64 v190; // rax
  __int64 v191; // rax
  void *v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  ACL *v195; // rax
  __int64 v196; // rax
  __int16 v197; // ax
  ACL *v198; // rcx
  __int64 v199; // rax
  _DWORD *v200; // rax
  ACCESS_MASK AccessMask; // edi
  void *v202; // rsi
  int v203; // ecx
  BOOLEAN v204; // bl
  BOOLEAN v205; // bl
  unsigned int v206; // eax
  int GenericAll; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+90h] [rbp-80h]
  char v209; // [rsp+91h] [rbp-7Fh]
  unsigned __int16 *v210; // [rsp+98h] [rbp-78h]
  ULONG Index; // [rsp+A0h] [rbp-70h] BYREF
  char *v212; // [rsp+A8h] [rbp-68h]
  char v213; // [rsp+B0h] [rbp-60h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B4h] [rbp-5Ch] BYREF
  char v215; // [rsp+B8h] [rbp-58h]
  char v216; // [rsp+B9h] [rbp-57h]
  char v217; // [rsp+BAh] [rbp-56h] BYREF
  char v218; // [rsp+BBh] [rbp-55h] BYREF
  char v219; // [rsp+BCh] [rbp-54h]
  int v220; // [rsp+C0h] [rbp-50h]
  unsigned __int8 v221; // [rsp+C4h] [rbp-4Ch]
  char v222; // [rsp+C5h] [rbp-4Bh]
  char v223; // [rsp+C6h] [rbp-4Ah]
  char v224; // [rsp+C7h] [rbp-49h]
  char v225; // [rsp+C8h] [rbp-48h] BYREF
  char v226; // [rsp+C9h] [rbp-47h]
  char v227; // [rsp+CAh] [rbp-46h]
  char v228; // [rsp+CBh] [rbp-45h]
  char v229; // [rsp+CCh] [rbp-44h]
  int v230; // [rsp+D0h] [rbp-40h] BYREF
  PACL v231; // [rsp+D8h] [rbp-38h]
  int v232; // [rsp+E0h] [rbp-30h] BYREF
  PVOID v233; // [rsp+E8h] [rbp-28h]
  char v234; // [rsp+F0h] [rbp-20h] BYREF
  char v235[3]; // [rsp+F1h] [rbp-1Fh] BYREF
  NTSTATUS AccessStatus; // [rsp+F4h] [rbp-1Ch] BYREF
  void *v237; // [rsp+F8h] [rbp-18h]
  _OWORD *v238; // [rsp+100h] [rbp-10h]
  void *v239; // [rsp+108h] [rbp-8h]
  PGENERIC_MAPPING v240; // [rsp+110h] [rbp+0h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+8h]
  unsigned __int8 *v242; // [rsp+120h] [rbp+10h]
  __int64 v243; // [rsp+128h] [rbp+18h]
  PVOID SecurityDescriptor; // [rsp+130h] [rbp+20h] BYREF
  unsigned __int8 *v245; // [rsp+138h] [rbp+28h]
  unsigned __int8 *v246; // [rsp+140h] [rbp+30h]
  ACL *p_Acl; // [rsp+148h] [rbp+38h]
  PSID Sid; // [rsp+150h] [rbp+40h]
  __int64 v249; // [rsp+158h] [rbp+48h]
  PVOID P; // [rsp+160h] [rbp+50h]
  unsigned __int16 *v251; // [rsp+168h] [rbp+58h]
  PVOID v252; // [rsp+170h] [rbp+60h] BYREF
  PVOID v253; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int8 *v254; // [rsp+180h] [rbp+70h]
  __int64 v255; // [rsp+188h] [rbp+78h]
  ACL *v256; // [rsp+190h] [rbp+80h] BYREF
  _QWORD *v257; // [rsp+198h] [rbp+88h]
  _OWORD v258[2]; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v259; // [rsp+1C0h] [rbp+B0h]
  int v260; // [rsp+1C8h] [rbp+B8h]
  unsigned __int16 v261; // [rsp+1CCh] [rbp+BCh]
  void *Src; // [rsp+1D0h] [rbp+C0h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+1D8h] [rbp+C8h] BYREF
  ACL Acl; // [rsp+1F0h] [rbp+E0h] BYREF
  _BYTE v265[120]; // [rsp+1F8h] [rbp+E8h] BYREF
  ACL v266; // [rsp+270h] [rbp+160h] BYREF

  v10 = 0LL;
  v240 = a9;
  v11 = a2;
  v255 = a10;
  v12 = a1;
  v257 = a3;
  v13 = a7;
  v238 = a2;
  v243 = a1;
  v14 = 0LL;
  v249 = a4;
  v15 = 0LL;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v16 = 0LL;
  v259 = 0LL;
  v17 = 0LL;
  v231 = 0LL;
  v233 = 0LL;
  v215 = 0;
  v227 = 0;
  v226 = 0;
  v232 = 0;
  v210 = 0LL;
  v252 = 0LL;
  v216 = 0;
  v219 = 0;
  v218 = 0;
  v234 = 0;
  v235[0] = 0;
  v217 = 0;
  v223 = 0;
  v225 = 0;
  P = 0LL;
  Sid = 0LL;
  v254 = 0LL;
  v242 = 0LL;
  v246 = 0LL;
  v251 = 0LL;
  v212 = 0LL;
  AccessMode = 1;
  v230 = 0;
  GrantedAccess = 0;
  Src = 0LL;
  v245 = 0LL;
  p_Acl = &Acl;
  v256 = 0LL;
  SecurityDescriptor = 0LL;
  v213 = 1;
  v253 = 0LL;
  v228 = 0;
  memset(v258, 0, sizeof(v258));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 )
  {
    v222 = 1;
  }
  else
  {
    v11 = v258;
    v222 = 0;
    v238 = v258;
    LOBYTE(v258[0]) = 1;
  }
  v18 = *((_WORD *)v11 + 1);
  v19 = (v18 & 0x80u) != 0;
  v209 = (v18 & 0x80u) != 0;
  v224 = (v18 & 0x40) != 0;
  if ( a8 || (v18 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8
      && (v182 = KeGetCurrentThread(),
          --*((_WORD *)v182 + 242),
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u),
          (v21 = *(_QWORD *)a8) != 0) )
    {
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v209 = 1;
      v22 = *(_QWORD *)(a8 + 16);
    }
    else
    {
      v21 = *(_QWORD *)(a8 + 16);
      v22 = v21;
    }
    v23 = *(unsigned __int8 **)(v21 + 168);
    v24 = *(unsigned __int16 **)(v21 + 184);
    v25 = *(unsigned __int8 **)(v22 + 168);
    v26 = *(unsigned __int8 **)(*(_QWORD *)(v21 + 152) + 16LL * *(unsigned int *)(v21 + 144));
    v27 = *(unsigned __int8 **)(*(_QWORD *)(v22 + 152) + 16LL * *(unsigned int *)(v22 + 144));
    v28 = (unsigned __int8 **)sub_1402ED9BC(v21);
    if ( v28 )
      v29 = *v28;
    else
      v29 = (unsigned __int8 *)Buf2;
    v30 = sub_140232910((__int64 *)SubjectSecurityContext);
    v31 = (unsigned __int8 *)v30;
    if ( v30 )
      v32 = 4LL * *(unsigned __int8 *)(v30 + 1) + 8;
    else
      v32 = 0LL;
    if ( v23 )
      v33 = 4LL * v23[1] + 8;
    else
      v33 = 0LL;
    if ( v25 )
      v34 = 4LL * v25[1] + 32;
    else
      v34 = 24LL;
    if ( v24 )
      v35 = v24[1];
    else
      v35 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v34 + v35 + v33 + v32 + 4 * (v26[1] + v27[1] + (unsigned __int64)v29[1]),
                    0x64536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v26, 4LL * v26[1] + 8);
    v37 = 4LL * v29[1] + 8;
    Sid = (char *)P + 4 * v26[1] + 8;
    memmove(Sid, v29, v37);
    v16 = (unsigned __int8 *)Sid + 4 * v29[1] + 8;
    v242 = v16;
    if ( v31 )
    {
      v38 = v31[1];
      v254 = v16;
      memmove(v16, v31, 4 * v38 + 8);
      v16 += 4 * v31[1] + 8;
      v242 = v16;
    }
    else
    {
      v254 = 0LL;
    }
    if ( v23 )
    {
      v15 = v16;
      memmove(v16, v23, 4LL * v23[1] + 8);
      v16 += 4 * v23[1] + 8;
      v242 = v16;
    }
    else
    {
      v15 = 0LL;
    }
    memmove(v16, v27, 4LL * v27[1] + 8);
    v39 = &v16[4 * v27[1] + 8];
    v251 = (unsigned __int16 *)v39;
    if ( v25 )
    {
      v40 = v25[1];
      v246 = v39;
      v17 = v39;
      memmove(v39, v25, 4 * v40 + 8);
      v39 += 4 * v25[1] + 8;
      v251 = (unsigned __int16 *)v39;
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v17 = 0LL;
      v246 = 0LL;
    }
    if ( v24 )
      memmove(v39, v24, v24[1]);
    else
      v251 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v14 = (unsigned __int8 *)P;
    v19 = v209;
    v12 = v243;
    v13 = a7;
    v11 = v238;
  }
  v41 = *((unsigned __int16 *)v11 + 1);
  if ( (v41 & 0x8000u) != 0 )
  {
    v162 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v162 )
      goto LABEL_33;
    v42 = (char *)v11 + v162;
  }
  else
  {
    v42 = (char *)*((_QWORD *)v11 + 1);
  }
  v237 = v42;
  if ( v42 )
  {
    v219 = 1;
    goto LABEL_37;
  }
LABEL_33:
  if ( (v13 & 0x20) != 0 )
  {
    if ( !v12 )
    {
      v76 = -1073741734;
      goto LABEL_383;
    }
    if ( *(__int16 *)(v12 + 2) >= 0 )
    {
      v192 = *(void **)(v12 + 8);
    }
    else
    {
      v191 = *(unsigned int *)(v12 + 4);
      if ( !(_DWORD)v191 )
        goto LABEL_411;
      v192 = (void *)(v12 + v191);
    }
    v237 = v192;
    v219 = 1;
    if ( v192 )
      goto LABEL_37;
LABEL_411:
    v76 = -1073741734;
    goto LABEL_383;
  }
  v43 = v16;
  if ( !v19 )
    v43 = v14;
  v237 = v43;
  if ( !v43 )
  {
    v76 = -1073741700;
    goto LABEL_383;
  }
LABEL_37:
  if ( (v41 & 0x8000u) != 0 )
  {
    v163 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v163 )
    {
LABEL_40:
      if ( (v13 & 0x40) != 0 )
      {
        if ( !v12 )
        {
          v76 = -1073741733;
          goto LABEL_383;
        }
        if ( *(__int16 *)(v12 + 2) >= 0 )
        {
          v45 = *(unsigned __int8 **)(v12 + 16);
        }
        else
        {
          v193 = *(unsigned int *)(v12 + 8);
          if ( !(_DWORD)v193 )
            goto LABEL_419;
          v45 = (unsigned __int8 *)(v12 + v193);
        }
      }
      else
      {
        v45 = v15;
        if ( v19 )
          v45 = v17;
      }
      v239 = v45;
      if ( v45 )
        goto LABEL_44;
LABEL_419:
      v76 = -1073741733;
      goto LABEL_383;
    }
    v44 = (char *)v11 + v163;
  }
  else
  {
    v44 = (char *)*((_QWORD *)v11 + 2);
  }
  v239 = v44;
  if ( !v44 )
    goto LABEL_40;
LABEL_44:
  AccessStatus = v13 & 4;
  v46 = (v13 & 4) != 0;
  v229 = v46;
  v47 = v13 & 2;
  v48 = v47 != 0;
  v221 = v47 != 0;
  v49 = 0;
  if ( (v41 & 0x20) != 0 )
    v49 = 8;
  v50 = 0;
  if ( (v41 & 0x2000) != 0 )
    v50 = 4096;
  if ( (v41 & 0x10) != 0 )
  {
    if ( (v41 & 0x8000u) == 0 )
    {
      v10 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v184 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v184 )
        v10 = (unsigned __int8 *)v11 + v184;
    }
  }
  if ( !v12 )
    goto LABEL_50;
  v165 = *(_WORD *)(v12 + 2);
  if ( (v165 & 0x10) == 0 )
    goto LABEL_50;
  if ( v165 >= 0 )
  {
    v51 = *(UCHAR **)(v12 + 24);
    goto LABEL_51;
  }
  v166 = *(_DWORD *)(v12 + 12);
  if ( v166 )
    v51 = (UCHAR *)(v243 + v166);
  else
LABEL_50:
    v51 = 0LL;
LABEL_51:
  v52 = v49 | v50 | ((v41 & 0x10) != 0 ? 4 : 0) | (v41 >> 1) & 0x400;
  if ( !v52 && !v51 )
  {
    v231 = 0LL;
    v230 = v47 != 0 ? 0x400 : 0;
    goto LABEL_54;
  }
  v173 = 200;
  v174 = 0;
  Index = 200;
  while ( 1 )
  {
    v175 = (ACL *)ExAllocatePoolWithTag(PagedPool, v173, 0x63416553u);
    v231 = v175;
    if ( !v175 )
    {
LABEL_539:
      v76 = -1073741801;
      goto LABEL_383;
    }
    v176 = sub_140727FB0(
             v51,
             v10,
             v52,
             a6,
             v48,
             v46,
             (__int64)v237,
             (__int64)v239,
             (__int64)v242,
             (__int64)v246,
             v240,
             2,
             v249,
             a5,
             &Index,
             v175,
             &v218,
             &v230);
    v76 = v176;
    if ( v176 >= 0 )
      break;
    ExFreePoolWithTag(v231, 0);
    v177 = 0LL;
    v231 = 0LL;
    if ( v176 != -1073741789 )
      goto LABEL_310;
    if ( (unsigned int)++v174 >= 2 )
    {
LABEL_424:
      v134 = 0LL;
      goto LABEL_384;
    }
    v173 = Index;
    v46 = v229;
    v48 = v221;
  }
  if ( !Index )
  {
    ExFreePoolWithTag(v231, 0);
    v231 = 0LL;
    goto LABEL_356;
  }
  v177 = v231;
LABEL_310:
  if ( v176 >= 0 )
  {
LABEL_356:
    v215 = 1;
    if ( (v230 & 8) != 0 )
      v188 = 32816;
    else
      v188 = 32784;
    if ( (v230 & 0x1000) != 0 )
      v189 = 0x2000;
    else
      v189 = 0;
    v11 = v238;
    v220 = v188 | v189 | (2 * (v230 & 0x400));
    goto LABEL_58;
  }
  v231 = v177;
  if ( v176 != -2147483637 )
    goto LABEL_383;
  v11 = v238;
LABEL_54:
  v53 = *((_WORD *)v11 + 1);
  v54 = 34816;
  if ( !v47 )
    v54 = 0x8000;
  if ( (v53 & 0x30) != 0x30 )
  {
    v220 = v54;
LABEL_58:
    v55 = 0;
    goto LABEL_59;
  }
  if ( (v53 & 0x10) != 0 )
  {
    if ( v53 >= 0 )
    {
      v195 = (ACL *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v194 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v194 )
      {
        v55 = 0;
        v231 = 0LL;
        goto LABEL_436;
      }
      v195 = (ACL *)((char *)v11 + v194);
    }
    v55 = 0;
    v231 = v195;
    goto LABEL_436;
  }
  v55 = 0;
  v231 = 0LL;
LABEL_436:
  v218 = 1;
  v220 = v54 | v53 & 0x2000 | 0x10;
LABEL_59:
  v56 = AccessStatus != 0;
  v57 = *((_WORD *)v11 + 1);
  v58 = 0;
  if ( (v57 & 0x20) != 0 )
    v58 = 8;
  if ( (v57 & 0x10) != 0 )
  {
    if ( v57 >= 0 )
    {
      v59 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v185 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v185 )
        v59 = (unsigned __int8 *)v11 + v185;
      else
        v59 = 0LL;
    }
  }
  else
  {
    v59 = 0LL;
  }
  if ( !v243 )
    goto LABEL_64;
  v167 = *(_WORD *)(v243 + 2);
  if ( (v167 & 0x10) == 0 )
    goto LABEL_64;
  if ( v167 >= 0 )
  {
    v60 = *(UCHAR **)(v243 + 24);
    goto LABEL_65;
  }
  v168 = *(unsigned int *)(v243 + 12);
  if ( (_DWORD)v168 )
    v60 = (UCHAR *)(v243 + v168);
  else
LABEL_64:
    v60 = 0LL;
LABEL_65:
  v61 = v58 | ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400;
  if ( !v61 && !v60 )
  {
    v62 = 0LL;
    v233 = 0LL;
    GrantedAccess = -2147483637;
    goto LABEL_68;
  }
  v178 = 200;
  v179 = 0;
  for ( Index = 200; ; v178 = Index )
  {
    v180 = (ACL *)ExAllocatePoolWithTag(PagedPool, v178, 0x63416553u);
    v233 = v180;
    if ( !v180 )
      goto LABEL_539;
    v181 = sub_140727FB0(
             v60,
             v59,
             v61,
             a6,
             v221,
             v56,
             (__int64)v237,
             (__int64)v239,
             (__int64)v242,
             (__int64)v246,
             v240,
             2,
             v249,
             a5,
             &Index,
             v180,
             &v234,
             (int *)&GrantedAccess);
    v76 = v181;
    if ( v181 >= 0 )
      break;
    ExFreePoolWithTag(v233, 0);
    v233 = 0LL;
    if ( v181 != -1073741789 )
      goto LABEL_317;
    if ( (unsigned int)++v179 >= 2 )
      goto LABEL_383;
  }
  if ( !Index )
  {
    ExFreePoolWithTag(v233, 0);
    v55 = 0;
    GrantedAccess = v76;
    v62 = 0LL;
    v233 = 0LL;
LABEL_364:
    v11 = v238;
    v227 = 1;
    goto LABEL_69;
  }
LABEL_317:
  v62 = (char *)v233;
  GrantedAccess = v181;
  if ( v181 >= 0 )
  {
    v55 = 0;
    goto LABEL_364;
  }
  if ( v181 != -2147483637 )
    goto LABEL_383;
  v11 = v238;
  v55 = 0;
LABEL_68:
  v63 = *((_WORD *)v11 + 1);
  if ( (v63 & 0x30) != 0x30 )
    goto LABEL_69;
  if ( (v63 & 0x10) == 0 )
  {
    v62 = 0LL;
    v233 = 0LL;
    goto LABEL_69;
  }
  if ( v63 >= 0 )
  {
    v62 = (char *)*((_QWORD *)v11 + 3);
  }
  else
  {
    v196 = *((unsigned int *)v11 + 3);
    if ( !(_DWORD)v196 )
    {
      v62 = 0LL;
      v233 = 0LL;
      goto LABEL_69;
    }
    v62 = (char *)v11 + v196;
  }
  v233 = v62;
LABEL_69:
  v64 = (__int64)v254;
  Index = 0;
  while ( 1 )
  {
    v65 = *((_WORD *)v11 + 1);
    if ( (v65 & 0x10) != 0 )
    {
      if ( v65 >= 0 )
      {
        v66 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v183 = *((unsigned int *)v11 + 3);
        v66 = (_DWORD)v183 ? (ACL *)((char *)v11 + v183) : 0LL;
      }
    }
    else
    {
      v66 = 0LL;
    }
    AceByType = RtlFindAceByType(v66, 0x14u, &Index);
    if ( !AceByType )
      break;
    if ( AceByType != (PVOID)-8LL && !sub_14025ACE4(v64, (__int64)AceByType + 8, v68, &GrantedAccess) )
      goto LABEL_515;
    ++Index;
    v11 = v238;
  }
  v69 = a7;
  v70 = 4;
  v71 = v238;
  if ( (a7 & 0x800) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      v197 = *((_WORD *)v71 + 1);
      if ( (v197 & 0x10) != 0 )
      {
        if ( v197 >= 0 )
        {
          v198 = (ACL *)*((_QWORD *)v71 + 3);
        }
        else
        {
          v199 = *((unsigned int *)v71 + 3);
          v198 = (_DWORD)v199 ? (ACL *)((char *)v71 + v199) : 0LL;
        }
      }
      else
      {
        v198 = 0LL;
      }
      v200 = RtlFindAceByType(v198, 0x14u, &Index);
      ++Index;
      if ( !v200 )
        break;
      if ( (*((_BYTE *)v200 + 1) & 8) == 0 )
      {
        AccessMask = v200[1];
        v202 = v200 + 2;
        v55 = *((unsigned __int8 *)v200 + 1);
        if ( !v255 || (AccessMask & *(_DWORD *)(v255 + 4)) != AccessMask || v200 == (_DWORD *)-8LL )
          goto LABEL_463;
        goto LABEL_468;
      }
    }
    if ( !v64 )
      goto LABEL_74;
    if ( !v255 )
    {
      v76 = -1073741811;
      goto LABEL_383;
    }
    AccessMask = *(_DWORD *)(v255 + 4);
    v202 = (void *)v64;
LABEL_468:
    v76 = RtlCreateAcl(&v266, 0x58u, 2u);
    if ( v76 < 0 )
      goto LABEL_383;
    v76 = RtlAddProcessTrustLabelAce(&v266, 2u, v55, v202, 0x14u, AccessMask);
    if ( v76 < 0 )
      goto LABEL_383;
    v76 = sub_1409B9738(
            (_DWORD)v233,
            (*((_WORD *)v71 + 1) & 0x800 | (*((unsigned __int16 *)v71 + 1) >> 1) & 0x18u) >> 1,
            (unsigned int)&v266,
            4,
            (__int64)v237,
            (__int64)v239,
            (__int64)v240,
            2,
            (__int64)&v253,
            (__int64)&v230);
    if ( v76 < 0 )
      goto LABEL_383;
    v69 = a7;
    v228 = 1;
  }
  else
  {
LABEL_74:
    v253 = v62;
  }
  v72 = *((_WORD *)v71 + 1);
  if ( (v72 & 0x10) != 0 )
  {
    if ( v72 >= 0 )
    {
      v73 = (ACL *)*((_QWORD *)v71 + 3);
    }
    else
    {
      v186 = *((unsigned int *)v71 + 3);
      if ( (_DWORD)v186 )
        v73 = (ACL *)((char *)v71 + v186);
      else
        v73 = 0LL;
    }
  }
  else
  {
    v73 = 0LL;
  }
  GrantedAccess = 0;
  v260 = 0;
  v261 = 256;
  for ( Index = 0; ; ++Index )
  {
    while ( 1 )
    {
      v74 = RtlFindAceByType(v73, 0x15u, &Index);
      if ( v74 )
        break;
LABEL_79:
      ++Index;
      if ( !v74 )
      {
        v76 = GrantedAccess;
        goto LABEL_81;
      }
    }
    if ( (v74[1] & 0xFF000000) != 0 )
      goto LABEL_463;
    if ( (*((_BYTE *)v74 + 1) & 0x40) == 0 )
      break;
    if ( !sub_14025ACE4(v64, (__int64)(v74 + 2), v75, &GrantedAccess) )
      goto LABEL_515;
  }
  v203 = *(_DWORD *)((char *)v74 + 10) - v260;
  if ( !v203 )
    v203 = *((unsigned __int16 *)v74 + 7) - v261;
  if ( v203 )
    goto LABEL_463;
  if ( *((_BYTE *)v74 + 9) == 1 && !v74[4] )
    goto LABEL_79;
  v76 = -1073741811;
LABEL_81:
  if ( v76 < 0 )
    goto LABEL_383;
  v77 = (v69 >> 8) & 1 | 2;
  if ( (v69 & 0x200) == 0 )
    v77 = (v69 >> 8) & 1;
  v78 = v77 | 4;
  if ( (v69 & 0x400) == 0 )
    v78 = v77;
  if ( v78 )
  {
    v79 = Src;
    v80 = (unsigned __int8 *)Src;
    goto LABEL_88;
  }
  v152 = *((_WORD *)v71 + 1);
  if ( (v152 & 0x10) != 0 )
  {
    if ( v152 >= 0 )
    {
      v153 = (ACL *)*((_QWORD *)v71 + 3);
    }
    else
    {
      v187 = *((unsigned int *)v71 + 3);
      if ( (_DWORD)v187 )
        v153 = (ACL *)((char *)v71 + v187);
      else
        v153 = 0LL;
    }
  }
  else
  {
    v153 = 0LL;
  }
  v154 = (char *)RtlFindAceByType(v153, 0x11u, 0LL);
  v79 = v154;
  if ( !v154 )
  {
    v80 = v245;
    goto LABEL_88;
  }
  v81 = v154[1];
  v80 = (unsigned __int8 *)(v154 + 8);
  v78 = *((_DWORD *)v154 + 1);
  v245 = (unsigned __int8 *)(v154 + 8);
  if ( v81 == 8 || (v81 & 0x10) != 0 )
  {
    v79 = 0LL;
    v245 = 0LL;
    v80 = 0LL;
    v78 = 0;
LABEL_88:
    v81 = 0;
  }
  else if ( (v81 & 8) != 0 )
  {
    v245 = (unsigned __int8 *)(v154 + 8);
    if ( *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
    {
      v76 = -1073740730;
      goto LABEL_383;
    }
  }
  if ( v78 )
  {
LABEL_93:
    if ( !v79 )
    {
      if ( !SubjectSecurityContext )
      {
        v76 = -1073741700;
        goto LABEL_383;
      }
      v81 = 0;
      v80 = (unsigned __int8 *)Sid;
      v245 = (unsigned __int8 *)Sid;
    }
  }
  else if ( Sid && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v78 = 1;
    goto LABEL_93;
  }
  if ( !v80 )
  {
    v87 = 0LL;
    p_Acl = 0LL;
LABEL_112:
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v79 && v87 )
      {
        v70 = 0;
      }
      else
      {
        v155 = *((unsigned __int16 *)v71 + 1);
        if ( (v155 & 0x20) != 0 )
          v156 = 8;
        else
          v156 = 0;
        if ( (v155 & 0x2000) != 0 )
          v157 = 4096;
        else
          v157 = 0;
        v70 = (*((unsigned __int16 *)v71 + 1) >> 2) & 4 | (v155 >> 1) & 0x400 | v156 | v157;
      }
    }
    if ( !v243 )
      goto LABEL_114;
    v169 = *(_WORD *)(v243 + 2);
    if ( (v169 & 0x10) == 0 )
      goto LABEL_114;
    if ( v169 >= 0 )
    {
      v88 = *(UCHAR **)(v243 + 24);
      goto LABEL_115;
    }
    v170 = *(unsigned int *)(v243 + 12);
    if ( (_DWORD)v170 )
      v88 = (UCHAR *)(v243 + v170);
    else
LABEL_114:
      v88 = 0LL;
LABEL_115:
    if ( !v70 && !v88 )
      goto LABEL_241;
    v89 = 200;
    v90 = 0;
    GrantedAccess = 200;
    while ( 1 )
    {
      v91 = (ACL *)ExAllocatePoolWithTag(PagedPool, v89, 0x63416553u);
      v92 = v91;
      if ( !v91 )
        goto LABEL_539;
      v93 = sub_140727FB0(
              v88,
              (unsigned __int8 *)v87,
              v70,
              a6,
              1u,
              0,
              (__int64)v237,
              (__int64)v239,
              (__int64)v242,
              (__int64)v246,
              v240,
              3,
              v249,
              a5,
              &GrantedAccess,
              v91,
              v235,
              &v230);
      v76 = v93;
      if ( v93 >= 0 )
        break;
      ExFreePoolWithTag(v92, 0);
      v92 = 0LL;
      if ( v93 != -1073741789 )
        goto LABEL_120;
      if ( (unsigned int)++v90 >= 2 )
        goto LABEL_424;
      v89 = GrantedAccess;
      v87 = p_Acl;
    }
    if ( GrantedAccess )
    {
LABEL_120:
      if ( v93 == -2147483637 )
      {
LABEL_241:
        v94 = p_Acl;
        v92 = p_Acl;
        v230 = 0;
        v95 = 0;
        goto LABEL_123;
      }
      if ( v93 < 0 )
        goto LABEL_383;
    }
    else
    {
      ExFreePoolWithTag(v92, 0);
      v92 = 0LL;
    }
    v94 = p_Acl;
    v95 = v230;
LABEL_123:
    v96 = v231;
    v97 = sub_14069A9C0(
            (unsigned __int8 *)v231,
            (unsigned __int8 *)v92,
            (unsigned __int8 *)v233,
            (unsigned __int8 *)v233,
            (unsigned __int8 *)v253,
            (unsigned __int8 *)v233,
            (char **)&v256,
            &v232);
    v98 = v220;
    v76 = v97;
    if ( (v220 & 0x2000) != 0 )
      v99 = 0x40000000;
    else
      v99 = 0;
    Index = v99 | v232;
    if ( v92 && v92 != v94 )
      ExFreePoolWithTag(v92, 0);
    if ( v76 < 0 )
      goto LABEL_383;
    v100 = v256;
    if ( v256 )
    {
      if ( v215 && v96 )
        ExFreePoolWithTag(v96, 0);
      v231 = v100;
      v96 = v100;
      v226 = 1;
      if ( (v95 & 8) != 0 )
        v101 = 48;
      else
        v101 = 16;
      if ( (v95 & 0x1000) != 0 )
        v102 = 0x2000;
      else
        v102 = 0;
      v98 |= v101 | (2 * (v95 & 0x400)) | v102;
      v220 = v98;
    }
    v103 = a7;
    v232 = a7 & 8;
    if ( (a7 & 8) == 0 )
    {
      v104 = (char *)RtlFindAceByType(v96, 0x11u, 0LL);
      if ( v104 )
        v105 = (unsigned __int8 *)(v104 + 8);
      else
        v105 = v245;
      if ( v105 )
      {
        if ( !SubjectSecurityContext )
        {
          v76 = -1073741700;
          goto LABEL_383;
        }
        v76 = sub_1402ED880(Sid, v105, (bool *)&v213);
        if ( v76 < 0 )
        {
LABEL_383:
          v134 = v210;
          goto LABEL_384;
        }
        v103 = a7;
        if ( !v213 )
          v223 = 1;
      }
      else
      {
        v103 = a7;
      }
    }
    v106 = AccessStatus != 0;
    v107 = *((_WORD *)v71 + 1);
    v108 = v103 & 1;
    v213 = AccessStatus != 0;
    v109 = v107;
    if ( (v107 & 4) != 0 )
    {
      if ( v107 >= 0 )
      {
        v110 = (unsigned __int8 *)*((_QWORD *)v71 + 4);
      }
      else
      {
        v164 = *((unsigned int *)v71 + 4);
        if ( (_DWORD)v164 )
          v110 = (unsigned __int8 *)v71 + v164;
        else
          v110 = 0LL;
      }
    }
    else
    {
      v110 = 0LL;
    }
    if ( !v243 )
      goto LABEL_147;
    v171 = *(_WORD *)(v243 + 2);
    if ( (v171 & 4) == 0 )
      goto LABEL_147;
    if ( v171 >= 0 )
    {
      v111 = *(UCHAR **)(v243 + 32);
      goto LABEL_148;
    }
    v172 = *(unsigned int *)(v243 + 16);
    if ( (_DWORD)v172 )
      v111 = (UCHAR *)(v243 + v172);
    else
LABEL_147:
      v111 = 0LL;
LABEL_148:
    v112 = v109 & 0x140C;
    if ( !v112 && !v111 )
    {
      v113 = 0LL;
      v210 = 0LL;
      goto LABEL_151;
    }
    v148 = 200;
    v149 = 0;
    GrantedAccess = 200;
    while ( 1 )
    {
      v150 = (ACL *)ExAllocatePoolWithTag(PagedPool, v148, 0x63416553u);
      v210 = (unsigned __int16 *)v150;
      v134 = v150;
      if ( !v150 )
      {
        v76 = -1073741801;
        goto LABEL_384;
      }
      v151 = sub_140727FB0(
               v111,
               v110,
               v112,
               a6,
               v108,
               v106,
               (__int64)v237,
               (__int64)v239,
               (__int64)v242,
               (__int64)v246,
               v240,
               1,
               v249,
               a5,
               &GrantedAccess,
               v150,
               &v217,
               &v230);
      v76 = v151;
      if ( v151 >= 0 )
        break;
      ExFreePoolWithTag(v210, 0);
      v210 = 0LL;
      if ( v151 != -1073741789 )
        goto LABEL_246;
      if ( (unsigned int)++v149 >= 2 )
      {
        v134 = 0LL;
        goto LABEL_384;
      }
      v148 = GrantedAccess;
      v106 = v213;
    }
    if ( !GrantedAccess )
    {
      ExFreePoolWithTag(v210, 0);
      v113 = 0LL;
      v210 = 0LL;
      goto LABEL_247;
    }
LABEL_246:
    v113 = v210;
    if ( v151 >= 0 )
    {
LABEL_247:
      LOBYTE(v111) = v217;
      v103 = a7;
      v98 = v230 & 0x1408 | 4 | v220;
      v216 = 1;
      goto LABEL_156;
    }
    if ( v151 != -2147483637 )
      goto LABEL_383;
    LOBYTE(v111) = v217;
    v98 = v220;
    v71 = v238;
    v103 = a7;
LABEL_151:
    if ( v108 )
    {
      v98 |= 0x400u;
      v220 = v98;
    }
    v114 = *((_WORD *)v71 + 1);
    if ( (v114 & 0xC) == 0xC )
    {
      if ( (v114 & 4) != 0 )
      {
        if ( v114 >= 0 )
        {
          v113 = (unsigned __int16 *)*((_QWORD *)v71 + 4);
        }
        else
        {
          v190 = *((unsigned int *)v71 + 4);
          if ( (_DWORD)v190 )
            v113 = (unsigned __int16 *)((char *)v71 + v190);
          else
            v113 = 0LL;
        }
      }
      else
      {
        v113 = 0LL;
      }
      v210 = v113;
      LOBYTE(v111) = 1;
      v98 |= v114 & 0x1000 | 4;
LABEL_156:
      v220 = v98;
    }
    else if ( v251 )
    {
      v113 = v251;
      v210 = v251;
      v98 |= 4u;
      goto LABEL_156;
    }
    v115 = SubjectSecurityContext;
    if ( (v103 & 0x1000) == 0 && v222 && SubjectSecurityContext && v243 )
    {
      GenericMapping = v240;
      GrantedAccess = 0;
      AccessStatus = 0;
      v76 = sub_1407CE760(
              v243,
              0,
              (unsigned int)&SecurityDescriptor,
              v249,
              a5,
              a6,
              v103 | 1,
              (__int64)SubjectSecurityContext,
              (__int64)v240,
              v255);
      if ( v76 >= 0 )
      {
        v159 = *((_WORD *)SecurityDescriptor + 1);
        if ( (v159 & 4) != 0 )
        {
          if ( v159 >= 0 )
          {
            v161 = (char *)*((_QWORD *)SecurityDescriptor + 4);
          }
          else
          {
            v160 = *((_DWORD *)SecurityDescriptor + 4);
            if ( v160 )
              v161 = (char *)SecurityDescriptor + v160;
            else
              v161 = 0LL;
          }
        }
        else
        {
          v161 = 0LL;
        }
        v116 = AccessMode;
        if ( !sub_14022A380(0x10u, (__int64)v161) )
        {
          LOBYTE(v103) = a7;
          goto LABEL_160;
        }
        if ( SeAccessCheck(
               SecurityDescriptor,
               v115,
               0,
               0x40000u,
               0,
               0LL,
               GenericMapping,
               AccessMode,
               &GrantedAccess,
               &AccessStatus) )
        {
          LOBYTE(v103) = a7;
          goto LABEL_160;
        }
LABEL_515:
        v76 = -1073741790;
      }
      goto LABEL_383;
    }
    v116 = AccessMode;
LABEL_160:
    if ( v108 && !v113 )
    {
      v98 |= 0x1000u;
      v220 = v98;
    }
    v117 = !Index || (Index & 0x1B0) != Index;
    if ( v116 == 1 )
    {
      v147 = v232;
      if ( v218 && !v232 && v117 )
      {
        if ( !v115 )
        {
          v76 = -1073741700;
          goto LABEL_383;
        }
        RequiredPrivileges.Privilege[0].Luid = stru_140D3CA98;
        RequiredPrivileges.PrivilegeCount = 1;
        RequiredPrivileges.Control = 1;
        RequiredPrivileges.Privilege[0].Attributes = 0;
        v204 = SePrivilegeCheck(&RequiredPrivileges, v115, 1);
        sub_140726520(0LL, (__int64 *)v115, (int *)&RequiredPrivileges, v204);
        if ( !v204 )
        {
          v76 = -1073741727;
          goto LABEL_383;
        }
        LOBYTE(v103) = a7;
      }
      if ( v223 && !v147 )
      {
        if ( !v115 )
        {
          v76 = -1073741700;
          goto LABEL_383;
        }
        RequiredPrivileges.Privilege[0].Luid = (LUID)qword_140D3CAA0;
        RequiredPrivileges.PrivilegeCount = 1;
        RequiredPrivileges.Control = 1;
        RequiredPrivileges.Privilege[0].Attributes = 0;
        v205 = SePrivilegeCheck(&RequiredPrivileges, v115, 1);
        sub_140726520(0LL, (__int64 *)v115, (int *)&RequiredPrivileges, v205);
        if ( !v205 )
        {
          v76 = -1073741727;
          goto LABEL_383;
        }
        LOBYTE(v103) = a7;
      }
      if ( v219 && (v103 & 0x10) == 0 && !sub_1406BBE6C((__int64 *)v115, v237, v209) )
      {
        v76 = -1073741734;
        goto LABEL_383;
      }
      if ( (_BYTE)v111 && v209 )
      {
        v76 = sub_1406CBD5C((__int64)v113, v224, v242, (ACL **)&v252, &v225);
        if ( v76 < 0 )
          goto LABEL_383;
        if ( v216 && v113 )
          ExFreePoolWithTag(v113, 0);
        v113 = (unsigned __int16 *)v252;
        v210 = (unsigned __int16 *)v252;
        v252 = 0LL;
      }
    }
    v118 = 4 * *((unsigned __int8 *)v237 + 1) + 8;
    v232 = v118;
    if ( v239 )
      v119 = 4 * *((unsigned __int8 *)v239 + 1) + 8;
    else
      v119 = 0;
    GrantedAccess = v119;
    v120 = v98 & 0x10;
    if ( (v98 & 0x10) != 0 && v231 )
      v121 = (v231->AclSize + 3) & 0xFFFFFFFC;
    else
      v121 = 0;
    v122 = v98 & 4;
    Index = v122;
    if ( v122 && v113 )
      v123 = (v113[1] + 3) & 0xFFFFFFFC;
    else
      v123 = 0;
    AccessStatus = v123;
    v124 = (char *)ExAllocatePoolWithTag(PagedPool, v119 + v123 + v121 + v118 + 20, 0x64536553u);
    v212 = v124;
    v125 = v124;
    if ( v124 )
    {
      v126 = v220;
      v127 = (unsigned __int16 *)(v124 + 20);
      *(_OWORD *)v124 = 0LL;
      *((_DWORD *)v124 + 4) = 0;
      *((_WORD *)v124 + 1) |= v126;
      *v124 = 1;
      if ( v120 && v231 )
      {
        memmove(v127, v231, v231->AclSize);
        if ( !v215 && v127 )
        {
          v128 = (ACCESS_MASK *)(v127 + 4);
          v129 = 0;
          if ( v127[2] )
          {
            v130 = v240;
            v131 = 1651;
            do
            {
              if ( (*(_BYTE *)v128 < 0xBu || (unsigned __int8)(*(_BYTE *)v128 - 13) <= 1u)
                && (*((_BYTE *)v128 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v128 + 1, v130);
                v206 = *(unsigned __int8 *)v128;
                if ( (unsigned __int8)v206 <= 0xAu && _bittest(&v131, v206) )
                  GenericAll = v130->GenericAll;
                else
                  GenericAll = v130->GenericAll | 0x1000000;
                v128[1] &= GenericAll;
              }
              ++v129;
              v128 = (ACCESS_MASK *)((char *)v128 + *((unsigned __int16 *)v128 + 1));
            }
            while ( v129 < v127[2] );
            v122 = Index;
            v123 = AccessStatus;
            v119 = GrantedAccess;
          }
          v118 = v232;
        }
        v125 = v212;
        *((_DWORD *)v212 + 3) = (_DWORD)v127 - (_DWORD)v212;
        AclSize = v231->AclSize;
        if ( v121 > (unsigned int)AclSize )
        {
          memset((char *)v127 + AclSize, 0, v121 - (unsigned int)AclSize);
          v125 = v212;
        }
        v127 = (unsigned __int16 *)((char *)v127 + v121);
      }
      v133 = v122 == 0;
      v134 = v210;
      if ( v133 )
      {
        v143 = v212;
      }
      else if ( v210 )
      {
        memmove(v127, v210, v210[1]);
        if ( !v216 )
        {
          if ( v127 )
          {
            v135 = (unsigned __int8 *)(v127 + 4);
            v136 = 0;
            if ( v127[2] )
            {
              v137 = v240;
              v138 = 1651;
              do
              {
                v139 = *v135;
                if ( ((unsigned __int8)v139 < 0xBu || (unsigned __int8)(v139 - 13) <= 1u) && (v135[1] & 8) == 0 )
                {
                  v140 = *((_DWORD *)v135 + 1);
                  if ( v140 < 0 )
                  {
                    v140 |= v137->GenericRead;
                    *((_DWORD *)v135 + 1) = v140;
                  }
                  if ( (v140 & 0x40000000) != 0 )
                  {
                    v140 |= v137->GenericWrite;
                    *((_DWORD *)v135 + 1) = v140;
                  }
                  if ( (v140 & 0x20000000) != 0 )
                  {
                    v140 |= v137->GenericExecute;
                    *((_DWORD *)v135 + 1) = v140;
                  }
                  if ( (v140 & 0x10000000) != 0 )
                    v140 |= v137->GenericAll;
                  v141 = v140 & 0xFFFFFFF;
                  *((_DWORD *)v135 + 1) = v141;
                  if ( (unsigned __int8)v139 <= 0xAu && _bittest(&v138, v139) )
                    v142 = v137->GenericAll;
                  else
                    v142 = v137->GenericAll | 0x1000000;
                  *((_DWORD *)v135 + 1) = v141 & v142;
                }
                ++v136;
                v135 += *((unsigned __int16 *)v135 + 1);
              }
              while ( v136 < v127[2] );
              v119 = GrantedAccess;
            }
          }
        }
        v143 = v212;
        *((_DWORD *)v212 + 4) = (_DWORD)v127 - (_DWORD)v212;
        v144 = v210[1];
        if ( v123 > (unsigned int)v144 )
          memset((char *)v127 + v144, 0, v123 - (unsigned int)v144);
        v127 = (unsigned __int16 *)((char *)v127 + v123);
      }
      else
      {
        v143 = v212;
        *((_DWORD *)v125 + 4) = 0;
      }
      memmove(v127, v237, v118);
      *((_DWORD *)v143 + 1) = (_DWORD)v127 - (_DWORD)v143;
      v145 = (char *)v127 + v118;
      if ( v239 )
      {
        memmove(v145, v239, v119);
        *((_DWORD *)v143 + 2) = (_DWORD)v145 - (_DWORD)v143;
      }
      v76 = 0;
    }
    else
    {
      v134 = v210;
      v76 = -1073741670;
      v143 = 0LL;
    }
    goto LABEL_216;
  }
  memset(v265, 0, sizeof(v265));
  Acl = (ACL)8388610LL;
  LODWORD(Src) = 0;
  WORD2(Src) = 4096;
  if ( (unsigned __int64)v80 <= 0x7FFFFFFF0000LL || (*v80 & 0xF) != 1 || v80[1] > 0xFu )
  {
    v76 = -1073741704;
    goto LABEL_383;
  }
  v82 = *(_DWORD *)(v80 + 2) - (_DWORD)Src;
  if ( !v82 )
    v82 = *((unsigned __int16 *)v80 + 3) - WORD2(Src);
  if ( v82 )
  {
LABEL_463:
    v76 = -1073741811;
    goto LABEL_383;
  }
  if ( (v81 & 0xE0) != 0 )
  {
    v76 = -1073741811;
    goto LABEL_383;
  }
  if ( (v78 & 0xFFFFFFF8) != 0 )
  {
    v76 = -1073741811;
    goto LABEL_383;
  }
  if ( !RtlValidAcl(&Acl) )
  {
    v76 = -1073741705;
    goto LABEL_383;
  }
  v83 = v265;
  v84 = 0;
  if ( Acl.AceCount )
  {
    while ( v83 < (char *)&Acl + Acl.AclSize )
    {
      ++v84;
      v83 += *((unsigned __int16 *)v83 + 1);
      if ( v84 >= Acl.AceCount )
        goto LABEL_107;
    }
    v76 = -1073741705;
    v134 = 0LL;
  }
  else
  {
LABEL_107:
    v85 = (char *)&Acl + Acl.AclSize;
    if ( v83 > v85 )
      v83 = 0LL;
    v86 = 4 * (v80[1] + 4);
    if ( v83 && &v83[v86] <= v85 )
    {
      *((_WORD *)v83 + 1) = v86;
      v83[1] = v81;
      *v83 = 17;
      *((_DWORD *)v83 + 1) = v78;
      memmove(v83 + 8, v80, 4LL * v80[1] + 8);
      ++Acl.AceCount;
      v87 = &Acl;
      Acl.AclRevision = 2;
      goto LABEL_112;
    }
    v76 = -1073741671;
    v134 = 0LL;
  }
LABEL_384:
  v143 = v212;
LABEL_216:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v225 && v252 )
    ExFreePoolWithTag(v252, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v226 || v215) && v231 )
    ExFreePoolWithTag(v231, 0);
  if ( v227 && v233 )
    ExFreePoolWithTag(v233, 0);
  if ( v253 && v228 )
    ExFreePoolWithTag(v253, 0);
  if ( v216 )
  {
    if ( v134 )
      ExFreePoolWithTag(v134, 0);
  }
  *v257 = v143;
  return (unsigned int)v76;
}
