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
  char **v10; // r13
  _QWORD *v11; // rsi
  int FullPath; // ebx
  __int64 v13; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v16; // edi
  char v17; // r14
  _UNICODE_STRING *v18; // r15
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
  _UNICODE_STRING *p_String1; // rsi
  const char *v42; // rax
  wchar_t *v43; // rdx
  wchar_t *v44; // rax
  wchar_t v45; // cx
  unsigned int v46; // r14d
  _QWORD **v47; // rsi
  char v48; // cl
  _QWORD *j; // r15
  volatile signed __int32 *v50; // rdi
  wchar_t *v51; // rax
  unsigned __int16 *v52; // r10
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r11
  __int64 v55; // rax
  int v56; // eax
  signed __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // esi
  __int64 v60; // r14
  __int64 v61; // r15
  char *v62; // rsi
  __int64 v63; // rcx
  int v64; // eax
  signed __int64 v65; // rax
  int v66; // edi
  char *v67; // rax
  char *v68; // r14
  __int64 v69; // rcx
  _QWORD *v70; // r8
  _DWORD *v71; // rcx
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // r15
  int v75; // edx
  int v76; // eax
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
  _QWORD *v89; // rdx
  _QWORD *v90; // r8
  bool v91; // zf
  int v92; // eax
  signed __int64 v93; // rcx
  __int64 v94; // rdx
  signed __int64 v95; // rdx
  signed __int64 v96; // rtt
  signed __int64 v97; // r8
  __int64 v98; // rdx
  signed __int64 v99; // rdx
  signed __int64 v100; // rtt
  signed __int64 v101; // rcx
  __int64 v102; // rdx
  signed __int64 v103; // rdx
  signed __int64 v104; // rtt
  unsigned __int16 Length; // dx
  wchar_t *v106; // rcx
  wchar_t *v107; // rax
  unsigned __int16 i; // dx
  wchar_t v109; // r8
  __int64 v110; // rcx
  wchar_t *v111; // r11
  int v112; // r9d
  int v113; // r10d
  int v114; // eax
  unsigned __int64 v115; // r8
  PVOID Heap; // rax
  NTSTATUS v117; // edi
  wchar_t *Buffer; // rdx
  wchar_t *v119; // rax
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
  _DWORD *v132; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-408h]
  char v135[2]; // [rsp+52h] [rbp-3E6h] BYREF
  int v136; // [rsp+54h] [rbp-3E4h]
  unsigned int v137; // [rsp+58h] [rbp-3E0h]
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
  _DWORD v148[3]; // [rsp+7Ch] [rbp-3BCh] BYREF
  int v149; // [rsp+88h] [rbp-3B0h]
  int v150; // [rsp+90h] [rbp-3A8h]
  int v151; // [rsp+98h] [rbp-3A0h]
  int v152; // [rsp+A0h] [rbp-398h]
  int v153; // [rsp+A4h] [rbp-394h]
  int v154; // [rsp+A8h] [rbp-390h]
  int v155; // [rsp+ACh] [rbp-38Ch]
  _UNICODE_STRING *v156; // [rsp+B0h] [rbp-388h]
  __int64 v157; // [rsp+B8h] [rbp-380h]
  int v158; // [rsp+C0h] [rbp-378h]
  int v159; // [rsp+C4h] [rbp-374h]
  int v160; // [rsp+C8h] [rbp-370h]
  int v161; // [rsp+CCh] [rbp-36Ch]
  int v162; // [rsp+D0h] [rbp-368h]
  __int64 v163; // [rsp+D8h] [rbp-360h]
  int v164; // [rsp+E0h] [rbp-358h]
  char **v165; // [rsp+E8h] [rbp-350h]
  __int64 v166; // [rsp+F0h] [rbp-348h]
  __int64 v167; // [rsp+F8h] [rbp-340h]
  _DWORD *v168; // [rsp+100h] [rbp-338h]
  __int64 v169; // [rsp+108h] [rbp-330h]
  __int64 v170; // [rsp+110h] [rbp-328h]
  unsigned __int16 v171; // [rsp+118h] [rbp-320h] BYREF
  void *Src; // [rsp+120h] [rbp-318h]
  int v173; // [rsp+128h] [rbp-310h]
  ULONG v174; // [rsp+12Ch] [rbp-30Ch]
  __int64 v175; // [rsp+130h] [rbp-308h]
  ULONG v176; // [rsp+138h] [rbp-300h]
  void *v177; // [rsp+140h] [rbp-2F8h]
  void *v178; // [rsp+148h] [rbp-2F0h]
  void *v179; // [rsp+150h] [rbp-2E8h]
  _UNICODE_STRING *v180; // [rsp+158h] [rbp-2E0h]
  wchar_t *v181; // [rsp+160h] [rbp-2D8h]
  wchar_t *v182; // [rsp+168h] [rbp-2D0h]
  wchar_t *v183; // [rsp+170h] [rbp-2C8h]
  wchar_t *v184; // [rsp+178h] [rbp-2C0h]
  wchar_t *v185; // [rsp+180h] [rbp-2B8h]
  unsigned __int16 *v186; // [rsp+188h] [rbp-2B0h]
  char *v187; // [rsp+190h] [rbp-2A8h]
  _DWORD *v188; // [rsp+198h] [rbp-2A0h]
  char *v189; // [rsp+1A0h] [rbp-298h]
  __int64 v190; // [rsp+1B0h] [rbp-288h] BYREF
  int v191; // [rsp+1B8h] [rbp-280h]
  __int128 v192; // [rsp+1C0h] [rbp-278h] BYREF
  __int128 v193; // [rsp+1D0h] [rbp-268h]
  __int128 v194; // [rsp+1E0h] [rbp-258h]
  __int64 v195; // [rsp+1F0h] [rbp-248h]
  _UNICODE_STRING DynamicString; // [rsp+200h] [rbp-238h] BYREF
  __int16 v197; // [rsp+210h] [rbp-228h]
  __int16 v198; // [rsp+212h] [rbp-226h]
  wchar_t *v199; // [rsp+218h] [rbp-220h]
  struct _TEB *v200; // [rsp+220h] [rbp-218h]
  __int64 v201; // [rsp+228h] [rbp-210h]
  __int128 v202; // [rsp+230h] [rbp-208h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+240h] [rbp-1F8h] BYREF
  _UNICODE_STRING String1; // [rsp+2E0h] [rbp-158h] BYREF
  _WORD v205[128]; // [rsp+2F0h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+438h] [rbp+0h]

  v6 = a4;
  v155 = a4;
  v7 = a3;
  v166 = a3;
  v8 = a2;
  v167 = a2;
  v9 = OriginalName;
  *(_QWORD *)&v148[1] = OriginalName;
  v10 = a5;
  v165 = a5;
  v11 = a6;
  v157 = (__int64)a6;
  String1.Buffer = v205;
  FullPath = 0;
  *(_DWORD *)&String1.Length = 0x1000000;
  v205[0] = 0;
  v190 = 72LL;
  v191 = 1;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v13 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v193 + 1) = ~ActiveFrame;
  *(_QWORD *)&v194 = ~v13;
  *((_QWORD *)&v194 + 1) = retaddr;
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
    v9 = *(PUNICODE_STRING *)&v148[1];
    v7 = v166;
    v6 = v155;
    goto LABEL_7;
  }
  *(_QWORD *)&v192 = ActiveFrame;
  *((_QWORD *)&v192 + 1) = v13;
  LODWORD(v193) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v13 )
      goto LABEL_6;
  }
  else if ( !v13 )
  {
LABEL_6:
    LODWORD(v193) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v192;
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
        p_String1 = v9;
        v180 = v9;
        if ( !String1.Length )
        {
          Buffer = v9->Buffer;
          v119 = (wchar_t *)((char *)Buffer + v9->Length);
          v181 = v119;
          while ( 1 )
          {
            v181 = --v119;
            if ( v119 < Buffer )
              break;
            if ( *v119 == 92 || *v119 == 47 )
            {
              if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((__int64)v9) != 5 )
              {
                FullPath = LdrpGetFullPath(v129, &String1);
                appended = FullPath;
                if ( FullPath >= 0 )
                {
                  v16 |= 0x600u;
                  v137 = v16;
                }
                goto LABEL_53;
              }
LABEL_225:
              appended = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (const void **)v9);
              FullPath = appended;
              goto LABEL_53;
            }
          }
          v16 |= 0x20u;
          v137 = v16;
          goto LABEL_225;
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
          &String1,
          v42);
        v16 |= 0x200u;
        v137 = v16;
        if ( v17 )
        {
          v16 |= 4u;
          v137 = v16;
        }
        p_String1 = &String1;
        v180 = &String1;
