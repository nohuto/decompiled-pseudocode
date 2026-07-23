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

__int64 __fastcall LdrpLoadDependentModuleInternal(
        PUNICODE_STRING OriginalName,
        __int64 a2,
        __int64 a3,
        int a4,
        char **a5,
        _QWORD *a6)
{
  int v6; // r10d
  __int64 v7; // r9
  __int64 v8; // r15
  PUNICODE_STRING v9; // r11
  char **v10; // r12
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v15; // edi
  int FullPath; // ebx
  char v17; // r15
  _UNICODE_STRING *v18; // r14
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
  __int64 v57; // rcx
  unsigned int v58; // esi
  __int64 v59; // r14
  _UNICODE_STRING *v60; // r15
  char *v61; // rsi
  signed __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  signed __int64 v65; // rax
  int v66; // edi
  __int64 v67; // r9
  char *v68; // rax
  char *v69; // rsi
  __int64 v70; // rcx
  _QWORD *v71; // r8
  _DWORD *v72; // rcx
  __int64 v73; // r13
  __int64 v74; // r14
  __int64 v75; // r15
  _QWORD *v76; // rdx
  int v77; // ecx
  __int64 v78; // rax
  signed __int64 v79; // rax
  char *v80; // rbx
  __int64 v81; // rdx
  char **v82; // rcx
  _QWORD *v83; // rbx
  _QWORD *v84; // rdi
  _ACTIVATION_CONTEXT *v85; // rcx
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  _QWORD *v88; // rdx
  _QWORD *v89; // r8
  bool v90; // zf
  int v91; // eax
  signed __int64 v92; // r8
  __int64 v93; // rdx
  signed __int64 v94; // rdx
  signed __int64 v95; // rtt
  signed __int64 v96; // rcx
  __int64 v97; // rdx
  signed __int64 v98; // rdx
  signed __int64 v99; // rtt
  signed __int64 v100; // rcx
  __int64 v101; // rdx
  signed __int64 v102; // rtt
  __int16 v103; // dx
  _WORD *v104; // rcx
  _WORD *v105; // rax
  char *i; // r9
  char *v107; // rcx
  __int16 v108; // cx
  int v109; // r10d
  int v110; // r11d
  int v111; // eax
  unsigned __int64 v112; // r8
  PVOID Heap; // rax
  NTSTATUS v114; // edi
  wchar_t *Buffer; // rdx
  wchar_t *v116; // rax
  unsigned int v117; // r13d
  unsigned int v118; // eax
  PVOID StringRoutine; // rcx
  unsigned int v120; // edi
  unsigned int v121; // eax
  PVOID v122; // rsi
  unsigned int v123; // r13d
  unsigned int v124; // eax
  PVOID v125; // r14
  __int64 v126; // rcx
  char *v127; // rcx
  __int64 v128; // rbx
  _DWORD *v129; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-418h]
  char v132; // [rsp+51h] [rbp-3F7h] BYREF
  char v133; // [rsp+52h] [rbp-3F6h]
  int v134; // [rsp+54h] [rbp-3F4h]
  unsigned int v135; // [rsp+58h] [rbp-3F0h]
  char v136; // [rsp+5Ch] [rbp-3ECh]
  char v137; // [rsp+5Dh] [rbp-3EBh]
  __int16 v138; // [rsp+5Eh] [rbp-3EAh]
  __int16 v139; // [rsp+60h] [rbp-3E8h]
  __int16 v140; // [rsp+62h] [rbp-3E6h]
  int appended; // [rsp+64h] [rbp-3E4h]
  int v142; // [rsp+68h] [rbp-3E0h]
  int v143; // [rsp+70h] [rbp-3D8h]
  unsigned int v144; // [rsp+78h] [rbp-3D0h]
  int v145; // [rsp+7Ch] [rbp-3CCh]
  int v146; // [rsp+80h] [rbp-3C8h] BYREF
  PUNICODE_STRING v147; // [rsp+88h] [rbp-3C0h]
  int v148; // [rsp+90h] [rbp-3B8h]
  int v149; // [rsp+98h] [rbp-3B0h]
  int v150; // [rsp+A0h] [rbp-3A8h]
  int v151; // [rsp+A8h] [rbp-3A0h]
  int v152; // [rsp+ACh] [rbp-39Ch]
  int v153; // [rsp+B0h] [rbp-398h]
  int v154; // [rsp+B4h] [rbp-394h]
  __int64 v155; // [rsp+B8h] [rbp-390h]
  int *v156; // [rsp+C0h] [rbp-388h]
  struct _PEB *v157; // [rsp+C8h] [rbp-380h]
  int v158; // [rsp+D0h] [rbp-378h]
  int v159; // [rsp+D4h] [rbp-374h]
  int v160; // [rsp+D8h] [rbp-370h]
  int v161; // [rsp+DCh] [rbp-36Ch]
  int v162; // [rsp+E0h] [rbp-368h]
  __int64 v163; // [rsp+E8h] [rbp-360h]
  int v164; // [rsp+F0h] [rbp-358h]
  char *v165; // [rsp+F8h] [rbp-350h]
  char **v166; // [rsp+100h] [rbp-348h]
  __int64 v167; // [rsp+108h] [rbp-340h]
  PVOID v168; // [rsp+110h] [rbp-338h]
  __int64 v169; // [rsp+118h] [rbp-330h]
  _DWORD *v170; // [rsp+120h] [rbp-328h]
  __int64 v171; // [rsp+128h] [rbp-320h]
  __int64 v172; // [rsp+130h] [rbp-318h]
  unsigned __int16 v173; // [rsp+138h] [rbp-310h] BYREF
  void *Src; // [rsp+140h] [rbp-308h]
  int v175; // [rsp+148h] [rbp-300h]
  ULONG v176; // [rsp+14Ch] [rbp-2FCh]
  __int64 v177; // [rsp+150h] [rbp-2F8h]
  ULONG v178; // [rsp+158h] [rbp-2F0h]
  PVOID v179; // [rsp+160h] [rbp-2E8h]
  PVOID v180; // [rsp+168h] [rbp-2E0h]
  int *v181; // [rsp+170h] [rbp-2D8h]
  wchar_t *v182; // [rsp+178h] [rbp-2D0h]
  _WORD *v183; // [rsp+180h] [rbp-2C8h]
  _WORD *v184; // [rsp+188h] [rbp-2C0h]
  char *v185; // [rsp+190h] [rbp-2B8h]
  unsigned __int16 *v186; // [rsp+198h] [rbp-2B0h]
  unsigned __int16 *v187; // [rsp+1A0h] [rbp-2A8h]
  char *v188; // [rsp+1A8h] [rbp-2A0h]
  _DWORD *v189; // [rsp+1B0h] [rbp-298h]
  char *v190; // [rsp+1B8h] [rbp-290h]
  __int64 v191; // [rsp+1C0h] [rbp-288h] BYREF
  int v192; // [rsp+1C8h] [rbp-280h]
  __int128 v193; // [rsp+1D0h] [rbp-278h] BYREF
  __int128 v194; // [rsp+1E0h] [rbp-268h]
  __int128 v195; // [rsp+1F0h] [rbp-258h]
  __int64 v196; // [rsp+200h] [rbp-248h]
  _UNICODE_STRING DynamicString; // [rsp+210h] [rbp-238h] BYREF
  __int16 v198; // [rsp+220h] [rbp-228h]
  __int16 v199; // [rsp+222h] [rbp-226h]
  char *v200; // [rsp+228h] [rbp-220h]
  struct _TEB *v201; // [rsp+230h] [rbp-218h]
  __int64 v202; // [rsp+238h] [rbp-210h]
  __int128 v203; // [rsp+240h] [rbp-208h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-1F8h] BYREF
  int v205; // [rsp+2F0h] [rbp-158h] BYREF
  void *v206; // [rsp+2F8h] [rbp-150h]
  _WORD v207[128]; // [rsp+300h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+448h] [rbp+0h]

  v6 = a4;
  v154 = a4;
  v7 = a3;
  v167 = a3;
  v8 = a2;
  v169 = a2;
  v9 = OriginalName;
  v147 = OriginalName;
  v10 = a5;
  v166 = a5;
  v11 = a6;
  v155 = (__int64)a6;
  v206 = v207;
  v205 = 0x1000000;
  v207[0] = 0;
  v191 = 72LL;
  v192 = 1;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v12 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v194 + 1) = ~ActiveFrame;
  *(_QWORD *)&v195 = ~v12;
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
    v9 = v147;
    v7 = v167;
    v6 = v154;
    goto LABEL_7;
  }
  *(_QWORD *)&v193 = ActiveFrame;
  *((_QWORD *)&v193 + 1) = v12;
  LODWORD(v194) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v12 )
      goto LABEL_6;
  }
  else if ( !v12 )
  {
LABEL_6:
    LODWORD(v194) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v193;
LABEL_7:
  v15 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v135 = v15;
  if ( v6 != 9 )
  {
    FullPath = 0;
    appended = 0;
    v17 = 0;
    v133 = 0;
    if ( (v15 & 0x800008) != 0 )
    {
LABEL_42:
      if ( FullPath < 0 )
        goto LABEL_226;
      v39 = (int *)v9;
      v181 = (int *)v9;
      if ( !(_WORD)v205 )
      {
        Buffer = v9->Buffer;
        v116 = (wchar_t *)((char *)Buffer + v9->Length);
        v182 = v116;
        while ( 1 )
        {
          v182 = --v116;
          if ( v116 < Buffer )
            break;
          if ( *v116 == 92 || *v116 == 47 )
          {
            if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9) != 5 )
            {
              FullPath = LdrpGetFullPath(v126, &v205);
              appended = FullPath;
              if ( FullPath >= 0 )
              {
                v15 |= 0x600u;
                v135 = v15;
              }
              goto LABEL_49;
            }
LABEL_222:
            appended = LdrpAppendUnicodeStringToFilenameBuffer(&v205, v9, ActivationContextStackPointer, v7);
            FullPath = appended;
            goto LABEL_49;
          }
        }
        v15 |= 0x20u;
        v135 = v15;
        goto LABEL_222;
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
        &v205,
        v40);
      v15 |= 0x200u;
      v135 = v15;
      if ( v17 )
      {
        v15 |= 4u;
        v135 = v15;
      }
      v39 = &v205;
      v181 = &v205;
LABEL_49:
      if ( FullPath < 0 )
        goto LABEL_226;
      v43 = *((_QWORD *)v39 + 1);
      v44 = (_WORD *)(v43 + *(unsigned __int16 *)v39);
      v183 = v44;
      v137 = 0;
      while ( 1 )
      {
        v183 = --v44;
        if ( (unsigned __int64)v44 < v43 )
        {
LABEL_223:
          FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v205, &LdrpDefaultExtension, v41, v42);
          appended = FullPath;
          goto LABEL_185;
        }
        v45 = *v44;
        if ( *v44 == 46 )
          break;
        if ( v45 == 47 || v45 == 92 )
          goto LABEL_223;
      }
      v137 = 1;
      v103 = v205;
      v104 = v206;
      v105 = (char *)v206 + (unsigned __int16)v205;
      v184 = v105;
      while ( 1 )
      {
        v184 = --v105;
        if ( v105 < v104 || *v105 != 46 )
          break;
        v103 -= 2;
        LOWORD(v205) = v103;
        v104 = v206;
      }
      v105[1] = 0;
