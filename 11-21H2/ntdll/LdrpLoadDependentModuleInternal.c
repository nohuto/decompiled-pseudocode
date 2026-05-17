/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x18003D8F0
 * Callers:
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleW @ 0x1800E1870 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     RtlpWakeSRWLock @ 0x18001E4A4 (RtlpWakeSRWLock.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     ApiSetResolveToHost @ 0x180044D4C (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18004DE38 (LdrpAllocatePlaceHolder.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpQueueWork @ 0x1800559C0 (LdrpQueueWork.c)
 *     LdrpFreeReplacedModule @ 0x18006B238 (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x180075920 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8D80 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E0AA4 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(int *a1, __int64 a2, __int64 a3, int a4, __int64 *a5, _QWORD *a6)
{
  int v6; // r10d
  __int64 v7; // r9
  __int64 v8; // r15
  int *v9; // r11
  __int64 *v10; // r12
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  int v15; // edi
  int FullPath; // ebx
  char v17; // r15
  int *v18; // r14
  struct _PEB *v19; // r13
  char v20; // r12
  int v21; // ebx
  void *ApiSetMap; // rdi
  char v23; // si
  unsigned __int16 v24; // di
  unsigned __int16 v25; // ax
  int *SharedData; // rcx
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  __int16 v30; // ax
  unsigned int v31; // ecx
  int v32; // esi
  unsigned int v33; // ecx
  int v34; // ebx
  char *v35; // rdx
  size_t v36; // rdi
  unsigned int v37; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v39; // rsi
  const char *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  _WORD *v44; // rax
  __int16 v45; // cx
  unsigned int v46; // r14d
  _QWORD **v47; // rsi
  char v48; // cl
  _QWORD *v49; // r15
  volatile signed __int32 *v50; // rdi
  unsigned __int16 *v51; // rax
  unsigned __int16 *v52; // r10
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r11
  __int64 v55; // rax
  signed __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r9
  __int64 v60; // rcx
  int v61; // esi
  __int64 v62; // r14
  int *v63; // r15
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // r9
  __int64 v68; // rcx
  int v69; // eax
  signed __int64 v70; // rax
  int v71; // edi
  unsigned __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r13
  __int64 v79; // r14
  __int64 v80; // r15
  unsigned __int64 v81; // rdx
  int v82; // ecx
  __int64 v83; // rax
  signed __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  _QWORD *v88; // rbx
  _QWORD *v89; // rdi
  volatile signed __int32 *v90; // rcx
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  __int64 *v93; // rdx
  unsigned __int64 *v94; // r8
  bool v95; // zf
  int v96; // eax
  signed __int64 v97; // r8
  __int64 v98; // rdx
  signed __int64 v99; // rdx
  signed __int64 v100; // rtt
  signed __int64 v101; // rcx
  __int64 v102; // rdx
  signed __int64 v103; // rdx
  signed __int64 v104; // rtt
  signed __int64 v105; // rcx
  __int64 v106; // rdx
  signed __int64 v107; // rtt
  __int16 v108; // dx
  _WORD *v109; // rcx
  _WORD *v110; // rax
  unsigned __int64 v111; // r8
  char *v112; // rdx
  char *i; // r9
  char *v114; // rcx
  __int16 v115; // cx
  int v116; // r10d
  int v117; // r11d
  int v118; // eax
  __int64 Heap; // rax
  int v120; // edi
  unsigned __int64 v121; // rdx
  _WORD *v122; // rax
  unsigned int v123; // r13d
  unsigned int v124; // eax
  void *StringRoutine; // rcx
  unsigned int v126; // edi
  unsigned int v127; // eax
  void *v128; // rsi
  unsigned int v129; // r13d
  unsigned int v130; // eax
  void *v131; // r14
  __int64 v132; // rcx
  unsigned __int16 v133; // cx
  char *v134; // rcx
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // r8
  unsigned __int64 v137; // r9
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v141; // [rsp+30h] [rbp-418h]
  char v142; // [rsp+51h] [rbp-3F7h] BYREF
  char v143; // [rsp+52h] [rbp-3F6h]
  int v144; // [rsp+54h] [rbp-3F4h]
  int v145; // [rsp+58h] [rbp-3F0h]
  char v146; // [rsp+5Ch] [rbp-3ECh]
  char v147; // [rsp+5Dh] [rbp-3EBh]
  __int16 v148; // [rsp+5Eh] [rbp-3EAh]
  __int16 v149; // [rsp+60h] [rbp-3E8h]
  __int16 v150; // [rsp+62h] [rbp-3E6h]
  int appended; // [rsp+64h] [rbp-3E4h]
  int v152; // [rsp+68h] [rbp-3E0h]
  int v153; // [rsp+70h] [rbp-3D8h]
  unsigned int v154; // [rsp+78h] [rbp-3D0h]
  int v155; // [rsp+7Ch] [rbp-3CCh]
  int v156; // [rsp+80h] [rbp-3C8h] BYREF
  int *v157; // [rsp+88h] [rbp-3C0h]
  int v158; // [rsp+90h] [rbp-3B8h]
  int v159; // [rsp+98h] [rbp-3B0h]
  int v160; // [rsp+A0h] [rbp-3A8h]
  int v161; // [rsp+A8h] [rbp-3A0h]
  int v162; // [rsp+ACh] [rbp-39Ch]
  int v163; // [rsp+B0h] [rbp-398h]
  int v164; // [rsp+B4h] [rbp-394h]
  __int64 v165; // [rsp+B8h] [rbp-390h]
  int *v166; // [rsp+C0h] [rbp-388h]
  struct _PEB *v167; // [rsp+C8h] [rbp-380h]
  int v168; // [rsp+D0h] [rbp-378h]
  int v169; // [rsp+D4h] [rbp-374h]
  int v170; // [rsp+D8h] [rbp-370h]
  int v171; // [rsp+DCh] [rbp-36Ch]
  int v172; // [rsp+E0h] [rbp-368h]
  __int64 v173; // [rsp+E8h] [rbp-360h]
  int v174; // [rsp+F0h] [rbp-358h]
  char *v175; // [rsp+F8h] [rbp-350h]
  __int64 *v176; // [rsp+100h] [rbp-348h]
  __int64 v177; // [rsp+108h] [rbp-340h]
  void *v178; // [rsp+110h] [rbp-338h]
  __int64 v179; // [rsp+118h] [rbp-330h]
  __int64 v180; // [rsp+120h] [rbp-328h]
  __int64 v181; // [rsp+128h] [rbp-320h]
  __int64 v182; // [rsp+130h] [rbp-318h]
  unsigned __int16 v183; // [rsp+138h] [rbp-310h] BYREF
  void *Src; // [rsp+140h] [rbp-308h]
  int v185; // [rsp+148h] [rbp-300h]
  int v186; // [rsp+14Ch] [rbp-2FCh]
  __int64 v187; // [rsp+150h] [rbp-2F8h]
  int v188; // [rsp+158h] [rbp-2F0h]
  void *v189; // [rsp+160h] [rbp-2E8h]
  void *v190; // [rsp+168h] [rbp-2E0h]
  int *v191; // [rsp+170h] [rbp-2D8h]
  _WORD *v192; // [rsp+178h] [rbp-2D0h]
  _WORD *v193; // [rsp+180h] [rbp-2C8h]
  _WORD *v194; // [rsp+188h] [rbp-2C0h]
  char *v195; // [rsp+190h] [rbp-2B8h]
  unsigned __int16 *v196; // [rsp+198h] [rbp-2B0h]
  unsigned __int16 *v197; // [rsp+1A0h] [rbp-2A8h]
  __int64 v198; // [rsp+1A8h] [rbp-2A0h]
  __int64 v199; // [rsp+1B0h] [rbp-298h]
  __int64 v200; // [rsp+1B8h] [rbp-290h]
  __int64 v201; // [rsp+1C0h] [rbp-288h] BYREF
  int v202; // [rsp+1C8h] [rbp-280h]
  __int128 v203; // [rsp+1D0h] [rbp-278h] BYREF
  __int128 v204; // [rsp+1E0h] [rbp-268h]
  __int128 v205; // [rsp+1F0h] [rbp-258h]
  __int64 v206; // [rsp+200h] [rbp-248h]
  _BYTE v207[16]; // [rsp+210h] [rbp-238h] BYREF
  __int16 v208; // [rsp+220h] [rbp-228h]
  __int16 v209; // [rsp+222h] [rbp-226h]
  char *v210; // [rsp+228h] [rbp-220h]
  struct _TEB *v211; // [rsp+230h] [rbp-218h]
  __int64 v212; // [rsp+238h] [rbp-210h]
  __int128 v213; // [rsp+240h] [rbp-208h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-1F8h] BYREF
  int v215; // [rsp+2F0h] [rbp-158h] BYREF
  void *v216; // [rsp+2F8h] [rbp-150h]
  _WORD v217[128]; // [rsp+300h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+448h] [rbp+0h]

  v6 = a4;
  v164 = a4;
  v7 = a3;
  v177 = a3;
  v8 = a2;
  v179 = a2;
  v9 = a1;
  v157 = a1;
  v10 = a5;
  v176 = a5;
  v11 = a6;
  v165 = (__int64)a6;
  v216 = v217;
  v215 = 0x1000000;
  v217[0] = 0;
  v201 = 72LL;
  v202 = 1;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v12 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v204 + 1) = ~ActiveFrame;
  *(_QWORD *)&v205 = ~v12;
  *((_QWORD *)&v205 + 1) = retaddr;
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
    v9 = v157;
    v7 = v177;
    v6 = v164;
    goto LABEL_7;
  }
  *(_QWORD *)&v203 = ActiveFrame;
  *((_QWORD *)&v203 + 1) = v12;
  LODWORD(v204) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v12 )
      goto LABEL_6;
  }
  else if ( !v12 )
  {
LABEL_6:
    LODWORD(v204) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v203;
LABEL_7:
  v15 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v145 = v15;
  if ( v6 != 9 )
  {
    FullPath = 0;
    appended = 0;
    v17 = 0;
    v143 = 0;
    if ( (v15 & 0x800008) != 0 )
    {
LABEL_42:
      if ( FullPath < 0 )
        goto LABEL_227;
      v39 = v9;
      v191 = v9;
      if ( !(_WORD)v215 )
      {
        v121 = *((_QWORD *)v9 + 1);
        v122 = (_WORD *)(v121 + *(unsigned __int16 *)v9);
        v192 = v122;
        while ( 1 )
        {
          v192 = --v122;
          if ( (unsigned __int64)v122 < v121 )
            break;
          if ( *v122 == 92 || *v122 == 47 )
          {
            if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9) != 5 )
            {
              FullPath = LdrpGetFullPath(v132, &v215);
              appended = FullPath;
              if ( FullPath >= 0 )
              {
                v15 |= 0x600u;
                v145 = v15;
              }
              goto LABEL_49;
            }
LABEL_223:
            appended = LdrpAppendUnicodeStringToFilenameBuffer(&v215, v9, ActivationContextStackPointer, v7);
            FullPath = appended;
            goto LABEL_49;
          }
        }
        v15 |= 0x20u;
        v145 = v15;
        goto LABEL_223;
      }
      if ( v17 )
        v40 = "SxS";
      else
        v40 = "API set";
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2679,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        v9,
        &v215,
        v40);
      v15 |= 0x200u;
      v145 = v15;
      if ( v17 )
      {
        v15 |= 4u;
        v145 = v15;
      }
      v39 = &v215;
      v191 = &v215;
LABEL_49:
      if ( FullPath < 0 )
        goto LABEL_227;
      v43 = *((_QWORD *)v39 + 1);
      v44 = (_WORD *)(v43 + *(unsigned __int16 *)v39);
      v193 = v44;
      v147 = 0;
      while ( 1 )
      {
        v193 = --v44;
        if ( (unsigned __int64)v44 < v43 )
        {
LABEL_224:
          FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v215, L"\b\n", v41, v42);
          appended = FullPath;
          goto LABEL_186;
        }
        v45 = *v44;
        if ( *v44 == 46 )
          break;
        if ( v45 == 47 || v45 == 92 )
          goto LABEL_224;
      }
      v147 = 1;
      v108 = v215;
      v109 = v216;
      v110 = (char *)v216 + (unsigned __int16)v215;
      v194 = v110;
      while ( 1 )
      {
        v194 = --v110;
        if ( v110 < v109 || *v110 != 46 )
          break;
        v108 -= 2;
        LOWORD(v215) = v108;
        v109 = v216;
      }
      v110[1] = 0;
