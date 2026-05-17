/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x1800251E0
 * Callers:
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleW @ 0x1800E13B0 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     ApiSetResolveToHost @ 0x180019BC0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 *     LdrpGetFullPath @ 0x18002DDA0 (LdrpGetFullPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E360 (LdrpAllocatePlaceHolder.c)
 *     RtlpWakeSRWLock @ 0x180031730 (RtlpWakeSRWLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x18006F524 (LdrpDestroyNode.c)
 *     LdrpQueueWork @ 0x180073560 (LdrpQueueWork.c)
 *     LdrpUnmapModule @ 0x180073CDC (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x1800800CC (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8A40 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E06E8 (NtdllpReallocateStringRoutine.c)
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
  _BYTE *ApiSetMap; // rdi
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
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  __int64 *v93; // rdx
  signed __int64 *v94; // r8
  bool v95; // zf
  int v96; // eax
  __int64 v97; // rdx
  signed __int64 v98; // rtt
  __int64 v99; // rdx
  signed __int64 v100; // rtt
  signed __int64 v101; // rcx
  __int64 v102; // rdx
  signed __int64 v103; // rdx
  signed __int64 v104; // rtt
  __int16 v105; // dx
  _WORD *v106; // rcx
  _WORD *v107; // rax
  unsigned __int16 i; // dx
  __int16 v109; // r8
  __int64 v110; // rcx
  char *v111; // r11
  int v112; // r9d
  int v113; // r10d
  int v114; // eax
  unsigned __int64 v115; // r8
  __int64 Heap; // rax
  int v117; // edi
  unsigned __int64 v118; // rdx
  _WORD *v119; // rax
  unsigned int v120; // r15d
  unsigned int v121; // eax
  void *StringRoutine; // r12
  unsigned int v123; // edi
  unsigned int v124; // eax
  void *v125; // rsi
  unsigned int v126; // r14d
  unsigned int v127; // eax
  void *v128; // r15
  __int64 v129; // rcx
  char *v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v134; // [rsp+30h] [rbp-408h]
  char v135[2]; // [rsp+52h] [rbp-3E6h] BYREF
  int v136; // [rsp+54h] [rbp-3E4h]
  int v137; // [rsp+58h] [rbp-3E0h]
  char v138; // [rsp+5Ch] [rbp-3DCh]
  char v139; // [rsp+5Dh] [rbp-3DBh]
  __int16 v140; // [rsp+5Eh] [rbp-3DAh]
  __int16 v141; // [rsp+60h] [rbp-3D8h]
  __int16 v142; // [rsp+62h] [rbp-3D6h]
  int appended; // [rsp+64h] [rbp-3D4h]
  int v144; // [rsp+68h] [rbp-3D0h]
  unsigned int v145; // [rsp+6Ch] [rbp-3CCh]
  struct _PEB *v146; // [rsp+70h] [rbp-3C8h]
  int v147; // [rsp+78h] [rbp-3C0h]
  int v148; // [rsp+7Ch] [rbp-3BCh] BYREF
  unsigned __int16 *v149; // [rsp+80h] [rbp-3B8h]
  int v150; // [rsp+88h] [rbp-3B0h]
  int v151; // [rsp+90h] [rbp-3A8h]
  int v152; // [rsp+98h] [rbp-3A0h]
  int v153; // [rsp+A0h] [rbp-398h]
  int v154; // [rsp+A4h] [rbp-394h]
  int v155; // [rsp+A8h] [rbp-390h]
  int v156; // [rsp+ACh] [rbp-38Ch]
  int *v157; // [rsp+B0h] [rbp-388h]
  __int64 v158; // [rsp+B8h] [rbp-380h]
  int v159; // [rsp+C0h] [rbp-378h]
  int v160; // [rsp+C4h] [rbp-374h]
  int v161; // [rsp+C8h] [rbp-370h]
  int v162; // [rsp+CCh] [rbp-36Ch]
  int v163; // [rsp+D0h] [rbp-368h]
  __int64 v164; // [rsp+D8h] [rbp-360h]
  int v165; // [rsp+E0h] [rbp-358h]
  __int64 *v166; // [rsp+E8h] [rbp-350h]
  __int64 v167; // [rsp+F0h] [rbp-348h]
  __int64 v168; // [rsp+F8h] [rbp-340h]
  __int64 v169; // [rsp+100h] [rbp-338h]
  __int64 v170; // [rsp+108h] [rbp-330h]
  __int64 v171; // [rsp+110h] [rbp-328h]
  unsigned __int16 v172; // [rsp+118h] [rbp-320h] BYREF
  void *Src; // [rsp+120h] [rbp-318h]
  int v174; // [rsp+128h] [rbp-310h]
  int v175; // [rsp+12Ch] [rbp-30Ch]
  __int64 v176; // [rsp+130h] [rbp-308h]
  int v177; // [rsp+138h] [rbp-300h]
  void *v178; // [rsp+140h] [rbp-2F8h]
  void *v179; // [rsp+148h] [rbp-2F0h]
  void *v180; // [rsp+150h] [rbp-2E8h]
  int *v181; // [rsp+158h] [rbp-2E0h]
  _WORD *v182; // [rsp+160h] [rbp-2D8h]
  _WORD *v183; // [rsp+168h] [rbp-2D0h]
  _WORD *v184; // [rsp+170h] [rbp-2C8h]
  char *v185; // [rsp+178h] [rbp-2C0h]
  unsigned __int16 *v186; // [rsp+180h] [rbp-2B8h]
  unsigned __int16 *v187; // [rsp+188h] [rbp-2B0h]
  __int64 v188; // [rsp+190h] [rbp-2A8h]
  __int64 v189; // [rsp+198h] [rbp-2A0h]
  __int64 v190; // [rsp+1A0h] [rbp-298h]
  __int64 v191; // [rsp+1B0h] [rbp-288h] BYREF
  int v192; // [rsp+1B8h] [rbp-280h]
  __int128 v193; // [rsp+1C0h] [rbp-278h] BYREF
  __int128 v194; // [rsp+1D0h] [rbp-268h]
  __int128 v195; // [rsp+1E0h] [rbp-258h]
  __int64 v196; // [rsp+1F0h] [rbp-248h]
  __int128 v197; // [rsp+200h] [rbp-238h] BYREF
  __int16 v198; // [rsp+210h] [rbp-228h]
  __int16 v199; // [rsp+212h] [rbp-226h]
  char *v200; // [rsp+218h] [rbp-220h]
  struct _TEB *v201; // [rsp+220h] [rbp-218h]
  __int64 v202; // [rsp+228h] [rbp-210h]
  __int128 v203; // [rsp+230h] [rbp-208h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+240h] [rbp-1F8h] BYREF
  int v205; // [rsp+2E0h] [rbp-158h] BYREF
  void *v206; // [rsp+2E8h] [rbp-150h]
  _WORD v207[128]; // [rsp+2F0h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+438h] [rbp+0h]

  v6 = a4;
  v156 = a4;
  v7 = a3;
  v167 = a3;
  v8 = a2;
  v168 = a2;
  v9 = a1;
  v149 = a1;
  v10 = a5;
  v166 = a5;
  v11 = a6;
  v158 = (__int64)a6;
  v206 = v207;
  FullPath = 0;
  v205 = 0x1000000;
  v207[0] = 0;
  v191 = 72LL;
  v192 = 1;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v13 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v194 + 1) = ~ActiveFrame;
  *(_QWORD *)&v195 = ~v13;
  *((_QWORD *)&v195 + 1) = retaddr;
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
    v9 = v149;
    v7 = v167;
    v6 = v156;
    goto LABEL_7;
  }
  *(_QWORD *)&v193 = ActiveFrame;
  *((_QWORD *)&v193 + 1) = v13;
  LODWORD(v194) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v13 )
      goto LABEL_6;
  }
  else if ( !v13 )
  {
LABEL_6:
    LODWORD(v194) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v193;
LABEL_7:
  v16 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v137 = v16;
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
        v181 = (int *)v9;
        if ( !(_WORD)v205 )
        {
          v118 = *((_QWORD *)v9 + 1);
          v119 = (_WORD *)(v118 + *v9);
          v182 = v119;
          while ( 1 )
          {
            v182 = --v119;
            if ( (unsigned __int64)v119 < v118 )
              break;
            if ( *v119 == 92 || *v119 == 47 )
            {
              if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((__int64)v9) != 5 )
              {
                FullPath = LdrpGetFullPath(v129, &v205);
                appended = FullPath;
                if ( FullPath >= 0 )
                {
                  v16 |= 0x600u;
                  v137 = v16;
                }
                goto LABEL_53;
              }
LABEL_227:
              appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v205, (const void **)v9);
              FullPath = appended;
              goto LABEL_53;
            }
          }
          v16 |= 0x20u;
          v137 = v16;
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
          &v205,
          v42);
        v16 |= 0x200u;
        v137 = v16;
        if ( v17 )
        {
          v16 |= 4u;
          v137 = v16;
        }
        v41 = &v205;
        v181 = &v205;