LABEL_185:
      if ( FullPath < 0 )
      {
LABEL_226:
        LODWORD(NewFlags) = FullPath;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2737,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          v147,
          NewFlags);
      }
      v134 = FullPath;
      v8 = v169;
      v11 = (_QWORD *)v155;
      goto LABEL_187;
    }
    v18 = v9;
    v156 = (int *)v9;
    v19 = NtCurrentPeb();
    v157 = v19;
    v133 = 0;
    v20 = 1;
    v136 = 1;
    v21 = v7 + 88;
    ApiSetMap = v19->ApiSetMap;
    LdrpLogDllState(0LL, v9, 5328LL);
    FullPath = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v147, v21, (unsigned int)&v132, (__int64)&v173);
    v23 = v132;
    if ( FullPath >= 0 && v132 )
    {
      v24 = v173;
      if ( v173 )
        v25 = 5329;
      else
        v25 = 5330;
    }
    else
    {
      v25 = 5331;
      v24 = v173;
    }
    LdrpLogDllState(0LL, v18, v25);
    v145 = FullPath;
    if ( v23 )
    {
      if ( !v24 )
      {
        FullPath = -1073740671;
        goto LABEL_213;
      }
      ActivationContextStackPointer = 0LL;
      LOWORD(v205) = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( SharedData && (v175 = *SharedData) != 0 )
        v27 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v27 = 2147352624LL;
      v177 = v27;
      v171 = 0LL;
      v172 = v27;
      if ( v27 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( *(_WORD *)(v27 + 2 * v28) );
        v29 = 2 * v28;
        v163 = v29;
        v30 = v29;
        if ( v29 >= 0xFFFE )
        {
          LOWORD(v29) = -4;
          v163 = 65532LL;
          v30 = -4;
        }
        LOWORD(v171) = v29;
        WORD1(v171) = v30 + 2;
      }
      else
      {
        LOWORD(v29) = v171;
      }
      v158 = 0;
      if ( (_WORD)v29 )
      {
        v31 = (unsigned __int16)v29 + 2;
        v148 = v31;
        v32 = 0;
        v149 = 0;
        if ( v31 > HIWORD(v205) )
        {
          if ( v31 <= 0xFFFE )
          {
            v117 = ((unsigned __int16)v29 + 65) & 0xFFFFFFC0;
            v148 = v117;
            v118 = v117;
            if ( v117 > 0xFFFE )
            {
              LOWORD(v117) = -2;
              v148 = 65534;
              v118 = 65534;
            }
            if ( v206 == v207 )
            {
              StringRoutine = NtdllpAllocateStringRoutine(v118);
              v168 = StringRoutine;
              if ( StringRoutine && (_WORD)v205 )
              {
                memmove(StringRoutine, v206, (unsigned __int16)v205);
                StringRoutine = v168;
              }
            }
            else
            {
              StringRoutine = (PVOID)NtdllpReallocateStringRoutine(v118);
              v168 = StringRoutine;
            }
            ActivationContextStackPointer = 0LL;
            if ( StringRoutine )
            {
              v206 = StringRoutine;
              HIWORD(v205) = v117;
            }
            else
            {
              v32 = -1073741801;
              v149 = -1073741801;
            }
            v19 = v157;
          }
          else
          {
            v32 = -1073741562;
            v149 = -1073741562;
          }
        }
        v158 = v32;
        if ( v32 >= 0 )
        {
          memmove((char *)v206 + (unsigned __int16)v205, (const void *)v27, (unsigned __int16)v29);
          LOWORD(v205) = v29 + v205;
          ActivationContextStackPointer = 0LL;
          *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
        }
        v18 = (_UNICODE_STRING *)v156;
      }
      v159 = 0;
      v33 = (unsigned __int16)v205 + 22;
      v150 = v33;
      v34 = 0;
      v151 = 0;
      if ( v33 > HIWORD(v205) )
      {
        if ( v33 <= 0xFFFE )
        {
          v120 = ((unsigned __int16)v205 + 85) & 0xFFFFFFC0;
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
            v122 = NtdllpAllocateStringRoutine(v121);
            v179 = v122;
            if ( v122 && (_WORD)v205 )
              memmove(v122, v206, (unsigned __int16)v205);
          }
          else
          {
            v122 = (PVOID)NtdllpReallocateStringRoutine(v121);
            v179 = v122;
          }
          ActivationContextStackPointer = 0LL;
          if ( v122 )
          {
            v206 = v122;
            HIWORD(v205) = v120;
          }
          else
          {
            v34 = -1073741801;
            v151 = -1073741801;
          }
        }
        else
        {
          v34 = -1073741562;
          v151 = -1073741562;
        }
      }
      v159 = v34;
      if ( v34 >= 0 )
      {
        v35 = (char *)v206 + (unsigned __int16)v205;
        *(_OWORD *)v35 = *(_OWORD *)SlashSystem32SlashString.Buffer;
        *((_DWORD *)v35 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
        LOWORD(v205) = v205 + 20;
        *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
      }
      v164 = 0;
      v36 = v173;
      v37 = v173 + (unsigned __int16)v205 + 2;
      v143 = v37;
      FullPath = 0;
      v152 = 0;
      if ( v37 > HIWORD(v205) )
      {
        if ( v37 <= 0xFFFE )
        {
          v123 = (v37 + 63) & 0xFFFFFFC0;
          v143 = v123;
          v124 = v123;
          if ( v123 > 0xFFFE )
          {
            LOWORD(v123) = -2;
            v143 = 65534;
            v124 = 65534;
          }
          if ( v206 == v207 )
          {
            v125 = NtdllpAllocateStringRoutine(v124);
            v180 = v125;
            if ( v125 && (_WORD)v205 )
              memmove(v125, v206, (unsigned __int16)v205);
          }
          else
          {
            v125 = (PVOID)NtdllpReallocateStringRoutine(v124);
            v180 = v125;
          }
          if ( v125 )
          {
            v206 = v125;
            HIWORD(v205) = v123;
          }
          else
          {
            FullPath = -1073741801;
            v152 = -1073741801;
          }
          v19 = v157;
          v18 = (_UNICODE_STRING *)v156;
        }
        else
        {
          FullPath = -1073741562;
          v152 = -1073741562;
        }
      }
      v164 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)v206 + (unsigned __int16)v205, Src, v36);
        LOWORD(v205) = v36 + v205;
        *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
      }
      v145 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v19->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v136 = v20;
        v18 = (_UNICODE_STRING *)&v205;
        v156 = &v205;
      }
    }
    if ( FullPath < 0 || !v20 || LdrpIsSecureProcess )
      goto LABEL_41;
    v114 = RtlDosApplyFileIsolationRedirection_Ustr(
             1u,
             v18,
             (PUNICODE_STRING)&LdrpDefaultExtension,
             0LL,
             &DynamicString,
             0LL,
             0LL,
             0LL,
             0LL);
    if ( v114 >= 0 )
    {
      v17 = 1;
      v133 = 1;
      LdrpGetFullPath(&DynamicString, &v205);
      LdrpFreeUnicodeString(&DynamicString);
    }
    if ( v114 == -1072365560 )
      goto LABEL_41;
    FullPath = v114;
