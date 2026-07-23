/*
 * XREFs of sub_140685A20 @ 0x140685A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402077B0 @ 0x1402077B0 (sub_1402077B0.c)
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_140209F40 @ 0x140209F40 (sub_140209F40.c)
 *     sub_14020B10C @ 0x14020B10C (sub_14020B10C.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_14025D01C @ 0x14025D01C (sub_14025D01C.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAddGroupAffinityEx @ 0x14035C3E0 (KeAddGroupAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403E3480 (wcsnlen.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057A5D4 @ 0x14057A5D4 (sub_14057A5D4.c)
 *     sub_1405E00B8 @ 0x1405E00B8 (sub_1405E00B8.c)
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 *     sub_140678B98 @ 0x140678B98 (sub_140678B98.c)
 *     sub_140678FCC @ 0x140678FCC (sub_140678FCC.c)
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_1406827E8 @ 0x1406827E8 (sub_1406827E8.c)
 *     sub_140682B74 @ 0x140682B74 (sub_140682B74.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_1406859F8 @ 0x1406859F8 (sub_1406859F8.c)
 *     sub_1406874F0 @ 0x1406874F0 (sub_1406874F0.c)
 *     sub_140687518 @ 0x140687518 (sub_140687518.c)
 *     sub_140687540 @ 0x140687540 (sub_140687540.c)
 *     sub_14068762C @ 0x14068762C (sub_14068762C.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     sub_1406954C8 @ 0x1406954C8 (sub_1406954C8.c)
 *     sub_1406CD41C @ 0x1406CD41C (sub_1406CD41C.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 *     sub_1406E0138 @ 0x1406E0138 (sub_1406E0138.c)
 *     sub_1406E4FA4 @ 0x1406E4FA4 (sub_1406E4FA4.c)
 *     sub_1406E6570 @ 0x1406E6570 (sub_1406E6570.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406FF050 @ 0x1406FF050 (sub_1406FF050.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_140700158 @ 0x140700158 (sub_140700158.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_140726494 @ 0x140726494 (sub_140726494.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407D56C0 (IoAllocateMiniCompletionPacket.c)
 *     sub_1409ABAC0 @ 0x1409ABAC0 (sub_1409ABAC0.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_1409AFDD8 @ 0x1409AFDD8 (sub_1409AFDD8.c)
 *     sub_1409AFE9C @ 0x1409AFE9C (sub_1409AFE9C.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 *     sub_1409B0BE8 @ 0x1409B0BE8 (sub_1409B0BE8.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 *     sub_1409E2580 @ 0x1409E2580 (sub_1409E2580.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140685A20(struct _ERESOURCE *BugCheckParameter1, int a2, __m128i *a3, unsigned int a4)
{
  size_t v4; // r12
  __int64 v5; // r13
  unsigned int v7; // ecx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // esi
  char *v12; // r14
  struct _SECURITY_SUBJECT_CONTEXT *MiniCompletionPacket; // rbx
  __int16 v14; // r12
  PSECURITY_SUBJECT_CONTEXT v15; // rbx
  int v16; // ebx
  PETHREAD v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // eax
  int v28; // edx
  int *v29; // r9
  int *v30; // r10
  struct _SECURITY_SUBJECT_CONTEXT **v31; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v32; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v33; // rdi
  int v34; // esi
  __int64 v35; // rdx
  _DWORD *v36; // r8
  _DWORD *v37; // rax
  __int64 v38; // r8
  _DWORD *v39; // rax
  _DWORD *v40; // r8
  int v41; // edx
  bool v42; // zf
  struct _SECURITY_SUBJECT_CONTEXT *v43; // rax
  __int64 v44; // r8
  int v45; // ebx
  __int64 v46; // r9
  int v47; // edx
  KPROCESSOR_MODE v48; // r14
  int v49; // edi
  int v50; // eax
  unsigned int v51; // edi
  int *v52; // rdi
  int v53; // ecx
  char v54; // bl
  char v55; // di
  char v56; // di
  char v57; // bl
  char v58; // bl
  int v59; // eax
  _QWORD *v60; // rax
  _QWORD *v61; // r8
  PSECURITY_SUBJECT_CONTEXT v62; // rsi
  __int16 v63; // cx
  _DWORD *ClientToken; // rax
  __int64 *v65; // rcx
  PETHREAD v66; // rdx
  __int64 v67; // rcx
  void *v68; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v69; // rcx
  __int16 v70; // cx
  __int64 v71; // r9
  unsigned int v72; // edx
  struct _ERESOURCE *v73; // rcx
  int v74; // ebx
  __int64 v75; // rcx
  char v76; // bl
  unsigned int *v77; // r11
  unsigned __int16 v78; // dx
  POOL_TYPE v79; // ecx
  _WORD *v80; // rbx
  wchar_t *v81; // rbx
  struct _ERESOURCE *v82; // rbx
  int v83; // eax
  unsigned int v84; // ecx
  unsigned int v85; // eax
  unsigned int v86; // edx
  unsigned int v87; // r14d
  unsigned int v88; // ebx
  char v89; // al
  int v90; // ecx
  int v91; // eax
  char v92; // al
  int v93; // ecx
  __int64 v94; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v95; // rdi
  ULONG v96; // edx
  BOOLEAN v97; // al
  unsigned __int16 v98; // ax
  __int64 v99; // rax
  _OWORD *v100; // rcx
  _OWORD *v101; // rax
  char *v102; // rsi
  char *i; // rbx
  PSECURITY_SUBJECT_CONTEXT v104; // rcx
  PSECURITY_SUBJECT_CONTEXT v105; // rbx
  unsigned __int16 v106; // cx
  __m128i v107; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v109; // rax
  struct _SECURITY_SUBJECT_CONTEXT *PoolWithTag; // rsi
  BOOLEAN v111; // al
  struct _SECURITY_SUBJECT_CONTEXT *v112; // rdi
  PERESOURCE v113; // rcx
  struct _LIST_ENTRY *Flink; // rax
  _OWORD *v115; // rdx
  _OWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rsi
  __int64 v119; // r9
  __int64 v120; // rdi
  int v121; // eax
  BOOLEAN v122; // al
  ULONG v123; // edx
  BOOLEAN v124; // al
  __int64 v125; // rdx
  BOOLEAN v126; // al
  unsigned __int64 v127; // xmm0_8
  size_t v128; // rdi
  wchar_t *v129; // rax
  int v130; // r8d
  signed __int8 v131; // cf
  signed __int32 v132[8]; // [rsp+0h] [rbp-CD8h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-C98h]
  PVOID Object; // [rsp+48h] [rbp-C90h] BYREF
  int v135; // [rsp+50h] [rbp-C88h]
  int v136; // [rsp+58h] [rbp-C80h]
  __int16 v137; // [rsp+5Ch] [rbp-C7Ch] BYREF
  KPROCESSOR_MODE v138; // [rsp+5Eh] [rbp-C7Ah]
  int v139; // [rsp+60h] [rbp-C78h]
  PSECURITY_SUBJECT_CONTEXT p_ImpersonationLevel; // [rsp+68h] [rbp-C70h]
  unsigned __int16 v141; // [rsp+70h] [rbp-C68h]
  PSECURITY_SUBJECT_CONTEXT v142; // [rsp+78h] [rbp-C60h]
  __int64 v143; // [rsp+80h] [rbp-C58h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-C50h]
  PVOID P; // [rsp+90h] [rbp-C48h]
  PERESOURCE v146; // [rsp+98h] [rbp-C40h]
  char v147; // [rsp+A0h] [rbp-C38h]
  char v148; // [rsp+A1h] [rbp-C37h]
  char v149; // [rsp+A2h] [rbp-C36h]
  unsigned int v150; // [rsp+A4h] [rbp-C34h]
  int v151; // [rsp+A8h] [rbp-C30h]
  __int64 v152; // [rsp+B0h] [rbp-C28h]
  PERESOURCE Resource; // [rsp+B8h] [rbp-C20h]
  char *v154; // [rsp+C0h] [rbp-C18h] BYREF
  unsigned int v155; // [rsp+C8h] [rbp-C10h] BYREF
  unsigned int v156; // [rsp+CCh] [rbp-C0Ch]
  void *Src; // [rsp+D0h] [rbp-C08h]
  __int64 v158; // [rsp+D8h] [rbp-C00h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-BF8h] BYREF
  struct _LIST_ENTRY *v160; // [rsp+100h] [rbp-BD8h]
  __int64 v161[2]; // [rsp+108h] [rbp-BD0h] BYREF
  __int64 v162; // [rsp+118h] [rbp-BC0h] BYREF
  __int64 v163; // [rsp+120h] [rbp-BB8h] BYREF
  int v164; // [rsp+128h] [rbp-BB0h]
  PVOID v165; // [rsp+130h] [rbp-BA8h] BYREF
  __m128i v166; // [rsp+138h] [rbp-BA0h] BYREF
  __int64 v167; // [rsp+148h] [rbp-B90h] BYREF
  wchar_t *v168; // [rsp+150h] [rbp-B88h]
  __m128i v169; // [rsp+158h] [rbp-B80h] BYREF
  unsigned int v170; // [rsp+168h] [rbp-B70h]
  int v171; // [rsp+16Ch] [rbp-B6Ch]
  int v172; // [rsp+170h] [rbp-B68h]
  int v173; // [rsp+174h] [rbp-B64h]
  ULONG_PTR BugCheckParameter1a[2]; // [rsp+178h] [rbp-B60h]
  PVOID v175[2]; // [rsp+188h] [rbp-B50h]
  __int128 v176; // [rsp+198h] [rbp-B40h] BYREF
  __int128 v177; // [rsp+1A8h] [rbp-B30h]
  char *v178; // [rsp+1B8h] [rbp-B20h] BYREF
  int v179; // [rsp+1C0h] [rbp-B18h]
  int v180; // [rsp+1C4h] [rbp-B14h]
  __int64 v181; // [rsp+1C8h] [rbp-B10h]
  __m128i v182; // [rsp+1D0h] [rbp-B08h]
  __int128 v183; // [rsp+1E0h] [rbp-AF8h]
  __int64 v184; // [rsp+1F0h] [rbp-AE8h]
  __int64 v185; // [rsp+1F8h] [rbp-AE0h]
  __int64 v186; // [rsp+200h] [rbp-AD8h]
  __int64 v187; // [rsp+208h] [rbp-AD0h]
  _BYTE v188[72]; // [rsp+210h] [rbp-AC8h] BYREF
  _QWORD v189[18]; // [rsp+260h] [rbp-A78h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+2F0h] [rbp-9E8h] BYREF
  _QWORD v191[10]; // [rsp+310h] [rbp-9C8h] BYREF
  __int128 v192; // [rsp+360h] [rbp-978h] BYREF
  __m128i v193; // [rsp+370h] [rbp-968h]
  __m128i v194; // [rsp+380h] [rbp-958h]
  __m128i v195; // [rsp+390h] [rbp-948h]
  __int64 v196; // [rsp+3A0h] [rbp-938h]
  _QWORD v197[20]; // [rsp+3B0h] [rbp-928h] BYREF
  __m128i v198; // [rsp+450h] [rbp-888h]
  __m128i v199; // [rsp+460h] [rbp-878h]
  __m128i v200; // [rsp+470h] [rbp-868h]
  _QWORD v201[258]; // [rsp+480h] [rbp-858h] BYREF

  v4 = a4;
  v152 = (__int64)a3;
  v5 = a2;
  v146 = BugCheckParameter1;
  v135 = a2;
  Src = a3;
  memset(&v201[1], 0, 0x100uLL);
  *(_OWORD *)BugCheckParameter1a = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v137 = 0;
  v167 = 0LL;
  memset(v197, 0, 0x98uLL);
  v192 = 0LL;
  v166 = 0LL;
  memset(v188, 0, 0x44uLL);
  v165 = 0LL;
  memset(v189, 0, sizeof(v189));
  Object = 0LL;
  v155 = 0;
  memset(&v201[34], 0, 0x700uLL);
  v176 = 0LL;
  v177 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v160) = 0;
  memset(v191, 0, 0x48uLL);
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v143 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v154 = 0LL;
  *(_OWORD *)v161 = 0LL;
  v158 = 0LL;
  v182 = 0LL;
  v183 = 0LL;
  LODWORD(v184) = 0;
  v169 = 0LL;
  *(_OWORD *)v175 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x2E )
    return 3221225475LL;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_6;
      return 3221225476LL;
    case 0xC:
      if ( (_DWORD)v4 == 48 )
        goto LABEL_6;
      v42 = (_DWORD)v4 == 56;
LABEL_102:
      if ( v42 )
        goto LABEL_6;
      return 3221225476LL;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_6;
      v42 = (_DWORD)v4 == 144;
      goto LABEL_102;
  }
  v7 = dword_140A3AB3C[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return 3221225476LL;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = *((_BYTE *)Thread + 562);
  v138 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64 *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140A3AA7C[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v8 = (__int64 *)Src;
  }
  if ( !BugCheckParameter1 )
    return 3221225480LL;
  v9 = 2LL;
  result = sub_140732D40((ULONG_PTR)BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    v136 = 0;
    LOBYTE(v139) = 0;
    --*((_WORD *)Thread + 243);
    if ( (int)v5 <= 24 )
    {
      if ( (_DWORD)v5 == 24 )
      {
        v118 = *v8;
        v185 = *v8;
        v12 = (char *)Object;
        v14 = 1;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
        if ( (*((_DWORD *)v12 + 378) & 0x20) != 0 )
        {
          v120 = *((_QWORD *)v12 + 150);
          v121 = *(_DWORD *)(v120 + 40);
          if ( (v121 & 0x10) == 0 )
          {
            *(_DWORD *)(v120 + 40) = v121 | 0x10;
            KeInitializeDpc((PRKDPC)(v120 + 48), (PKDEFERRED_ROUTINE)sub_1405E0E20, v12);
          }
          sub_14057A5D4(v120 + 128, v120 + 48, v118, v119);
          goto LABEL_222;
        }
LABEL_389:
        v11 = -1073741811;
        goto LABEL_223;
      }
      if ( (int)v5 > 12 )
      {
        if ( (_DWORD)v5 != 14 )
        {
          if ( (_DWORD)v5 != 15 )
          {
            if ( (_DWORD)v5 == 16 )
            {
              v16 = *(_DWORD *)v8;
              v171 = *(_DWORD *)v8;
              v14 = 1;
              v12 = (char *)Object;
              if ( (v16 & 0xFFFFC001) == 0 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
                if ( v12 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 1224), 0LL);
                *((_DWORD *)v12 + 267) = v16;
                sub_140687540(v12, 0LL, 0LL);
                goto LABEL_46;
              }
              goto LABEL_476;
            }
            if ( (_DWORD)v5 != 18 )
            {
              if ( (_DWORD)v5 != 21 )
              {
                if ( (_DWORD)v5 != 22 )
                {
                  if ( (_DWORD)v5 == 23 )
                  {
                    v14 = 1;
                    if ( *(_BYTE *)v8 == 1 )
                    {
                      v12 = (char *)Object;
                      sub_1406FF880(Object, 0LL, 0);
                      goto LABEL_47;
                    }
                    v11 = -1073741811;
                    v136 = -1073741811;
                    v12 = (char *)Object;
LABEL_48:
                    v17 = Thread;
                    v42 = v14 + *((_WORD *)Thread + 243) == 0;
                    *((_WORD *)Thread + 243) += v14;
                    if ( v42 && *((PETHREAD *)v17 + 19) != (PETHREAD)((char *)v17 + 152) )
                      KiCheckForKernelApcDelivery();
                    if ( v11 )
                    {
                      if ( (xmmword_140D06900 & 0x80000) != 0 )
                        sub_1409E2580((_DWORD)v12, v5, 0, 0, v11, 1831);
                    }
                    ObfDereferenceObjectWithTag(v12, 0x79517350u);
                    return (unsigned int)v11;
                  }
                  goto LABEL_473;
                }
                LOBYTE(v137) = *(_BYTE *)v8;
                v12 = (char *)Object;
                v14 = 1;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
                if ( (*((_DWORD *)v12 + 378) & 0x20) != 0 )
                {
                  v71 = *((_QWORD *)v12 + 150);
                  v72 = *(_DWORD *)(v71 + 40);
                  if ( (v72 & 0x40) == 0 )
                  {
                    if ( (v72 & 1) != 0 || (v72 & 0x20) != 0 )
                    {
                      v11 = -1073741637;
                      goto LABEL_223;
                    }
                    if ( ((v72 >> 3) & 1) != ((_BYTE)v137 != 0) )
                    {
                      *(_DWORD *)(v71 + 40) = ((_BYTE)v137 != 0 ? 8 : 0) | v72 & 0xFFFFFFF7;
                      sub_140207F60(*((_QWORD *)v12 + 150) + 128LL, v137);
                      sub_1406FF880(v12, (__int64)&v137, 1);
LABEL_222:
                      v11 = 0;
LABEL_223:
                      v73 = (struct _ERESOURCE *)(v12 + 56);
LABEL_224:
                      ExReleaseResourceLite(v73);
                      goto LABEL_48;
                    }
                  }
                }
                goto LABEL_389;
              }
              v147 = *(_BYTE *)v8;
              v12 = (char *)Object;
              v11 = sub_1406E0138(Object);
              if ( v11 < 0 )
              {
LABEL_173:
                v14 = 1;
                goto LABEL_48;
              }
LABEL_172:
              v11 = 0;
              goto LABEL_173;
            }
            v192 = *(_OWORD *)v8;
            if ( (_DWORD)v192 && (v192 & 0xFFFFFFF8) == 0 )
            {
              v12 = (char *)Object;
              v11 = sub_140679034((char *)Object, (__int64)&v192);
              if ( v11 >= 0 )
              {
                *(_DWORD *)v8 = v192;
                v14 = 1;
                goto LABEL_48;
              }
              goto LABEL_173;
            }
            goto LABEL_307;
          }
          memmove(&v163, v8, v4);
          v58 = v163;
          v14 = 1;
          if ( (v163 & 0xFFFFFFE0) == 0 )
          {
            LODWORD(v143) = HIDWORD(v163);
            v135 = v163 & 1;
            if ( (v163 & 1) == 0 )
              goto LABEL_179;
            if ( (v163 & 2) != 0 )
            {
              if ( (v163 & 0x10) == 0 && (unsigned __int16)(WORD2(v163) - 1) <= 8u )
                goto LABEL_179;
            }
            else if ( (unsigned __int16)(WORD2(v163) - 1) <= 0x270Fu
                   && ((v163 & 0x10) == 0 || (v163 & 4) == 0 && HIWORD(v163) >= WORD2(v163) && HIWORD(v163) <= 0x2710u) )
            {
LABEL_179:
              v12 = (char *)Object;
              sub_140682C34((__int64)Object, (__int64)Thread, 0);
              v59 = *((_DWORD *)v12 + 378);
              if ( v135 )
              {
                if ( (v59 & 0x20) == 0 )
                {
                  v60 = sub_140678B98(2LL);
                  v61 = v60;
                  if ( !v60 )
                  {
                    v11 = -1073741670;
                    goto LABEL_198;
                  }
                  *((_QWORD *)v12 + 150) = v60;
LABEL_183:
                  v62 = (PSECURITY_SUBJECT_CONTEXT)(v12 + 1200);
                  p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)(v12 + 1200);
                  *(_DWORD *)(*((_QWORD *)v12 + 150) + 40LL) = 0;
                  v63 = WORD2(v163);
                  *(_DWORD *)(*((_QWORD *)v12 + 150) + 44LL) = HIDWORD(v163);
                  if ( v135 )
                  {
                    if ( (v58 & 4) != 0 )
                    {
                      *((_DWORD *)v62->ClientToken + 10) |= 1u;
                      WORD1(v143) = v63;
                    }
                    if ( (v58 & 2) != 0 )
                    {
                      *((_DWORD *)v62->ClientToken + 10) |= 4u;
                      HIDWORD(v143) = 0;
                    }
                    else
                    {
                      HIDWORD(v143) = 1;
                      if ( (v58 & 0x14) == 0 )
                        WORD1(v143) = 10000;
                    }
                    if ( (v58 & 8) != 0 )
                      *((_DWORD *)v62->ClientToken + 10) |= 2u;
                    if ( (v58 & 0x10) != 0 )
                      *((_DWORD *)v62->ClientToken + 10) |= 0x20u;
                    ClientToken = v62->ClientToken;
                    v65 = (__int64 *)((char *)v62->ClientToken + 128);
                    if ( v62->ClientToken == v61 )
                    {
                      *v65 = v143;
                      v11 = sub_140679480(*((_QWORD *)v12 + 158), (__int64)v12);
                      v136 = v11;
                      if ( v11 < 0 )
                      {
                        v105 = p_ImpersonationLevel;
                        if ( p_ImpersonationLevel->ClientToken )
                        {
                          sub_140678B4C((PVOID *)p_ImpersonationLevel->ClientToken, 2u);
                          v105->ClientToken = 0LL;
                        }
                        goto LABEL_198;
                      }
                      _InterlockedOr((volatile signed __int32 *)v12 + 378, 0x20u);
                      v12 = (char *)Object;
                      v62 = p_ImpersonationLevel;
                    }
                    else
                    {
                      v158 = (__int64)v62->ClientToken + 128;
                      if ( (ClientToken[10] & 4) != 0 )
                        sub_14025D01C(1u, (__int64)&v158, (__int64)&v143);
                      else
                        sub_1402077B0((__int64)v65, &v158, &v143);
                    }
                    v162 = *((_QWORD *)v62->ClientToken + 5);
                  }
                  else
                  {
                    v143 = 0x327102710LL;
                    *((_DWORD *)v62->ClientToken + 10) |= 0x40u;
                    v74 = v143;
                    *((_DWORD *)v62->ClientToken + 11) = v143;
                    v158 = (__int64)v62->ClientToken + 128;
                    HIBYTE(v137) = (*(_DWORD *)(v158 + 4) & 4) != 0;
                    *((_QWORD *)v12 + 152) += sub_140209F40(v158);
                    sub_1402077B0(v75, &v158, &v143);
                    HIDWORD(v162) = v74;
                    if ( HIBYTE(v137) )
                    {
                      HIBYTE(v137) = 0;
                      sub_1406FF880(v12, (__int64)&v137 + 1, 1);
                    }
                  }
                  v11 = 0;
                  if ( (xmmword_140D06900 & 0x80000) != 0 )
                    sub_1409E2580((_DWORD)v12, 15, (unsigned int)&v162, 0, 0, 1829);
LABEL_198:
                  v66 = Thread;
                  v67 = (__int64)v12;
LABEL_199:
                  sub_140682B74(v67, (__int64)v66, 0);
                  goto LABEL_48;
                }
              }
              else if ( (v59 & 0x20) == 0 )
              {
                v11 = -1073741811;
                goto LABEL_198;
              }
              v61 = 0LL;
              goto LABEL_183;
            }
          }
LABEL_393:
          v11 = -1073741811;
          goto LABEL_280;
        }
LABEL_294:
        v142 = 0LL;
        P = 0LL;
        v84 = 16;
        if ( (_DWORD)v5 != 14 )
          v84 = 2;
        LODWORD(v146) = v84;
        v86 = (unsigned int)v4 % v84;
        v85 = (unsigned int)v4 / v84;
        v87 = (unsigned int)v4 / v84;
        v14 = 1;
        if ( v86 )
        {
          v11 = -1073741820;
          goto LABEL_280;
        }
        v156 = v85;
        LODWORD(v201[0]) = 2097153;
        memset((char *)v201 + 4, 0, 0x104uLL);
        v106 = KeQueryActiveGroupCount() - 1;
        LOWORD(v139) = v106;
        while ( v87 )
        {
          if ( (_DWORD)v5 == 14 )
          {
            v107 = *(__m128i *)v8;
            v166 = v107;
            epi16 = _mm_extract_epi16(v107, 4);
            v166.m128i_i16[4] = epi16;
            v141 = epi16;
            v152 = v107.m128i_i64[0];
          }
          else
          {
            v109 = *(unsigned __int16 *)v8;
            v141 = v109;
            if ( (unsigned __int16)v109 > v106 )
              goto LABEL_409;
            v152 = qword_140D06E48[v109];
            epi16 = v141;
          }
          if ( epi16 > v106 || v201[epi16 + 1] || v152 != (v152 & qword_140D06E48[epi16]) )
          {
LABEL_409:
            v11 = -1073741811;
            v136 = -1073741811;
            break;
          }
          KeAddGroupAffinityEx((unsigned __int16 *)v201, v141, v152);
          v87 = --v156;
          v8 = (__int64 *)((char *)Src + (unsigned int)v146);
          Src = v8;
          v11 = v136;
          v106 = v139;
        }
        v12 = (char *)Object;
        if ( v11 < 0 )
          goto LABEL_48;
        Resource = (PERESOURCE)((char *)Object + 528);
        if ( *((_QWORD *)Object + 66) )
          goto LABEL_415;
        PoolWithTag = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
        v142 = PoolWithTag;
        if ( PoolWithTag )
        {
          P = (PVOID)sub_140726494(*((_QWORD *)KeGetCurrentThread() + 23), 40LL, 0LL);
          if ( P )
          {
            v12 = (char *)Object;
LABEL_415:
            SeCaptureSubjectContextEx(
              Thread,
              *((PEPROCESS *)Thread + 23),
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
            if ( PreviousMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = stru_140D3CA18;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v111 = SePrivilegeCheck(
                       &RequiredPrivileges,
                       (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                       1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v111) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            v146 = (PERESOURCE)(v12 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
            v11 = sub_1406FF880(v12, (__int64)&SubjectContext, 1);
            v136 = v11;
            v112 = (struct _SECURITY_SUBJECT_CONTEXT *)P;
            if ( v11 >= 0 )
            {
              v113 = Resource;
              Flink = Resource->SystemResourcesList.Flink;
              if ( Resource->SystemResourcesList.Flink )
              {
                v176 = *(_OWORD *)&Flink->Blink;
                v177 = *(_OWORD *)&Flink[1].Blink;
                p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)&v176;
              }
              else
              {
                Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)v142;
                *((_QWORD *)v12 + 67) = v112;
                v142 = 0LL;
                p_ImpersonationLevel = 0LL;
                Flink = v113->SystemResourcesList.Flink;
              }
              *(struct _SECURITY_SUBJECT_CONTEXT *)&Flink->Flink = SubjectContext;
              Flink[2].Flink = v160;
              v161[0] = (__int64)v12;
              HIDWORD(v161[1]) = *((_DWORD *)v12 + 64);
              LODWORD(v161[1]) = -17;
              v115 = v12 + 264;
              v116 = v201;
              v117 = 2LL;
              do
              {
                *v115 = *v116;
                v115[1] = v116[1];
                v115[2] = v116[2];
                v115[3] = v116[3];
                v115[4] = v116[4];
                v115[5] = v116[5];
                v115[6] = v116[6];
                v115 += 8;
                *(v115 - 1) = v116[7];
                v116 += 8;
                --v117;
              }
              while ( v117 );
              *(_QWORD *)v115 = *(_QWORD *)v116;
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v12 + 132) )
              {
                *((_DWORD *)v12 + 64) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)v12 + 378, 0xFFFFFFFD);
              }
              else
              {
                *((_DWORD *)v12 + 64) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)v12 + 378, 2u);
              }
              v12 = (char *)Object;
              sub_1406FF880(Object, (__int64)v161, 5);
              v11 = v136;
            }
            ExReleaseResourceLite(v146);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext(p_ImpersonationLevel);
            if ( !v142 )
              goto LABEL_48;
            ExFreePoolWithTag(v142, 0x614A7350u);
            v104 = v112;
            goto LABEL_433;
          }
          v69 = PoolWithTag;
          goto LABEL_347;
        }
LABEL_345:
        v11 = -1073741670;
        goto LABEL_48;
      }
      if ( (_DWORD)v5 != 12 )
      {
        if ( (_DWORD)v5 == 2 )
          goto LABEL_113;
        if ( (_DWORD)v5 != 4 )
        {
          switch ( (_DWORD)v5 )
          {
            case 5:
              v182 = *(__m128i *)v8;
              v183 = *((_OWORD *)v8 + 1);
              v184 = v8[4];
              v11 = (v182.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_308:
              v14 = 1;
              goto LABEL_280;
            case 6:
              v170 = *(_DWORD *)v8;
              v88 = v170;
              v14 = 1;
              v12 = (char *)Object;
              if ( v170 <= 1 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
                *((_DWORD *)v12 + 137) = v88;
                goto LABEL_223;
              }
              goto LABEL_476;
            case 7:
              v142 = 0LL;
              *(_OWORD *)BugCheckParameter1a = *(_OWORD *)v8;
              if ( !BugCheckParameter1a[1] )
              {
                v12 = (char *)Object;
                v14 = 1;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
                if ( v12 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 1224), 0LL);
                v68 = (void *)*((_QWORD *)v12 + 69);
                *((_QWORD *)v12 + 69) = 0LL;
                sub_140687540(v12, 0LL, 0LL);
                ExReleaseResourceLite((PERESOURCE)(v12 + 56));
                if ( v68 )
                  ObfDereferenceObjectWithTag(v68, 0x624A7350u);
                goto LABEL_48;
              }
              v11 = sub_140732D40(BugCheckParameter1a[1], 0x624A7350u, (__int64)&v165, 0LL, 0LL);
              v12 = (char *)Object;
              if ( v11 < 0 )
              {
                v14 = 1;
                v15 = 0LL;
              }
              else
              {
                if ( *((_QWORD *)Object + 149) )
                {
                  MiniCompletionPacket = 0LL;
                  goto LABEL_32;
                }
                MiniCompletionPacket = (struct _SECURITY_SUBJECT_CONTEXT *)IoAllocateMiniCompletionPacket(
                                                                             &sub_1406A1DE0,
                                                                             Object);
                v142 = MiniCompletionPacket;
                if ( MiniCompletionPacket )
                {
LABEL_32:
                  v14 = 1;
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
                  if ( *((_QWORD *)v12 + 69)
                    || (*((_DWORD *)v12 + 64) & 0x2000) != 0 && (*((_DWORD *)v12 + 378) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v12 + 56));
                    ObfDereferenceObjectWithTag(v165, 0x624A7350u);
                    v11 = -1073741811;
                    v15 = v142;
                  }
                  else
                  {
                    if ( *((_QWORD *)v12 + 149) )
                    {
                      v15 = v142;
                    }
                    else
                    {
                      *((_QWORD *)v12 + 149) = MiniCompletionPacket;
                      v15 = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 1224), 0LL);
                    *((_QWORD *)v12 + 70) = BugCheckParameter1a[0];
                    *((_QWORD *)v12 + 69) = v165;
                    *((_QWORD *)v12 + 71) = 0LL;
                    sub_140687540(v12, 0LL, 0LL);
                    if ( (*((_DWORD *)v12 + 267) & 0x40) != 0 )
                      sub_1406FF880(v12, (__int64)v12, 1);
                    ExReleaseResourceLite((PERESOURCE)(v12 + 56));
                  }
                  goto LABEL_40;
                }
                v11 = -1073741670;
                v14 = 1;
                v15 = 0LL;
              }
LABEL_40:
              if ( v15 )
              {
                v15[1].ProcessAuditId = 0LL;
                sub_14074F700(v15);
              }
              goto LABEL_48;
            case 9:
LABEL_113:
              memmove(v197, v8, v4);
              if ( (unsigned int)v4 < 0x98 )
                memset((char *)v197 + v4, 0, 152 - v4);
              v151 = sub_14068762C((unsigned int)v5, (unsigned int)v4);
              v135 = ~v151;
              v47 = v197[2];
              if ( (v197[2] & ~v151) == 0 )
              {
                memset(&SubjectContext, 0, sizeof(SubjectContext));
                v160 = 0LL;
                LODWORD(v201[66]) = v197[2];
                P = 0LL;
                p_ImpersonationLevel = 0LL;
                v142 = 0LL;
                HIDWORD(v201[66]) = (v197[2] & 8) != 0 ? LODWORD(v197[5]) : 0;
                v14 = 1;
                if ( (v197[2] & 0x20) != 0 )
                {
                  if ( LODWORD(v197[7]) > 6 )
                    goto LABEL_393;
                  v48 = PreviousMode;
                  if ( (unsigned int)(LODWORD(v197[7]) - 3) <= 1 )
                  {
                    LOBYTE(v46) = PreviousMode;
                    v89 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1406E856C)(
                            stru_140D3CA68,
                            v146,
                            2LL,
                            v46) & 1;
                    LOBYTE(v90) = 4 * v89;
                    v139 = v90;
                    if ( !v89 )
                      goto LABEL_317;
                    v47 = v197[2];
                  }
                  BYTE1(v201[167]) = v197[7];
                }
                else
                {
                  BYTE1(v201[167]) = 0;
                  v48 = PreviousMode;
                }
                if ( (v47 & 0x80u) != 0 )
                {
                  v91 = HIDWORD(v197[7]);
                  if ( HIDWORD(v197[7]) >= 0xA )
                    goto LABEL_393;
                  if ( HIDWORD(v197[7]) > 5 )
                  {
                    LOBYTE(v46) = v48;
                    v92 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1406E856C)(
                            stru_140D3CA68,
                            v146,
                            2LL,
                            v46) & 1;
                    LOBYTE(v93) = 4 * v92;
                    v139 = v93;
                    if ( !v92 )
                      goto LABEL_317;
                    v47 = v197[2];
                    v91 = HIDWORD(v197[7]);
                  }
                  HIDWORD(v201[106]) = v91;
                }
                else
                {
                  HIDWORD(v201[106]) = 5;
                }
                if ( (v47 & 2) != 0 )
                {
                  if ( !v197[0] )
                    goto LABEL_393;
                  v201[62] = v197[0];
                }
                else
                {
                  v201[62] = 0LL;
                }
                LODWORD(v146) = v47 & 4;
                if ( (v47 & 4) != 0 )
                {
                  if ( !v197[1] )
                    goto LABEL_393;
                  v201[63] = v197[1];
                }
                if ( (v47 & 1) == 0 )
                {
                  v201[64] = 0LL;
                  v201[65] = 0LL;
LABEL_125:
                  if ( (v47 & 0x100) != 0 )
                  {
                    if ( v197[14] < 0x1000uLL )
                      goto LABEL_393;
                    v201[118] = v197[14] >> 12;
                  }
                  else
                  {
                    v201[118] = 0LL;
                  }
                  if ( (v47 & 0x200) != 0 )
                  {
                    if ( v197[15] < 0x1000uLL )
                      goto LABEL_393;
                    v201[119] = v197[15] >> 12;
                  }
                  else
                  {
                    v201[119] = 0LL;
                  }
                  if ( (v47 & 0x200000) != 0 )
                  {
                    if ( v197[18] < 0x1000uLL )
                      goto LABEL_393;
                    v201[120] = v197[18] >> 12;
                  }
                  else
                  {
                    v201[120] = 0LL;
                  }
                  LODWORD(v201[67]) = 2097153;
                  memset((char *)&v201[67] + 4, 0, 0x104uLL);
                  v49 = v201[66];
                  v12 = (char *)Object;
                  if ( (v201[66] & 0x10) == 0 )
                  {
                    LOBYTE(v50) = v139;
                    goto LABEL_133;
                  }
                  if ( (*((_DWORD *)Object + 378) & 2) == 0 && v197[6] )
                  {
                    if ( !*((_QWORD *)Object + 66) )
                    {
                      v95 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                      P = v95;
                      if ( !v95 )
                        goto LABEL_345;
                      p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)sub_140726494(
                                                                          *((_QWORD *)KeGetCurrentThread() + 23),
                                                                          40LL,
                                                                          0LL);
                      if ( !p_ImpersonationLevel )
                      {
                        v69 = v95;
LABEL_347:
                        v96 = 1632269136;
LABEL_349:
                        ExFreePoolWithTag(v69, v96);
                        v11 = -1073741670;
                        goto LABEL_280;
                      }
                      v12 = (char *)Object;
                      v49 = v201[66];
                      v11 = v136;
                    }
                    SeCaptureSubjectContextEx(
                      Thread,
                      *((PEPROCESS *)Thread + 23),
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                    v142 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                    if ( PreviousMode )
                    {
                      RequiredPrivileges.PrivilegeCount = 1;
                      RequiredPrivileges.Control = 1;
                      RequiredPrivileges.Privilege[0].Luid = stru_140D3CA18;
                      RequiredPrivileges.Privilege[0].Attributes = 0;
                      v97 = SePrivilegeCheck(
                              &RequiredPrivileges,
                              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                              1);
                      LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v97) & 1;
                    }
                    else
                    {
                      LODWORD(SubjectContext.ClientToken) |= 1u;
                    }
                    v50 = v139;
                    LOBYTE(v50) = v139 | 2;
                    v139 = v50;
LABEL_133:
                    PreviousMode = v50;
                    Resource = (PERESOURCE)(v12 + 56);
                    ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
                    if ( (v49 & 4) == 0 )
                    {
                      if ( (v49 & 0x40) != 0 )
                      {
                        v49 |= *((_DWORD *)v12 + 64) & 4;
                        v201[63] = *((_QWORD *)v12 + 29);
                      }
                      else
                      {
                        v201[63] = 0LL;
                      }
                    }
                    v51 = v49 & 0xFFFFFFBF;
                    LODWORD(v201[66]) = v51;
                    if ( (PreviousMode & 2) == 0 )
                    {
                      if ( (v51 & 0x4000) == 0 || (*((_DWORD *)v12 + 378) & 2) != 0 )
                      {
LABEL_138:
                        v52 = (int *)(v12 + 256);
                        if ( (*((_DWORD *)v12 + 64) & 1) != 0 && (v201[66] & 1) == 0 )
                        {
                          _InterlockedOr(v132, 0);
                          if ( (qword_140CF5E70 & 1) != 0 )
                            sub_14024BA7C((ULONG_PTR)&qword_140CF5E70);
                          v11 = v136;
                          v12 = (char *)Object;
                        }
                        v161[0] = (__int64)v12;
                        HIDWORD(v161[1]) = *v52;
                        *((_QWORD *)v12 + 30) = v201[64];
                        *((_QWORD *)v12 + 31) = v201[65];
                        *((_DWORD *)v12 + 65) = HIDWORD(v201[66]);
                        if ( (PreviousMode & 2) != 0 )
                        {
                          v100 = v12 + 264;
                          v101 = &v201[67];
                          do
                          {
                            *v100 = *v101;
                            v100[1] = v101[1];
                            v100[2] = v101[2];
                            v100[3] = v101[3];
                            v100[4] = v101[4];
                            v100[5] = v101[5];
                            v100[6] = v101[6];
                            v100 += 8;
                            *(v100 - 1) = v101[7];
                            v101 += 8;
                            --v9;
                          }
                          while ( v9 );
                          *(_QWORD *)v100 = *(_QWORD *)v101;
                        }
                        v12[1065] = BYTE1(v201[167]);
                        *((_DWORD *)v12 + 145) = HIDWORD(v201[106]);
                        *((_QWORD *)v12 + 28) = v201[62];
                        *((_QWORD *)v12 + 29) = v201[63];
                        if ( (_DWORD)v5 == 9 )
                        {
                          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 1224), 0LL);
                          *v52 = LODWORD(v201[66]) | v135 & *v52;
                          *((_QWORD *)v12 + 84) = v201[118];
                          *((_QWORD *)v12 + 85) = v201[119];
                          *((_QWORD *)v12 + 86) = v201[120];
                          sub_140687540(v12, 0LL, 0LL);
                          v53 = *v52;
                        }
                        else
                        {
                          v53 = LODWORD(v201[66]) | v135 & *v52;
                          *v52 = v53;
                        }
                        LODWORD(v161[1]) = ~(v53 | HIDWORD(v161[1]));
                        if ( (_DWORD)v146 )
                        {
                          sub_1406FF880(v12, (__int64)(v12 + 232), 1);
                          *((_QWORD *)v12 + 23) = 0LL;
                          *((_QWORD *)v12 + 24) = 0LL;
                          KeResetEvent((PRKEVENT)v12);
                        }
                        if ( (*v52 & 6) != 0 )
                        {
                          _InterlockedAdd64(&qword_140C1BEF0, 1uLL);
                          v12 = (char *)Object;
                          v11 = v136;
                        }
                        v54 = v161[1];
                        sub_1406FF880(v12, (__int64)v161, 5);
                        v55 = PreviousMode | 1;
                        if ( (v54 & 1) != 0 )
                          v55 = PreviousMode;
                        goto LABEL_148;
                      }
                      goto LABEL_360;
                    }
                    if ( (*((_DWORD *)v12 + 378) & 2) == 0 )
                    {
                      if ( (*((_DWORD *)v12 + 64) & 0x10) != 0 )
                      {
                        KeFirstGroupAffinityEx((__int64)&v166, (_WORD *)v12 + 132);
                        v98 = v166.m128i_u16[4];
                      }
                      else
                      {
                        v98 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
                        v166.m128i_i16[4] = v98;
                      }
                      if ( v197[6] == (qword_140D06E48[v98] & v197[6]) )
                      {
                        if ( LOWORD(v201[67]) <= (unsigned int)v166.m128i_i16[4] )
                        {
                          if ( WORD1(v201[67]) <= (unsigned int)v166.m128i_i16[4] )
                            goto LABEL_368;
                          LOWORD(v201[67]) = v166.m128i_i16[4] + 1;
                        }
                        v201[v98 + 68] |= v197[6];
LABEL_368:
                        v12 = (char *)Object;
                        v11 = sub_1406FF880(Object, (__int64)&SubjectContext, 1);
                        v136 = v11;
                        if ( v11 >= 0 )
                        {
                          v99 = *((_QWORD *)v12 + 66);
                          if ( v99 )
                          {
                            v176 = *(_OWORD *)(v99 + 8);
                            v177 = *(_OWORD *)(v99 + 24);
                            v142 = (PSECURITY_SUBJECT_CONTEXT)&v176;
                          }
                          else
                          {
                            *((_QWORD *)v12 + 66) = P;
                            *((_QWORD *)v12 + 67) = p_ImpersonationLevel;
                            P = 0LL;
                            v142 = 0LL;
                            v99 = *((_QWORD *)v12 + 66);
                          }
                          *(struct _SECURITY_SUBJECT_CONTEXT *)v99 = SubjectContext;
                          *(_QWORD *)(v99 + 32) = v160;
                          goto LABEL_138;
                        }
LABEL_361:
                        v55 = v139;
LABEL_148:
                        v56 = v55 & 1;
                        if ( v56 )
                        {
                          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CF5E70, 0LL);
                          _InterlockedOr((volatile signed __int32 *)v12 + 378, 0x100u);
                          v12 = (char *)Object;
                          v102 = (char *)Object + 40;
                          for ( i = (char *)*((_QWORD *)Object + 5); i != v102; i = *(char **)i )
                          {
                            if ( (*((_DWORD *)i - 90) & 1) == 0 )
                              sub_1409AFDD8(i - 1480);
                          }
                          v11 = v136;
                        }
                        ExReleaseResourceLite(Resource);
                        if ( v56 )
                          sub_1409AFE9C(v12);
                        if ( v142 )
                          SeReleaseSubjectContext(v142);
                        if ( !P )
                          goto LABEL_48;
                        ExFreePoolWithTag(P, 0x614A7350u);
                        v104 = p_ImpersonationLevel;
LABEL_433:
                        sub_140724DC8(v104);
                        goto LABEL_48;
                      }
                      v12 = (char *)Object;
                    }
LABEL_360:
                    v11 = -1073741811;
                    v136 = -1073741811;
                    goto LABEL_361;
                  }
LABEL_476:
                  v11 = -1073741811;
                  goto LABEL_48;
                }
                v94 = v197[3];
                if ( !v197[3] && !v197[4]
                  || v197[3] == -1LL && v197[4] == -1LL
                  || v197[3] > v197[4]
                  || v197[3] < 0x14000uLL )
                {
                  goto LABEL_393;
                }
                if ( v197[3] <= (unsigned __int64)qword_140D3B248 )
                {
LABEL_336:
                  v201[64] = v94;
                  v201[65] = v197[4];
                  goto LABEL_125;
                }
                if ( SeSinglePrivilegeCheck(stru_140D3CA68, v48) )
                {
                  v47 = v197[2];
                  v94 = v197[3];
                  goto LABEL_336;
                }
LABEL_317:
                v11 = -1073741727;
                goto LABEL_280;
              }
LABEL_307:
              v11 = -1073741811;
              goto LABEL_308;
            case 0xB:
              goto LABEL_294;
          }
LABEL_473:
          v11 = -1073741821;
          goto LABEL_308;
        }
        v150 = *(_DWORD *)v8;
        if ( (v150 & 0xFFFFFF00) != 0 )
          goto LABEL_307;
        v76 = 8;
        v12 = (char *)Object;
        sub_140682C34((__int64)Object, (__int64)Thread, 0);
        if ( (unsigned __int8)sub_1406E6570((__int64)v12) )
        {
          if ( *((_DWORD *)v12 + 144) != -2 )
          {
            v12 = (char *)Object;
            sub_1406827E8((__int64)Object, *((_QWORD *)KeGetCurrentThread() + 23));
            v155 = *v77;
            v14 = 1;
            if ( v155 > 0xFFFFFFFD )
              goto LABEL_235;
            if ( v150 == *((_DWORD *)v12 + 136) )
              goto LABEL_235;
            v180 = 0;
            sub_140682B74((__int64)v12, (__int64)Thread, 1);
            v76 = 0;
            v178 = v12;
            v179 = 0;
            v181 = v150;
            v11 = sub_1406F83A0(6LL, &v178, 1LL, &v155);
            v136 = v11;
            if ( v11 >= 0 )
            {
LABEL_235:
              *((_DWORD *)v12 + 136) = v150;
              _InterlockedOr((volatile signed __int32 *)v12 + 378, 0x10u);
              v12 = (char *)Object;
              v11 = v136;
            }
LABEL_236:
            v66 = Thread;
            v67 = (__int64)v12;
            if ( (unsigned __int8)v76 >= 8u )
              goto LABEL_199;
LABEL_237:
            sub_1406FFE90(v67, v66);
            goto LABEL_48;
          }
          v11 = -1073741790;
        }
        else
        {
          v11 = -1073741637;
        }
        v14 = 1;
        goto LABEL_236;
      }
LABEL_69:
      if ( (_DWORD)v4 == 56 )
      {
        v193 = *(__m128i *)v152;
        v194 = *(__m128i *)(v152 + 16);
        v195 = *(__m128i *)(v152 + 32);
        v196 = *(_QWORD *)(v152 + 48);
        v18 = (unsigned int)v196;
        LODWORD(v191[5]) = v196;
        v19 = v193.m128i_i64[0];
        v191[0] = v193.m128i_i64[0];
        v20 = _mm_srli_si128(v193, 8).m128i_u64[0];
        v191[1] = v20;
        v21 = v194.m128i_i64[0];
        v191[2] = v194.m128i_i64[0];
        v22 = _mm_srli_si128(v194, 8).m128i_u64[0];
        v191[6] = v22;
        v23 = v195.m128i_i64[0];
        v191[3] = v195.m128i_i64[0];
        v191[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v195, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v195, 8)));
        v24 = 2589188;
        v151 = 2589188;
      }
      else
      {
        if ( (_DWORD)v4 == 48 )
        {
          v198 = *(__m128i *)v152;
          v199 = *(__m128i *)(v152 + 16);
          v200 = *(__m128i *)(v152 + 32);
          v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v200, 8));
          LODWORD(v191[5]) = v18;
          v19 = v198.m128i_i64[0];
          v191[0] = v198.m128i_i64[0];
          v20 = _mm_srli_si128(v198, 8).m128i_u64[0];
          v191[1] = v20;
          v21 = v199.m128i_i64[0];
          v191[2] = v199.m128i_i64[0];
          v23 = _mm_srli_si128(v199, 8).m128i_u64[0];
          v191[3] = v23;
          v191[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v200, 4)), _mm_cvtsi128_si32(v200));
          v24 = 459268;
          v151 = 459268;
        }
        else
        {
          memmove(v191, v8, v4);
          v24 = 2064900;
          v151 = 2064900;
          v18 = LODWORD(v191[5]);
          v23 = v191[3];
          v21 = v191[2];
          v20 = v191[1];
          v19 = v191[0];
        }
        v22 = v191[6];
      }
      if ( (~v24 & (unsigned int)v18) != 0 )
        goto LABEL_307;
      if ( (v18 & 0x8000) != 0 )
      {
        if ( v22 < 0x1000 )
          goto LABEL_307;
      }
      else
      {
        v22 = 0LL;
        v191[6] = 0LL;
      }
      if ( (v18 & 0x200) != 0 )
      {
        if ( v23 < 0x1000 || v23 < v22 )
          goto LABEL_307;
      }
      else
      {
        v191[3] = 0LL;
      }
      if ( (v18 & 4) != 0 )
      {
        if ( !v21 )
          goto LABEL_307;
      }
      else
      {
        v191[2] = 0LL;
      }
      if ( (v18 & 0x10000) != 0 )
      {
        if ( !v19 )
          goto LABEL_307;
      }
      else
      {
        v191[0] = 0LL;
      }
      if ( (v18 & 0x20000) != 0 )
      {
        if ( !v20 )
          goto LABEL_307;
      }
      else
      {
        v191[1] = 0LL;
      }
      v25 = 0LL;
      v14 = 1;
      while ( (int)v25 < 3 )
      {
        sub_140687518(v191, v25, v18);
        sub_1406874F0(v191);
        v27 = sub_1406859F8(v26);
        if ( (v27 & (unsigned int)v18) != 0 )
        {
          if ( !*v29 || *v29 > 3 || !*v30 || *v30 > 3 )
            goto LABEL_393;
        }
        else
        {
          *v29 = 0;
          *v30 = 0;
          v18 = LODWORD(v191[5]);
        }
        v25 = (unsigned int)(v28 + 1);
      }
      v12 = (char *)Object;
      v31 = (struct _SECURITY_SUBJECT_CONTEXT **)((char *)Object + 1176);
      if ( *((_QWORD *)Object + 147) )
      {
        v32 = 0LL;
        p_ImpersonationLevel = 0LL;
      }
      else
      {
        v32 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
        if ( !v32 )
          goto LABEL_345;
        p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)sub_140726494(
                                                            *((_QWORD *)KeGetCurrentThread() + 23),
                                                            136LL,
                                                            0LL);
        v69 = v32;
        if ( !p_ImpersonationLevel )
        {
          v96 = 1649046352;
          goto LABEL_349;
        }
        memset(v32, 0, 0x88uLL);
        v12 = (char *)Object;
      }
      Resource = (PERESOURCE)(v12 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
      if ( *v31 )
      {
        if ( v32 )
        {
          ExFreePoolWithTag(v32, 0x624A7350u);
          sub_140724DC8(p_ImpersonationLevel);
        }
      }
      else
      {
        *v31 = v32;
        *((_QWORD *)v12 + 148) = p_ImpersonationLevel;
      }
      v33 = *v31;
      v34 = (int)(*v31)->ClientToken;
      *(_QWORD *)&v33->ImpersonationLevel = v191[0];
      v33->PrimaryToken = (PACCESS_TOKEN)v191[1];
      v33->ProcessAuditId = (PVOID)v191[2];
      v35 = 0LL;
      v36 = (_DWORD *)&v33[1].ProcessAuditId + 1;
      while ( (int)v35 < 3 )
      {
        v37 = (_DWORD *)sub_140687518(v191, v35, v36);
        *(_DWORD *)(v38 - 12) = *v37;
        v39 = (_DWORD *)sub_1406874F0(v191);
        *v40 = *v39;
        v35 = (unsigned int)(v41 + 1);
        v36 = v40 + 1;
      }
      p_ImpersonationLevel = (PSECURITY_SUBJECT_CONTEXT)(v12 + 1224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 1224), 0LL);
      v33[1].ClientToken = (PACCESS_TOKEN)(v191[6] >> 12);
      *(_QWORD *)&v33[1].ImpersonationLevel = v191[3] >> 12;
      LODWORD((*v31)->ClientToken) = v191[5];
      sub_140687540(v12, 0LL, 0LL);
      if ( ((__int64)(*v31)->ClientToken & 0xFFFF7DFF) != 0 )
      {
        _InterlockedAdd64(&qword_140C1BEF0, 1uLL);
        v12 = (char *)Object;
      }
      if ( v34 )
      {
        v43 = *v31;
        if ( LODWORD((*v31)->ClientToken) )
        {
LABEL_108:
          if ( (xmmword_140D06900 & 0x80000) != 0 )
            sub_1409E2580((_DWORD)v12, v5, (unsigned int)v191, 0, 0, 1829);
          ExReleaseResourceLite(Resource);
          ExAcquirePushLockSharedEx((ULONG_PTR)p_ImpersonationLevel, 0LL);
          v44 = *((_QWORD *)v12 + 191);
          v12 = (char *)Object;
          v45 = sub_1406FF050(Object, *((_QWORD *)Object + 146), *((_QWORD *)Object + 146) + v44, 33280LL);
          sub_140700158(v12, 0LL);
          if ( v45 )
          {
            sub_1406CD41C(*((_QWORD *)v12 + 159));
            v12 = (char *)Object;
          }
          goto LABEL_47;
        }
      }
      else
      {
        v43 = *v31;
        if ( !LODWORD((*v31)->ClientToken) )
          goto LABEL_108;
      }
      sub_1406FF880(v12, (__int64)v43, 5);
      goto LABEL_108;
    }
    if ( (int)v5 > 40 )
    {
      if ( (_DWORD)v5 != 41 )
      {
        if ( (_DWORD)v5 == 42 )
        {
          v57 = 0;
          *(_OWORD *)v188 = *(_OWORD *)v8;
          *(_OWORD *)&v188[16] = *((_OWORD *)v8 + 1);
          *(_OWORD *)&v188[32] = *((_OWORD *)v8 + 2);
          *(_OWORD *)&v188[48] = *((_OWORD *)v8 + 3);
          *(_QWORD *)&v188[64] = v8[8];
          if ( (*(_DWORD *)v188 & 0xFFFFFFFC) != 0 || (v188[0] & 3) == 0 )
          {
            v11 = -1073741811;
            v14 = 1;
            v12 = (char *)Object;
          }
          else
          {
            v57 = 8;
            v12 = (char *)Object;
            sub_140678FCC((__int64)Object, (__int64)Thread, &v154);
            sub_14068565C((__int64)v12, &v154);
            v14 = 1;
            v11 = sub_1406D4A68(v12);
            if ( v11 >= 0 )
            {
              if ( v12 != v154 )
                ExReleaseResourceLite((PERESOURCE)(v12 + 56));
              sub_1406FFE90(v154, Thread);
              v57 = 0;
            }
          }
          if ( (unsigned __int8)v57 < 8u )
            goto LABEL_48;
          if ( v12 != v154 )
            ExReleaseResourceLite((PERESOURCE)(v12 + 56));
          v66 = Thread;
          v67 = (__int64)v154;
          goto LABEL_237;
        }
        if ( (_DWORD)v5 != 43 )
        {
          if ( (_DWORD)v5 != 44 )
          {
            if ( (_DWORD)v5 != 45 )
            {
              if ( (_DWORD)v5 == 46 )
              {
                v167 = *v8;
                v12 = (char *)Object;
                v11 = sub_1406954C8(Object, (__int64)&v167);
                v14 = 1;
                if ( v11 >= 0 )
                  goto LABEL_47;
                goto LABEL_48;
              }
              if ( (_DWORD)v5 != 47 )
                goto LABEL_473;
              v149 = *(_BYTE *)v8;
              v14 = 1;
              if ( v149 == 1 )
              {
                v126 = SeSinglePrivilegeCheck(stru_140D3CA10, PreviousMode);
                v12 = (char *)Object;
                if ( !v126 )
                {
                  v11 = -1073741727;
                  goto LABEL_48;
                }
                if ( (*((_DWORD *)Object + 378) & 0x40000000) != 0 )
                {
                  v11 = (unsigned __int8)sub_1409B0BE8(Object, 2LL) == 0 ? 0xC0000022 : 0;
                  goto LABEL_48;
                }
                goto LABEL_476;
              }
              goto LABEL_393;
            }
            v12 = (char *)Object;
            if ( (*((_DWORD *)Object + 378) & 0x40000000) != 0 )
            {
              v168 = 0LL;
              v169 = *(__m128i *)v8;
              v127 = _mm_srli_si128(v169, 8).m128i_u64[0];
              v14 = 1;
              if ( !v127 || (unsigned __int16)(v169.m128i_i16[0] - 1) > 0x206u || (v169.m128i_i8[0] & 1) != 0 )
              {
                v11 = -1073741811;
                v136 = -1073741811;
                goto LABEL_48;
              }
              if ( PreviousMode == 1 )
              {
                if ( (v127 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v127 + v169.m128i_u16[0] > 0x7FFFFFFF0000LL || v127 + v169.m128i_u16[0] < v127 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v128 = v169.m128i_u16[0];
              v129 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v169.m128i_u16[0], 0x72537350u);
              v81 = v129;
              v168 = v129;
              if ( !v129 )
              {
                v11 = -1073741670;
                v136 = -1073741670;
                goto LABEL_48;
              }
              memmove(v129, (const void *)v127, v128);
              if ( wcsnlen(v81, v128 >> 1) == v128 >> 1 )
              {
                v169.m128i_i64[1] = (__int64)v81;
                v11 = sub_1409ABAC0(v12, &v169);
              }
              else
              {
                v11 = -1073741811;
              }
              if ( !v81 )
                goto LABEL_48;
              v123 = 1918071632;
LABEL_461:
              ExFreePoolWithTag(v81, v123);
              goto LABEL_48;
            }
LABEL_444:
            v11 = -1073740535;
            goto LABEL_173;
          }
          v12 = (char *)Object;
          v82 = (struct _ERESOURCE *)((char *)Object + 56);
          v14 = 1;
          ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
          if ( *((int *)v12 + 378) >= 0 )
          {
            *(_OWORD *)(v12 + 1448) = *(_OWORD *)v8;
            _InterlockedOr((volatile signed __int32 *)v12 + 378, 0x80000000);
            ExReleaseResourceLite(v82);
            v11 = 0;
LABEL_280:
            v12 = (char *)Object;
            goto LABEL_48;
          }
          v11 = -1073741791;
LABEL_498:
          v73 = v82;
          goto LABEL_224;
        }
        v187 = *v8;
        v12 = (char *)Object;
        v83 = sub_1409B08E8(Object);
LABEL_285:
        v11 = v83;
        goto LABEL_173;
      }
      v173 = *(_DWORD *)v8;
      v12 = (char *)Object;
      if ( sub_1405E00B8((__int64)Object) && v130 == 2 )
      {
        v82 = (struct _ERESOURCE *)(v12 + 56);
        v14 = 1;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
        if ( *((_DWORD *)v12 + 354) )
        {
          v11 = -1073740529;
        }
        else
        {
          v131 = _interlockedbittestandset((volatile signed __int32 *)v12 + 378, 0x1Du);
          v12 = (char *)Object;
          if ( v131 )
          {
            v11 = 255;
          }
          else
          {
            sub_14020B10C((__int64)Object);
            v11 = 0;
          }
        }
        goto LABEL_498;
      }
LABEL_445:
      v11 = -1073741811;
      goto LABEL_173;
    }
    if ( (_DWORD)v5 == 40 )
    {
      v124 = SeSinglePrivilegeCheck(stru_140D3CA10, PreviousMode);
      v12 = (char *)Object;
      if ( v124 )
      {
        if ( (*((_DWORD *)Object + 378) & 0x40000000) == 0 )
          goto LABEL_444;
        if ( (unsigned __int8)sub_1409B0BE8(Object, 4LL) )
        {
          v186 = *v8;
          v148 = *((_BYTE *)v8 + 8);
          LOBYTE(v125) = PreviousMode;
          v83 = sub_1409ABCF4(v12, v125);
          goto LABEL_285;
        }
        goto LABEL_445;
      }
    }
    else
    {
      v70 = v5 - 25;
      switch ( (_DWORD)v5 )
      {
        case 0x19:
          v12 = (char *)Object;
          v14 = v70 + 1;
          ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), v70 + 1);
          KeResetEvent((PRKEVENT)v12);
LABEL_46:
          ExReleaseResourceLite((PERESOURCE)(v12 + 56));
LABEL_47:
          v11 = 0;
          goto LABEL_48;
        case 0x1B:
          v12 = (char *)Object;
          if ( Object )
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 1224, 0LL);
          *((_QWORD *)v12 + 88) = 0LL;
          *((_QWORD *)v12 + 87) = 0LL;
          sub_140687540(v12, 0LL, 0LL);
          goto LABEL_172;
        case 0x1F:
          memmove(v189, v8, v4);
          v14 = 1;
          if ( v189[3] )
          {
            v78 = v189[5];
            if ( !LOWORD(v189[5]) )
              goto LABEL_262;
            if ( (v189[3] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v189[3] + (unsigned __int64)LOWORD(v189[5]) > 0x7FFFFFFF0000LL
              || v189[3] + (unsigned __int64)LOWORD(v189[5]) < v189[3] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v78 = v189[5];
            }
            if ( !v78 || (v78 & 1) != 0 )
            {
LABEL_262:
              v11 = -1073741811;
              v136 = -1073741811;
              v12 = (char *)Object;
              goto LABEL_274;
            }
            v164 = 1;
            v79 = PagedPool;
            if ( PreviousMode == 1 )
              v79 = 9;
            v164 = v79;
            v175[1] = ExAllocatePoolWithQuotaTag(v79, v78 + 2LL, 0x624A7350u);
            if ( !v175[1] )
            {
              v11 = -1073741801;
              v136 = -1073741801;
              v12 = (char *)Object;
LABEL_274:
              v81 = (wchar_t *)v175[1];
              if ( !v175[1] )
                goto LABEL_48;
              v123 = 0;
              goto LABEL_461;
            }
            v80 = v175[1];
            memmove(v175[1], (const void *)v189[3], LOWORD(v189[5]));
            v80[(unsigned __int64)LOWORD(v189[5]) >> 1] = 0;
            v189[3] = v80;
          }
          if ( (v189[4] & 0xFFFFFFF000000000uLL) != 0 )
          {
            v11 = -1073741811;
          }
          else
          {
            if ( !v189[10] && !v189[7] && !v189[2] || (unsigned __int8)sub_1406950FC() )
            {
              v12 = (char *)Object;
              v11 = sub_1406D4808(Object, v189);
              goto LABEL_274;
            }
            v11 = -1073741790;
          }
          v12 = (char *)Object;
          goto LABEL_274;
        case 0x20:
          v12 = (char *)Object;
          v83 = sub_1409B0C74(v8, (unsigned int)v4, Object);
          goto LABEL_285;
        case 0x21:
          goto LABEL_69;
        case 0x23:
          v12 = (char *)Object;
          v83 = sub_1406E4FA4(Object);
          goto LABEL_285;
      }
      if ( (_DWORD)v5 != 37 )
        goto LABEL_473;
      v122 = SeSinglePrivilegeCheck(stru_140D3CA10, PreviousMode);
      v12 = (char *)Object;
      if ( v122 )
      {
        if ( (*((_DWORD *)Object + 378) & 0x40000000) == 0 )
          goto LABEL_444;
        if ( (unsigned __int8)sub_1409B0BE8(Object, 4LL) )
        {
          v172 = *(_DWORD *)v8;
          v83 = sub_140A34510(v12);
          goto LABEL_285;
        }
        goto LABEL_445;
      }
    }
    v11 = -1073741727;
    goto LABEL_173;
  }
  return result;
}