LABEL_53:
        if ( FullPath >= 0 )
        {
          v43 = *((_QWORD *)v41 + 1);
          v44 = (_WORD *)(v43 + *(unsigned __int16 *)v41);
          v183 = v44;
          v139 = 0;
          while ( 1 )
          {
            v183 = --v44;
            if ( (unsigned __int64)v44 < v43 )
            {
LABEL_228:
              FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v205, (const void **)L"\b\n");
              appended = FullPath;
              goto LABEL_193;
            }
            v45 = *v44;
            if ( *v44 == 46 )
              break;
            if ( v45 == 47 || v45 == 92 )
              goto LABEL_228;
          }
          v139 = 1;
          v105 = v205;
          v106 = v206;
          v107 = (char *)v206 + (unsigned __int16)v205;
          v184 = v107;
          while ( 1 )
          {
            v184 = --v107;
            if ( v107 < v106 || *v107 != 46 )
              break;
            v105 -= 2;
            LOWORD(v205) = v105;
            v106 = v206;
          }
          v107[1] = 0;
        }
      }
LABEL_193:
      if ( FullPath < 0 )
      {
        LODWORD(v134) = FullPath;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2729,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          v149,
          v134);
      }
      v136 = FullPath;
      v11 = (_QWORD *)v158;
      goto LABEL_196;
    }
    v18 = (int *)v9;
    v157 = (int *)v9;
    v19 = NtCurrentPeb();
    v146 = v19;
    v20 = 1;
    v138 = 1;
    v21 = v7 + 88;
    ApiSetMap = v19->ApiSetMap;
    LdrpLogDllState(0LL, (__int64)v9, 0x14D0u);
    FullPath = ApiSetResolveToHost(ApiSetMap, v149, v21, v135, (__int64)&v172);
    v23 = v135[0];
    if ( FullPath >= 0 && v135[0] )
    {
      v24 = v172;
      if ( v172 )
        v25 = 5329;
      else
        v25 = 5330;
    }
    else
    {
      v25 = 5331;
      v24 = v172;
    }
    LdrpLogDllState(0LL, (__int64)v18, v25);
    v147 = FullPath;
    if ( v23 )
    {
      if ( !v24 )
      {
        FullPath = -1073740671;
        v147 = -1073740671;
        goto LABEL_234;
      }
      LOWORD(v205) = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( !SharedData || (v174 = *SharedData, v27 = 1, !v174) )
        v27 = 0;
      if ( v27 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v28 = 2147352624LL;
      v176 = v28;
      v170 = 0LL;
      v171 = v28;
      if ( v28 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_WORD *)(v28 + 2 * v29) );
        v30 = 2 * v29;
        v164 = v30;
        v31 = v30;
        if ( v30 >= 0xFFFE )
        {
          LOWORD(v30) = -4;
          v164 = 65532LL;
          v31 = -4;
        }
        LOWORD(v170) = v30;
        WORD1(v170) = v31 + 2;
      }
      else
      {
        LOWORD(v30) = v170;
      }
      v159 = 0;
      if ( (_WORD)v30 )
      {
        v32 = (unsigned __int16)v30 + 2;
        v150 = v32;
        v33 = 0;
        v151 = 0;
        if ( v32 > HIWORD(v205) )
        {
          if ( v32 <= 0xFFFE )
          {
            v120 = ((unsigned __int16)v30 + 65) & 0xFFFFFFC0;
            v150 = v120;
            v121 = v120;
            if ( v120 > 0xFFFE )
            {
              LOWORD(v120) = -2;
              v150 = 65534;
              v121 = 65534;
            }
            if ( v206 == v207 )
            {
              StringRoutine = (void *)NtdllpAllocateStringRoutine(v121, v206);
              v178 = StringRoutine;
              if ( StringRoutine && (_WORD)v205 )
                memmove(StringRoutine, v206, (unsigned __int16)v205);
            }
            else
            {
              StringRoutine = (void *)NtdllpReallocateStringRoutine(v121);
              v178 = StringRoutine;
            }
            if ( StringRoutine )
            {
              v206 = StringRoutine;
              HIWORD(v205) = v120;
            }
            else
            {
              v33 = -1073741801;
              v151 = -1073741801;
            }
            v19 = v146;
            v18 = v157;
          }
          else
          {
            v33 = -1073741562;
            v151 = -1073741562;
          }
        }
        v159 = v33;
        if ( v33 >= 0 )
        {
          memmove((char *)v206 + (unsigned __int16)v205, (const void *)v28, (unsigned __int16)v30);
          LOWORD(v205) = v30 + v205;
          *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
        }
        v17 = 0;
      }
      v165 = 0;
      v34 = (unsigned __int16)v205 + 22;
      v152 = v34;
      v35 = 0;
      v153 = 0;
      if ( v34 > HIWORD(v205) )
      {
        if ( v34 <= 0xFFFE )
        {
          v123 = ((unsigned __int16)v205 + 85) & 0xFFFFFFC0;
          v152 = v123;
          v124 = v123;
          if ( v123 > 0xFFFE )
          {
            LOWORD(v123) = -2;
            v152 = 65534;
            v124 = 65534;
          }
          if ( v206 == v207 )
          {
            v125 = (void *)NtdllpAllocateStringRoutine(v124, v206);
            v179 = v125;
            if ( v125 && (_WORD)v205 )
              memmove(v125, v206, (unsigned __int16)v205);
          }
          else
          {
            v125 = (void *)NtdllpReallocateStringRoutine(v124);
            v179 = v125;
          }
          if ( v125 )
          {
            v206 = v125;
            HIWORD(v205) = v123;
          }
          else
          {
            v35 = -1073741801;
            v153 = -1073741801;
          }
        }
        else
        {
          v35 = -1073741562;
          v153 = -1073741562;
        }
      }
      v165 = v35;
      if ( v35 >= 0 )
      {
        v36 = (char *)v206 + (unsigned __int16)v205;
        *(_OWORD *)v36 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v36 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v205) = v205 + 20;
        *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
      }
      v160 = 0;
      v37 = v172;
      v38 = v172 + (unsigned __int16)v205 + 2;
      LODWORD(v146) = v38;
      FullPath = 0;
      v154 = 0;
      if ( v38 > HIWORD(v205) )
      {
        if ( v38 <= 0xFFFE )
        {
          v126 = (v38 + 63) & 0xFFFFFFC0;
          LODWORD(v146) = v126;
          v127 = v126;
          if ( v126 > 0xFFFE )
          {
            LOWORD(v126) = -2;
            LODWORD(v146) = 65534;
            v127 = 65534;
          }
          if ( v206 == v207 )
          {
            v128 = (void *)NtdllpAllocateStringRoutine(v127, v206);
            v180 = v128;
            if ( v128 && (_WORD)v205 )
              memmove(v128, v206, (unsigned __int16)v205);
          }
          else
          {
            v128 = (void *)NtdllpReallocateStringRoutine(v127);
            v180 = v128;
          }
          if ( v128 )
          {
            v206 = v128;
            HIWORD(v205) = v126;
          }
          else
          {
            FullPath = -1073741801;
            v154 = -1073741801;
          }
          v18 = v157;
          v17 = 0;
        }
        else
        {
          FullPath = -1073741562;
          v154 = -1073741562;
        }
      }
      v160 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)v206 + (unsigned __int16)v205, Src, v37);
        LOWORD(v205) = v37 + v205;
        *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
      }
      v147 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v19->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v138 = v20;
        v18 = &v205;
        v157 = &v205;
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
      v117 = RtlDosApplyFileIsolationRedirection_Ustr(1u, v18, (__int128 *)L"\b\n", 0LL, &v197, 0LL, 0LL, 0LL, 0LL);
      if ( v117 >= 0 )
      {
        v17 = 1;
        LdrpGetFullPath(&v197, &v205);
        LdrpFreeUnicodeString((__int64)&v197);
      }
      if ( v117 != -1072365560 )
      {
        FullPath = v117;
        v147 = v117;
      }
    }
    appended = FullPath;
    v16 = v137;
    v9 = v149;
    v10 = v166;
    v8 = v168;
    goto LABEL_46;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v205, (const void **)v9);
  v136 = FullPath;
  v16 |= 0x10000200u;
  v137 = v16;