LABEL_186:
      if ( FullPath < 0 )
      {
LABEL_227:
        LODWORD(v141) = FullPath;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2737,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          v157,
          v141);
      }
      v144 = FullPath;
      v8 = v179;
      v11 = (_QWORD *)v165;
      goto LABEL_188;
    }
    v18 = v9;
    v166 = v9;
    v19 = NtCurrentPeb();
    v167 = v19;
    v143 = 0;
    v20 = 1;
    v146 = 1;
    v21 = v7 + 88;
    ApiSetMap = v19->ApiSetMap;
    LdrpLogDllState(0LL, v9, 5328LL);
    FullPath = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v157, v21, (unsigned int)&v142, (__int64)&v183);
    v23 = v142;
    if ( FullPath >= 0 && v142 )
    {
      v24 = v183;
      if ( v183 )
        v25 = 5329;
      else
        v25 = 5330;
    }
    else
    {
      v25 = 5331;
      v24 = v183;
    }
    LdrpLogDllState(0LL, v18, v25);
    v155 = FullPath;
    if ( v23 )
    {
      if ( !v24 )
      {
        FullPath = -1073740671;
        goto LABEL_214;
      }
      ActivationContextStackPointer = 0LL;
      LOWORD(v215) = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( SharedData && (v185 = *SharedData) != 0 )
        v27 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v27 = 2147352624LL;
      v187 = v27;
      v181 = 0LL;
      v182 = v27;
      if ( v27 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( *(_WORD *)(v27 + 2 * v28) );
        v29 = 2 * v28;
        v173 = v29;
        v30 = v29;
        if ( v29 >= 0xFFFE )
        {
          LOWORD(v29) = -4;
          v173 = 65532LL;
          v30 = -4;
        }
        LOWORD(v181) = v29;
        WORD1(v181) = v30 + 2;
      }
      else
      {
        LOWORD(v29) = v181;
      }
      v168 = 0;
      if ( (_WORD)v29 )
      {
        v31 = (unsigned __int16)v29 + 2;
        v158 = v31;
        v32 = 0;
        v159 = 0;
        if ( v31 > HIWORD(v215) )
        {
          if ( v31 <= 0xFFFE )
          {
            v123 = ((unsigned __int16)v29 + 65) & 0xFFFFFFC0;
            v158 = v123;
            v124 = v123;
            if ( v123 > 0xFFFE )
            {
              LOWORD(v123) = -2;
              v158 = 65534;
              v124 = 65534;
            }
            if ( v216 == v217 )
            {
              StringRoutine = (void *)NtdllpAllocateStringRoutine(v124);
              v178 = StringRoutine;
              if ( StringRoutine && (_WORD)v215 )
              {
                memmove(StringRoutine, v216, (unsigned __int16)v215);
                StringRoutine = v178;
              }
            }
            else
            {
              StringRoutine = (void *)NtdllpReallocateStringRoutine(v124);
              v178 = StringRoutine;
            }
            ActivationContextStackPointer = 0LL;
            if ( StringRoutine )
            {
              v216 = StringRoutine;
              HIWORD(v215) = v123;
            }
            else
            {
              v32 = -1073741801;
              v159 = -1073741801;
            }
            v19 = v167;
          }
          else
          {
            v32 = -1073741562;
            v159 = -1073741562;
          }
        }
        v168 = v32;
        if ( v32 >= 0 )
        {
          memmove((char *)v216 + (unsigned __int16)v215, (const void *)v27, (unsigned __int16)v29);
          LOWORD(v215) = v29 + v215;
          ActivationContextStackPointer = 0LL;
          *((_WORD *)v216 + ((unsigned __int64)(unsigned __int16)v215 >> 1)) = 0;
        }
        LODWORD(v18) = (_DWORD)v166;
      }
      v169 = 0;
      v33 = (unsigned __int16)v215 + 22;
      v160 = v33;
      v34 = 0;
      v161 = 0;
      if ( v33 > HIWORD(v215) )
      {
        if ( v33 <= 0xFFFE )
        {
          v126 = ((unsigned __int16)v215 + 85) & 0xFFFFFFC0;
          v160 = v126;
          v127 = v126;
          if ( v126 > 0xFFFE )
          {
            LOWORD(v126) = -2;
            v160 = 65534;
            v127 = 65534;
          }
          if ( v216 == v217 )
          {
            v128 = (void *)NtdllpAllocateStringRoutine(v127);
            v189 = v128;
            if ( v128 && (_WORD)v215 )
              memmove(v128, v216, (unsigned __int16)v215);
          }
          else
          {
            v128 = (void *)NtdllpReallocateStringRoutine(v127);
            v189 = v128;
          }
          ActivationContextStackPointer = 0LL;
          if ( v128 )
          {
            v216 = v128;
            HIWORD(v215) = v126;
          }
          else
          {
            v34 = -1073741801;
            v161 = -1073741801;
          }
        }
        else
        {
          v34 = -1073741562;
          v161 = -1073741562;
        }
      }
      v169 = v34;
      if ( v34 >= 0 )
      {
        v35 = (char *)v216 + (unsigned __int16)v215;
        *(_OWORD *)v35 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v35 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v215) = v215 + 20;
        *((_WORD *)v216 + ((unsigned __int64)(unsigned __int16)v215 >> 1)) = 0;
      }
      v174 = 0;
      v36 = v183;
      v37 = v183 + (unsigned __int16)v215 + 2;
      v153 = v37;
      FullPath = 0;
      v162 = 0;
      if ( v37 > HIWORD(v215) )
      {
        if ( v37 <= 0xFFFE )
        {
          v129 = (v37 + 63) & 0xFFFFFFC0;
          v153 = v129;
          v130 = v129;
          if ( v129 > 0xFFFE )
          {
            LOWORD(v129) = -2;
            v153 = 65534;
            v130 = 65534;
          }
          if ( v216 == v217 )
          {
            v131 = (void *)NtdllpAllocateStringRoutine(v130);
            v190 = v131;
            if ( v131 && (_WORD)v215 )
              memmove(v131, v216, (unsigned __int16)v215);
          }
          else
          {
            v131 = (void *)NtdllpReallocateStringRoutine(v130);
            v190 = v131;
          }
          if ( v131 )
          {
            v216 = v131;
            HIWORD(v215) = v129;
          }
          else
          {
            FullPath = -1073741801;
            v162 = -1073741801;
          }
          v19 = v167;
          LODWORD(v18) = (_DWORD)v166;
        }
        else
        {
          FullPath = -1073741562;
          v162 = -1073741562;
        }
      }
      v174 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)v216 + (unsigned __int16)v215, Src, v36);
        LOWORD(v215) = v36 + v215;
        *((_WORD *)v216 + ((unsigned __int64)(unsigned __int16)v215 >> 1)) = 0;
      }
      v155 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v19->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v146 = v20;
        v18 = &v215;
        v166 = &v215;
      }
    }
    if ( FullPath < 0 || !v20 || LdrpIsSecureProcess )
      goto LABEL_41;
    v120 = RtlDosApplyFileIsolationRedirection_Ustr(
             1,
             (_DWORD)v18,
             (unsigned int)L"\b\n",
             0,
             (__int64)v207,
             0LL,
             0LL,
             0LL,
             0LL);
    if ( v120 >= 0 )
    {
      v17 = 1;
      v143 = 1;
      LdrpGetFullPath(v207, &v215);
      LdrpFreeUnicodeString(v207);
    }
    if ( v120 == -1072365560 )
      goto LABEL_41;
    FullPath = v120;