LABEL_213:
    v145 = FullPath;
LABEL_41:
    appended = FullPath;
    v15 = v135;
    v9 = v147;
    v10 = v166;
    goto LABEL_42;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v205, v9, ActivationContextStackPointer, v7);
  v134 = FullPath;
  v15 |= 0x200u;
  v135 = v15;
LABEL_187:
  if ( FullPath < 0 )
    goto LABEL_305;
  if ( (v15 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 &v205,
                 *(_QWORD *)(v8 + 16),
                 v15,
                 v167,
                 v10,
                 *(_QWORD *)(v8 + 40));
    v134 = FullPath;
    goto LABEL_305;
  }
  if ( !*v11 )
  {
    v178 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v11 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v134 = -1073741801;
      goto LABEL_305;
    }
  }
  v59 = *(_QWORD *)(v8 + 40);
  v163 = v59;
  v58 = v15;
  v143 = v15;
  v60 = *(_UNICODE_STRING **)(v8 + 16);
  v147 = v60;
  *v10 = 0LL;
  v146 = 0;
  if ( (v15 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName((unsigned int)&v205, 0, v15, (_DWORD)v10, (__int64)&v146);
    v142 = FullPath;
    goto LABEL_89;
  }
  if ( (v15 & 0x200) == 0 )
  {
    v142 = -1073741515;
    goto LABEL_159;
  }
  v165 = (char *)v206 + (unsigned __int16)v205;
  for ( i = v165 - 2; ; i -= 2 )
  {
    v107 = i;
    v165 = i;
    if ( i <= v206 )
      break;
    if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
    {
      i += 2;
      v165 = v107 + 2;
      LOWORD(v107) = (_WORD)v107 + 2;
      break;
    }
  }
  v108 = (_WORD)v107 - (_WORD)v206;
  v200 = i;
  v198 = v205 - v108;
  v199 = HIWORD(v205) - v108;
  v109 = 0;
  v161 = 0;
  v185 = i;
  v144 = 0;
  v110 = (unsigned __int16)(v205 - v108) >> 1;
  v160 = v110;
  while ( 1 )
  {
    v111 = v110--;
    v160 = v110;
    if ( !v111 )
      break;
    v112 = *(unsigned __int16 *)i;
    i += 2;
    v185 = i;
    if ( (unsigned int)v112 < 0x61 )
      goto LABEL_203;
    if ( (unsigned int)v112 <= 0x7A )
    {
      LOWORD(v112) = v112 - 32;
LABEL_203:
      v138 = v112;
      goto LABEL_204;
    }
    if ( !qword_1801776F8 || (unsigned __int16)v112 < 0xC0u )
      goto LABEL_203;
    LOWORD(v112) = v112
                 + *(_WORD *)(qword_1801776F8
                            + 2
                            * ((v112 & 0xF)
                             + *(unsigned __int16 *)(qword_1801776F8
                                                   + 2LL
                                                   * (((unsigned __int8)v112 >> 4)
                                                    + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
                                                                                        + 2 * (v112 >> 8))))));
    v138 = v112;
LABEL_204:
    v109 = (unsigned __int16)v112 + 65599 * v109;
    v161 = v109;
  }
  v144 = v109;
  v46 = v109;
  if ( !v109 )
  {
    v46 = 0x80000000;
    v144 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v47 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v46 & 0x1F));
  v48 = 0;
  v49 = *v47;
  while ( 2 )
  {
    if ( v49 == v47 )
    {
      v10 = v166;
      goto LABEL_80;
    }
    v50 = (volatile signed __int32 *)(v49 - 14);
    if ( v46 != *((_DWORD *)v49 + 38) || (v143 & 8) != 0 && (v50[26] & 1) == 0 )
    {
LABEL_75:
      v49 = (_QWORD *)*v49;
      continue;
    }
    break;
  }
  if ( (unsigned __int16)v205 != *((unsigned __int16 *)v50 + 36) )
  {
LABEL_74:
    v48 = 0;
    goto LABEL_75;
  }
  v51 = (unsigned __int16 *)v206;
  v186 = (unsigned __int16 *)v206;
  v52 = (unsigned __int16 *)*((_QWORD *)v50 + 10);
  v187 = v52;
  while ( v51 < (unsigned __int16 *)((char *)v206 + (unsigned __int16)v205) )
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
      v139 = v53;
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
    v139 = v53;