LABEL_196:
  if ( FullPath < 0 )
    goto LABEL_312;
  if ( (v16 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 (unsigned int)&v205,
                 *(_QWORD *)(v8 + 16),
                 v16,
                 v167,
                 (__int64)v10,
                 *(_QWORD *)(v8 + 40));
    v136 = FullPath;
    goto LABEL_312;
  }
  if ( !*v11 )
  {
    v175 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
    *v11 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v136 = -1073741801;
      goto LABEL_312;
    }
  }
  v65 = *(_QWORD *)(v8 + 40);
  v164 = v65;
  v64 = v16;
  LODWORD(v146) = v16;
  v66 = *(unsigned __int16 **)(v8 + 16);
  v149 = v66;
  *v10 = 0LL;
  v148 = 0;
  if ( (v16 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName((unsigned int)&v205, 0, v16, (_DWORD)v10, (__int64)&v148);
    v144 = FullPath;
    goto LABEL_94;
  }
  if ( (v16 & 0x200) == 0 )
  {
    v144 = -1073741515;
    goto LABEL_161;
  }
  for ( i = (unsigned __int16)v205 >> 1; i; --i )
  {
    v109 = *((_WORD *)v206 + i - 1);
    if ( v109 == 92 || v109 == 47 )
      break;
  }
  v110 = 2LL * i;
  v111 = (char *)v206 + v110;
  v200 = (char *)v206 + v110;
  v198 = v205 - v110;
  v199 = HIWORD(v205) - v110;
  v112 = 0;
  v162 = 0;
  v185 = (char *)v206 + v110;
  v145 = 0;
  v113 = (unsigned __int16)(v205 - v110) >> 1;
  v161 = v113;
  while ( 1 )
  {
    v114 = v113--;
    v161 = v113;
    if ( !v114 )
      break;
    v115 = *(unsigned __int16 *)v111;
    v111 += 2;
    v185 = v111;
    if ( (unsigned int)v115 >= 0x61 )
    {
      if ( (unsigned int)v115 > 0x7A )
      {
        if ( qword_180184808 )
        {
          if ( (unsigned __int16)v115 >= 0xC0u )
            LOWORD(v115) = *(_WORD *)(qword_180184808
                                    + 2
                                    * ((v115 & 0xF)
                                     + *(unsigned __int16 *)(qword_180184808
                                                           + 2LL
                                                           * (((unsigned __int8)v115 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_180184808
                                                                                                + 2 * (v115 >> 8))))))
                         + v115;
        }
      }
      else
      {
        LOWORD(v115) = v115 - 32;
      }
    }
    v140 = v115;
    v112 = (unsigned __int16)v115 + 65599 * v112;
    v162 = v112;
  }
  v145 = v112;
  v46 = v112;
  if ( !v112 )
  {
    v46 = 0x80000000;
    v145 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v50 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v46 & 0x1F));
  LOBYTE(v51) = 0;
  for ( j = *v50; ; j = (_QWORD *)*j )
  {
    if ( j == v50 )
    {
      v10 = v166;
      goto LABEL_83;
    }
    v53 = (volatile signed __int32 *)(j - 14);
    if ( v46 == *((_DWORD *)j + 38) && (((unsigned __int8)v146 & 8) == 0 || (v53[26] & 1) != 0) )
      break;
LABEL_78:
    ;
  }
  v51 = (unsigned __int16)v205;
  if ( (unsigned __int16)v205 != *((unsigned __int16 *)v53 + 36) )
  {
LABEL_77:
    LOBYTE(v51) = 0;
    goto LABEL_78;
  }
  v54 = (unsigned __int16 *)v206;
  v186 = (unsigned __int16 *)v206;
  v55 = (unsigned __int16 *)*((_QWORD *)v53 + 10);
  v187 = v55;
  while ( v54 < (unsigned __int16 *)((char *)v206 + (unsigned __int16)v205) )
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
    if ( !qword_180184808 )
      goto LABEL_74;
    v51 = 192LL;
    if ( (unsigned __int16)v49 >= 0xC0u )
    {
      v48 = v49 & 0xF;
      v47 = (unsigned int)v48
          + *(unsigned __int16 *)(qword_180184808
                                + 2LL
                                * (((unsigned __int8)v49 >> 4)
                                 + (unsigned int)*(unsigned __int16 *)(qword_180184808 + 2 * (v49 >> 8))));
      LOWORD(v49) = *(_WORD *)(qword_180184808 + 2 * v47) + v49;
      goto LABEL_74;
    }
