/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x180025330
 * Callers:
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleW @ 0x1800E0080 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     ApiSetResolveToHost @ 0x180019DD0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180029C10 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x18002D480 (LdrpLoadKnownDll.c)
 *     LdrpGetFullPath @ 0x18002DF70 (LdrpGetFullPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E530 (LdrpAllocatePlaceHolder.c)
 *     RtlpWakeSRWLock @ 0x180031890 (RtlpWakeSRWLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     LdrpFreeReplacedModule @ 0x180067B44 (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x18006F524 (LdrpDestroyNode.c)
 *     LdrpQueueWork @ 0x180072EF0 (LdrpQueueWork.c)
 *     LdrpUnmapModule @ 0x18007366C (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007FA5C (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D9090 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogEtwEvent @ 0x1800DB9FC (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800DF3BC (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  int v6; // r10d
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned __int16 *v9; // r11
  __int64 *v10; // r13
  _QWORD *v11; // rsi
  int FullPath; // ebx
  __int64 v13; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  int v16; // edi
  char v17; // r14
  int *v18; // r15
  struct _PEB *v19; // r12
  char v20; // r13
  __int64 v21; // rbx
  __int64 ApiSetMap; // rdi
  char v23; // si
  unsigned __int16 v24; // di
  unsigned __int16 v25; // ax
  int *SharedData; // rcx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  __int16 v31; // ax
  unsigned int v32; // ecx
  int v33; // esi
  unsigned int v34; // ecx
  int v35; // ebx
  char *v36; // rdx
  size_t v37; // rdi
  unsigned int v38; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int v40; // eax
  int *v41; // rsi
  const char *v42; // rax
  unsigned __int64 v43; // rdx
  _WORD *v44; // rax
  __int16 v45; // cx
  unsigned int v46; // r14d
  signed __int64 v47; // rdx
  __int64 v48; // r8
  unsigned __int64 v49; // r9
  _QWORD **v50; // rsi
  __int64 v51; // rcx
  _QWORD *j; // r15
  volatile signed __int32 *v53; // rdi
  unsigned __int16 *v54; // rax
  unsigned __int16 *v55; // r10
  unsigned __int64 v56; // r11
  __int64 v57; // rax
  int v58; // eax
  signed __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  int v64; // esi
  __int64 v65; // r14
  unsigned __int16 *v66; // r15
  __int64 v67; // rsi
  __int64 v68; // rcx
  int v69; // eax
  signed __int64 v70; // rax
  int v71; // edi
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rcx
  __int64 *v75; // r8
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // rsi
  __int64 v79; // r15
  signed __int64 v80; // rdx
  int v81; // eax
  int v82; // ecx
  __int64 v83; // rax
  signed __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  _QWORD *v88; // rbx
  _QWORD *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  _QWORD *v94; // rdx
  _QWORD *v95; // rax
  __int64 *v96; // rdx
  signed __int64 *v97; // r8
  bool v98; // zf
  int v99; // eax
  __int64 v100; // rdx
  signed __int64 v101; // rtt
  __int64 v102; // rdx
  signed __int64 v103; // rtt
  signed __int64 v104; // rcx
  __int64 v105; // rdx
  signed __int64 v106; // rdx
  signed __int64 v107; // rtt
  __int16 v108; // dx
  _WORD *v109; // rcx
  _WORD *v110; // rax
  unsigned __int16 i; // dx
  __int16 v112; // r8
  __int64 v113; // rcx
  char *v114; // r11
  int v115; // r9d
  int v116; // r10d
  int v117; // eax
  unsigned __int64 v118; // r8
  __int64 Heap; // rax
  int v120; // edi
  unsigned __int64 v121; // rdx
  _WORD *v122; // rax
  unsigned int v123; // r15d
  unsigned int v124; // eax
  void *StringRoutine; // r12
  unsigned int v126; // edi
  unsigned int v127; // eax
  void *v128; // rsi
  unsigned int v129; // r14d
  unsigned int v130; // eax
  void *v131; // r15
  __int64 v132; // rcx
  char *v133; // rcx
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v137; // [rsp+30h] [rbp-408h]
  char v138[2]; // [rsp+52h] [rbp-3E6h] BYREF
  int v139; // [rsp+54h] [rbp-3E4h]
  int v140; // [rsp+58h] [rbp-3E0h]
  char v141; // [rsp+5Ch] [rbp-3DCh]
  char v142; // [rsp+5Dh] [rbp-3DBh]
  __int16 v143; // [rsp+5Eh] [rbp-3DAh]
  __int16 v144; // [rsp+60h] [rbp-3D8h]
  __int16 v145; // [rsp+62h] [rbp-3D6h]
  int appended; // [rsp+64h] [rbp-3D4h]
  int v147; // [rsp+68h] [rbp-3D0h]
  unsigned int v148; // [rsp+6Ch] [rbp-3CCh]
  struct _PEB *v149; // [rsp+70h] [rbp-3C8h]
  int v150; // [rsp+78h] [rbp-3C0h]
  int v151; // [rsp+7Ch] [rbp-3BCh] BYREF
  unsigned __int16 *v152; // [rsp+80h] [rbp-3B8h]
  int v153; // [rsp+88h] [rbp-3B0h]
  int v154; // [rsp+90h] [rbp-3A8h]
  int v155; // [rsp+98h] [rbp-3A0h]
  int v156; // [rsp+A0h] [rbp-398h]
  int v157; // [rsp+A4h] [rbp-394h]
  int v158; // [rsp+A8h] [rbp-390h]
  int v159; // [rsp+ACh] [rbp-38Ch]
  int *v160; // [rsp+B0h] [rbp-388h]
  __int64 v161; // [rsp+B8h] [rbp-380h]
  int v162; // [rsp+C0h] [rbp-378h]
  int v163; // [rsp+C4h] [rbp-374h]
  int v164; // [rsp+C8h] [rbp-370h]
  int v165; // [rsp+CCh] [rbp-36Ch]
  int v166; // [rsp+D0h] [rbp-368h]
  __int64 v167; // [rsp+D8h] [rbp-360h]
  int v168; // [rsp+E0h] [rbp-358h]
  __int64 *v169; // [rsp+E8h] [rbp-350h]
  __int64 v170; // [rsp+F0h] [rbp-348h]
  __int64 v171; // [rsp+F8h] [rbp-340h]
  __int64 v172; // [rsp+100h] [rbp-338h]
  __int64 v173; // [rsp+108h] [rbp-330h]
  __int64 v174; // [rsp+110h] [rbp-328h]
  unsigned __int16 v175; // [rsp+118h] [rbp-320h] BYREF
  void *Src; // [rsp+120h] [rbp-318h]
  int v177; // [rsp+128h] [rbp-310h]
  int v178; // [rsp+12Ch] [rbp-30Ch]
  __int64 v179; // [rsp+130h] [rbp-308h]
  int v180; // [rsp+138h] [rbp-300h]
  void *v181; // [rsp+140h] [rbp-2F8h]
  void *v182; // [rsp+148h] [rbp-2F0h]
  void *v183; // [rsp+150h] [rbp-2E8h]
  int *v184; // [rsp+158h] [rbp-2E0h]
  _WORD *v185; // [rsp+160h] [rbp-2D8h]
  _WORD *v186; // [rsp+168h] [rbp-2D0h]
  _WORD *v187; // [rsp+170h] [rbp-2C8h]
  char *v188; // [rsp+178h] [rbp-2C0h]
  unsigned __int16 *v189; // [rsp+180h] [rbp-2B8h]
  unsigned __int16 *v190; // [rsp+188h] [rbp-2B0h]
  __int64 v191; // [rsp+190h] [rbp-2A8h]
  __int64 v192; // [rsp+198h] [rbp-2A0h]
  __int64 v193; // [rsp+1A0h] [rbp-298h]
  __int64 v194; // [rsp+1B0h] [rbp-288h] BYREF
  int v195; // [rsp+1B8h] [rbp-280h]
  __int128 v196; // [rsp+1C0h] [rbp-278h] BYREF
  __int128 v197; // [rsp+1D0h] [rbp-268h]
  __int128 v198; // [rsp+1E0h] [rbp-258h]
  __int64 v199; // [rsp+1F0h] [rbp-248h]
  __int128 v200; // [rsp+200h] [rbp-238h] BYREF
  __int16 v201; // [rsp+210h] [rbp-228h]
  __int16 v202; // [rsp+212h] [rbp-226h]
  char *v203; // [rsp+218h] [rbp-220h]
  struct _TEB *v204; // [rsp+220h] [rbp-218h]
  __int64 v205; // [rsp+228h] [rbp-210h]
  __int128 v206; // [rsp+230h] [rbp-208h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+240h] [rbp-1F8h] BYREF
  int v208; // [rsp+2E0h] [rbp-158h] BYREF
  void *v209; // [rsp+2E8h] [rbp-150h]
  _WORD v210[128]; // [rsp+2F0h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+438h] [rbp+0h]

  v6 = a4;
  v159 = a4;
  v7 = a3;
  v170 = a3;
  v8 = a2;
  v171 = a2;
  v9 = a1;
  v152 = a1;
  v10 = a5;
  v169 = a5;
  v11 = a6;
  v161 = (__int64)a6;
  v209 = v210;
  FullPath = 0;
  v208 = 0x1000000;
  v210[0] = 0;
  v194 = 72LL;
  v195 = 1;
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v199 = 0LL;
  v13 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v197 + 1) = ~ActiveFrame;
  *(_QWORD *)&v198 = ~v13;
  *((_QWORD *)&v198 + 1) = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    v9 = v152;
    v7 = v170;
    v6 = v159;
    goto LABEL_7;
  }
  *(_QWORD *)&v196 = ActiveFrame;
  *((_QWORD *)&v196 + 1) = v13;
  LODWORD(v197) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v13 )
      goto LABEL_6;
  }
  else if ( !v13 )
  {
LABEL_6:
    LODWORD(v197) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v196;
LABEL_7:
  v16 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v140 = v16;
  if ( v6 != 9 )
  {
    appended = 0;
    v17 = 0;
    if ( (v16 & 0x800008) != 0 )
    {
LABEL_46:
      if ( FullPath >= 0 )
      {
        v41 = (int *)v9;
        v184 = (int *)v9;
        if ( !(_WORD)v208 )
        {
          v121 = *((_QWORD *)v9 + 1);
          v122 = (_WORD *)(v121 + *v9);
          v185 = v122;
          while ( 1 )
          {
            v185 = --v122;
            if ( (unsigned __int64)v122 < v121 )
              break;
            if ( *v122 == 92 || *v122 == 47 )
            {
              if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((__int64)v9) != 5 )
              {
                FullPath = LdrpGetFullPath(v132, &v208);
                appended = FullPath;
                if ( FullPath >= 0 )
                {
                  v16 |= 0x600u;
                  v140 = v16;
                }
                goto LABEL_53;
              }
LABEL_227:
              appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v208, (const void **)v9);
              FullPath = appended;
              goto LABEL_53;
            }
          }
          v16 |= 0x20u;
          v140 = v16;
          goto LABEL_227;
        }
        if ( v17 )
          v42 = "SxS";
        else
          v42 = "API set";
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2671,
          (unsigned int)"LdrpPreprocessDllName",
          2,
          "DLL %wZ was redirected to %wZ by %s\n",
          v9,
          &v208,
          v42);
        v16 |= 0x200u;
        v140 = v16;
        if ( v17 )
        {
          v16 |= 4u;
          v140 = v16;
        }
        v41 = &v208;
        v184 = &v208;
LABEL_53:
        if ( FullPath >= 0 )
        {
          v43 = *((_QWORD *)v41 + 1);
          v44 = (_WORD *)(v43 + *(unsigned __int16 *)v41);
          v186 = v44;
          v142 = 0;
          while ( 1 )
          {
            v186 = --v44;
            if ( (unsigned __int64)v44 < v43 )
            {
LABEL_228:
              FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v208, (const void **)L"\b\n");
              appended = FullPath;
              goto LABEL_193;
            }
            v45 = *v44;
            if ( *v44 == 46 )
              break;
            if ( v45 == 47 || v45 == 92 )
              goto LABEL_228;
          }
          v142 = 1;
          v108 = v208;
          v109 = v209;
          v110 = (char *)v209 + (unsigned __int16)v208;
          v187 = v110;
          while ( 1 )
          {
            v187 = --v110;
            if ( v110 < v109 || *v110 != 46 )
              break;
            v108 -= 2;
            LOWORD(v208) = v108;
            v109 = v209;
          }
          v110[1] = 0;
        }
      }
LABEL_193:
      if ( FullPath < 0 )
      {
        LODWORD(v137) = FullPath;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2729,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          v152,
          v137);
      }
      v139 = FullPath;
      v11 = (_QWORD *)v161;
      goto LABEL_196;
    }
    v18 = (int *)v9;
    v160 = (int *)v9;
    v19 = NtCurrentPeb();
    v149 = v19;
    v20 = 1;
    v141 = 1;
    v21 = v7 + 88;
    ApiSetMap = (__int64)v19->ApiSetMap;
    LdrpLogDllState(0LL, (__int64)v9, 0x14D0u);
    FullPath = ApiSetResolveToHost(ApiSetMap, v152, v21, v138, (__int64)&v175);
    v23 = v138[0];
    if ( FullPath >= 0 && v138[0] )
    {
      v24 = v175;
      if ( v175 )
        v25 = 5329;
      else
        v25 = 5330;
    }
    else
    {
      v25 = 5331;
      v24 = v175;
    }
    LdrpLogDllState(0LL, (__int64)v18, v25);
    v150 = FullPath;
    if ( v23 )
    {
      if ( !v24 )
      {
        FullPath = -1073740671;
        v150 = -1073740671;
        goto LABEL_234;
      }
      LOWORD(v208) = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( !SharedData || (v177 = *SharedData, v27 = 1, !v177) )
        v27 = 0;
      if ( v27 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v28 = 2147352624LL;
      v179 = v28;
      v173 = 0LL;
      v174 = v28;
      if ( v28 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_WORD *)(v28 + 2 * v29) );
        v30 = 2 * v29;
        v167 = v30;
        v31 = v30;
        if ( v30 >= 0xFFFE )
        {
          LOWORD(v30) = -4;
          v167 = 65532LL;
          v31 = -4;
        }
        LOWORD(v173) = v30;
        WORD1(v173) = v31 + 2;
      }
      else
      {
        LOWORD(v30) = v173;
      }
      v162 = 0;
      if ( (_WORD)v30 )
      {
        v32 = (unsigned __int16)v30 + 2;
        v153 = v32;
        v33 = 0;
        v154 = 0;
        if ( v32 > HIWORD(v208) )
        {
          if ( v32 <= 0xFFFE )
          {
            v123 = ((unsigned __int16)v30 + 65) & 0xFFFFFFC0;
            v153 = v123;
            v124 = v123;
            if ( v123 > 0xFFFE )
            {
              LOWORD(v123) = -2;
              v153 = 65534;
              v124 = 65534;
            }
            if ( v209 == v210 )
            {
              StringRoutine = (void *)NtdllpAllocateStringRoutine(v124, v209);
              v181 = StringRoutine;
              if ( StringRoutine && (_WORD)v208 )
                memmove(StringRoutine, v209, (unsigned __int16)v208);
            }
            else
            {
              StringRoutine = (void *)NtdllpReallocateStringRoutine(v124);
              v181 = StringRoutine;
            }
            if ( StringRoutine )
            {
              v209 = StringRoutine;
              HIWORD(v208) = v123;
            }
            else
            {
              v33 = -1073741801;
              v154 = -1073741801;
            }
            v19 = v149;
            v18 = v160;
          }
          else
          {
            v33 = -1073741562;
            v154 = -1073741562;
          }
        }
        v162 = v33;
        if ( v33 >= 0 )
        {
          memmove((char *)v209 + (unsigned __int16)v208, (const void *)v28, (unsigned __int16)v30);
          LOWORD(v208) = v30 + v208;
          *((_WORD *)v209 + ((unsigned __int64)(unsigned __int16)v208 >> 1)) = 0;
        }
        v17 = 0;
      }
      v168 = 0;
      v34 = (unsigned __int16)v208 + 22;
      v155 = v34;
      v35 = 0;
      v156 = 0;
      if ( v34 > HIWORD(v208) )
      {
        if ( v34 <= 0xFFFE )
        {
          v126 = ((unsigned __int16)v208 + 85) & 0xFFFFFFC0;
          v155 = v126;
          v127 = v126;
          if ( v126 > 0xFFFE )
          {
            LOWORD(v126) = -2;
            v155 = 65534;
            v127 = 65534;
          }
          if ( v209 == v210 )
          {
            v128 = (void *)NtdllpAllocateStringRoutine(v127, v209);
            v182 = v128;
            if ( v128 && (_WORD)v208 )
              memmove(v128, v209, (unsigned __int16)v208);
          }
          else
          {
            v128 = (void *)NtdllpReallocateStringRoutine(v127);
            v182 = v128;
          }
          if ( v128 )
          {
            v209 = v128;
            HIWORD(v208) = v126;
          }
          else
          {
            v35 = -1073741801;
            v156 = -1073741801;
          }
        }
        else
        {
          v35 = -1073741562;
          v156 = -1073741562;
        }
      }
      v168 = v35;
      if ( v35 >= 0 )
      {
        v36 = (char *)v209 + (unsigned __int16)v208;
        *(_OWORD *)v36 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v36 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v208) = v208 + 20;
        *((_WORD *)v209 + ((unsigned __int64)(unsigned __int16)v208 >> 1)) = 0;
      }
      v163 = 0;
      v37 = v175;
      v38 = v175 + (unsigned __int16)v208 + 2;
      LODWORD(v149) = v38;
      FullPath = 0;
      v157 = 0;
      if ( v38 > HIWORD(v208) )
      {
        if ( v38 <= 0xFFFE )
        {
          v129 = (v38 + 63) & 0xFFFFFFC0;
          LODWORD(v149) = v129;
          v130 = v129;
          if ( v129 > 0xFFFE )
          {
            LOWORD(v129) = -2;
            LODWORD(v149) = 65534;
            v130 = 65534;
          }
          if ( v209 == v210 )
          {
            v131 = (void *)NtdllpAllocateStringRoutine(v130, v209);
            v183 = v131;
            if ( v131 && (_WORD)v208 )
              memmove(v131, v209, (unsigned __int16)v208);
          }
          else
          {
            v131 = (void *)NtdllpReallocateStringRoutine(v130);
            v183 = v131;
          }
          if ( v131 )
          {
            v209 = v131;
            HIWORD(v208) = v129;
          }
          else
          {
            FullPath = -1073741801;
            v157 = -1073741801;
          }
          v18 = v160;
          v17 = 0;
        }
        else
        {
          FullPath = -1073741562;
          v157 = -1073741562;
        }
      }
      v163 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)v209 + (unsigned __int16)v208, Src, v37);
        LOWORD(v208) = v37 + v208;
        *((_WORD *)v209 + ((unsigned __int64)(unsigned __int16)v208 >> 1)) = 0;
      }
      v150 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v19->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v141 = v20;
        v18 = &v208;
        v160 = &v208;
      }
    }
    if ( FullPath >= 0 )
    {
      v40 = 1;
      goto LABEL_43;
    }