LABEL_214:
    v155 = FullPath;
LABEL_41:
    appended = FullPath;
    v15 = v145;
    v9 = v157;
    v10 = v176;
    goto LABEL_42;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v215, v9, ActivationContextStackPointer, v7);
  v144 = FullPath;
  v15 |= 0x200u;
  v145 = v15;
LABEL_188:
  if ( FullPath < 0 )
    goto LABEL_306;
  if ( (v15 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 (unsigned int)&v215,
                 *(_QWORD *)(v8 + 16),
                 v15,
                 v177,
                 (__int64)v10,
                 *(_QWORD *)(v8 + 40));
    v144 = FullPath;
    goto LABEL_306;
  }
  if ( !*v11 )
  {
    v188 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 32LL);
    *v11 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v144 = -1073741801;
      goto LABEL_306;
    }
  }
  v62 = *(_QWORD *)(v8 + 40);
  v173 = v62;
  v61 = v15;
  v153 = v15;
  v63 = *(int **)(v8 + 16);
  v157 = v63;
  v111 = 0LL;
  *v10 = 0LL;
  v156 = 0;
  if ( (v15 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName((unsigned int)&v215, 0, v15, (_DWORD)v10, (__int64)&v156);
    v152 = FullPath;
    goto LABEL_89;
  }
  if ( (v15 & 0x200) == 0 )
  {
    v152 = -1073741515;
    goto LABEL_159;
  }
  v112 = (char *)v216 + (unsigned __int16)v215;
  v175 = v112;
  for ( i = v112 - 2; ; i -= 2 )
  {
    v114 = i;
    v175 = i;
    if ( i <= v216 )
      break;
    if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
    {
      i += 2;
      v175 = v114 + 2;
      LOWORD(v114) = (_WORD)v114 + 2;
      break;
    }
  }
  v115 = (_WORD)v114 - (_WORD)v216;
  v210 = i;
  v208 = v215 - v115;
  v209 = HIWORD(v215) - v115;
  v116 = 0;
  v171 = 0;
  v195 = i;
  v154 = 0;
  v117 = (unsigned __int16)(v215 - v115) >> 1;
  v170 = v117;
  while ( 1 )
  {
    v118 = v117--;
    v170 = v117;
    if ( !v118 )
      break;
    v111 = *(unsigned __int16 *)i;
    i += 2;
    v195 = i;
    if ( (unsigned int)v111 < 0x61 )
      goto LABEL_204;
    if ( (unsigned int)v111 <= 0x7A )
    {
      LOWORD(v111) = v111 - 32;
LABEL_204:
      v148 = v111;
      goto LABEL_205;
    }
    if ( !qword_1801776F8 || (unsigned __int16)v111 < 0xC0u )
      goto LABEL_204;
    v112 = (char *)(v111 & 0xF);
    v133 = v111
         + *(_WORD *)(qword_1801776F8
                    + 2LL
                    * ((unsigned int)v112
                     + *(unsigned __int16 *)(qword_1801776F8
                                           + 2LL
                                           * (((unsigned __int8)v111 >> 4)
                                            + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v111 >> 8))))));
    v111 = v133;
    v148 = v133;