LABEL_75:
    v141 = v49;
    if ( (unsigned int)v56 >= 0x61 )
    {
      if ( (unsigned int)v56 > 0x7A )
      {
        if ( qword_180184808 && (unsigned __int16)v56 >= 0xC0u )
        {
          v51 = (unsigned __int8)v56 >> 4;
          v48 = v56 & 0xF;
          v47 = (unsigned int)v48
              + *(unsigned __int16 *)(qword_180184808
                                    + 2LL
                                    * ((unsigned int)v51 + *(unsigned __int16 *)(qword_180184808 + 2 * (v56 >> 8))));
          LOWORD(v56) = *(_WORD *)(qword_180184808 + 2 * v47) + v56;
        }
      }
      else
      {
        LOWORD(v56) = v56 - 32;
      }
    }
    v142 = v56;
    if ( (_WORD)v49 != (_WORD)v56 )
      goto LABEL_77;
LABEL_70:
    v186 = ++v54;
    v187 = ++v55;
  }
  LOBYTE(v51) = 1;
  v57 = *((_QWORD *)v53 + 19);
  if ( *(_DWORD *)(v57 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v57 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v53 + 69);
  v10 = v166;
  *v166 = (__int64)v53;
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
    v51 = (__int64)&v148;
    v148 = *(_DWORD *)(*(_QWORD *)(*v10 + 152) + 56LL);
  }
  v59 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v59 != 1 )
  {
    v48 = -1LL;
    do
    {
      v51 = v59 & 6;
      v97 = 3LL;
      if ( v51 != 2 )
        v97 = -1LL;
      v47 = v59 + v97;
      v98 = v59;
      v59 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v47, v59);
    }
    while ( v98 != v59 );
    if ( v51 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v47, 0LL);
  }
  if ( FullPath < 0 )
    v155 = 3;
  else
    v155 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v51, v47, v48, v49) )
    v63 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v63 = 2147353476LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v130 = (unsigned int)RtlGetCurrentServiceSessionId(v63, v60, v61, v62)
         ? (char *)NtCurrentPeb()->SharedData + 555
         : (char *)2147353477;
    if ( (*v130 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v155, (__int64)&v205, 0LL);
  }
  v144 = FullPath;
  LOWORD(v16) = v137;
  v64 = (int)v146;
  v65 = v164;
  LODWORD(v66) = (_DWORD)v149;