LABEL_234:
    v40 = 0;
LABEL_43:
    if ( v40 && v20 && !LdrpIsSecureProcess )
    {
      v120 = RtlDosApplyFileIsolationRedirection_Ustr(1u, v18, (__int128 *)L"\b\n", 0LL, &v200, 0LL, 0LL, 0LL, 0LL);
      if ( v120 >= 0 )
      {
        v17 = 1;
        LdrpGetFullPath(&v200, &v208);
        LdrpFreeUnicodeString((__int64)&v200);
      }
      if ( v120 != -1072365560 )
      {
        FullPath = v120;
        v150 = v120;
      }
    }
    appended = FullPath;
    v16 = v140;
    v9 = v152;
    v10 = v169;
    v8 = v171;
    goto LABEL_46;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v208, (const void **)v9);
  v139 = FullPath;
  v16 |= 0x10000200u;
  v140 = v16;
LABEL_196:
  if ( FullPath < 0 )
    goto LABEL_312;
  if ( (v16 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 (unsigned int)&v208,
                 *(_QWORD *)(v8 + 16),
                 v16,
                 v170,
                 (__int64)v10,
                 *(_QWORD *)(v8 + 40));
    v139 = FullPath;
    goto LABEL_312;
  }
  if ( !*v11 )
  {
    v178 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
    *v11 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v139 = -1073741801;
      goto LABEL_312;
    }
  }
  v65 = *(_QWORD *)(v8 + 40);
  v167 = v65;
  v64 = v16;
  LODWORD(v149) = v16;
  v66 = *(unsigned __int16 **)(v8 + 16);
  v152 = v66;
  *v10 = 0LL;
  v151 = 0;
  if ( (v16 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName((unsigned int)&v208, 0, v16, (_DWORD)v10, (__int64)&v151);
    v147 = FullPath;
    goto LABEL_94;
  }
  if ( (v16 & 0x200) == 0 )
  {
    v147 = -1073741515;
    goto LABEL_161;
  }
  for ( i = (unsigned __int16)v208 >> 1; i; --i )
  {
    v112 = *((_WORD *)v209 + i - 1);
    if ( v112 == 92 || v112 == 47 )
      break;
  }
  v113 = 2LL * i;
  v114 = (char *)v209 + v113;
  v203 = (char *)v209 + v113;
  v201 = v208 - v113;
  v202 = HIWORD(v208) - v113;
  v115 = 0;
  v165 = 0;
  v188 = (char *)v209 + v113;
  v148 = 0;
  v116 = (unsigned __int16)(v208 - v113) >> 1;
  v164 = v116;
  while ( 1 )
  {
    v117 = v116--;
    v164 = v116;
    if ( !v117 )
      break;
    v118 = *(unsigned __int16 *)v114;
    v114 += 2;
    v188 = v114;
    if ( (unsigned int)v118 >= 0x61 )
    {
      if ( (unsigned int)v118 > 0x7A )
      {
        if ( qword_1801817B8 )
        {
          if ( (unsigned __int16)v118 >= 0xC0u )
            LOWORD(v118) = *(_WORD *)(qword_1801817B8
                                    + 2
                                    * ((v118 & 0xF)
                                     + *(unsigned __int16 *)(qword_1801817B8
                                                           + 2LL
                                                           * (((unsigned __int8)v118 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
                                                                                                + 2 * (v118 >> 8))))))
                         + v118;
        }
      }
      else
      {
        LOWORD(v118) = v118 - 32;
      }
    }
    v143 = v118;
    v115 = (unsigned __int16)v118 + 65599 * v115;
    v165 = v115;
  }
  v148 = v115;
  v46 = v115;
  if ( !v115 )
  {
    v46 = 0x80000000;
    v148 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v50 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v46 & 0x1F));
  LOBYTE(v51) = 0;
  for ( j = *v50; ; j = (_QWORD *)*j )
  {
    if ( j == v50 )
    {
      v10 = v169;
      goto LABEL_83;
    }
    v53 = (volatile signed __int32 *)(j - 14);
    if ( v46 == *((_DWORD *)j + 38) && (((unsigned __int8)v149 & 8) == 0 || (v53[26] & 1) != 0) )
      break;
LABEL_78:
    ;
  }
  v51 = (unsigned __int16)v208;
  if ( (unsigned __int16)v208 != *((unsigned __int16 *)v53 + 36) )
  {
LABEL_77:
    LOBYTE(v51) = 0;
    goto LABEL_78;
  }
  v54 = (unsigned __int16 *)v209;
  v189 = (unsigned __int16 *)v209;
  v55 = (unsigned __int16 *)*((_QWORD *)v53 + 10);
  v190 = v55;
  while ( v54 < (unsigned __int16 *)((char *)v209 + (unsigned __int16)v208) )
  {
    v49 = *v54;
    v56 = *v55;
    if ( (_WORD)v49 == (_WORD)v56 )
      goto LABEL_70;
    if ( (unsigned int)v49 < 0x61 )
      goto LABEL_74;
    if ( (unsigned int)v49 <= 0x7A )
    {
      LOWORD(v49) = v49 - 32;
LABEL_74:
      v51 = 192LL;
      goto LABEL_75;
    }
    if ( !qword_1801817B8 )
      goto LABEL_74;
    v51 = 192LL;
    if ( (unsigned __int16)v49 >= 0xC0u )
    {
      v48 = v49 & 0xF;
      v47 = (unsigned int)v48
          + *(unsigned __int16 *)(qword_1801817B8
                                + 2LL
                                * (((unsigned __int8)v49 >> 4)
                                 + (unsigned int)*(unsigned __int16 *)(qword_1801817B8 + 2 * (v49 >> 8))));
      LOWORD(v49) = *(_WORD *)(qword_1801817B8 + 2 * v47) + v49;
      goto LABEL_74;
    }
LABEL_75:
    v144 = v49;
    if ( (unsigned int)v56 >= 0x61 )
    {
      if ( (unsigned int)v56 > 0x7A )
      {
        if ( qword_1801817B8 && (unsigned __int16)v56 >= 0xC0u )
        {
          v51 = (unsigned __int8)v56 >> 4;
          v48 = v56 & 0xF;
          v47 = (unsigned int)v48
              + *(unsigned __int16 *)(qword_1801817B8
                                    + 2LL
                                    * ((unsigned int)v51 + *(unsigned __int16 *)(qword_1801817B8 + 2 * (v56 >> 8))));
          LOWORD(v56) = *(_WORD *)(qword_1801817B8 + 2 * v47) + v56;
        }
      }
      else
      {
        LOWORD(v56) = v56 - 32;
      }
    }
    v145 = v56;
    if ( (_WORD)v49 != (_WORD)v56 )
      goto LABEL_77;
LABEL_70:
    v189 = ++v54;
    v190 = ++v55;
  }
  LOBYTE(v51) = 1;
  v57 = *((_QWORD *)v53 + 19);
  if ( *(_DWORD *)(v57 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v57 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v53 + 69);
  v10 = v169;
  *v169 = (__int64)v53;
LABEL_83:
  if ( (_BYTE)v51 )
  {
    FullPath = 0;
    v58 = 1;
  }
  else
  {
    FullPath = -1073741515;
    v58 = 0;
  }
  if ( v58 )
  {
    v51 = (__int64)&v151;
    v151 = *(_DWORD *)(*(_QWORD *)(*v10 + 152) + 56LL);
  }
  v59 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v59 != 1 )
  {
    v48 = -1LL;
    do
    {
      v51 = v59 & 6;
      v100 = 3LL;
      if ( v51 != 2 )
        v100 = -1LL;
      v47 = v59 + v100;
      v101 = v59;
      v59 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v47, v59);
    }
    while ( v101 != v59 );
    if ( v51 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v47, 0LL);
  }
  if ( FullPath < 0 )
    v158 = 3;
  else
    v158 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v51, v47, v48, v49) )
    v63 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v63 = 2147353476LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v133 = (unsigned int)RtlGetCurrentServiceSessionId(v63, v60, v61, v62)
         ? (char *)NtCurrentPeb()->SharedData + 555
         : (char *)2147353477;
    if ( (*v133 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v158, (__int64)&v208, 0LL);
  }
  v147 = FullPath;
  LOWORD(v16) = v140;
  v64 = (int)v149;
  v65 = v167;
  LODWORD(v66) = (_DWORD)v152;