LABEL_205:
    v116 = (unsigned __int16)v111 + 65599 * v116;
    v171 = v116;
  }
  v154 = v116;
  v46 = v116;
  if ( !v116 )
  {
    v46 = 0x80000000;
    v154 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(
    (unsigned __int64)&LdrpModuleDatatableLock,
    (unsigned __int64)v112,
    v111,
    (unsigned __int64)i);
  v47 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v46 & 0x1F));
  v48 = 0;
  v49 = *v47;
  while ( 2 )
  {
    if ( v49 == v47 )
    {
      v10 = v176;
      goto LABEL_80;
    }
    v50 = (volatile signed __int32 *)(v49 - 14);
    if ( v46 != *((_DWORD *)v49 + 38) || (v153 & 8) != 0 && (v50[26] & 1) == 0 )
    {
LABEL_75:
      v49 = (_QWORD *)*v49;
      continue;
    }
    break;
  }
  if ( (unsigned __int16)v215 != *((unsigned __int16 *)v50 + 36) )
  {
LABEL_74:
    v48 = 0;
    goto LABEL_75;
  }
  v51 = (unsigned __int16 *)v216;
  v196 = (unsigned __int16 *)v216;
  v52 = (unsigned __int16 *)*((_QWORD *)v50 + 10);
  v197 = v52;
  while ( v51 < (unsigned __int16 *)((char *)v216 + (unsigned __int16)v215) )
  {
    v53 = *v51;
    v54 = *v52;
    if ( (_WORD)v53 == (_WORD)v54 )
      goto LABEL_66;
    if ( (unsigned int)v53 < 0x61 )
      goto LABEL_70;
    if ( (unsigned int)v53 <= 0x7A )
    {
      LOWORD(v53) = v53 - 32;
LABEL_70:
      v149 = v53;
      goto LABEL_71;
    }
    if ( !qword_1801776F8 || (unsigned __int16)v53 < 0xC0u )
      goto LABEL_70;
    LOWORD(v53) = v53
                + *(_WORD *)(qword_1801776F8
                           + 2
                           * ((v53 & 0xF)
                            + *(unsigned __int16 *)(qword_1801776F8
                                                  + 2LL
                                                  * (((unsigned __int8)v53 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v53 >> 8))))));
    v149 = v53;