LABEL_53:
        if ( FullPath >= 0 )
        {
          v43 = p_String1->Buffer;
          v44 = (wchar_t *)((char *)v43 + p_String1->Length);
          v182 = v44;
          v139 = 0;
          while ( 1 )
          {
            v182 = --v44;
            if ( v44 < v43 )
            {
LABEL_226:
              FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (const void **)&LdrpDefaultExtension);
              appended = FullPath;
              goto LABEL_191;
            }
            v45 = *v44;
            if ( *v44 == 46 )
              break;
            if ( v45 == 47 || v45 == 92 )
              goto LABEL_226;
          }
          v139 = 1;
          Length = String1.Length;
          v106 = String1.Buffer;
          v107 = (wchar_t *)((char *)String1.Buffer + String1.Length);
          v183 = v107;
          while ( 1 )
          {
            v183 = --v107;
            if ( v107 < v106 || *v107 != 46 )
              break;
            Length -= 2;
            String1.Length = Length;
            v106 = String1.Buffer;
          }
          v107[1] = 0;
        }
      }
LABEL_191:
      if ( FullPath < 0 )
      {
        LODWORD(NewFlags) = FullPath;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2729,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          *(_QWORD *)&v148[1],
          NewFlags);
      }
      v136 = FullPath;
      v11 = (_QWORD *)v157;
      goto LABEL_194;
    }
    v18 = v9;
    v156 = v9;
    v19 = NtCurrentPeb();
    v146 = v19;
    v20 = 1;
    v138 = 1;
    v21 = v7 + 88;
    ApiSetMap = (__int64)v19->ApiSetMap;
    LdrpLogDllState(0, (__int64)v9, 0x14D0u);
    FullPath = ApiSetResolveToHost(ApiSetMap, *(unsigned __int16 **)&v148[1], v21, v135, (__int64)&v171);
    v23 = v135[0];
    if ( FullPath >= 0 && v135[0] )
    {
      v24 = v171;
      if ( v171 )
        v25 = 5329;
      else
        v25 = 5330;
    }
    else
    {
      v25 = 5331;
      v24 = v171;
    }
    LdrpLogDllState(0, (__int64)v18, v25);
    v147 = FullPath;
    if ( v23 )
    {
      if ( !v24 )
      {
        FullPath = -1073740671;
        v147 = -1073740671;
        goto LABEL_232;
      }
      String1.Length = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( !SharedData || (v173 = *SharedData, v27 = 1, !v173) )
        v27 = 0;
      if ( v27 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v28 = 2147352624LL;
      v175 = v28;
      v169 = 0LL;
      v170 = v28;
      if ( v28 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_WORD *)(v28 + 2 * v29) );
        v30 = 2 * v29;
        v163 = v30;
        v31 = v30;
        if ( v30 >= 0xFFFE )
        {
          LOWORD(v30) = -4;
          v163 = 65532LL;
          v31 = -4;
        }
        LOWORD(v169) = v30;
        WORD1(v169) = v31 + 2;
      }
      else
      {
        LOWORD(v30) = v169;
      }
      v158 = 0;
      if ( (_WORD)v30 )
      {
        v32 = (unsigned __int16)v30 + 2;
        v149 = v32;
        v33 = 0;
        v150 = 0;
        if ( v32 > String1.MaximumLength )
        {
          if ( v32 <= 0xFFFE )
          {
            v120 = ((unsigned __int16)v30 + 65) & 0xFFFFFFC0;
            v149 = v120;
            v121 = v120;
            if ( v120 > 0xFFFE )
            {
              LOWORD(v120) = -2;
              v149 = 65534;
              v121 = 65534;
            }
            if ( String1.Buffer == v205 )
            {
              StringRoutine = (void *)NtdllpAllocateStringRoutine(v121, String1.Buffer);
              v177 = StringRoutine;
              if ( StringRoutine && String1.Length )
                memmove(StringRoutine, String1.Buffer, String1.Length);
            }
            else
            {
              StringRoutine = (void *)NtdllpReallocateStringRoutine(v121);
              v177 = StringRoutine;
            }
            if ( StringRoutine )
            {
              String1.Buffer = (wchar_t *)StringRoutine;
              String1.MaximumLength = v120;
            }
            else
            {
              v33 = -1073741801;
              v150 = -1073741801;
            }
            v19 = v146;
            v18 = v156;
          }
          else
          {
            v33 = -1073741562;
            v150 = -1073741562;
          }
        }
        v158 = v33;
        if ( v33 >= 0 )
        {
          memmove((char *)String1.Buffer + String1.Length, (const void *)v28, (unsigned __int16)v30);
          String1.Length += v30;
          String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
        }
        v17 = 0;
      }
      v164 = 0;
      v34 = String1.Length + 22;
      v151 = v34;
      v35 = 0;
      v152 = 0;
      if ( v34 > String1.MaximumLength )
      {
        if ( v34 <= 0xFFFE )
        {
          v123 = (String1.Length + 85) & 0xFFFFFFC0;
          v151 = v123;
          v124 = v123;
          if ( v123 > 0xFFFE )
          {
            LOWORD(v123) = -2;
            v151 = 65534;
            v124 = 65534;
          }
          if ( String1.Buffer == v205 )
          {
            v125 = (void *)NtdllpAllocateStringRoutine(v124, String1.Buffer);
            v178 = v125;
            if ( v125 && String1.Length )
              memmove(v125, String1.Buffer, String1.Length);
          }
          else
          {
            v125 = (void *)NtdllpReallocateStringRoutine(v124);
            v178 = v125;
          }
          if ( v125 )
          {
            String1.Buffer = (wchar_t *)v125;
            String1.MaximumLength = v123;
          }
          else
          {
            v35 = -1073741801;
            v152 = -1073741801;
          }
        }
        else
        {
          v35 = -1073741562;
          v152 = -1073741562;
        }
      }
      v164 = v35;
      if ( v35 >= 0 )
      {
        v36 = (char *)String1.Buffer + String1.Length;
        *(_OWORD *)v36 = *(_OWORD *)SlashSystem32SlashString.Buffer;
        *((_DWORD *)v36 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
        String1.Length += 20;
        String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
      }
      v159 = 0;
      v37 = v171;
      v38 = v171 + String1.Length + 2;
      LODWORD(v146) = v38;
      FullPath = 0;
      v153 = 0;
      if ( v38 > String1.MaximumLength )
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
          if ( String1.Buffer == v205 )
          {
            v128 = (void *)NtdllpAllocateStringRoutine(v127, String1.Buffer);
            v179 = v128;
            if ( v128 && String1.Length )
              memmove(v128, String1.Buffer, String1.Length);
          }
          else
          {
            v128 = (void *)NtdllpReallocateStringRoutine(v127);
            v179 = v128;
          }
          if ( v128 )
          {
            String1.Buffer = (wchar_t *)v128;
            String1.MaximumLength = v126;
          }
          else
          {
            FullPath = -1073741801;
            v153 = -1073741801;
          }
          v18 = v156;
          v17 = 0;
        }
        else
        {
          FullPath = -1073741562;
          v153 = -1073741562;
        }
      }
      v159 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)String1.Buffer + String1.Length, Src, v37);
        String1.Length += v37;
        String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
      }
      v147 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v19->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v138 = v20;
        v18 = &String1;
        v156 = &String1;
      }
    }
    if ( FullPath >= 0 )
    {
      v40 = 1;
      goto LABEL_43;
    }