LABEL_94:
  if ( FullPath != -1073741515 )
  {
    v67 = *v10;
    if ( v151 < 0 )
    {
      v206 = *(_OWORD *)(v67 + 72);
      LODWORD(v137) = v151;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3132,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v206,
        v137);
      FullPath = -1073741595;
      v147 = -1073741595;
      LdrpDereferenceModule(*v10);
      *v10 = 0LL;
    }
    else
    {
      v166 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v68 = *(_QWORD *)(v67 + 152);
      v69 = *(_DWORD *)(v68 + 24);
      if ( v69 != -1 )
      {
        if ( v69 )
        {
          *(_DWORD *)(v68 + 24) = v69 + 1;
        }
        else
        {
          v204 = NtCurrentTeb();
          if ( (v204->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v68 + 28);
          else
            v166 = -1073741515;
        }
      }
      v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v70 != 1 )
      {
        do
        {
          v104 = v70 & 6;
          v105 = 3LL;
          if ( v104 != 2 )
            v105 = -1LL;
          v106 = v70 + v105;
          v107 = v70;
          v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v106, v70);
        }
        while ( v107 != v70 );
        if ( v104 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v106, 0LL);
      }
      LOWORD(v16) = v140;
    }
    goto LABEL_99;
  }
LABEL_161:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v208, (_DWORD)v66, v64, v159, v170, (__int64)v10, v65);
  v147 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*(_QWORD *)(*v10 + 176));
    v147 = FullPath;
  }