LABEL_71:
    if ( (unsigned int)v54 < 0x61 )
      goto LABEL_72;
    if ( (unsigned int)v54 <= 0x7A )
    {
      LOWORD(v54) = v54 - 32;
LABEL_72:
      v140 = v54;
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
    v140 = v54;
LABEL_73:
    if ( (_WORD)v53 != (_WORD)v54 )
      goto LABEL_74;
LABEL_66:
    v186 = ++v51;
    v187 = ++v52;
  }
  v48 = 1;
  v55 = *((_QWORD *)v50 + 19);
  if ( *(_DWORD *)(v55 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v55 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v50 + 69);
  v10 = v166;
  *v166 = (char *)v50;
LABEL_80:
  if ( v48 )
  {
    FullPath = 0;
    v146 = *(_DWORD *)(*((_QWORD *)*v10 + 19) + 56LL);
  }
  else
  {
    FullPath = -1073741515;
  }
  v56 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v56 != 1 )
  {
    do
    {
      v96 = v56 & 6;
      v97 = 3LL;
      if ( v96 != 2 )
        v97 = -1LL;
      v98 = v56 + v97;
      v99 = v56;
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v98, v56);
    }
    while ( v99 != v56 );
    if ( v96 == 2 )
      RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v98, 0);
  }
  if ( FullPath < 0 )
    v153 = 3;
  else
    v153 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v57 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v57 = 2147353476LL;
  if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v127 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v127 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v153, (__int64)&v205, 0LL);
  }
  v142 = FullPath;
  LOWORD(v15) = v135;
  v58 = v143;
  v59 = v163;
  LODWORD(v60) = (_DWORD)v147;