LABEL_71:
    if ( (unsigned int)v54 < 0x61 )
      goto LABEL_72;
    if ( (unsigned int)v54 <= 0x7A )
    {
      LOWORD(v54) = v54 - 32;
LABEL_72:
      v150 = v54;
      goto LABEL_73;
    }
    if ( !qword_1801776F8 || (unsigned __int16)v54 < 0xC0u )
      goto LABEL_72;
    LOWORD(v54) = v54
                + *(_WORD *)(qword_1801776F8
                           + 2
                           * ((v54 & 0xF)
                            + *(unsigned __int16 *)(qword_1801776F8
                                                  + 2LL
                                                  * (((unsigned __int8)v54 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v54 >> 8))))));
    v150 = v54;
LABEL_73:
    if ( (_WORD)v53 != (_WORD)v54 )
      goto LABEL_74;
LABEL_66:
    v196 = ++v51;
    v197 = ++v52;
  }
  v48 = 1;
  v55 = *((_QWORD *)v50 + 19);
  if ( *(_DWORD *)(v55 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v55 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v50 + 69);
  v10 = v176;
  *v176 = (__int64)v50;
LABEL_80:
  if ( v48 )
  {
    FullPath = 0;
    v156 = *(_DWORD *)(*(_QWORD *)(*v10 + 152) + 56LL);
  }
  else
  {
    FullPath = -1073741515;
  }
  v56 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v56 != 1 )
  {
    do
    {
      v101 = v56 & 6;
      v102 = 3LL;
      if ( v101 != 2 )
        v102 = -1LL;
      v103 = v56 + v102;
      v104 = v56;
      v56 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v103, v56);
    }
    while ( v104 != v56 );
    if ( v101 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v103, 0);
  }
  if ( FullPath < 0 )
    v163 = 3;
  else
    v163 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v60 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v60 = 2147353476LL;
  if ( *(_BYTE *)v60 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v134 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v134 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v163, (__int64)&v215, 0LL);
  }
  v152 = FullPath;
  LOWORD(v15) = v145;
  v61 = v153;
  v62 = v173;
  LODWORD(v63) = (_DWORD)v157;