LABEL_99:
  v139 = FullPath;
  if ( *v10 )
  {
    v71 = v16 & 0x400;
    if ( v71 && FullPath == -1073741515 )
    {
      v134 = *(_QWORD *)(*v10 + 176);
      v205 = v134;
      *(_DWORD *)(v134 + 32) |= 0x4000000u;
      LdrpProcessWork(v134, 1);
      FullPath = **(_DWORD **)(v134 + 40);
      v139 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v72 = *v10;
    v73 = v72;
    v191 = *v10;
    if ( v72 )
    {
      v74 = *(_QWORD *)(v72 + 176);
      if ( v74 )
      {
        if ( (*(_DWORD *)(v74 + 32) & 0x80000) == 0 && *(_QWORD *)(v74 + 56) != v72 )
        {
          v73 = *(_QWORD *)(v74 + 56);
          v191 = v73;
          *(_QWORD *)(v74 + 56) = v72;
        }
      }
    }
    v193 = v73;
    v75 = (__int64 *)v161;
    *(_DWORD *)(*(_QWORD *)v161 + 24LL) &= ~1u;
    v76 = *v75;
    v172 = *v75;
    v77 = v171;
    v78 = *(_QWORD *)(v73 + 152);
    v79 = *(_QWORD *)(*(_QWORD *)(v171 + 56) + 152LL);
    if ( v79 == v78
      || *(_DWORD *)(v78 + 56) == 9 && (*(_DWORD *)(v78 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_106;
    }
    v94 = *(_QWORD **)(v79 + 40);
    if ( v94 )
    {
      v95 = *(_QWORD **)(v79 + 40);
      while ( 1 )
      {
        v95 = (_QWORD *)*v95;
        if ( v95[1] == v78 )
          break;
        if ( v95 == v94 )
          goto LABEL_145;
      }
LABEL_106:
      v80 = *(unsigned int *)(v78 + 24);
      if ( (unsigned int)(v80 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v78 + 24) = v80 - 1;
    }
    else
    {
LABEL_145:
      if ( !v76 )
      {
        v180 = NtdllBaseTag + 2359296;
        v135 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
        v76 = v135;
        v172 = v135;
        if ( !v135 )
        {
          MEMORY[0] = -1073741801;
          v76 = 0LL;
          v75 = (__int64 *)v161;
          goto LABEL_108;
        }
        *(_DWORD *)(v135 + 24) |= 1u;
      }
      v96 = *(__int64 **)(v79 + 40);
      if ( v96 )
      {
        *(_QWORD *)v76 = *v96;
        *v96 = v76;
      }
      else
      {
        *(_QWORD *)v76 = v76;
      }
      *(_QWORD *)(v79 + 40) = v76;
      *(_QWORD *)(v76 + 8) = v78;
      v80 = v76 + 16;
      v97 = *(signed __int64 **)(v78 + 48);
      if ( v97 )
      {
        *(_QWORD *)v80 = *v97;
        *v97 = v80;
      }
      else
      {
        *(_QWORD *)v80 = v80;
      }
      *(_QWORD *)(v78 + 48) = v80;
      v98 = (*(_DWORD *)(v76 + 24) & 1) == 0;
      v99 = *(_DWORD *)(v76 + 24) & 1;
      *(_QWORD *)(v76 + 24) = v79;
      if ( !v98 )
        *(_DWORD *)(v76 + 24) = v99 | v79 & 0xFFFFFFFE;
      v76 = 0LL;
      v172 = 0LL;
      v75 = (__int64 *)v161;
    }
LABEL_108:
    v192 = v76;
    *v75 = v76;
    if ( FullPath == -1073741515 )
    {
      if ( !v71 )
      {
        LdrpQueueWork(*(_QWORD *)(v73 + 176));
        v139 = 0;
        v75 = (__int64 *)v161;
        goto LABEL_111;
      }
LABEL_110:
      if ( FullPath >= 0 )
        goto LABEL_111;
      v81 = 0;
    }
    else
    {
      if ( FullPath != -1073741267 )
        goto LABEL_110;
      v139 = 0;
LABEL_111:
      v81 = 1;
    }
    if ( v81 )
    {
      v82 = *(_DWORD *)(v77 + 108);
      if ( v82 )
      {
        if ( *v75 || *(int *)(*(_QWORD *)(v73 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v77 + 108) = v82 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v73 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v77 + 80) = v73;
        *(_DWORD *)(v77 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v77 + 56) + 152LL) + 56LL) = 3;
        v139 = 259;
      }
    }
    v83 = *(_QWORD *)(v73 + 152);
    if ( *(_DWORD *)(v83 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v83 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v86 = *(_QWORD *)(v73 + 160);
      v87 = *(_QWORD **)(v73 + 168);
      if ( *(_QWORD *)(v86 + 8) != v73 + 160 || *v87 != v73 + 160 )
        __fastfail(3u);
      *v87 = v86;
      *(_QWORD *)(v86 + 8) = v87;
      v88 = *(_QWORD **)(v73 + 152);
      v89 = (_QWORD *)*v88;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v73 + 110) )
        LdrpReleaseTlsEntry(v73, 0LL);
      LdrpUnmapModule(v73);
      v93 = *(_QWORD *)(v73 + 136);
      if ( (unsigned __int64)(v93 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v93, v90, v91, v92);
      if ( *(_QWORD *)(v73 + 80) )
        LdrpFreeUnicodeString(v73 + 72);
      RtlFreeHeap(LdrpHeap, 0LL, v73);
      if ( v89 == v88 )
        LdrpDestroyNode(v88);
    }
    v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v84 != 1 )
    {
      do
      {
        v75 = (__int64 *)(v84 & 6);
        v102 = 3LL;
        if ( v75 != (__int64 *)2 )
          v102 = -1LL;
        v80 = v84 + v102;
        v103 = v84;
        v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v80, v84);
      }
      while ( v103 != v84 );
      if ( v75 == (__int64 *)2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v80, 0LL);
    }
    v85 = v193;
    if ( v193 != *v10 )
    {
      LdrpFreeReplacedModule(*v10, v80, v75);
      *v10 = v85;
    }
    FullPath = v139;
  }
LABEL_312:
  RtlDeactivateActivationContextUnsafeFast(&v194);
  if ( v210 != v209 )
    NtdllpFreeStringRoutine(v209);
  return (unsigned int)FullPath;
}
