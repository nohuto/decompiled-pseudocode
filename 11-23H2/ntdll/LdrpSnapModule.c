/*
 * XREFs of LdrpSnapModule @ 0x180023EA0
 * Callers:
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 *     LdrpReportError @ 0x18000C07C (LdrpReportError.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180067C90 (LdrpHandlePendingModuleReplaced.c)
 *     RtlCharToInteger @ 0x1800730B0 (RtlCharToInteger.c)
 *     CompatCachepLookupCdb @ 0x18007427C (CompatCachepLookupCdb.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081FDC (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     strrchr @ 0x180094720 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     LdrpCheckRedirection @ 0x1800E0D7C (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  char *v4; // r14
  __int64 v5; // r8
  int v6; // r15d
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  bool v18; // bl
  char *v19; // rdi
  NTSTATUS v20; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v23; // rbx
  unsigned int i; // ecx
  bool v25; // zf
  __int64 v26; // rdx
  char *v27; // r10
  unsigned __int64 v28; // r9
  unsigned int v29; // edx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // r15
  unsigned __int64 *v33; // r13
  __int64 v34; // rax
  NTSTATUS v35; // esi
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdi
  const char *v38; // rbx
  int v39; // r9d
  int v40; // r8d
  int v41; // r10d
  unsigned __int8 *v42; // rax
  __int64 v43; // rdx
  unsigned __int8 v44; // cl
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  unsigned __int64 *v49; // r13
  char *v50; // rbx
  char *Buffer; // r12
  unsigned __int16 Length; // r13
  char *v53; // rax
  char *v54; // rbx
  int v55; // eax
  __int64 v56; // r15
  unsigned __int64 v57; // rsi
  bool v58; // bl
  char *v59; // rdi
  NTSTATUS v60; // eax
  unsigned __int16 v61; // ax
  __int64 SizeOfHeapCommit_low; // rax
  const char *v63; // rdi
  int v64; // r10d
  int v65; // r11d
  int v66; // r9d
  const char *v67; // rax
  signed __int64 v68; // rdx
  unsigned __int8 v69; // cl
  int v70; // ecx
  int v71; // eax
  ULONG v72; // eax
  unsigned __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // r8
  void *v76; // rdx
  ULONG v78; // ebx
  __int64 v79; // rax
  _UNICODE_STRING *v80; // rdi
  int v81; // eax
  const CHAR *v82; // rdx
  int v83; // [rsp+20h] [rbp-1C8h]
  int v84; // [rsp+20h] [rbp-1C8h]
  char *v85; // [rsp+40h] [rbp-1A8h]
  char *v86; // [rsp+50h] [rbp-198h]
  const char *v88; // [rsp+60h] [rbp-188h]
  unsigned __int64 *v89; // [rsp+68h] [rbp-180h]
  int v90; // [rsp+70h] [rbp-178h]
  unsigned int Size; // [rsp+74h] [rbp-174h]
  unsigned int SizeOfHeapCommit_high; // [rsp+78h] [rbp-170h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-168h] BYREF
  unsigned int v94; // [rsp+88h] [rbp-160h]
  unsigned int v95; // [rsp+8Ch] [rbp-15Ch]
  __int64 v96; // [rsp+90h] [rbp-158h]
  ULONG Value; // [rsp+98h] [rbp-150h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-148h] BYREF
  _UNICODE_STRING *v99; // [rsp+A8h] [rbp-140h]
  unsigned __int64 v100; // [rsp+B0h] [rbp-138h]
  ANSI_STRING SourceString; // [rsp+B8h] [rbp-130h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-120h] BYREF
  unsigned __int64 v103; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v104; // [rsp+D8h] [rbp-110h]
  const CHAR *v105; // [rsp+E0h] [rbp-108h]
  __int64 *v106; // [rsp+E8h] [rbp-100h]
  unsigned __int64 *v107; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v108; // [rsp+F8h] [rbp-F0h]
  char *v109; // [rsp+100h] [rbp-E8h]
  __int64 v110; // [rsp+108h] [rbp-E0h]
  PIMAGE_NT_HEADERS NtHeaders[2]; // [rsp+110h] [rbp-D8h] BYREF
  unsigned __int64 v112; // [rsp+120h] [rbp-C8h]
  __int64 v113; // [rsp+128h] [rbp-C0h]
  unsigned __int64 v114; // [rsp+130h] [rbp-B8h]
  __int128 v115; // [rsp+138h] [rbp-B0h] BYREF
  __int64 v116; // [rsp+148h] [rbp-A0h]
  __int128 v117; // [rsp+150h] [rbp-98h] BYREF
  __int64 v118; // [rsp+160h] [rbp-88h]
  _QWORD v119[8]; // [rsp+170h] [rbp-78h] BYREF

  v113 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v96 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v110 = v3;
  v99 = (_UNICODE_STRING *)(v2 + 72);
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(a1);
  memset_thunk_772440563353939046(v119, 0, 0x40uLL);
  v4 = 0LL;
  v90 = 0;
  v94 = 0;
  v5 = a1;
  while ( 1 )
  {
    v6 = 1;
    v7 = *(_DWORD *)(v5 + 128);
    if ( v7 >= *(_DWORD *)(v5 + 104) )
    {
      v35 = LdrpDoPostSnapWork(v5);
      if ( v35 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_129;
    }
    v8 = v7;
    v9 = *(unsigned __int64 **)(*(_QWORD *)(v5 + 88) + 8LL * v7);
    v10 = v9;
    v89 = v9;
    if ( v9 )
    {
      v11 = v9[22];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x80000) == 0 && *(unsigned __int64 **)(v11 + 56) != v9 )
        {
          v10 = *(unsigned __int64 **)(v11 + 56);
          v89 = v10;
          *(_QWORD *)(v11 + 56) = v9;
        }
      }
    }
    v12 = *(unsigned __int64 **)(*(_QWORD *)(v5 + 88) + 8 * v8);
    if ( v12 != v10 )
    {
      LdrpFreeReplacedModule(v12);
      v5 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8) = v10;
    }
    v13 = *(_QWORD *)(v5 + 136);
    v14 = *(unsigned int *)(v13 + 20 * v8);
    v15 = v14 + v3;
    v16 = v110 + *(unsigned int *)(v13 + 20 * v8 + 16);
    if ( !(_DWORD)v14 || (unsigned int)v14 > *(_DWORD *)(v2 + 64) )
      v15 = v110 + *(unsigned int *)(v13 + 20 * v8 + 16);
    if ( v10 )
      break;
LABEL_57:
    ++*(_DWORD *)(v5 + 128);
    v3 = v110;
  }
  v17 = v10[6];
  v103 = v17;
  v18 = 1;
  v19 = (char *)v17;
  OutHeaders = 0LL;
  v85 = 0LL;
  if ( (v17 & 3) != 0 )
  {
    v19 = (char *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    v18 = (v17 & 1) == 0;
  }
  v20 = RtlImageNtHeaderEx(1u, v19, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_163;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
        if ( !v18 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v23 = (char *)RtlAddressInSectionTable(OutHeaders, v19, VirtualAddress);
          v85 = v23;
          v20 = 0;
          if ( !v23 )
            v20 = -1073741811;
          goto LABEL_19;
        }
LABEL_18:
        v23 = &v19[VirtualAddress];
        v85 = &v19[VirtualAddress];
        v20 = 0;
        goto LABEL_19;
      }
      v20 = -1073741822;
LABEL_163:
      v23 = 0LL;
      goto LABEL_19;
    }
LABEL_162:
    v20 = -1073741811;
    goto LABEL_163;
  }
  if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    goto LABEL_162;
  VirtualAddress = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
  if ( !(_DWORD)VirtualAddress )
  {
    v20 = -1073741822;
    goto LABEL_163;
  }
  Size = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
  if ( v18 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
    goto LABEL_18;
  v23 = (char *)RtlAddressInSectionTable(OutHeaders, v19, VirtualAddress);
  v85 = v23;
  v20 = 0;
  if ( !v23 )
    v20 = -1073741811;
LABEL_19:
  if ( v20 < 0 )
  {
    v23 = 0LL;
    v85 = 0LL;
  }
  if ( !v23 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      3280,
      (unsigned int)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v89 + 9);
    v35 = -1073741701;
    v6 = 1;
    goto LABEL_129;
  }
  for ( i = 0; ; ++i )
  {
    v25 = i == 8;
    if ( i >= 8 )
      break;
    v26 = v119[i];
    if ( !v26 || v17 == v26 )
    {
      v25 = i == 8;
      break;
    }
  }
  if ( v25 || !v119[i] )
  {
    LOBYTE(v74) = LdrControlFlowGuardEnforced();
    if ( v74 )
    {
      if ( v17 < *((_QWORD *)&xmmword_18019C530 + 1)
        || v17 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
      {
        RtlpxLookupFunctionTable((PVOID)v17, (__int64 *)&v115);
      }
      else
      {
        v115 = xmmword_18019C530;
        v116 = qword_18019C540;
      }
      if ( *((_QWORD *)&v115 + 1) != v17 )
        goto LABEL_188;
    }
    v119[v90] = v17;
    v90 = ((_BYTE)v90 + 1) & 7;
  }
  v27 = &v23[Size];
  v109 = v27;
  v28 = v17 + *((unsigned int *)v23 + 7);
  v108 = v28;
  v29 = *((_DWORD *)v23 + 6);
  v95 = v29;
  v30 = v17 + *((unsigned int *)v23 + 8);
  v100 = v30;
  v114 = v17 + *((unsigned int *)v23 + 9);
  v5 = a1;
  v31 = 8LL * *(unsigned int *)(a1 + 132);
  v32 = (__int64 *)(v31 + v15);
  v33 = (unsigned __int64 *)(v31 + v16);
  while ( 2 )
  {
    v107 = v33;
    v106 = v32;
    v34 = *v32;
    if ( !*v32 )
    {
      *(_DWORD *)(v5 + 132) = 0;
      v2 = v96;
      goto LABEL_57;
    }
    v35 = -1073741702;
    v36 = (unsigned __int64)v34 >> 63;
    v104 = (unsigned __int64)v34 >> 63;
    v37 = -4530927LL;
    v105 = 0LL;
    if ( v34 < 0 )
    {
      v94 = (unsigned __int16)v34;
      v47 = (unsigned __int16)v34 - *((_DWORD *)v23 + 4);
    }
    else
    {
      v38 = (const char *)(*(_QWORD *)(v96 + 48) + (unsigned int)v34);
      v105 = v38 + 2;
      if ( (*(_DWORD *)(v5 + 32) & 0x2000000) != 0 )
      {
        v79 = LdrpCheckRedirection(v96, v89, v38 + 2);
        v37 = v79;
        if ( v79 != -4530927 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            3377,
            (unsigned int)"LdrpSnapModule",
            2,
            "Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v38 + 2,
            v99,
            v79);
          v23 = v85;
          goto LABEL_54;
        }
        v30 = v100;
        v29 = v95;
      }
      v39 = *(unsigned __int16 *)v38;
      v40 = 0;
      v41 = v29 - 1;
      if ( v39 >= v29 )
        v39 = v41 / 2;
      if ( v41 < 0 )
      {
LABEL_168:
        v6 = 1;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2192,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v38 + 2,
          (const void *)v17);
        v23 = v85;
        goto LABEL_53;
      }
      while ( 1 )
      {
        v42 = (unsigned __int8 *)(v38 + 2);
        v43 = v17 + *(unsigned int *)(v30 + 4LL * v39) - (_QWORD)(v38 + 2);
        while ( 1 )
        {
          v44 = *v42;
          if ( *v42 != v42[v43] )
            break;
          ++v42;
          if ( !v44 )
          {
            v45 = 0;
            goto LABEL_41;
          }
        }
        v45 = v44 < v42[v43] ? -1 : 1;
LABEL_41:
        if ( !v45 )
          break;
        v46 = v39 - 1;
        if ( v45 >= 0 )
          v46 = v41;
        v41 = v46;
        if ( v45 >= 0 )
          v40 = v39 + 1;
        v39 = (v40 + v46) / 2;
        v30 = v100;
        if ( v46 < v40 )
          goto LABEL_168;
      }
      v47 = *(unsigned __int16 *)(v114 + 2LL * v39);
      v23 = v85;
      v28 = v108;
      v27 = v109;
    }
    if ( (unsigned int)v47 >= *((_DWORD *)v23 + 5) )
    {
LABEL_52:
      v6 = 1;
      goto LABEL_53;
    }
    _mm_lfence();
    v48 = *(unsigned int *)(v28 + 4LL * v47);
    if ( !(_DWORD)v48 )
    {
      v35 = -1073741702;
      goto LABEL_52;
    }
    v37 = v17 + v48;
    v112 = v17 + v48;
    v35 = 0;
    if ( v17 + v48 <= (unsigned __int64)v23 || v37 >= (unsigned __int64)v27 )
      goto LABEL_52;
    v50 = (char *)(v17 + v48);
    LODWORD(OutHeaders) = 0;
    v98 = 0LL;
    NtHeaders[1] = *(PIMAGE_NT_HEADERS *)(v96 + 176);
    BaseAddress = 0LL;
    Buffer = SourceString.Buffer;
    Length = SourceString.Length;
    do
    {
      v53 = strrchr(v50, 46);
      if ( v53 && (unsigned __int64)(v53 - v50) <= 0xFFFF )
      {
        Buffer = v50;
        SourceString.Buffer = v50;
        Length = (_WORD)v53 - (_WORD)v50;
        SourceString.Length = (_WORD)v53 - (_WORD)v50;
        SourceString.MaximumLength = (_WORD)v53 - (_WORD)v50;
        if ( v53[1] != 35 )
        {
          v54 = v53 + 1;
LABEL_64:
          v88 = v54;
          v35 = 0;
          v55 = 1;
          goto LABEL_65;
        }
        if ( RtlCharToInteger(v53 + 2, 0, &Value) >= 0 )
        {
          v54 = 0LL;
          goto LABEL_64;
        }
      }
      v35 = -1073741701;
      v55 = 0;
      v54 = (char *)v88;
LABEL_65:
      if ( !v55 )
        goto LABEL_105;
      if ( Length == 5 && (*(_DWORD *)Buffer | 0x20202020) == 0x6C64746E && ((unsigned __int8)Buffer[4] | 0x20) == 0x6C )
      {
        v56 = LdrpNtDllDataTableEntry;
        v98 = LdrpNtDllDataTableEntry;
      }
      else
      {
        v35 = LdrpLoadDependentModuleA(&SourceString, (__int64)&v98, (__int64)&BaseAddress);
        v6 = 1;
        if ( v35 < 0 || v35 == 259 )
          goto LABEL_106;
        v56 = v98;
        Buffer = SourceString.Buffer;
        Length = SourceString.Length;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v96 + 176) + 32LL) & 0x2000000) != 0 )
      {
        if ( v54 )
        {
          v50 = (char *)LdrpCheckRedirection(v96, v56, v54);
          v86 = v50;
          if ( v50 != (char *)-4530927LL )
          {
            v35 = 0;
            v6 = 1;
            goto LABEL_109;
          }
        }
      }
      v57 = *(_QWORD *)(v56 + 48);
      v58 = 1;
      v59 = (char *)v57;
      NtHeaders[0] = 0LL;
      if ( (v57 & 3) != 0 )
      {
        v59 = (char *)(v57 & 0xFFFFFFFFFFFFFFFCuLL);
        v58 = (v57 & 1) == 0;
      }
      v60 = RtlImageNtHeaderEx(1u, v59, 0LL, NtHeaders);
      if ( NtHeaders[0] )
      {
        v61 = NtHeaders[0]->OptionalHeader.Magic;
        if ( v61 == 267 )
        {
          if ( !HIDWORD(NtHeaders[0]->OptionalHeader.SizeOfHeapReserve) )
            goto LABEL_186;
          SizeOfHeapCommit_low = LODWORD(NtHeaders[0]->OptionalHeader.SizeOfHeapCommit);
          if ( (_DWORD)SizeOfHeapCommit_low )
          {
            SizeOfHeapCommit_high = HIDWORD(NtHeaders[0]->OptionalHeader.SizeOfHeapCommit);
            if ( v58 || (unsigned int)SizeOfHeapCommit_low < NtHeaders[0]->OptionalHeader.SizeOfHeaders )
            {
LABEL_79:
              v4 = &v59[SizeOfHeapCommit_low];
              v60 = 0;
              goto LABEL_80;
            }
            v4 = (char *)RtlAddressInSectionTable(NtHeaders[0], v59, SizeOfHeapCommit_low);
            v60 = 0;
            if ( !v4 )
              v60 = -1073741811;
          }
          else
          {
            v60 = -1073741822;
          }
        }
        else
        {
          if ( v61 != 523 || !NtHeaders[0]->OptionalHeader.NumberOfRvaAndSizes )
          {
LABEL_186:
            v60 = -1073741811;
            goto LABEL_80;
          }
          SizeOfHeapCommit_low = NtHeaders[0]->OptionalHeader.DataDirectory[0].VirtualAddress;
          if ( (_DWORD)SizeOfHeapCommit_low )
          {
            SizeOfHeapCommit_high = NtHeaders[0]->OptionalHeader.DataDirectory[0].Size;
            if ( v58 || (unsigned int)SizeOfHeapCommit_low < NtHeaders[0]->OptionalHeader.SizeOfHeaders )
              goto LABEL_79;
            v4 = (char *)RtlAddressInSectionTable(NtHeaders[0], v59, SizeOfHeapCommit_low);
            v60 = 0;
            if ( !v4 )
              v60 = -1073741811;
          }
          else
          {
            v60 = -1073741822;
          }
        }
      }
LABEL_80:
      if ( v60 < 0 )
        v4 = 0LL;
      if ( !v4 )
      {
        v35 = -1073741702;
LABEL_192:
        v4 = 0LL;
LABEL_105:
        v6 = 1;
        goto LABEL_106;
      }
      v63 = v88;
      if ( v88 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          829,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v88);
        v64 = 0;
        v65 = *((_DWORD *)v4 + 6) - 1;
        v66 = v65 / 2;
        if ( v65 >= 0 )
        {
          while ( 1 )
          {
            v67 = v88;
            v68 = v57 + *(unsigned int *)(v57 + *((unsigned int *)v4 + 8) + 4LL * v66) - (_QWORD)v88;
            while ( 1 )
            {
              v69 = *v67;
              if ( *v67 != v67[v68] )
                break;
              ++v67;
              if ( !v69 )
              {
                v70 = 0;
                goto LABEL_89;
              }
            }
            v70 = v69 < (unsigned int)v67[v68] ? -1 : 1;
LABEL_89:
            if ( !v70 )
              break;
            v71 = v66 - 1;
            if ( v70 >= 0 )
              v71 = v65;
            v65 = v71;
            if ( v70 >= 0 )
              v64 = v66 + 1;
            v66 = (v64 + v71) / 2;
            if ( v71 < v64 )
              goto LABEL_187;
          }
          v72 = *(unsigned __int16 *)(v57 + *((unsigned int *)v4 + 9) + 2LL * v66);
          v63 = v88;
          goto LABEL_97;
        }
LABEL_187:
        v6 = 1;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2192,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v88,
          (const void *)v57);
        v35 = -1073741702;
        v4 = 0LL;
LABEL_106:
        v50 = v86;
        goto LABEL_107;
      }
      v78 = Value;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        847,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Loading procedure 0x%lx by ordinal\n",
        Value);
      if ( !v78 )
      {
        v35 = -1073741811;
        goto LABEL_192;
      }
      v72 = v78 - *((_DWORD *)v4 + 4);
LABEL_97:
      if ( v72 >= *((_DWORD *)v4 + 5) )
      {
        v4 = 0LL;
        v35 = (v63 != 0LL) - 1073741512;
        goto LABEL_105;
      }
      v50 = (char *)(v57 + *(unsigned int *)(v57 + *((unsigned int *)v4 + 7) + 4LL * (int)v72));
      v86 = v50;
      if ( v50 < v4 || v50 >= &v4[SizeOfHeapCommit_high] )
      {
        v4 = 0LL;
        v35 = 0;
        v73 = *(_QWORD *)(v56 + 48);
        if ( !LdrSystemDllInitBlock.CfgBitMap || (LdrSystemDllInitBlock.Flags & 1) != 0 )
          goto LABEL_105;
        if ( v73 < *((_QWORD *)&xmmword_18019C530 + 1)
          || v73 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
        {
          RtlpxLookupFunctionTable(*(PVOID *)(v56 + 48), (__int64 *)&v117);
        }
        else
        {
          v117 = xmmword_18019C530;
          v118 = qword_18019C540;
        }
        if ( *((_QWORD *)&v117 + 1) == v73 )
          goto LABEL_105;
LABEL_188:
        __fastfail(0x18u);
      }
      LODWORD(OutHeaders) = (_DWORD)OutHeaders + 1;
      v4 = 0LL;
    }
    while ( (_DWORD)OutHeaders != 32 );
    v35 = -1073741701;
    v6 = 1;
LABEL_107:
    if ( BaseAddress )
      RtlFreeHeap(LdrpHeap, 0, BaseAddress);
LABEL_109:
    if ( v35 == 259 )
      return 0LL;
    v17 = v103;
    LOBYTE(v36) = v104;
    if ( v35 < 0 )
      v37 = v112;
    else
      v37 = (unsigned __int64)v50;
    v23 = v85;
LABEL_53:
    if ( v35 >= 0 )
    {
LABEL_54:
      v49 = v107;
      *v107 = v37;
      v32 = v106 + 1;
      v33 = v49 + 1;
      v5 = a1;
      ++*(_DWORD *)(a1 + 132);
      v30 = v100;
      v29 = v95;
      v28 = v108;
      v27 = v109;
      continue;
    }
    break;
  }
  if ( v35 != -1073741702 && v35 != -1073741515 )
  {
LABEL_129:
    v75 = a1;
    goto LABEL_130;
  }
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v96 + 80))
    || (unsigned int)CompatCachepLookupCdb((wchar_t *)v89[10]) )
  {
    LOBYTE(v83) = 0;
    v80 = v99;
    LdrpLogLoadFailureEtwEvent(v99, v89 + 9, 1LL, &LoadFailure, v83);
    LOBYTE(v84) = 1;
    LdrpLogLoadFailureEtwEvent(v80, v89 + 9, 1LL, &LoadFailureOperational, v84);
  }
  else
  {
    v80 = v99;
  }
  if ( (_BYTE)v36 )
  {
    v81 = -1073741512;
    v35 = -1073741512;
    v82 = (const CHAR *)v94;
  }
  else
  {
    v35 = -1073741511;
    v81 = -1073741511;
    v82 = v105;
  }
  LdrpReportError(v80, v82, v81);
  v75 = a1;
LABEL_130:
  v76 = *(void **)(v75 + 192);
  if ( v76 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v76);
    v75 = a1;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  if ( v35 < 0 )
    v6 = 0;
  if ( !v6 )
    LdrpLogError((unsigned int)v35, 25LL, 0LL, v75);
  return (unsigned int)v35;
}