LABEL_89:
  if ( FullPath != -1073741515 )
  {
    v64 = *v10;
    if ( v156 < 0 )
    {
      v213 = *(_OWORD *)(v64 + 72);
      LODWORD(v141) = v156;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3049,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v213,
        v141);
      FullPath = -1073741595;
      v152 = -1073741595;
      LdrpDereferenceModule(*v10, v135, v136, v137);
      v65 = 0LL;
      *v10 = 0LL;
    }
    else
    {
      v172 = 0;
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v57, v58, v59);
      v68 = *(_QWORD *)(v64 + 152);
      v69 = *(_DWORD *)(v68 + 24);
      if ( v69 != -1 )
      {
        if ( v69 )
        {
          *(_DWORD *)(v68 + 24) = v69 + 1;
        }
        else
        {
          v211 = NtCurrentTeb();
          if ( (v211->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v68 + 28);
          else
            v172 = -1073741515;
        }
      }
      v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v70 != 1 )
      {
        v66 = -1LL;
        do
        {
          v105 = v70 & 6;
          v106 = 3LL;
          if ( v105 != 2 )
            v106 = -1LL;
          v65 = v70 + v106;
          v107 = v70;
          v70 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v65, v70);
        }
        while ( v107 != v70 );
        if ( v105 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v65, 0);
      }
      LOWORD(v15) = v145;
    }
    goto LABEL_94;
  }