LABEL_89:
  if ( FullPath != -1073741515 )
  {
    v61 = *v10;
    if ( v146 < 0 )
    {
      v203 = *(_OWORD *)(v61 + 72);
      LODWORD(NewFlags) = v146;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3049,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v203,
        NewFlags);
      FullPath = -1073741595;
      v142 = -1073741595;
      LdrpDereferenceModule(*v10);
      v62 = 0LL;
      *v10 = 0LL;
    }
    else
    {
      v162 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v63 = *((_QWORD *)v61 + 19);
      v64 = *(_DWORD *)(v63 + 24);
      if ( v64 != -1 )
      {
        if ( v64 )
        {
          *(_DWORD *)(v63 + 24) = v64 + 1;
        }
        else
        {
          v201 = NtCurrentTeb();
          if ( (v201->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v63 + 28);
          else
            v162 = -1073741515;
        }
      }
      v65 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v65 != 1 )
      {
        do
        {
          v100 = v65 & 6;
          v101 = 3LL;
          if ( v100 != 2 )
            v101 = -1LL;
          v62 = v65 + v101;
          v102 = v65;
          v65 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v62, v65);
        }
        while ( v102 != v65 );
        if ( v100 == 2 )
          RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v62, 0);
      }
      LOWORD(v15) = v135;
    }
    goto LABEL_94;
  }