LABEL_94:
  if ( FullPath != -1073741515 )
  {
    v67 = *v10;
    if ( v148 < 0 )
    {
      v203 = *(_OWORD *)(v67 + 72);
      LODWORD(v134) = v148;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3132,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v203,
        v134);
      FullPath = -1073741595;
      v144 = -1073741595;
      LdrpDereferenceModule(*v10);
      *v10 = 0LL;
    }
    else
    {
      v163 = 0;
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
          v201 = NtCurrentTeb();
          if ( (v201->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v68 + 28);
          else
            v163 = -1073741515;
        }
      }
      v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v70 != 1 )
      {
        do
        {
          v101 = v70 & 6;
          v102 = 3LL;
          if ( v101 != 2 )
            v102 = -1LL;
          v103 = v70 + v102;
          v104 = v70;
          v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v103, v70);
        }
        while ( v104 != v70 );
        if ( v101 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v103, 0LL);
      }
      LOWORD(v16) = v137;
    }
    goto LABEL_99;
  }
LABEL_161:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v205, (_DWORD)v66, v64, v156, v167, (__int64)v10, v65);
  v144 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*(_QWORD *)(*v10 + 176));
    v144 = FullPath;
  }
LABEL_99:
  v136 = FullPath;
  if ( *v10 )
  {
    v71 = v16 & 0x400;
    if ( v71 && FullPath == -1073741515 )
    {
      v131 = *(_QWORD *)(*v10 + 176);
      v202 = v131;
      *(_DWORD *)(v131 + 32) |= 0x4000000u;
      LdrpProcessWork(v131, 1);
      FullPath = **(_DWORD **)(v131 + 40);
      v136 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v72 = *v10;
    v73 = v72;
    v188 = *v10;
    if ( v72 )
    {
      v74 = *(_QWORD *)(v72 + 176);
      if ( v74 )
      {
        if ( (*(_DWORD *)(v74 + 32) & 0x80000) == 0 && *(_QWORD *)(v74 + 56) != v72 )
        {
          v73 = *(_QWORD *)(v74 + 56);
          v188 = v73;
          *(_QWORD *)(v74 + 56) = v72;
        }
      }
    }
    v190 = v73;
    v75 = (__int64 *)v158;
    *(_DWORD *)(*(_QWORD *)v158 + 24LL) &= ~1u;
    v76 = *v75;
    v169 = *v75;
    v77 = v168;
    v78 = *(_QWORD *)(v73 + 152);
    v79 = *(_QWORD *)(*(_QWORD *)(v168 + 56) + 152LL);
    if ( v79 == v78
      || *(_DWORD *)(v78 + 56) == 9 && (*(_DWORD *)(v78 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_106;
    }
    v91 = *(_QWORD **)(v79 + 40);
    if ( v91 )
    {
      v92 = *(_QWORD **)(v79 + 40);
      while ( 1 )
      {
        v92 = (_QWORD *)*v92;
        if ( v92[1] == v78 )
          break;
        if ( v92 == v91 )
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
        v177 = NtdllBaseTag + 2359296;
        v132 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
        v76 = v132;
        v169 = v132;
        if ( !v132 )
        {
          MEMORY[0] = -1073741801;
          v76 = 0LL;
          v75 = (__int64 *)v158;
          goto LABEL_108;
        }
        *(_DWORD *)(v132 + 24) |= 1u;
      }
      v93 = *(__int64 **)(v79 + 40);
      if ( v93 )
      {
        *(_QWORD *)v76 = *v93;
        *v93 = v76;
      }
      else
      {
        *(_QWORD *)v76 = v76;
      }
      *(_QWORD *)(v79 + 40) = v76;
      *(_QWORD *)(v76 + 8) = v78;
      v80 = v76 + 16;
      v94 = *(signed __int64 **)(v78 + 48);
      if ( v94 )
      {
        *(_QWORD *)v80 = *v94;
        *v94 = v80;
      }
      else
      {
        *(_QWORD *)v80 = v80;
      }
      *(_QWORD *)(v78 + 48) = v80;
      v95 = (*(_DWORD *)(v76 + 24) & 1) == 0;
      v96 = *(_DWORD *)(v76 + 24) & 1;
      *(_QWORD *)(v76 + 24) = v79;
      if ( !v95 )
        *(_DWORD *)(v76 + 24) = v96 | v79 & 0xFFFFFFFE;
      v76 = 0LL;
      v169 = 0LL;
      v75 = (__int64 *)v158;
    }
LABEL_108:
    v189 = v76;
    *v75 = v76;
    if ( FullPath == -1073741515 )
    {
      if ( !v71 )
      {
        LdrpQueueWork(*(_QWORD *)(v73 + 176));
        v136 = 0;
        v75 = (__int64 *)v158;
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
      v136 = 0;
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
        v136 = 259;
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
      v90 = *(_QWORD *)(v73 + 136);
      if ( (unsigned __int64)(v90 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v90);
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
        v99 = 3LL;
        if ( v75 != (__int64 *)2 )
          v99 = -1LL;
        v80 = v84 + v99;
        v100 = v84;
        v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v80, v84);
      }
      while ( v100 != v84 );
      if ( v75 == (__int64 *)2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v80, 0LL);
    }
    v85 = v190;
    if ( v190 != *v10 )
    {
      LdrpFreeReplacedModule(*v10, v80, v75);
      *v10 = v85;
    }
    FullPath = v136;
  }
LABEL_312:
  RtlDeactivateActivationContextUnsafeFast(&v191);
  if ( v207 != v206 )
    NtdllpFreeStringRoutine(v206);
  return (unsigned int)FullPath;
}
