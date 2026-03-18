/*
 * XREFs of ParseTerm @ 0x1C0013680
 * Callers:
 *     <none>
 * Callees:
 *     ParseNameTail @ 0x1C000D580 (ParseNameTail.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 *     RtlStringCchCopyA @ 0x1C0027100 (RtlStringCchCopyA.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     ParseInteger @ 0x1C0029E44 (ParseInteger.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int Field)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 **v10; // r10
  unsigned int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rsi
  int v14; // ebx
  unsigned __int8 **v15; // rax
  int v16; // edx
  __int64 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  void *v24; // rax
  __int64 (__fastcall *v25)(__int64, __int64, __int64); // rax
  __int64 v26; // rax
  void (__fastcall *v27)(__int64, __int64, __int64, __int64); // r10
  __int64 v28; // r15
  unsigned int v29; // r12d
  unsigned int v30; // esi
  __int64 v31; // rbx
  _QWORD *v32; // rsi
  _QWORD *v33; // rbx
  __int64 v34; // r8
  _QWORD *v35; // rax
  _QWORD *k; // rdx
  _QWORD *v37; // rcx
  _QWORD *v38; // r9
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // r9
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdi
  _QWORD *v47; // rbx
  __int64 v48; // r8
  _QWORD *v49; // rax
  _QWORD *m; // rdx
  _QWORD *v51; // rcx
  _QWORD *v52; // r9
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // r9
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  _QWORD *v58; // rax
  unsigned __int64 *v60; // rbx
  unsigned __int8 *v61; // rax
  unsigned int v62; // r8d
  unsigned __int8 *v63; // r9
  unsigned int v64; // edx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 *v69; // rdx
  char v70; // al
  int NameSpaceObjectNoLock; // r15d
  char v72; // al
  int v73; // r11d
  __int64 *v74; // r9
  char *v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r10
  signed __int64 v78; // r9
  char v79; // al
  size_t v80; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v82; // bl
  __int64 v83; // rsi
  __int64 v84; // rbx
  __int16 v85; // ax
  __int16 v86; // ax
  _QWORD *v87; // r13
  _QWORD *v88; // rdx
  __int64 v89; // r10
  _QWORD *v90; // rax
  _QWORD *j; // r8
  _QWORD *v92; // rcx
  _QWORD *v93; // r9
  __int64 v94; // rcx
  _QWORD *v95; // rax
  _QWORD *v96; // r9
  __int64 *v97; // rdx
  __int64 v98; // rax
  int v99; // ebx
  __int64 v100; // r8
  char v101; // al
  int v102; // r11d
  __int64 *v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r10
  _BYTE *v106; // r9
  char v107; // al
  __int64 v108; // rax
  __int64 v110; // r8
  void *v111; // rax
  __int64 v112; // r10
  __int64 v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // r10
  __int64 v116; // rcx
  _QWORD *v117; // rax
  __int64 v118; // r11
  __int64 v119; // rcx
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int8 v123; // r10
  int v124; // eax
  int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // r8
  int v128; // ebx
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int8 *v133; // rdx
  unsigned int v134; // eax
  _QWORD *v135; // rdx
  __int64 v136; // rcx
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  int v139; // r10d
  __int64 v140; // rcx
  char *v141; // rdx
  __int64 v142; // r8
  const char *v143; // r9
  char v144; // al
  unsigned int *v145; // rax
  char **v146; // r10
  char **v147; // r10
  __int64 v148; // rcx
  __int64 v149; // rcx
  _QWORD *v150; // rax
  char *v151; // r8
  char *v152; // rax
  unsigned int i; // ecx
  char *v154; // rdx
  __int64 v155; // rax
  char *v156; // r8
  char *v157; // rdx
  __int64 v158; // rax
  char *v159; // rcx
  __int64 v160; // rdx
  int v161; // eax
  char v162; // al
  const char *v163; // rcx
  int v164; // r10d
  __int64 (__fastcall *v165)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  __int64 v166; // r9
  __int64 v167; // r8
  __int64 v168; // rdx
  _QWORD *v169; // rcx
  __int64 v170; // rax
  int ObjectTypeName; // eax
  __int64 v172; // rcx
  _QWORD *v173; // rax
  __int64 v174; // [rsp+40h] [rbp-C0h]
  char pszDest; // [rsp+60h] [rbp-A0h] BYREF
  char v177; // [rsp+61h] [rbp-9Fh] BYREF
  char Src; // [rsp+160h] [rbp+60h] BYREF
  char v179; // [rsp+161h] [rbp+61h] BYREF
  _BYTE P[128]; // [rsp+260h] [rbp+160h] BYREF

  v3 = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = 1LL;
  if ( Field )
    goto LABEL_54;
  v8 = *(unsigned int *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    switch ( *(_DWORD *)(a2 + 16) & 0xF )
    {
      case 1:
LABEL_5:
        v9 = *(_DWORD *)(v5 + 76);
        v10 = (__int64 **)(v6 + 120);
        v11 = *(_DWORD *)(v5 + 72);
        while ( v11 >= v9 )
        {
          if ( v5 != *(_QWORD *)(v6 + 416) )
            return Field;
          v9 = *(_DWORD *)(v5 + 76);
          v11 = *(_DWORD *)(v5 + 72);
          if ( v11 >= v9 )
          {
LABEL_45:
            ++*(_DWORD *)(v5 + 16);
            goto LABEL_46;
          }
        }
        while ( 2 )
        {
          *(_DWORD *)(v5 + 72) = v11 + 1;
          if ( (gDebugger & 0xD0) != 0 && v11 )
          {
            ConPrintf(",");
            v3 = 0LL;
            v10 = (__int64 **)(v6 + 120);
            v7 = 1LL;
          }
          v12 = *(_QWORD *)(v5 + 48);
          v13 = *(_QWORD *)(v5 + 80) + 40LL * v11;
          v174 = v13;
          v14 = *(char *)(v11 + *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL));
          if ( v14 == 67 )
          {
            v15 = (unsigned __int8 **)&unk_1C0081A00;
            v16 = 0;
            v8 = 0LL;
            do
            {
              if ( *v10 == (__int64 *)*v15 )
                break;
              ++v16;
              ++v8;
              v15 += 2;
            }
            while ( (__int64)v15 < (__int64)&qword_1C0081AA0 );
            if ( v16 != 10 )
            {
              v8 *= 2LL;
              if ( (dword_1C00819F8[2 * v8] & 1) != 0 && v16 != -1 )
              {
                ConPrintf("\nHit Breakpoint %d.\n");
                ((void (*)(void))AMLIDebugger)();
                v10 = (__int64 **)(v6 + 120);
              }
            }
            v17 = *v10;
            v18 = *(unsigned __int8 *)*v10;
            if ( (_BYTE)v18 == 91 )
            {
              v8 = (__int64)v17 + 1;
              v19 = 0LL;
              *v10 = (__int64 *)((char *)v17 + 1);
              v138 = &ExOpcodeTable;
              if ( &atMutex )
              {
                while ( *(unsigned __int8 *)v8 != *(_DWORD *)v138 )
                {
                  v138 += 2;
                  if ( !v138[1] )
                    goto LABEL_15;
                }
                v19 = v138[1];
              }
            }
            else
            {
              v19 = (__int64)*(&OpcodeTable + v18);
            }
LABEL_15:
            if ( !v19 )
            {
              LogError(3222536193LL);
              AcpiDiagTraceAmlError(v6, 3222536193LL);
              PrintDebugMessage(134, **(unsigned __int8 **)(v6 + 120), *(_QWORD *)(v6 + 120), 0, 0LL);
              Field = -1072431103;
              goto LABEL_29;
            }
            v20 = *(_DWORD *)(v19 + 28);
            if ( (v20 & 8) == 0 )
            {
              if ( (v20 & 0x10) != 0 )
              {
                Field = ParseString(v6, v10, v13, 0LL);
                goto LABEL_29;
              }
              if ( (v20 & 2) != 0 )
              {
                Field = 0;
                v126 = *(_QWORD *)(v6 + 96);
                v127 = (unsigned int)*(unsigned __int8 *)*v10 - 104;
                v128 = v127;
                if ( (unsigned int)v127 >= *(_DWORD *)(v126 + 60) )
                {
                  LogError(3222536197LL);
                  AcpiDiagTraceAmlError(v6, 3222536197LL);
                  PrintDebugMessage(122, v128, 0, 0, 0LL);
                  Field = -1072431099;
                }
                else
                {
                  v8 = 5 * v127;
                  v129 = *(_QWORD *)(v126 + 64) + 40 * v127;
                  if ( v13 != v129 )
                  {
                    *(_OWORD *)v13 = *(_OWORD *)v129;
                    *(_OWORD *)(v13 + 16) = *(_OWORD *)(v129 + 16);
                    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v129 + 32);
                    if ( (*(_BYTE *)v129 & 1) != 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v129 + 8) + 8LL));
                    }
                    else if ( *(_QWORD *)(v129 + 32) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v129 + 8));
                      *(_WORD *)v13 |= 1u;
                      *(_QWORD *)(v13 + 8) = v129;
                    }
                  }
                  *v10 = (__int64 *)((char *)*v10 + 1);
                  if ( (gDebugger & 0xD0) != 0 )
                  {
                    ConPrintf("Arg%d=");
                    PrintObject(v13);
                  }
                }
                goto LABEL_29;
              }
              if ( (v20 & 4) != 0 )
              {
                v130 = (unsigned int)*(unsigned __int8 *)*v10 - 96;
                v131 = *(_QWORD *)(v6 + 96) + 8 * (v130 + 4 * v130 + 9);
                if ( v13 != v131 )
                {
                  *(_OWORD *)v13 = *(_OWORD *)v131;
                  *(_OWORD *)(v13 + 16) = *(_OWORD *)(v131 + 16);
                  *(_QWORD *)(v13 + 32) = *(_QWORD *)(v131 + 32);
                  if ( (*(_BYTE *)v131 & 1) != 0 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v131 + 8) + 8LL));
                  }
                  else if ( *(_QWORD *)(v131 + 32) )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v131 + 8));
                    *(_WORD *)v13 |= 1u;
                    *(_QWORD *)(v13 + 8) = v131;
                  }
                }
                if ( (gDebugger & 0xD0) != 0 )
                {
                  ConPrintf("Local%d=");
                  PrintObject(v13);
                  v10 = (__int64 **)(v6 + 120);
                }
                *v10 = (__int64 *)((char *)*v10 + 1);
                Field = 0;
                goto LABEL_29;
              }
              if ( (v20 & 0x20) == 0 )
              {
                if ( (v20 & 0x40) != 0 )
                {
                  LogError(3222536198LL);
                  AcpiDiagTraceAmlError(v6, 3222536198LL);
                  PrintDebugMessage(133, 0, 0, 0, 0LL);
                  Field = -1072431098;
                }
                else
                {
                  *v10 = (__int64 *)((char *)*v10 + 1);
                  v21 = HeapAlloc(v6 + 480, 1297237576LL, 96LL);
                  v22 = v21;
                  if ( v21 )
                  {
                    *(_QWORD *)(v21 + 8) = *(_QWORD *)(v6 + 416);
                    *(_QWORD *)(v6 + 416) = v21;
                    *(_DWORD *)v21 = 1297237332;
                    *(_QWORD *)(v21 + 24) = ParseTerm;
                    *(_QWORD *)(v21 + 32) = v17;
                    Field = 0;
                    *(_QWORD *)(v21 + 48) = v12;
                    *(_QWORD *)(v21 + 56) = v19;
                    *(_QWORD *)(v21 + 88) = v174;
                    v8 = *(_QWORD *)(v19 + 16);
                    if ( v8 )
                    {
                      v23 = -1LL;
                      do
                        ++v23;
                      while ( *(_BYTE *)(v8 + v23) );
                      *(_DWORD *)(v22 + 76) = v23;
                      if ( (_DWORD)v23 )
                      {
                        v24 = (void *)HeapAlloc(*(_QWORD *)(v6 + 320), 1413563464LL, (unsigned int)(40 * v23));
                        *(_QWORD *)(v22 + 80) = v24;
                        if ( v24 )
                        {
                          memset(v24, 0, 40LL * *(unsigned int *)(v22 + 76));
                        }
                        else
                        {
                          LogError(3221225626LL);
                          AcpiDiagTraceAmlError(v6, 3221225626LL);
                          PrintDebugMessage(154, 0, 0, 0, 0LL);
                          Field = -1073741670;
                        }
                      }
                    }
                    else
                    {
                      *(_DWORD *)(v21 + 76) = 0;
                    }
                  }
                  else
                  {
                    LogError(3222536194LL);
                    AcpiDiagTraceAmlError(v6, 3222536194LL);
                    PrintDebugMessage(153, 0, 0, 0, 0LL);
                    Field = -1072431102;
                  }
                }
                goto LABEL_29;
              }
              v69 = *v10;
              v70 = *(_BYTE *)*v10;
              if ( v70 == 92 )
              {
                RtlStringCchCopyA(&Src, 0x100uLL, "\\");
                ++*v146;
LABEL_288:
                NameSpaceObjectNoLock = ParseNameTail(v6, v146, (__int64)&Src);
                goto LABEL_124;
              }
              if ( v70 == 94 )
              {
                RtlStringCchCopyA(&Src, 0x100uLL, "^");
                ++*v146;
                v151 = &v179;
                v152 = *v146;
                for ( i = 1; i < 0xFF; ++i )
                {
                  v154 = v152;
                  if ( *v152 != 94 )
                    break;
                  ++v152;
                  *v151++ = 94;
                  *v146 = v152;
                  v154 = v152;
                }
                *(&Src + i) = 0;
                if ( *v154 != 94 )
                  goto LABEL_288;
                LogError(3221225734LL);
                AcpiDiagTraceAmlError(v6, 3221225734LL);
                PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
                Field = -1073741562;
                goto LABEL_29;
              }
              Src = 0;
              NameSpaceObjectNoLock = 0;
              v8 = -1LL;
              do
                ++v8;
              while ( *(&Src + v8) );
              v72 = *(_BYTE *)v69;
              if ( !*(_BYTE *)v69 )
              {
                *v10 = (__int64 *)((char *)v69 + 1);
                goto LABEL_124;
              }
              if ( v72 == 47 )
              {
                *v10 = (__int64 *)((char *)v69 + 1);
                v73 = *((unsigned __int8 *)v69 + 1);
                *v10 = (__int64 *)((char *)v69 + 2);
                if ( v73 )
                  goto LABEL_113;
LABEL_124:
                if ( !NameSpaceObjectNoLock )
                {
                  if ( (gDebugger & 0xD0) != 0 )
                    ConPrintf("%s");
                  v80 = -1LL;
                  do
                    ++v80;
                  while ( *(&Src + v80) );
                  if ( v80 + 1 >= 0x80 )
                  {
                    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v80 + 1, 1768973121LL);
                    if ( !Pool2 )
                    {
                      Field = -1073741670;
                      goto LABEL_29;
                    }
                  }
                  else
                  {
                    Pool2 = P;
                  }
                  memmove(Pool2, &Src, v80);
                  Pool2[v80] = 0;
                  v82 = ExAcquireSpinLockShared(&ACPINamespaceLock);
                  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2);
                  ExReleaseSpinLockShared(&ACPINamespaceLock, v82);
                  if ( P != Pool2 )
                    ExFreePoolWithTag(Pool2, 0);
                  Field = NameSpaceObjectNoLock;
                  if ( NameSpaceObjectNoLock == -1073741772 )
                  {
                    LogError(3221225524LL);
                    AcpiDiagTraceAmlError(v6, 3221225524LL);
                    PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
                    goto LABEL_29;
                  }
                }
                Field = NameSpaceObjectNoLock;
                if ( !NameSpaceObjectNoLock )
                {
                  v83 = 0LL;
                  v8 = 128LL;
                  if ( MEMORY[0x42] == 128 )
                  {
                    do
                      v83 = *(_QWORD *)(v83 + 80);
                    while ( *(_WORD *)(v83 + 66) == 128 );
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                    _InterlockedIncrement((volatile signed __int32 *)(v83 + 112));
                  if ( *(_WORD *)(v83 + 66) == 8 )
                  {
                    Field = PushCall(v6, v83, v174);
                  }
                  else
                  {
                    v84 = v83 + 64;
                    Field = 0;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v85 = *(_WORD *)(v84 + 2);
                        if ( v85 != 128 )
                          break;
                        v84 = *(_QWORD *)(v84 + 16) + 64LL;
                      }
                      if ( v85 != 129 )
                        break;
                      v84 = *(_QWORD *)(v84 + 16);
                    }
                    if ( v85 == 5 )
                    {
                      v121 = HeapAlloc(v6 + 480, 1297237576LL, 48LL);
                      if ( v121 )
                      {
                        *(_QWORD *)(v121 + 8) = *(_QWORD *)(v6 + 416);
                        v8 = (__int64)AccFieldUnit;
                        *(_QWORD *)(v6 + 416) = v121;
                        *(_QWORD *)(v121 + 24) = AccFieldUnit;
                        *(_DWORD *)v121 = 1430668097;
                        *(_QWORD *)(v121 + 32) = v84;
                        *(_DWORD *)(v121 + 16) = 0x10000;
                        *(_QWORD *)(v121 + 40) = v174;
                      }
                      else
                      {
                        LogError(3222536194LL);
                        AcpiDiagTraceAmlError(v6, 3222536194LL);
                        PrintDebugMessage(153, 0, 0, 0, 0LL);
                        Field = -1072431102;
                      }
                    }
                    else if ( v85 == 14 )
                    {
                      Field = ReadField(v6, v84, *(_QWORD *)(v84 + 32) + 12LL, v174);
                    }
                    else
                    {
                      if ( v174 != v84 )
                      {
                        *(_OWORD *)v174 = *(_OWORD *)v84;
                        *(_OWORD *)(v174 + 16) = *(_OWORD *)(v84 + 16);
                        *(_QWORD *)(v174 + 32) = *(_QWORD *)(v84 + 32);
                        if ( (*(_BYTE *)v84 & 1) != 0 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v84 + 8) + 8LL));
                        }
                        else if ( *(_QWORD *)(v84 + 32) )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v84 + 8));
                          *(_WORD *)v174 |= 1u;
                          *(_QWORD *)(v174 + 8) = v84;
                        }
                      }
                      if ( (gDebugger & 0xD0) != 0 )
                      {
                        ConPrintf("=");
                        PrintObject(v174);
                      }
                    }
                  }
                  if ( (gdwfAMLI & 4) != 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)(v83 + 112), 0xFFFFFFFF) == 1 )
                  {
                    *(_WORD *)(v83 + 64) |= 4u;
                    if ( (*(_WORD *)(v83 + 64) & 0x40) == 0 )
                      FreeNameSpaceObjects(v83);
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                  {
                    v8 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)0x70, 0xFFFFFFFF);
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = 0LL;
                      MEMORY[0x40] |= 4u;
                      if ( (MEMORY[0x40] & 0x40) == 0 )
                        FreeNameSpaceObjects(0LL);
                    }
                  }
                }
                goto LABEL_29;
              }
              if ( v72 == 46 )
              {
                v73 = 2;
                *v10 = (__int64 *)((char *)v69 + 1);
              }
              else
              {
                v73 = 1;
              }
              while ( 1 )
              {
LABEL_113:
                if ( (unsigned __int64)(unsigned int)v8 + 4 >= 0x100 )
                {
                  LogError(3221225734LL);
                  AcpiDiagTraceAmlError(v6, 3221225734LL);
                  PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
                  NameSpaceObjectNoLock = -1073741562;
                  goto LABEL_124;
                }
                v74 = *v10;
                v75 = &Src + (unsigned int)v8;
                v76 = (unsigned int)(256 - v8);
                if ( (unsigned __int64)(v76 - 1) <= 0x7FFFFFFE )
                  break;
                if ( 256 != (_DWORD)v8 )
                  goto LABEL_122;
LABEL_123:
                *v10 = (__int64 *)((char *)*v10 + 4);
                v8 = (unsigned int)(v8 + 4);
                if ( !--v73 )
                  goto LABEL_124;
                if ( (unsigned int)(v8 + 1) < 0x100 )
                {
                  RtlStringCchCopyA(&Src + (unsigned int)v8, (unsigned int)(256 - v8), ".");
                  LODWORD(v8) = v164;
                }
                v10 = (__int64 **)(v6 + 120);
              }
              v77 = 4 - v76;
              v78 = (char *)v74 - v75;
              while ( v76 + v77 )
              {
                v79 = v75[v78];
                if ( !v79 )
                {
                  if ( v76 )
                    break;
LABEL_368:
                  --v75;
                  break;
                }
                *v75++ = v79;
                if ( !--v76 )
                  goto LABEL_368;
              }
              v10 = (__int64 **)(v6 + 120);
LABEL_122:
              *v75 = 0;
              goto LABEL_123;
            }
            Field = 0;
            v8 = *(unsigned __int8 *)*v10;
            *v10 = (__int64 *)((char *)*v10 + 1);
            *(_WORD *)(v13 + 2) = 1;
            *(_QWORD *)(v13 + 16) = 0LL;
            if ( (_DWORD)v8 == 10 )
            {
              v8 = *(unsigned __int8 *)*v10;
              *(_BYTE *)(v13 + 16) = v8;
              *v10 = (__int64 *)((char *)*v10 + 1);
            }
            else
            {
              if ( !(_BYTE)v8 )
              {
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("Zero");
                goto LABEL_29;
              }
              if ( (unsigned int)v8 > 0xE )
              {
                if ( (_DWORD)v8 == 255 )
                {
                  if ( (unsigned __int8)IsCompatableDSDTRevision(v8, (unsigned int)v8, 1LL, 0LL) )
                    v155 = -1LL;
                  else
                    v155 = 0xFFFFFFFFLL;
                  *(_QWORD *)(v13 + 16) = v155;
                  if ( (gDebugger & 0xD0) != 0 )
                    ConPrintf("Ones");
                  goto LABEL_29;
                }
                goto LABEL_359;
              }
              switch ( (_DWORD)v8 )
              {
                case 0xE:
                  v8 = **v10;
                  *(_QWORD *)(v13 + 16) = v8;
                  ++*v10;
                  break;
                case 1:
                  *(_QWORD *)(v13 + 16) = 1LL;
                  if ( (gDebugger & 0xD0) != 0 )
                    ConPrintf("One");
                  goto LABEL_29;
                case 0xB:
                  v8 = *(unsigned __int16 *)*v10;
                  *(_WORD *)(v13 + 16) = v8;
                  *v10 = (__int64 *)((char *)*v10 + 2);
                  break;
                case 0xC:
                  v8 = *(unsigned int *)*v10;
                  *(_DWORD *)(v13 + 16) = v8;
                  *v10 = (__int64 *)((char *)*v10 + 4);
                  break;
                default:
LABEL_359:
                  *v10 = (__int64 *)((char *)*v10 - 1);
                  LogError(3222536193LL);
                  AcpiDiagTraceAmlError(v6, 3222536193LL);
                  PrintDebugMessage(128, **(unsigned __int8 **)(v6 + 120), *(_QWORD *)(v6 + 120), 0, 0LL);
                  Field = -1072431103;
                  goto LABEL_29;
              }
            }
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("0x%I64x");
            goto LABEL_29;
          }
          switch ( v14 )
          {
            case 'B':
              *(_WORD *)(v13 + 2) = 1;
              *(_QWORD *)(v13 + 16) = 0LL;
              goto LABEL_198;
            case 'D':
              Field = ParseInteger(v10, v13, 4LL);
              goto LABEL_29;
            case 'N':
              v97 = *v10;
              v8 = *(unsigned __int8 *)*v10;
              v98 = (__int64)*(&OpcodeTable + v8);
              if ( !v98 || (*(_DWORD *)(v98 + 28) & 0x20) == 0 )
              {
                LogError(3222536193LL);
                AcpiDiagTraceAmlError(v6, 3222536193LL);
                PrintDebugMessage(132, **(unsigned __int8 **)(v6 + 120), *(_QWORD *)(v6 + 120), 0, 0LL);
                Field = -1072431103;
                goto LABEL_29;
              }
              if ( (_BYTE)v8 == 92 )
              {
                RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
                ++*v147;
              }
              else
              {
                if ( (_BYTE)v8 != 94 )
                {
                  pszDest = 0;
                  v99 = 0;
                  v100 = -1LL;
                  do
                    ++v100;
                  while ( *(&pszDest + v100) );
                  v101 = *(_BYTE *)v97;
                  if ( *(_BYTE *)v97 )
                  {
                    if ( v101 != 47 )
                    {
                      if ( v101 == 46 )
                      {
                        v102 = 2;
                        *v10 = (__int64 *)((char *)v97 + 1);
                      }
                      else
                      {
                        v102 = 1;
                      }
                      while ( 1 )
                      {
LABEL_177:
                        if ( (unsigned __int64)(unsigned int)v100 + 4 >= 0x100 )
                        {
                          LogError(3221225734LL);
                          AcpiDiagTraceAmlError(v6, 3221225734LL);
                          PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                          v99 = -1073741562;
                          goto LABEL_188;
                        }
                        v103 = *v10;
                        v8 = (__int64)(&pszDest + (unsigned int)v100);
                        v104 = (unsigned int)(256 - v100);
                        if ( (unsigned __int64)(v104 - 1) <= 0x7FFFFFFE )
                          break;
                        if ( 256 != (_DWORD)v100 )
                          goto LABEL_186;
LABEL_187:
                        *v10 = (__int64 *)((char *)*v10 + 4);
                        LODWORD(v100) = v100 + 4;
                        if ( !--v102 )
                          goto LABEL_188;
                        v139 = v100 + 1;
                        if ( (unsigned int)(v100 + 1) < 0x100 )
                        {
                          v140 = (unsigned int)(256 - v100);
                          v141 = &pszDest + (unsigned int)v100;
                          if ( (unsigned __int64)(v140 - 1) > 0x7FFFFFFE )
                          {
                            if ( 256 != (_DWORD)v100 )
                              goto LABEL_279;
                          }
                          else
                          {
                            v142 = 2147483646 - v140;
                            v143 = (const char *)("." - v141);
                            while ( v140 + v142 )
                            {
                              v144 = v141[(_QWORD)v143];
                              if ( !v144 )
                              {
                                if ( v140 )
                                  break;
LABEL_340:
                                --v141;
                                break;
                              }
                              *v141++ = v144;
                              if ( !--v140 )
                                goto LABEL_340;
                            }
LABEL_279:
                            *v141 = 0;
                          }
                          LODWORD(v100) = v139;
                        }
                        v10 = (__int64 **)(v6 + 120);
                      }
                      v105 = 4 - v104;
                      v106 = (char *)v103 - v8;
                      while ( v104 + v105 )
                      {
                        v107 = v106[v8];
                        if ( !v107 )
                        {
                          if ( v104 )
                            break;
LABEL_337:
                          --v8;
                          break;
                        }
                        *(_BYTE *)v8++ = v107;
                        if ( !--v104 )
                          goto LABEL_337;
                      }
                      v10 = (__int64 **)(v6 + 120);
LABEL_186:
                      *(_BYTE *)v8 = 0;
                      goto LABEL_187;
                    }
                    *v10 = (__int64 *)((char *)v97 + 1);
                    v102 = *((unsigned __int8 *)v97 + 1);
                    *v10 = (__int64 *)((char *)v97 + 2);
                    if ( v102 )
                      goto LABEL_177;
                  }
                  else
                  {
                    *v10 = (__int64 *)((char *)v97 + 1);
                  }
LABEL_188:
                  Field = v99;
                  if ( !v99 )
                  {
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("%s");
                    *(_WORD *)(v13 + 2) = 2;
                    v108 = -1LL;
                    while ( *(&pszDest + ++v108) != 0 )
                      ;
                    v110 = (unsigned int)(v108 + 1);
                    *(_DWORD *)(v13 + 24) = v110;
                    v111 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, v110);
                    *(_QWORD *)(v13 + 32) = v111;
                    if ( v111 )
                    {
                      memmove(v111, &pszDest, *(unsigned int *)(v13 + 24));
                    }
                    else
                    {
                      LogError(3221225626LL);
                      AcpiDiagTraceAmlError(v6, 3221225626LL);
                      PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
                      Field = -1073741670;
                    }
                  }
                  goto LABEL_29;
                }
                RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
                ++*v147;
                v156 = &v177;
                v157 = *v147;
                v158 = 1LL;
                do
                {
                  v159 = v157;
                  if ( *v157 != 94 )
                    break;
                  ++v157;
                  *v156++ = 94;
                  *v147 = v157;
                  v158 = (unsigned int)(v158 + 1);
                  v159 = v157;
                }
                while ( (unsigned int)v158 < 0xFF );
                *(&pszDest + v158) = 0;
                if ( *v159 == 94 )
                {
                  LogError(3221225734LL);
                  AcpiDiagTraceAmlError(v6, 3221225734LL);
                  PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
                  Field = -1073741562;
                  goto LABEL_29;
                }
              }
              v99 = ParseNameTail(v6, v147, (__int64)&pszDest);
              goto LABEL_188;
            case 'O':
              v8 = *(unsigned __int8 *)*v10;
              *v10 = (__int64 *)((char *)*v10 + 1);
              *(_WORD *)(v13 + 2) = 1;
              *(_QWORD *)(v13 + 16) = 0LL;
              if ( (unsigned int)v8 >= 0xF && (unsigned int)v8 < 0xFF )
                goto LABEL_253;
              if ( !(_BYTE)v8 )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  v163 = "Zero";
                  goto LABEL_351;
                }
LABEL_200:
                Field = 0;
                goto LABEL_33;
              }
              if ( (_DWORD)v8 == 12 )
              {
                v8 = *(unsigned int *)*v10;
                *(_DWORD *)(v13 + 16) = v8;
                *v10 = (__int64 *)((char *)*v10 + 4);
                goto LABEL_199;
              }
              if ( (unsigned int)v8 <= 0xC )
              {
                if ( (_DWORD)v8 != 1 )
                {
                  if ( (_DWORD)v8 == 10 )
                  {
LABEL_198:
                    v8 = *(unsigned __int8 *)*v10;
                    *(_BYTE *)(v13 + 16) = v8;
                    *v10 = (__int64 *)((char *)*v10 + 1);
                    goto LABEL_199;
                  }
                  if ( (_DWORD)v8 == 11 )
                  {
                    v8 = *(unsigned __int16 *)*v10;
                    *(_WORD *)(v13 + 16) = v8;
                    *v10 = (__int64 *)((char *)*v10 + 2);
                    goto LABEL_199;
                  }
LABEL_253:
                  *v10 = (__int64 *)((char *)*v10 - 1);
                  LOBYTE(v3) = 1;
                  Field = ParseString(v6, v10, v13, v3);
                  if ( Field == -1072431103 )
                  {
                    v133 = *(unsigned __int8 **)(v6 + 120);
                    v10 = (__int64 **)(v6 + 120);
                    v8 = *v133;
                    if ( (unsigned __int8)(v8 - 17) <= 2u )
                    {
                      v134 = PushTerm(v6, (_DWORD)v133, v12, (unsigned int)*(&OpcodeTable + v8), v13);
                      ++*(_QWORD *)(v6 + 120);
                      v10 = (__int64 **)(v6 + 120);
                      Field = v134;
                    }
                    goto LABEL_30;
                  }
LABEL_29:
                  v10 = (__int64 **)(v6 + 120);
LABEL_30:
                  if ( Field )
                    return Field;
                  v3 = 0LL;
                  goto LABEL_32;
                }
                *(_QWORD *)(v13 + 16) = 1LL;
                if ( (gDebugger & 0xD0) == 0 )
                  goto LABEL_200;
                v163 = "One";
LABEL_351:
                ConPrintf(v163);
LABEL_353:
                v3 = 0LL;
                v10 = (__int64 **)(v6 + 120);
                v7 = 1LL;
                goto LABEL_200;
              }
              if ( (_DWORD)v8 == 14 )
              {
                v8 = **v10;
                *(_QWORD *)(v13 + 16) = v8;
                ++*v10;
LABEL_199:
                if ( (gDebugger & 0xD0) == 0 )
                  goto LABEL_200;
                ConPrintf("0x%I64x");
                goto LABEL_353;
              }
              if ( (_DWORD)v8 != 255 )
                goto LABEL_253;
              v162 = IsCompatableDSDTRevision(v8, (unsigned int)v8, 1LL, 0LL);
              v8 = 0xFFFFFFFFLL;
              if ( v162 )
                v8 = -1LL;
              *(_QWORD *)(v13 + 16) = v8;
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf("Ones");
              v3 = 0LL;
              v10 = (__int64 **)(v6 + 120);
              Field = 0;
LABEL_32:
              v7 = 1LL;
LABEL_33:
              if ( v5 != *(_QWORD *)(v6 + 416) )
                return Field;
              v11 = *(_DWORD *)(v5 + 72);
              if ( v11 >= *(_DWORD *)(v5 + 76) )
                goto LABEL_45;
              continue;
            case 'S':
              Field = ParseSuperName(v6, v13, 0LL);
              goto LABEL_29;
            case 'W':
              Field = ParseInteger(v10, v13, 2LL);
              goto LABEL_29;
            case 's':
              LOBYTE(v7) = 1;
              Field = ParseSuperName(v6, v13, v7);
              goto LABEL_29;
            default:
              LogError(3222536195LL);
              AcpiDiagTraceAmlError(v6, 3222536195LL);
              PrintDebugMessage(121, v14, 0, 0, 0LL);
              return (unsigned int)-1072431101;
          }
        }
      case 2:
LABEL_46:
        a2 = *(_QWORD *)(v5 + 56);
        ++*(_DWORD *)(v5 + 16);
        if ( *(int *)(a2 + 28) < 0 )
        {
          v165 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(a2 + 32);
          if ( v165 )
          {
            Field = v165(12LL, 1LL, *(unsigned int *)(a2 + 8), *(_QWORD *)(v5 + 64) + 120LL, *(_DWORD *)(a2 + 40), v6);
            if ( Field == 259 )
              return 32772;
          }
        }
        break;
      case 3:
        break;
      case 4:
LABEL_51:
        ++*(_DWORD *)(v5 + 16);
        if ( (gDebugger & 0xD0) != 0 )
        {
          a2 = *(_QWORD *)(v5 + 56);
          if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
          {
            ConPrintf("=");
            PrintObject(*(_QWORD *)(v5 + 88));
          }
        }
        if ( (gDebugger & 0x40) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
          AMLIDebugger(v8, a2, v7);
        }
        else
        {
          v26 = *(_QWORD *)(v5 + 56);
          v27 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v26 + 32);
          if ( v27 )
          {
            v166 = *(unsigned int *)(v26 + 40);
            v167 = *(_QWORD *)(v5 + 64) + 120LL;
            v168 = *(unsigned int *)(v26 + 8);
            if ( *(int *)(v26 + 28) >= 0 )
            {
              v27(1LL, v168, v167, v166);
            }
            else
            {
              Field = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))v27)(
                        12LL,
                        2LL,
                        (unsigned int)v168,
                        v167,
                        v166,
                        v6);
              if ( Field == 259 )
                return 32772;
            }
          }
        }
LABEL_54:
        if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) - 18) <= 1 )
          --dword_1C00819C4;
        v28 = *(_QWORD *)(v5 + 80);
        if ( v28 )
        {
          v29 = *(_DWORD *)(v5 + 76);
          v30 = 0;
          if ( v29 )
          {
            do
            {
              v31 = 5LL * v30;
              if ( (*(_BYTE *)(v28 + 40LL * v30) & 1) != 0 )
              {
                v122 = *(_QWORD *)(v28 + 40LL * v30 + 8);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v122 + 8), 0xFFFFFFFF) == 1
                  && (*(_BYTE *)v122 & 8) != 0 )
                {
                  FreeData(v122);
                }
              }
              else if ( *(_QWORD *)(v28 + 40LL * v30 + 32) && *(int *)(v28 + 40LL * v30 + 8) <= 0 )
              {
                v86 = *(_WORD *)(v28 + 40LL * v30 + 2);
                if ( v86 == 4 )
                {
                  v145 = *(unsigned int **)(v28 + 40LL * v30 + 32);
                  FreeDataBuffs(v145 + 2, *v145);
                  v86 = *(_WORD *)(v28 + 40LL * v30 + 2);
                }
                if ( v86 == 2 )
                {
                  v87 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                  *((_DWORD *)v87 - 4) = 0;
                  byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                  v88 = v87 - 2;
                  v89 = *(v87 - 1);
                  v90 = *(_QWORD **)(v89 + 40);
                  for ( j = (_QWORD *)(v89 + 40); v90 != j; v90 = (_QWORD *)*v90 )
                  {
                    if ( v87 < v90 )
                      break;
                  }
                  v92 = (_QWORD *)v90[1];
                  if ( (_QWORD *)*v92 != v90 )
                    goto LABEL_432;
                  v87[1] = v92;
                  *v87 = v90;
                  *v92 = v87;
                  v90[1] = v87;
                  v93 = (_QWORD *)*v87;
                  v94 = *v87 - 16LL;
                  if ( (_QWORD *)*v87 != j )
                  {
                    v118 = *((unsigned int *)v88 + 1);
                    if ( (_QWORD *)v94 == (_QWORD *)((char *)v88 + v118) )
                    {
                      *((_DWORD *)v88 + 1) = v118 + *(_DWORD *)(v94 + 4);
                      v119 = *v93;
                      if ( *(_QWORD **)(*v93 + 8LL) != v93 )
                        goto LABEL_432;
                      v120 = (_QWORD *)v93[1];
                      if ( (_QWORD *)*v120 != v93 )
                        goto LABEL_432;
                      *v120 = v119;
                      *(_QWORD *)(v119 + 8) = v120;
                    }
                  }
                  v95 = (_QWORD *)v88[3];
                  v96 = v95 - 2;
                  if ( v95 != j )
                  {
                    v148 = *((unsigned int *)v96 + 1);
                    if ( v88 == (_QWORD *)((char *)v96 + v148) )
                    {
                      *((_DWORD *)v96 + 1) = *((_DWORD *)v88 + 1) + v148;
                      v149 = *v87;
                      if ( *(_QWORD **)(*v87 + 8LL) != v87 )
                        goto LABEL_432;
                      v150 = (_QWORD *)v87[1];
                      if ( (_QWORD *)*v150 != v87 )
                        goto LABEL_432;
                      *v150 = v149;
                      v88 = v96;
                      *(_QWORD *)(v149 + 8) = v150;
                    }
                  }
                  if ( *(_QWORD *)(v89 + 32) <= (unsigned __int64)v88 + *((unsigned int *)v88 + 1) )
                  {
                    *(_QWORD *)(v89 + 32) = v88;
                    v135 = v88 + 2;
                    v136 = *v135;
                    if ( *(_QWORD **)(*v135 + 8LL) != v135 )
                      goto LABEL_432;
                    v137 = (_QWORD *)v135[1];
                    if ( (_QWORD *)*v137 != v135 )
                      goto LABEL_432;
                    *v137 = v136;
                    *(_QWORD *)(v136 + 8) = v137;
                  }
                  KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
                }
                else
                {
                  switch ( v86 )
                  {
                    case 3:
                    case 4:
                    case 7:
                    case 8:
                    case 10:
                    case 11:
                    case 12:
                    case 14:
                      HeapFree(*(_QWORD *)(v28 + 40LL * v30 + 32));
                      break;
                    case 5:
                      v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      v170 = *v169;
                      if ( !*v169 )
                        goto LABEL_413;
                      goto LABEL_412;
                    case 9:
                      PerformMutexDriverCallbacks(1, *(_QWORD *)(v28 + 40LL * v30 + 32), 0, 0, 0);
                      HeapFree(*(_QWORD *)(v28 + 40LL * v30 + 32));
                      break;
                    case 130:
                      v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      if ( *v169 )
                      {
                        DereferenceObjectEx(*v169);
                        v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      }
                      v170 = v169[1];
                      if ( v170 )
                        goto LABEL_412;
                      goto LABEL_413;
                    case 131:
                      v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      v170 = *v169;
                      if ( *v169 )
                        goto LABEL_412;
                      goto LABEL_413;
                    case 132:
                      v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      if ( *v169 )
                      {
                        DereferenceObjectEx(*v169);
                        v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      }
                      v170 = v169[1];
                      if ( v170 )
                      {
LABEL_412:
                        DereferenceObjectEx(v170);
                        v169 = *(_QWORD **)(v28 + 40LL * v30 + 32);
                      }
LABEL_413:
                      HeapFree(v169);
                      break;
                    default:
                      LogError(3222536195LL);
                      AcpiDiagTraceAmlError(0LL, 3222536195LL);
                      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v28 + 40LL * v30 + 2));
                      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                      break;
                  }
                }
              }
              *(_OWORD *)(v28 + 40LL * v30++) = 0LL;
              *(_OWORD *)(v28 + 8 * v31 + 16) = 0LL;
              *(_QWORD *)(v28 + 8 * v31 + 32) = 0LL;
            }
            while ( v30 < v29 );
            v6 = a1;
          }
          v32 = *(_QWORD **)(v5 + 80);
          *((_DWORD *)v32 - 4) = 0;
          v33 = v32 - 2;
          byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v34 = *(v32 - 1);
          v35 = *(_QWORD **)(v34 + 40);
          for ( k = (_QWORD *)(v34 + 40); v35 != k; v35 = (_QWORD *)*v35 )
          {
            if ( v32 < v35 )
              break;
          }
          v37 = (_QWORD *)v35[1];
          if ( (_QWORD *)*v37 != v35 )
            goto LABEL_432;
          v32[1] = v37;
          *v32 = v35;
          *v37 = v32;
          v35[1] = v32;
          v38 = (_QWORD *)*v32;
          v39 = *v32 - 16LL;
          if ( (_QWORD *)*v32 != k )
          {
            v112 = *((unsigned int *)v33 + 1);
            if ( (_QWORD *)v39 == (_QWORD *)((char *)v33 + v112) )
            {
              *((_DWORD *)v33 + 1) = v112 + *(_DWORD *)(v39 + 4);
              v113 = *v38;
              if ( *(_QWORD **)(*v38 + 8LL) != v38 )
                goto LABEL_432;
              v114 = (_QWORD *)v38[1];
              if ( (_QWORD *)*v114 != v38 )
                goto LABEL_432;
              *v114 = v113;
              *(_QWORD *)(v113 + 8) = v114;
            }
          }
          v40 = (_QWORD *)v33[3];
          v41 = v40 - 2;
          if ( v40 != k )
          {
            v66 = *((unsigned int *)v41 + 1);
            if ( v33 == (_QWORD *)((char *)v41 + v66) )
            {
              *((_DWORD *)v41 + 1) = *((_DWORD *)v33 + 1) + v66;
              v67 = *v32;
              if ( *(_QWORD **)(*v32 + 8LL) != v32 )
                goto LABEL_432;
              v68 = (_QWORD *)v32[1];
              if ( (_QWORD *)*v68 != v32 )
                goto LABEL_432;
              *v68 = v67;
              v33 = v41;
              *(_QWORD *)(v67 + 8) = v68;
            }
          }
          if ( *(_QWORD *)(v34 + 32) <= (unsigned __int64)v33 + *((unsigned int *)v33 + 1) )
          {
            *(_QWORD *)(v34 + 32) = v33;
            v42 = v33 + 2;
            v43 = *v42;
            if ( *(_QWORD **)(*v42 + 8LL) != v42 )
              goto LABEL_432;
            v44 = (_QWORD *)v42[1];
            if ( (_QWORD *)*v44 != v42 )
              goto LABEL_432;
            *v44 = v43;
            *(_QWORD *)(v43 + 8) = v44;
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
        }
        v45 = *(_QWORD *)(v5 + 64);
        if ( v45 )
        {
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v45 + 64) |= 4u;
            if ( (*(_WORD *)(v45 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v45);
          }
          *(_QWORD *)(v5 + 64) = 0LL;
        }
        v46 = *(_QWORD **)(v6 + 416);
        v47 = v46 - 2;
        *(_QWORD *)(v6 + 416) = v46[1];
        *((_DWORD *)v46 - 4) = 0;
        byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v48 = *(v46 - 1);
        v49 = *(_QWORD **)(v48 + 40);
        for ( m = (_QWORD *)(v48 + 40); v49 != m; v49 = (_QWORD *)*v49 )
        {
          if ( v46 < v49 )
            break;
        }
        v51 = (_QWORD *)v49[1];
        if ( (_QWORD *)*v51 == v49 )
        {
          v46[1] = v51;
          *v46 = v49;
          *v51 = v46;
          v49[1] = v46;
          v52 = (_QWORD *)*v46;
          v53 = *v46 - 16LL;
          if ( (_QWORD *)*v46 != m )
          {
            v115 = *((unsigned int *)v47 + 1);
            if ( (_QWORD *)v53 == (_QWORD *)((char *)v47 + v115) )
            {
              *((_DWORD *)v47 + 1) = v115 + *(_DWORD *)(v53 + 4);
              v116 = *v52;
              if ( *(_QWORD **)(*v52 + 8LL) != v52 )
                goto LABEL_432;
              v117 = (_QWORD *)v52[1];
              if ( (_QWORD *)*v117 != v52 )
                goto LABEL_432;
              *v117 = v116;
              *(_QWORD *)(v116 + 8) = v117;
            }
          }
          v54 = (_QWORD *)v47[3];
          v55 = v54 - 2;
          if ( v54 != m )
          {
            v132 = *((unsigned int *)v55 + 1);
            if ( v47 == (_QWORD *)((char *)v55 + v132) )
            {
              *((_DWORD *)v55 + 1) = *((_DWORD *)v47 + 1) + v132;
              v172 = *v46;
              if ( *(_QWORD **)(*v46 + 8LL) != v46 )
                goto LABEL_432;
              v173 = (_QWORD *)v46[1];
              if ( (_QWORD *)*v173 != v46 )
                goto LABEL_432;
              *v173 = v172;
              v47 = v55;
              *(_QWORD *)(v172 + 8) = v173;
            }
          }
          if ( *(_QWORD *)(v48 + 32) > (unsigned __int64)v47 + *((unsigned int *)v47 + 1) )
          {
LABEL_79:
            KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
            return Field;
          }
          *(_QWORD *)(v48 + 32) = v47;
          v56 = v47 + 2;
          v57 = *v56;
          if ( *(_QWORD **)(*v56 + 8LL) == v56 )
          {
            v58 = (_QWORD *)v56[1];
            if ( (_QWORD *)*v58 == v56 )
            {
              *v58 = v57;
              *(_QWORD *)(v57 + 8) = v58;
              goto LABEL_79;
            }
          }
        }
LABEL_432:
        __fastfail(3u);
      case 5:
        goto LABEL_54;
      default:
        return Field;
    }
    ++*(_DWORD *)(v5 + 16);
    if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v5 + 76) )
      ConPrintf(")");
    v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v5 + 56) + 48LL);
    if ( v25 )
    {
      Field = v25(v6, v5, v7);
      if ( Field || v5 != *(_QWORD *)(v6 + 416) )
        return Field;
    }
    goto LABEL_51;
  }
  *(_DWORD *)(a2 + 16) = v8 + 1;
  if ( (gDebugger & 0xD0) != 0 )
  {
    v160 = *(_QWORD *)(a2 + 56);
    v161 = *(_DWORD *)(v160 + 8);
    if ( v161 == 18 || v161 == 19 )
    {
      ++dword_1C00819C4;
      PrintIndent(v6, v160, 1LL, 0LL);
    }
    ConPrintf("%s");
    if ( *(_DWORD *)(v5 + 76) )
      ConPrintf("(");
    v7 = 1LL;
    v3 = 0LL;
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v5 + 56) + 28LL);
  if ( (v8 & 1) == 0 )
    goto LABEL_5;
  v60 = (unsigned __int64 *)(v5 + 40);
  if ( v5 != -40 )
    *v60 = *(_QWORD *)(v6 + 120);
  v61 = *(unsigned __int8 **)(v6 + 120);
  v62 = *v61;
  v63 = v61 + 1;
  *(_QWORD *)(v6 + 120) = v61 + 1;
  v64 = v62 >> 6;
  if ( (unsigned __int8)(v62 >> 6) )
  {
    v62 &= 0xFu;
    v123 = 0;
    do
    {
      v124 = *v63++;
      v125 = v123++;
      *(_QWORD *)(v6 + 120) = v63;
      v8 = (unsigned int)(8 * v125 + 4);
      v62 |= v124 << v8;
    }
    while ( v123 < (unsigned __int8)v64 );
  }
  if ( v5 != -40 )
    *v60 += v62;
  if ( (gOverrideFlags & 4) != 0 || (v65 = *(_QWORD *)(v5 + 48)) == 0 || *v60 <= v65 )
  {
    v3 = 0LL;
    v7 = 1LL;
    goto LABEL_5;
  }
  Field = -1072431089;
  LogError(3222536207LL);
  AcpiDiagTraceAmlError(v6, 3222536207LL);
  PrintDebugMessage(143, *v60, *(_QWORD *)(v5 + 48), 0, 0LL);
  return Field;
}