LABEL_159:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v205, (_DWORD)v60, v58, v154, v167, (__int64)v10, v59);
  v142 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*((_QWORD *)*v10 + 22));
    v142 = FullPath;
  }
LABEL_94:
  v134 = FullPath;
  if ( *v10 )
  {
    v66 = v15 & 0x400;
    if ( v66 && FullPath == -1073741515 )
    {
      v128 = *((_QWORD *)*v10 + 22);
      v202 = v128;
      *(_DWORD *)(v128 + 32) |= 0x4000000u;
      LOBYTE(v62) = 1;
      LdrpProcessWork(v128, v62);
      FullPath = **(_DWORD **)(v128 + 40);
      v134 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v68 = *v10;
    v69 = v68;
    v188 = *v10;
    if ( v68 )
    {
      v70 = *((_QWORD *)v68 + 22);
      if ( v70 )
      {
        if ( (*(_DWORD *)(v70 + 32) & 0x80000) == 0 && *(char **)(v70 + 56) != v68 )
        {
          v69 = *(char **)(v70 + 56);
          v188 = v69;
          *(_QWORD *)(v70 + 56) = v68;
        }
      }
    }
    v190 = v69;
    v71 = (_QWORD *)v155;
    *(_DWORD *)(*(_QWORD *)v155 + 24LL) &= ~1u;
    v72 = (_DWORD *)*v71;
    v170 = (_DWORD *)*v71;
    v73 = v169;
    v74 = *((_QWORD *)v69 + 19);
    v75 = *(_QWORD *)(*(_QWORD *)(v169 + 56) + 152LL);
    if ( v75 == v74
      || *(_DWORD *)(v74 + 56) == 9 && (*(_DWORD *)(v74 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v74 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_101;
    }
    v86 = *(_QWORD **)(v75 + 40);
    if ( v86 )
    {
      v87 = *(_QWORD **)(v75 + 40);
      while ( 1 )
      {
        v87 = (_QWORD *)*v87;
        if ( v87[1] == v74 )
          break;
        if ( v87 == v86 )
          goto LABEL_138;
      }
LABEL_101:
      v76 = (_QWORD *)*(unsigned int *)(v74 + 24);
      if ( (unsigned int)((_DWORD)v76 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v74 + 24) = (_DWORD)v76 - 1;
    }
    else
    {
LABEL_138:
      if ( !v72 )
      {
        v176 = NtdllBaseTag + 2359296;
        v129 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v72 = v129;
        v170 = v129;
        if ( !v129 )
        {
          MEMORY[0] = -1073741801;
          v72 = 0LL;
          v71 = (_QWORD *)v155;
          goto LABEL_103;
        }
        v129[6] |= 1u;
      }
      v88 = *(_QWORD **)(v75 + 40);
      if ( v88 )
      {
        *(_QWORD *)v72 = *v88;
        *v88 = v72;
      }
      else
      {
        *(_QWORD *)v72 = v72;
      }
      *(_QWORD *)(v75 + 40) = v72;
      *((_QWORD *)v72 + 1) = v74;
      v76 = v72 + 4;
      v89 = *(_QWORD **)(v74 + 48);
      if ( v89 )
      {
        *v76 = *v89;
        *v89 = v76;
      }
      else
      {
        *v76 = v76;
      }
      *(_QWORD *)(v74 + 48) = v76;
      v90 = (v72[6] & 1) == 0;
      v91 = v72[6] & 1;
      *((_QWORD *)v72 + 3) = v75;
      if ( !v90 )
        v72[6] = v91 | v75 & 0xFFFFFFFE;
      v72 = 0LL;
      v170 = 0LL;
      v71 = (_QWORD *)v155;
    }
LABEL_103:
    v189 = v72;
    *v71 = v72;
    if ( FullPath != -1073741515 )
    {
      if ( FullPath != -1073741267 )
        goto LABEL_105;
      v134 = 0;
      goto LABEL_106;
    }
    if ( !v66 )
    {
      LdrpQueueWork(*((_QWORD *)v69 + 22), v76, v71, v67);
      v134 = 0;
      v71 = (_QWORD *)v155;
      goto LABEL_106;
    }
LABEL_105:
    if ( FullPath >= 0 )
    {
LABEL_106:
      v77 = *(_DWORD *)(v73 + 108);
      if ( v77 )
      {
        if ( *v71 || *(int *)(*((_QWORD *)v69 + 19) + 56LL) >= 2 )
          *(_DWORD *)(v73 + 108) = v77 - 1;
      }
      else if ( *(int *)(*((_QWORD *)v69 + 19) + 56LL) < 2 )
      {
        *(_QWORD *)(v73 + 80) = v69;
        *(_DWORD *)(v73 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 56) + 152LL) + 56LL) = 3;
        v134 = 259;
      }
    }
    v78 = *((_QWORD *)v69 + 19);
    if ( *(_DWORD *)(v78 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)v69 + 69, 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v81 = *((_QWORD *)v69 + 20);
      v82 = (char **)*((_QWORD *)v69 + 21);
      if ( *(char **)(v81 + 8) != v69 + 160 || *v82 != v69 + 160 )
        __fastfail(3u);
      *v82 = (char *)v81;
      *(_QWORD *)(v81 + 8) = v82;
      v83 = (_QWORD *)*((_QWORD *)v69 + 19);
      v84 = (_QWORD *)*v83;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *((_WORD *)v69 + 55) )
        LdrpReleaseTlsEntry(v69, 0LL);
      LdrpUnmapModule(v69);
      v85 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v69 + 17);
      if ( (unsigned __int64)&v85[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v85);
      if ( *((_QWORD *)v69 + 10) )
        LdrpFreeUnicodeString(v69 + 72);
      RtlFreeHeap(LdrpHeap, 0, v69);
      if ( v84 == v83 )
        LdrpDestroyNode(v83);
    }
    v79 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v79 != 1 )
    {
      do
      {
        v92 = v79 & 6;
        v93 = 3LL;
        if ( v92 != 2 )
          v93 = -1LL;
        v94 = v79 + v93;
        v95 = v79;
        v79 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v94, v79);
      }
      while ( v95 != v79 );
      if ( v92 == 2 )
        RtlpWakeSRWLock((volatile signed __int64 *)&LdrpModuleDatatableLock, v94, 0);
    }
    v80 = v190;
    if ( v190 != *v10 )
    {
      LdrpFreeReplacedModule(*v10);
      *v10 = v80;
    }
    FullPath = v134;
  }
LABEL_305:
  RtlDeactivateActivationContextUnsafeFast(&v191);
  if ( v207 != v206 )
    NtdllpFreeStringRoutine(v206);
  return (unsigned int)FullPath;
}
