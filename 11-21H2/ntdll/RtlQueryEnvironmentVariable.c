/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x180036CE0
 * Callers:
 *     RtlQueryEnvironmentVariable_U @ 0x18000CE60 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlExpandEnvironmentStrings @ 0x180035E40 (RtlExpandEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     RtlGetExePath @ 0x180088710 (RtlGetExePath.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x18000DADC (RtlpAllocateEnvironmentHashTable.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpScanEnvironment @ 0x180033880 (RtlpScanEnvironment.c)
 *     RtlpFindEnvironmentHashEntry @ 0x180038070 (RtlpFindEnvironmentHashEntry.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlCompareUnicodeStrings @ 0x1800416B0 (RtlCompareUnicodeStrings.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180073684 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpFreeEnvironmentHashTable @ 0x1800896A4 (RtlpFreeEnvironmentHashTable.c)
 *     _wcsnicmp @ 0x180095820 (_wcsnicmp.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D9600 (RtlpQueryEnvironmentHashTable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  const wchar_t *v7; // r9
  struct _TEB *v9; // r13
  NTSTATUS PseudoEnvironmentVariable; // edi
  __int64 v11; // rbx
  __int64 v12; // r14
  void *v13; // rbx
  char *v14; // rdi
  PCWSTR v15; // r14
  __int64 EnvironmentHashEntry; // rax
  __int64 v17; // rcx
  ULONG_PTR v18; // rax
  const void *v19; // rdx
  char *v20; // r15
  __int64 v21; // rbx
  int v22; // r13d
  int v23; // eax
  unsigned __int8 *v24; // r9
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  _QWORD *v29; // rcx
  _QWORD **v30; // rsi
  _QWORD *v31; // r11
  unsigned int n; // ebx
  __int64 v33; // r15
  __int64 v34; // rcx
  unsigned int v35; // r14d
  _QWORD *EnvironmentHashTable; // r12
  void *v37; // r11
  __int64 v38; // rdx
  unsigned int v39; // r14d
  unsigned __int8 *v40; // r9
  __int64 v41; // r8
  int v42; // r10d
  int v43; // eax
  int v44; // edx
  __int64 v45; // rcx
  int v46; // ebx
  int v47; // ecx
  __int64 v48; // r11
  const WCHAR *v49; // rax
  char *v50; // r15
  char *v51; // rbx
  const WCHAR *v52; // r8
  bool v53; // zf
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r10
  char *v56; // r12
  __int64 v57; // rsi
  void *v58; // r12
  _QWORD *Heap; // rax
  unsigned __int16 *v60; // r11
  __int64 v61; // r10
  __int64 v62; // rsi
  SIZE_T v63; // r12
  const WCHAR *v64; // r13
  const WCHAR *v65; // r10
  const WCHAR *v66; // r11
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // r10
  __int64 v70; // rsi
  unsigned int v71; // edx
  __int64 v72; // r15
  unsigned int v73; // r11d
  unsigned __int8 *v74; // r8
  __int64 v75; // r9
  int v76; // edx
  int v77; // eax
  int v78; // r10d
  __int64 v79; // r14
  int k; // ecx
  _QWORD *m; // rdx
  void *v82; // rdx
  ULONG_PTR v83; // rdi
  void *v84; // rsi
  __int64 v85; // r10
  _PEB *ProcessEnvironmentBlock; // rcx
  int v87; // eax
  unsigned __int16 *v88; // rbx
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  void *v90; // r9
  NTSTATUS v92; // [rsp+40h] [rbp-158h]
  _QWORD *BaseAddress; // [rsp+48h] [rbp-150h]
  unsigned int v94; // [rsp+50h] [rbp-148h]
  int v95; // [rsp+70h] [rbp-128h]
  __int16 v96; // [rsp+A0h] [rbp-F8h]
  int v97; // [rsp+A4h] [rbp-F4h]
  char *v98; // [rsp+A8h] [rbp-F0h]
  const WCHAR *v99; // [rsp+B0h] [rbp-E8h]
  int v100; // [rsp+B8h] [rbp-E0h]
  int i; // [rsp+BCh] [rbp-DCh]
  int v102; // [rsp+C0h] [rbp-D8h]
  int v103; // [rsp+C8h] [rbp-D0h]
  unsigned int v104; // [rsp+CCh] [rbp-CCh]
  int v105; // [rsp+D0h] [rbp-C8h]
  __int64 v106; // [rsp+D8h] [rbp-C0h]
  __int64 v107; // [rsp+E0h] [rbp-B8h]
  int v108; // [rsp+E8h] [rbp-B0h]
  int v109; // [rsp+ECh] [rbp-ACh]
  PCWSTR j; // [rsp+F0h] [rbp-A8h]
  char *v111; // [rsp+F8h] [rbp-A0h]
  __int64 v112; // [rsp+100h] [rbp-98h]
  const WCHAR *v113; // [rsp+108h] [rbp-90h]
  __int64 v114; // [rsp+110h] [rbp-88h]
  __int64 v115; // [rsp+118h] [rbp-80h] BYREF
  __int64 v116; // [rsp+120h] [rbp-78h]
  _QWORD *v117; // [rsp+128h] [rbp-70h]
  __int64 v118; // [rsp+130h] [rbp-68h] BYREF
  __int64 v119; // [rsp+138h] [rbp-60h]
  __int64 v120; // [rsp+140h] [rbp-58h] BYREF
  __int64 v121; // [rsp+148h] [rbp-50h]
  void *Src; // [rsp+150h] [rbp-48h]
  __int64 v123; // [rsp+158h] [rbp-40h]
  __int16 v125; // [rsp+1B0h] [rbp+18h]
  void *v126; // [rsp+1B8h] [rbp+20h]

  v126 = Value;
  v7 = Name;
  v9 = NtCurrentTeb();
  *ReturnLength = 0LL;
  if ( !NameLength )
    return -1073741568;
  PseudoEnvironmentVariable = -1073741568;
  v100 = -1073741568;
  LODWORD(v11) = 4;
  for ( i = 4; ; i = v11 )
  {
    if ( !(_DWORD)v11
      || (v11 = (unsigned int)(v11 - 1), v12 = 0x180000000LL + 24 * v11 + 1232128, NameLength > *(_QWORD *)v12) )
    {
      v13 = v126;
      goto LABEL_8;
    }
    if ( NameLength == *(_QWORD *)v12 )
      break;
LABEL_6:
    ;
  }
  if ( wcsnicmp(v7, *(const wchar_t **)(0x180000008LL + 24 * v11 + 1232128), NameLength) )
  {
    v7 = Name;
    goto LABEL_6;
  }
  v13 = v126;
  PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                *(unsigned int *)(v12 + 16),
                                v126,
                                ValueLength,
                                ReturnLength);
  v100 = PseudoEnvironmentVariable;
LABEL_8:
  if ( PseudoEnvironmentVariable != -1073741568 )
    return PseudoEnvironmentVariable;
  if ( Environment )
  {
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v9->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != Environment
        || (FastPebLock = ProcessEnvironmentBlock->FastPebLock) != 0LL
        && !RtlIsCriticalSectionLockedByThread(FastPebLock) )
      {
        v87 = 0;
        v88 = (unsigned __int16 *)Name;
        return RtlpScanEnvironment((char *)Environment, v88, NameLength, v126, ValueLength, ReturnLength, v87);
      }
      v90 = v13;
      v88 = (unsigned __int16 *)Name;
      PseudoEnvironmentVariable = RtlpQueryEnvironmentHashTable(
                                    &RtlpEnvironmentHashTable,
                                    Name,
                                    NameLength,
                                    v90,
                                    ValueLength,
                                    ReturnLength);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      if ( !byte_18017A870 )
      {
        v87 = 1;
        return RtlpScanEnvironment((char *)Environment, v88, NameLength, v126, ValueLength, ReturnLength, v87);
      }
    }
    return -1073741568;
  }
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v14 = (char *)v9->ProcessEnvironmentBlock->ProcessParameters->Environment;
  v15 = Name;
  EnvironmentHashEntry = RtlpFindEnvironmentHashEntry(&RtlpEnvironmentHashTable, Name, NameLength);
  v17 = EnvironmentHashEntry;
  if ( EnvironmentHashEntry )
  {
    v18 = *(_QWORD *)(EnvironmentHashEntry + 40);
    v19 = *(const void **)(v17 + 24);
    v20 = (char *)v126;
    if ( v126 && v18 < ValueLength )
    {
      *ReturnLength = v18;
      v21 = 2 * v18;
      memmove(v20, v19, 2 * v18);
      v22 = 0;
      *(_WORD *)&v20[v21] = 0;
      v23 = 0;
    }
    else
    {
      v22 = 0;
      if ( v126 && ValueLength )
        *(_WORD *)v126 = 0;
      *ReturnLength = v18 + 1;
      v23 = -1073741789;
    }
  }
  else
  {
    v23 = -1073741568;
    v22 = 0;
  }
  v92 = v23;
  if ( v23 != -1073741568 )
    goto LABEL_154;
  if ( byte_18017A870 )
    goto LABEL_16;
  v47 = 1;
  v95 = 1;
  v98 = v14;
  v49 = &Name[NameLength];
  v99 = v49;
  v48 = qword_1801776F8;
  v106 = qword_1801776F8;
  while ( 2 )
  {
    if ( *(_WORD *)v14 )
    {
      v50 = v14;
      v51 = v14;
      v52 = v15;
      for ( j = v15; ; j = v52 )
      {
        v53 = v52 == v49;
        if ( v52 >= v49 )
          break;
        v54 = *(unsigned __int16 *)v14;
        if ( !(_WORD)v54 )
          goto LABEL_51;
        if ( (unsigned int)v54 >= 0x61 )
        {
          if ( (unsigned int)v54 > 0x7A )
          {
            if ( v48 && (unsigned __int16)v54 >= 0xC0u )
            {
              LOWORD(v54) = *(_WORD *)(v48
                                     + 2
                                     * ((v54 & 0xF)
                                      + *(unsigned __int16 *)(v48
                                                            + 2LL
                                                            * (((unsigned __int8)v54 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v48 + 2 * (v54 >> 8))))))
                          + v54;
              v49 = v99;
            }
          }
          else
          {
            LOWORD(v54) = v54 - 32;
          }
        }
        v55 = *v52;
        if ( (unsigned int)v55 >= 0x61 )
        {
          if ( (unsigned int)v55 > 0x7A )
          {
            if ( v48 && (unsigned __int16)v55 >= 0xC0u )
            {
              LOWORD(v55) = *(_WORD *)(v48
                                     + 2
                                     * ((v55 & 0xF)
                                      + *(unsigned __int16 *)(v48
                                                            + 2LL
                                                            * (((unsigned __int8)v55 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v48 + 2 * (v55 >> 8))))))
                          + v55;
              v49 = v99;
            }
          }
          else
          {
            LOWORD(v55) = v55 - 32;
          }
        }
        if ( (_WORD)v54 != (_WORD)v55 )
        {
LABEL_51:
          v53 = v52 == v49;
          break;
        }
        v14 += 2;
        v98 = v14;
        ++v52;
      }
      if ( !v53 || *(_WORD *)v14 != 61 )
      {
        v97 = 0;
        while ( *(_WORD *)v14 )
        {
          if ( *(_WORD *)v14 == 61 && v14 != v50 )
            goto LABEL_58;
          v14 += 2;
          v98 = v14;
        }
        v14 += 2;
        v98 = v14;
        v49 = v99;
        v47 = v95;
        continue;
      }
      v97 = 1;
LABEL_58:
      v56 = v14;
      while ( *(_WORD *)v14 )
      {
        v14 += 2;
        v98 = v14;
      }
      v57 = (v56 - v50) >> 1;
      v58 = v56 + 2;
      Src = v58;
      v47 = v95;
      if ( v95 && qword_18017A878 < (unsigned __int64)v14 )
      {
        if ( NtCurrentPeb()->ProcessHeap
          && (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL), (BaseAddress = Heap) != 0LL) )
        {
          Heap[2] = v50;
          Heap[3] = v58;
          Heap[4] = v57;
          Heap[5] = (v14 - (_BYTE *)v58) >> 1;
          v111 = v51;
          v60 = (unsigned __int16 *)&v51[2 * (unsigned int)v57];
          v61 = 314159LL;
          v62 = qword_1801776F8;
          while ( v51 < (char *)v60 )
          {
            v125 = NLS_UPCASE(v62, *(unsigned __int16 *)v51);
            v51 += 2;
            v111 = v51;
            v112 = 2LL;
            v61 = HIBYTE(v125) + 37 * ((unsigned __int8)v125 + 37 * v85);
          }
          BaseAddress[1] = v61;
          v63 = BaseAddress[4];
          v107 = v63;
          v64 = (const WCHAR *)BaseAddress[2];
          v65 = v64;
          v113 = v64;
          v66 = &v64[(unsigned int)v63];
          v67 = 314159LL;
          v68 = qword_1801776F8;
          while ( v65 < v66 )
          {
            v96 = NLS_UPCASE(v68, *v65);
            v65 = (const WCHAR *)(v69 + 2);
            v113 = v65;
            v114 = 2LL;
            v67 = HIBYTE(v96) + 37 * ((unsigned __int8)v96 + 37 * v67);
          }
          v70 = 0LL;
          v107 = qword_18017A868;
          v71 = dword_18017A864;
          v94 = dword_18017A864;
LABEL_72:
          v72 = -1LL << (v71 & 0x1F);
          if ( v70 )
            goto LABEL_79;
          v73 = v71 >> 5;
          if ( v71 >> 5 )
          {
            v115 = v67 & (-1LL << (v71 & 0x1F));
            v74 = (unsigned __int8 *)&v115;
            v75 = 8LL;
            v116 = 8LL;
            v76 = 314159;
            v77 = 314159;
            while ( v75 >= 8 )
            {
              v76 = v74[7]
                  + 37
                  * (v74[6]
                   + 37
                   * (v74[5] + 37 * (v74[4] + 37 * (v74[3] + 37 * (v74[2] + 37 * (v74[1] + 37 * (*v74 + 37 * v76)))))));
              v77 = v76;
              v74 += 8;
              v75 -= 8LL;
              v116 = v75;
            }
            v78 = v77;
            if ( v75 >= 1 )
            {
              switch ( (int)v75 )
              {
                case 1:
                  goto LABEL_136;
                case 2:
                  goto LABEL_135;
                case 3:
                  goto LABEL_134;
                case 4:
                  goto LABEL_133;
                case 5:
                  goto LABEL_132;
                case 6:
                  goto LABEL_131;
                case 7:
                  v76 = *v74++ + 37 * v76;
LABEL_131:
                  v76 = *v74++ + 37 * v76;
LABEL_132:
                  v76 = *v74++ + 37 * v76;
LABEL_133:
                  v76 = *v74++ + 37 * v76;
LABEL_134:
                  v76 = *v74++ + 37 * v76;
LABEL_135:
                  v76 = *v74++ + 37 * v76;
LABEL_136:
                  v78 = *v74 + 37 * v76;
                  break;
                default:
                  break;
              }
            }
            v70 = v107 + 8LL * (v78 & (v73 - 1));
LABEL_79:
            while ( 1 )
            {
              v70 = *(_QWORD *)v70;
              if ( (v70 & 1) != 0 )
                break;
              if ( (v67 & v72) == (v72 & *(_QWORD *)(v70 + 8)) )
              {
                if ( !RtlCompareUnicodeStrings(*(PCWCH *)(v70 + 16), *(_QWORD *)(v70 + 32), v64, v63, 1u) )
                {
                  v46 = -1073741771;
                  v37 = BaseAddress;
                  v22 = 0;
                  goto LABEL_36;
                }
                v71 = v94;
                goto LABEL_72;
              }
            }
          }
          v35 = v94;
          if ( RtlpEnvironmentHashTable < 2 * (v94 >> 5) )
          {
            EnvironmentHashTable = (_QWORD *)v107;
            goto LABEL_30;
          }
          v79 = 2LL * (v94 >> 5);
          v123 = v79;
          if ( (unsigned int)v79 < 4 )
            v79 = 4LL;
          v108 = v79;
          EnvironmentHashTable = RtlpAllocateEnvironmentHashTable(8LL * (unsigned int)v79);
          if ( EnvironmentHashTable )
          {
            if ( (((_DWORD)v79 - 1) & (unsigned int)v79) != 0 )
            {
              for ( k = -1; ; ++k )
              {
                v103 = k;
                v102 = v79;
                if ( !(_DWORD)v79 )
                  break;
                LODWORD(v79) = (unsigned int)v79 >> 1;
              }
              v109 = k;
              v79 = (unsigned int)(1 << k);
            }
            if ( (unsigned int)v79 > 0x4000000 )
              v79 = 0x4000000LL;
            for ( m = EnvironmentHashTable; ; ++m )
            {
              v117 = m;
              if ( m >= &EnvironmentHashTable[v79] )
                break;
              *m = (char *)&RtlpEnvironmentHashTable + 1;
            }
            v33 = -1LL << (dword_18017A864 & 0x1F);
            v22 = 0;
            for ( n = 0; ; ++n )
            {
              v104 = n;
              if ( n >= (unsigned int)dword_18017A864 >> 5 )
                break;
              v30 = (_QWORD **)(qword_18017A868 + 8LL * n);
              while ( 1 )
              {
                v31 = *v30;
                if ( ((unsigned __int8)*v30 & 1) != 0 )
                  break;
                *v30 = (_QWORD *)*v31;
                v118 = v33 & v31[1];
                v24 = (unsigned __int8 *)&v118;
                v25 = 8LL;
                v119 = 8LL;
                v26 = 314159;
                v27 = 314159;
                while ( v25 >= 8 )
                {
                  v26 = 37
                      * (v24[6]
                       + 37
                       * (v24[5] + 37
                                 * (v24[4] + 37 * (v24[3] + 37 * (v24[2] + 37 * (v24[1] + 37 * (*v24 + 37 * v26)))))))
                      + v24[7];
                  v27 = v26;
                  v24 += 8;
                  v25 -= 8LL;
                  v119 = v25;
                }
                v28 = v27;
                if ( v25 >= 1 )
                {
                  switch ( 0x180000000uLL )
                  {
                    case 0uLL:
                      goto LABEL_145;
                    case 1uLL:
                      goto LABEL_144;
                    case 2uLL:
                      goto LABEL_143;
                    case 3uLL:
                      goto LABEL_142;
                    case 4uLL:
                      goto LABEL_141;
                    case 5uLL:
                      goto LABEL_140;
                    case 6uLL:
                      v26 = *v24++ + 37 * v26;
LABEL_140:
                      v26 = *v24++ + 37 * v26;
LABEL_141:
                      v26 = *v24++ + 37 * v26;
LABEL_142:
                      v26 = *v24++ + 37 * v26;
LABEL_143:
                      v26 = *v24++ + 37 * v26;
LABEL_144:
                      v26 = *v24++ + 37 * v26;
LABEL_145:
                      v28 = *v24 + 37 * v26;
                      break;
                    default:
                      break;
                  }
                }
                v29 = &EnvironmentHashTable[v28 & (unsigned int)(v79 - 1)];
                *v31 = *v29;
                *v29 = v31;
              }
            }
            v34 = qword_18017A868;
            qword_18017A868 = (__int64)EnvironmentHashTable;
            v35 = dword_18017A864 & 0x1F | (32 * v79);
            dword_18017A864 = v35;
            if ( v34 )
            {
              RtlpFreeEnvironmentHashTable(v34, 0LL);
              EnvironmentHashTable = (_QWORD *)qword_18017A868;
              v35 = dword_18017A864;
            }
          }
          else
          {
            EnvironmentHashTable = (_QWORD *)qword_18017A868;
            v35 = dword_18017A864;
LABEL_30:
            v22 = 0;
          }
          v37 = BaseAddress;
          v38 = BaseAddress[1] & (-1LL << (v35 & 0x1F));
          v39 = v35 >> 5;
          v120 = v38;
          v40 = (unsigned __int8 *)&v120;
          v41 = 8LL;
          v121 = 8LL;
          v42 = 314159;
          v43 = 314159;
          while ( v41 >= 8 )
          {
            v42 = 37
                * (v40[6]
                 + 37
                 * (v40[5] + 37 * (v40[4] + 37 * (v40[3] + 37 * (v40[2] + 37 * (v40[1] + 37 * (*v40 + 37 * v42)))))))
                + v40[7];
            v43 = v42;
            v40 += 8;
            v41 -= 8LL;
            v121 = v41;
          }
          v44 = v43;
          if ( v41 >= 1 )
          {
            switch ( (int)v41 )
            {
              case 1:
                goto LABEL_152;
              case 2:
                goto LABEL_151;
              case 3:
                goto LABEL_150;
              case 4:
                goto LABEL_149;
              case 5:
                goto LABEL_148;
              case 6:
                goto LABEL_147;
              case 7:
                v42 = *v40++ + 37 * v42;
LABEL_147:
                v42 = *v40++ + 37 * v42;
LABEL_148:
                v42 = *v40++ + 37 * v42;
LABEL_149:
                v42 = *v40++ + 37 * v42;
LABEL_150:
                v42 = *v40++ + 37 * v42;
LABEL_151:
                v42 = *v40++ + 37 * v42;
LABEL_152:
                v44 = *v40 + 37 * v42;
                break;
              default:
                break;
            }
          }
          v45 = v44 & (v39 - 1);
          *BaseAddress = EnvironmentHashTable[v45];
          EnvironmentHashTable[v45] = BaseAddress;
          ++RtlpEnvironmentHashTable;
          v46 = 0;
LABEL_36:
          v105 = v46;
          if ( v46 < 0 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v37);
          else
            qword_18017A878 = (__int64)v14;
          v47 = v95;
        }
        else
        {
          v105 = -1073741801;
          v47 = 0;
          v95 = 0;
        }
        v15 = Name;
        v48 = v106;
      }
      if ( v97 )
      {
        v82 = Src;
        v83 = (v14 - (_BYTE *)Src) >> 1;
        v84 = v126;
        if ( v126 )
        {
          if ( v83 < ValueLength )
          {
            *ReturnLength = v83;
            memmove(v84, v82, 2 * v83);
            *((_WORD *)v84 + v83) = 0;
LABEL_108:
            v92 = v22;
            goto LABEL_154;
          }
          if ( v126 )
          {
            if ( ValueLength )
              *(_WORD *)v126 = 0;
          }
        }
        *ReturnLength = v83 + 1;
        v22 = -1073741789;
        goto LABEL_108;
      }
      v14 += 2;
      v98 = v14;
      v49 = v99;
      continue;
    }
    break;
  }
  if ( v47 )
  {
    qword_18017A878 = (__int64)v14;
    byte_18017A870 = 1;
  }
LABEL_16:
  v92 = -1073741568;
LABEL_154:
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v92;
}