LABEL_232:
    v40 = 0;
LABEL_43:
    if ( v40 && v20 && !LdrpIsSecureProcess )
    {
      v117 = RtlDosApplyFileIsolationRedirection_Ustr(
               1u,
               v18,
               (PUNICODE_STRING)&LdrpDefaultExtension,
               0LL,
               &DynamicString,
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v117 >= 0 )
      {
        v17 = 1;
        LdrpGetFullPath(&DynamicString, &String1);
        LdrpFreeUnicodeString((__int64)&DynamicString);
      }
      if ( v117 != -1072365560 )
      {
        FullPath = v117;
        v147 = v117;
      }
    }
    appended = FullPath;
    v16 = v137;
    v9 = *(PUNICODE_STRING *)&v148[1];
    v10 = v165;
    v8 = v167;
    goto LABEL_46;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&String1.Length, (const void **)v9);
  v136 = FullPath;
  v16 |= 0x10000200u;
  v137 = v16;
LABEL_194:
  if ( FullPath < 0 )
    goto LABEL_310;
  if ( (v16 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 &String1,
                 *(_QWORD *)(v8 + 16),
                 v16,
                 v166,
                 v10,
                 *(_QWORD *)(v8 + 40));
    v136 = FullPath;
    goto LABEL_310;
  }
  if ( !*v11 )
  {
    v174 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v11 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v136 = -1073741801;
      goto LABEL_310;
    }
  }
  v60 = *(_QWORD *)(v8 + 40);
  v163 = v60;
  v59 = v16;
  LODWORD(v146) = v16;
  v61 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)&v148[1] = v61;
  *v10 = 0LL;
  v148[0] = 0;
  if ( (v16 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName(&String1, 0LL, (__int64)v148);
    v144 = FullPath;
    goto LABEL_93;
  }
  if ( (v16 & 0x200) == 0 )
  {
    v144 = -1073741515;
    goto LABEL_160;
  }
  for ( i = String1.Length >> 1; i; --i )
  {
    v109 = String1.Buffer[i - 1];
    if ( v109 == 92 || v109 == 47 )
      break;
  }
  v110 = i;
  v111 = &String1.Buffer[v110];
  v199 = &String1.Buffer[v110];
  v197 = String1.Length - v110 * 2;
  v198 = String1.MaximumLength - v110 * 2;
  v112 = 0;
  v161 = 0;
  v184 = &String1.Buffer[v110];
  v145 = 0;
  v113 = (unsigned __int16)(String1.Length - v110 * 2) >> 1;
  v160 = v113;
  while ( 1 )
  {
    v114 = v113--;
    v160 = v113;
    if ( !v114 )
      break;
    v115 = *v111++;
    v184 = v111;
    if ( (unsigned int)v115 >= 0x61 )
    {
      if ( (unsigned int)v115 > 0x7A )
      {
        if ( qword_1801817B8 )
        {
          if ( (unsigned __int16)v115 >= 0xC0u )
            LOWORD(v115) = *(_WORD *)(qword_1801817B8
                                    + 2
                                    * ((v115 & 0xF)
                                     + *(unsigned __int16 *)(qword_1801817B8
                                                           + 2LL
                                                           * (((unsigned __int8)v115 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
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
    v161 = v112;
  }
  v145 = v112;
  v46 = v112;
  if ( !v112 )
  {
    v46 = 0x80000000;
    v145 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v47 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v46 & 0x1F));
  v48 = 0;
  for ( j = *v47; ; j = (_QWORD *)*j )
  {
    if ( j == v47 )
    {
      v10 = v165;
      goto LABEL_82;
    }
    v50 = (volatile signed __int32 *)(j - 14);
    if ( v46 == *((_DWORD *)j + 38) && (((unsigned __int8)v146 & 8) == 0 || (v50[26] & 1) != 0) )
      break;
LABEL_77:
    ;
  }
  if ( String1.Length != *((unsigned __int16 *)v50 + 36) )
  {
LABEL_76:
    v48 = 0;
    goto LABEL_77;
  }
  v51 = String1.Buffer;
  v185 = String1.Buffer;
  v52 = (unsigned __int16 *)*((_QWORD *)v50 + 10);
  v186 = v52;
  while ( v51 < (wchar_t *)((char *)String1.Buffer + String1.Length) )
  {
    v53 = *v51;
    v54 = *v52;
    if ( (_WORD)v53 != (_WORD)v54 )
    {
      if ( (unsigned int)v53 >= 0x61 )
      {
        if ( (unsigned int)v53 > 0x7A )
        {
          if ( qword_1801817B8 && (unsigned __int16)v53 >= 0xC0u )
            LOWORD(v53) = *(_WORD *)(qword_1801817B8
                                   + 2
                                   * ((v53 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801817B8
                                                          + 2LL
                                                          * (((unsigned __int8)v53 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
                                                                                               + 2 * (v53 >> 8))))))
                        + v53;
        }
        else
        {
          LOWORD(v53) = v53 - 32;
        }
      }
      v141 = v53;
      if ( (unsigned int)v54 >= 0x61 )
      {
        if ( (unsigned int)v54 > 0x7A )
        {
          if ( qword_1801817B8 && (unsigned __int16)v54 >= 0xC0u )
            LOWORD(v54) = *(_WORD *)(qword_1801817B8
                                   + 2
                                   * ((v54 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801817B8
                                                          + 2LL
                                                          * (((unsigned __int8)v54 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
                                                                                               + 2 * (v54 >> 8))))))
                        + v54;
        }
        else
        {
          LOWORD(v54) = v54 - 32;
        }
      }
      v142 = v54;
      if ( (_WORD)v53 != (_WORD)v54 )
        goto LABEL_76;
    }
    v185 = ++v51;
    v186 = ++v52;
  }
  v48 = 1;
  v55 = *((_QWORD *)v50 + 19);
  if ( *(_DWORD *)(v55 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v55 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v50 + 69);
  v10 = v165;
  *v165 = (char *)v50;
LABEL_82:
  if ( v48 )
  {
    FullPath = 0;
    v56 = 1;
  }
  else
  {
    FullPath = -1073741515;
    v56 = 0;
  }
  if ( v56 )
    v148[0] = *(_DWORD *)(*((_QWORD *)*v10 + 19) + 56LL);
  v57 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v57 != 1 )
  {
    do
    {
      v93 = v57 & 6;
      v94 = 3LL;
      if ( v93 != 2 )
        v94 = -1LL;
      v95 = v57 + v94;
      v96 = v57;
      v57 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v95, v57);
    }
    while ( v96 != v57 );
    if ( v93 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v95, 0LL);
  }
  if ( FullPath < 0 )
    v154 = 3;
  else
    v154 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v58 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v58 = 2147353476LL;
  if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v130 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v130 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v154, (__int64)&String1, 0LL);
  }
  v144 = FullPath;
  LOWORD(v16) = v137;
  v59 = (unsigned int)v146;
  v60 = v163;
  LODWORD(v61) = v148[1];
LABEL_93:
  if ( FullPath != -1073741515 )
  {
    v62 = *v10;
    if ( v148[0] < 0 )
    {
      v202 = *(_OWORD *)(v62 + 72);
      LODWORD(NewFlags) = v148[0];
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3132,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v202,
        NewFlags);
      FullPath = -1073741595;
      v144 = -1073741595;
      LdrpDereferenceModule(*v10);
      *v10 = 0LL;
    }
    else
    {
      v162 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v63 = *((_QWORD *)v62 + 19);
      v64 = *(_DWORD *)(v63 + 24);
      if ( v64 != -1 )
      {
        if ( v64 )
        {
          *(_DWORD *)(v63 + 24) = v64 + 1;
        }
        else
        {
          v200 = NtCurrentTeb();
          if ( (v200->SameTebFlags & 0x1000) != 0 )
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
          v101 = v65 & 6;
          v102 = 3LL;
          if ( v101 != 2 )
            v102 = -1LL;
          v103 = v65 + v102;
          v104 = v65;
          v65 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v103, v65);
        }
        while ( v104 != v65 );
        if ( v101 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v103, 0LL);
      }
      LOWORD(v16) = v137;
    }
    goto LABEL_98;
  }
LABEL_160:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&String1, v61, v59, v155, v166, (__int64)v10, v60);
  v144 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*((_QWORD *)*v10 + 22));
    v144 = FullPath;
  }