LABEL_159:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v215, (_DWORD)v63, v61, v164, v177, (__int64)v10, v62);
  v152 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*(_QWORD *)(*v10 + 176));
    v152 = FullPath;
  }
LABEL_94:
  v144 = FullPath;
  if ( *v10 )
  {
    v71 = v15 & 0x400;
    if ( v71 && FullPath == -1073741515 )
    {
      v138 = *(_QWORD *)(*v10 + 176);
      v212 = v138;
      *(_DWORD *)(v138 + 32) |= 0x4000000u;
      LOBYTE(v65) = 1;
      LdrpProcessWork(v138, v65);
      FullPath = **(_DWORD **)(v138 + 40);
      v144 = FullPath;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v65, v66, v67);
    v73 = *v10;
    v74 = v73;
    v198 = *v10;
    if ( v73 )
    {
      v75 = *(_QWORD *)(v73 + 176);
      if ( v75 )
      {
        if ( (*(_DWORD *)(v75 + 32) & 0x80000) == 0 && *(_QWORD *)(v75 + 56) != v73 )
        {
          v74 = *(_QWORD *)(v75 + 56);
          v198 = v74;
          *(_QWORD *)(v75 + 56) = v73;
        }
      }
    }
    v200 = v74;
    v76 = (__int64 *)v165;
    *(_DWORD *)(*(_QWORD *)v165 + 24LL) &= ~1u;
    v77 = *v76;
    v180 = *v76;
    v78 = v179;
    v79 = *(_QWORD *)(v74 + 152);
    v80 = *(_QWORD *)(*(_QWORD *)(v179 + 56) + 152LL);
    if ( v80 == v79
      || *(_DWORD *)(v79 + 56) == 9 && (*(_DWORD *)(v79 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v79 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_101;
    }
    v91 = *(_QWORD **)(v80 + 40);
    if ( v91 )
    {
      v92 = *(_QWORD **)(v80 + 40);
      while ( 1 )
      {
        v92 = (_QWORD *)*v92;
        if ( v92[1] == v79 )
          break;
        if ( v92 == v91 )
          goto LABEL_138;
      }
LABEL_101:
      v81 = *(unsigned int *)(v79 + 24);
      if ( (unsigned int)(v81 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v79 + 24) = v81 - 1;
    }
    else
    {
LABEL_138:
      if ( !v77 )
      {
        v186 = NtdllBaseTag + 2359296;
        v139 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 32LL);
        v77 = v139;
        v180 = v139;
        if ( !v139 )
        {
          MEMORY[0] = -1073741801;
          v77 = 0LL;
          v76 = (__int64 *)v165;
          goto LABEL_103;
        }
        *(_DWORD *)(v139 + 24) |= 1u;
      }
      v93 = *(__int64 **)(v80 + 40);
      if ( v93 )
      {
        *(_QWORD *)v77 = *v93;
        *v93 = v77;
      }
      else
      {
        *(_QWORD *)v77 = v77;
      }
      *(_QWORD *)(v80 + 40) = v77;
      *(_QWORD *)(v77 + 8) = v79;
      v81 = v77 + 16;
      v94 = *(unsigned __int64 **)(v79 + 48);
      if ( v94 )
      {
        *(_QWORD *)v81 = *v94;
        *v94 = v81;
      }
      else
      {
        *(_QWORD *)v81 = v81;
      }
      *(_QWORD *)(v79 + 48) = v81;
      v95 = (*(_DWORD *)(v77 + 24) & 1) == 0;
      v96 = *(_DWORD *)(v77 + 24) & 1;
      *(_QWORD *)(v77 + 24) = v80;
      if ( !v95 )
        *(_DWORD *)(v77 + 24) = v96 | v80 & 0xFFFFFFFE;
      v77 = 0LL;
      v180 = 0LL;
      v76 = (__int64 *)v165;
    }
LABEL_103:
    v199 = v77;
    *v76 = v77;
    if ( FullPath != -1073741515 )
    {
      if ( FullPath != -1073741267 )
        goto LABEL_105;
      v144 = 0;
      goto LABEL_106;
    }
    if ( !v71 )
    {
      LdrpQueueWork(*(_QWORD *)(v74 + 176), v81, v76, v72);
      v144 = 0;
      v76 = (__int64 *)v165;
      goto LABEL_106;
    }
LABEL_105:
    if ( FullPath >= 0 )
    {
LABEL_106:
      v82 = *(_DWORD *)(v78 + 108);
      if ( v82 )
      {
        if ( *v76 || *(int *)(*(_QWORD *)(v74 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v78 + 108) = v82 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v74 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v78 + 80) = v74;
        *(_DWORD *)(v78 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 56) + 152LL) + 56LL) = 3;
        v144 = 259;
      }
    }
    v83 = *(_QWORD *)(v74 + 152);
    if ( *(_DWORD *)(v83 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v83 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v81, (unsigned __int64)v76, v72);
      v86 = *(_QWORD *)(v74 + 160);
      v87 = *(_QWORD **)(v74 + 168);
      if ( *(_QWORD *)(v86 + 8) != v74 + 160 || *v87 != v74 + 160 )
        __fastfail(3u);
      *v87 = v86;
      *(_QWORD *)(v86 + 8) = v87;
      v88 = *(_QWORD **)(v74 + 152);
      v89 = (_QWORD *)*v88;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v74 + 110) )
        LdrpReleaseTlsEntry(v74, 0LL);
      LdrpUnmapModule(v74);
      v90 = *(volatile signed __int32 **)(v74 + 136);
      if ( (unsigned __int64)v90 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v90);
      if ( *(_QWORD *)(v74 + 80) )
        LdrpFreeUnicodeString(v74 + 72);
      RtlFreeHeap(LdrpHeap, 0, v74);
      if ( v89 == v88 )
        LdrpDestroyNode(v88);
    }
    v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v84 != 1 )
    {
      do
      {
        v97 = v84 & 6;
        v98 = 3LL;
        if ( v97 != 2 )
          v98 = -1LL;
        v99 = v84 + v98;
        v100 = v84;
        v84 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v99, v84);
      }
      while ( v100 != v84 );
      if ( v97 == 2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v99, 0);
    }
    v85 = v200;
    if ( v200 != *v10 )
    {
      LdrpFreeReplacedModule(*v10);
      *v10 = v85;
    }
    FullPath = v144;
  }
LABEL_306:
  RtlDeactivateActivationContextUnsafeFast(&v201);
  if ( v217 != v216 )
    NtdllpFreeStringRoutine((__int64)v216);
  return (unsigned int)FullPath;
}