LABEL_98:
  v136 = FullPath;
  if ( *v10 )
  {
    v66 = v16 & 0x400;
    if ( v66 && FullPath == -1073741515 )
    {
      v131 = *((_QWORD *)*v10 + 22);
      v201 = v131;
      *(_DWORD *)(v131 + 32) |= 0x4000000u;
      LdrpProcessWork(v131, 1);
      FullPath = **(_DWORD **)(v131 + 40);
      v136 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v67 = *v10;
    v68 = v67;
    v187 = *v10;
    if ( v67 )
    {
      v69 = *((_QWORD *)v67 + 22);
      if ( v69 )
      {
        if ( (*(_DWORD *)(v69 + 32) & 0x80000) == 0 && *(char **)(v69 + 56) != v67 )
        {
          v68 = *(char **)(v69 + 56);
          v187 = v68;
          *(_QWORD *)(v69 + 56) = v67;
        }
      }
    }
    v189 = v68;
    v70 = (_QWORD *)v157;
    *(_DWORD *)(*(_QWORD *)v157 + 24LL) &= ~1u;
    v71 = (_DWORD *)*v70;
    v168 = (_DWORD *)*v70;
    v72 = v167;
    v73 = *((_QWORD *)v68 + 19);
    v74 = *(_QWORD *)(*(_QWORD *)(v167 + 56) + 152LL);
    if ( v74 == v73
      || *(_DWORD *)(v73 + 56) == 9 && (*(_DWORD *)(v73 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v73 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_105;
    }
    v86 = *(_QWORD **)(v74 + 40);
    if ( v86 )
    {
      v87 = *(_QWORD **)(v74 + 40);
      while ( 1 )
      {
        v87 = (_QWORD *)*v87;
        if ( v87[1] == v73 )
          break;
        if ( v87 == v86 )
          goto LABEL_144;
      }
LABEL_105:
      v75 = *(_DWORD *)(v73 + 24);
      if ( (unsigned int)(v75 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v73 + 24) = v75 - 1;
    }
    else
    {
LABEL_144:
      if ( !v71 )
      {
        v176 = NtdllBaseTag + 2359296;
        v132 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v71 = v132;
        v168 = v132;
        if ( !v132 )
        {
          MEMORY[0] = -1073741801;
          v71 = 0LL;
          v70 = (_QWORD *)v157;
          goto LABEL_107;
        }
        v132[6] |= 1u;
      }
      v88 = *(_QWORD **)(v74 + 40);
      if ( v88 )
      {
        *(_QWORD *)v71 = *v88;
        *v88 = v71;
      }
      else
      {
        *(_QWORD *)v71 = v71;
      }
      *(_QWORD *)(v74 + 40) = v71;
      *((_QWORD *)v71 + 1) = v73;
      v89 = v71 + 4;
      v90 = *(_QWORD **)(v73 + 48);
      if ( v90 )
      {
        *v89 = *v90;
        *v90 = v89;
      }
      else
      {
        *v89 = v89;
      }
      *(_QWORD *)(v73 + 48) = v89;
      v91 = (v71[6] & 1) == 0;
      v92 = v71[6] & 1;
      *((_QWORD *)v71 + 3) = v74;
      if ( !v91 )
        v71[6] = v92 | v74 & 0xFFFFFFFE;
      v71 = 0LL;
      v168 = 0LL;
      v70 = (_QWORD *)v157;
    }
LABEL_107:
    v188 = v71;
    *v70 = v71;
    if ( FullPath == -1073741515 )
    {
      if ( !v66 )
      {
        LdrpQueueWork(*((_QWORD *)v68 + 22));
        v136 = 0;
        v70 = (_QWORD *)v157;
        goto LABEL_110;
      }
LABEL_109:
      if ( FullPath >= 0 )
        goto LABEL_110;
      v76 = 0;
    }
    else
    {
      if ( FullPath != -1073741267 )
        goto LABEL_109;
      v136 = 0;
LABEL_110:
      v76 = 1;
    }
    if ( v76 )
    {
      v77 = *(_DWORD *)(v72 + 108);
      if ( v77 )
      {
        if ( *v70 || *(int *)(*((_QWORD *)v68 + 19) + 56LL) >= 2 )
          *(_DWORD *)(v72 + 108) = v77 - 1;
      }
      else if ( *(int *)(*((_QWORD *)v68 + 19) + 56LL) < 2 )
      {
        *(_QWORD *)(v72 + 80) = v68;
        *(_DWORD *)(v72 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 56) + 152LL) + 56LL) = 3;
        v136 = 259;
      }
    }
    v78 = *((_QWORD *)v68 + 19);
    if ( *(_DWORD *)(v78 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)v68 + 69, 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v81 = *((_QWORD *)v68 + 20);
      v82 = (char **)*((_QWORD *)v68 + 21);
      if ( *(char **)(v81 + 8) != v68 + 160 || *v82 != v68 + 160 )
        __fastfail(3u);
      *v82 = (char *)v81;
      *(_QWORD *)(v81 + 8) = v82;
      v83 = (_QWORD *)*((_QWORD *)v68 + 19);
      v84 = (_QWORD *)*v83;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *((_WORD *)v68 + 55) )
        LdrpReleaseTlsEntry(v68, 0LL);
      LdrpUnmapModule(v68);
      v85 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v68 + 17);
      if ( (unsigned __int64)&v85[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v85);
      if ( *((_QWORD *)v68 + 10) )
        LdrpFreeUnicodeString((__int64)(v68 + 72));
      RtlFreeHeap(LdrpHeap, 0, v68);
      if ( v84 == v83 )
        LdrpDestroyNode(v83);
    }
    v79 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v79 != 1 )
    {
      do
      {
        v97 = v79 & 6;
        v98 = 3LL;
        if ( v97 != 2 )
          v98 = -1LL;
        v99 = v79 + v98;
        v100 = v79;
        v79 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v99, v79);
      }
      while ( v100 != v79 );
      if ( v97 == 2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v99, 0LL);
    }
    v80 = v189;
    if ( v189 != *v10 )
    {
      LdrpFreeReplacedModule(*v10);
      *v10 = v80;
    }
    FullPath = v136;
  }
LABEL_310:
  RtlDeactivateActivationContextUnsafeFast(&v190);
  if ( v205 != String1.Buffer )
    NtdllpFreeStringRoutine(String1.Buffer);
  return (unsigned int)FullPath;
}
