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
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  bool v17; // bl
  unsigned __int64 v18; // rdi
  int v19; // eax
  __int16 v20; // ax
  __int64 v21; // rax
  _DWORD *v22; // rbx
  unsigned int i; // ecx
  bool v24; // zf
  __int64 v25; // rdx
  char *v26; // r10
  unsigned __int64 v27; // r9
  unsigned int v28; // edx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // r15
  unsigned __int64 *v32; // r13
  __int64 v33; // rax
  int v34; // esi
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rdi
  const char *v37; // rbx
  int v38; // r9d
  int v39; // r8d
  int v40; // r10d
  unsigned __int8 *v41; // rax
  __int64 v42; // rdx
  unsigned __int8 v43; // cl
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int64 *v48; // r13
  char *v49; // rbx
  char *Buffer; // r12
  unsigned __int16 Length; // r13
  char *v52; // rax
  char *v53; // rbx
  int v54; // eax
  __int64 v55; // r15
  unsigned __int64 v56; // rsi
  bool v57; // bl
  unsigned __int64 v58; // rdi
  int v59; // eax
  __int16 v60; // ax
  __int64 v61; // rax
  const char *v62; // rdi
  int v63; // r10d
  int v64; // r11d
  int v65; // r9d
  const char *v66; // rax
  signed __int64 v67; // rdx
  unsigned __int8 v68; // cl
  int v69; // ecx
  int v70; // eax
  ULONG v71; // eax
  unsigned __int64 v72; // rbx
  __int64 v73; // r8
  ULONG v75; // ebx
  __int64 v76; // rax
  UNICODE_STRING *v77; // rdi
  int v78; // eax
  const char *v79; // rdx
  _DWORD *v80; // [rsp+40h] [rbp-1A8h]
  char *v81; // [rsp+50h] [rbp-198h]
  const char *v83; // [rsp+60h] [rbp-188h]
  __int64 v84; // [rsp+68h] [rbp-180h]
  int v85; // [rsp+70h] [rbp-178h]
  unsigned int v86; // [rsp+74h] [rbp-174h]
  int v87; // [rsp+78h] [rbp-170h]
  __int64 v88; // [rsp+80h] [rbp-168h] BYREF
  unsigned int v89; // [rsp+88h] [rbp-160h]
  unsigned int v90; // [rsp+8Ch] [rbp-15Ch]
  __int64 v91; // [rsp+90h] [rbp-158h]
  ULONG Value; // [rsp+98h] [rbp-150h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-148h] BYREF
  UNICODE_STRING *v94; // [rsp+A8h] [rbp-140h]
  unsigned __int64 v95; // [rsp+B0h] [rbp-138h]
  STRING SourceString; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-120h] BYREF
  unsigned __int64 v98; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-110h]
  const char *v100; // [rsp+E0h] [rbp-108h]
  __int64 *v101; // [rsp+E8h] [rbp-100h]
  unsigned __int64 *v102; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v103; // [rsp+F8h] [rbp-F0h]
  char *v104; // [rsp+100h] [rbp-E8h]
  __int64 v105; // [rsp+108h] [rbp-E0h]
  _QWORD v106[2]; // [rsp+110h] [rbp-D8h] BYREF
  unsigned __int64 v107; // [rsp+120h] [rbp-C8h]
  __int64 v108; // [rsp+128h] [rbp-C0h]
  unsigned __int64 v109; // [rsp+130h] [rbp-B8h]
  __int128 v110; // [rsp+138h] [rbp-B0h] BYREF
  __int64 v111; // [rsp+148h] [rbp-A0h]
  __int128 v112; // [rsp+150h] [rbp-98h] BYREF
  __int64 v113; // [rsp+160h] [rbp-88h]
  _QWORD v114[8]; // [rsp+170h] [rbp-78h] BYREF

  v108 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v91 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v105 = v3;
  v94 = (UNICODE_STRING *)(v2 + 72);
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(a1);
  memset_thunk_772440563353939046(v114, 0, 0x40uLL);
  v4 = 0LL;
  v85 = 0;
  v89 = 0;
  v5 = a1;
  while ( 1 )
  {
    v6 = 1;
    v7 = *(_DWORD *)(v5 + 128);
    if ( v7 >= *(_DWORD *)(v5 + 104) )
    {
      v34 = LdrpDoPostSnapWork(v5);
      if ( v34 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_129;
    }
    v8 = v7;
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 8LL * v7);
    v10 = v9;
    v84 = v9;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 176);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x80000) == 0 && *(_QWORD *)(v11 + 56) != v9 )
        {
          v10 = *(_QWORD *)(v11 + 56);
          v84 = v10;
          *(_QWORD *)(v11 + 56) = v9;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 88) + 8 * v8) != v10 )
    {
      LdrpFreeReplacedModule();
      v5 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8) = v10;
    }
    v12 = *(_QWORD *)(v5 + 136);
    v13 = *(unsigned int *)(v12 + 20 * v8);
    v14 = v13 + v3;
    v15 = v105 + *(unsigned int *)(v12 + 20 * v8 + 16);
    if ( !(_DWORD)v13 || (unsigned int)v13 > *(_DWORD *)(v2 + 64) )
      v14 = v105 + *(unsigned int *)(v12 + 20 * v8 + 16);
    if ( v10 )
      break;
LABEL_57:
    ++*(_DWORD *)(v5 + 128);
    v3 = v105;
  }
  v16 = *(_QWORD *)(v10 + 48);
  v98 = v16;
  v17 = 1;
  v18 = v16;
  v88 = 0LL;
  v80 = 0LL;
  if ( (v16 & 3) != 0 )
  {
    v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = (v16 & 1) == 0;
  }
  v19 = RtlImageNtHeaderEx(1LL, v18, 0LL, &v88);
  if ( !v88 )
    goto LABEL_163;
  v20 = *(_WORD *)(v88 + 24);
  if ( v20 != 267 )
  {
    if ( v20 == 523 && *(_DWORD *)(v88 + 132) )
    {
      v21 = *(unsigned int *)(v88 + 136);
      if ( (_DWORD)v21 )
      {
        v86 = *(_DWORD *)(v88 + 140);
        if ( !v17 && (unsigned int)v21 >= *(_DWORD *)(v88 + 84) )
        {
          v22 = (_DWORD *)RtlAddressInSectionTable(v88, v18, (unsigned int)v21);
          v80 = v22;
          v19 = 0;
          if ( !v22 )
            v19 = -1073741811;
          goto LABEL_19;
        }
LABEL_18:
        v22 = (_DWORD *)(v18 + v21);
        v80 = (_DWORD *)(v18 + v21);
        v19 = 0;
        goto LABEL_19;
      }
      v19 = -1073741822;
LABEL_163:
      v22 = 0LL;
      goto LABEL_19;
    }
LABEL_162:
    v19 = -1073741811;
    goto LABEL_163;
  }
  if ( !*(_DWORD *)(v88 + 116) )
    goto LABEL_162;
  v21 = *(unsigned int *)(v88 + 120);
  if ( !(_DWORD)v21 )
  {
    v19 = -1073741822;
    goto LABEL_163;
  }
  v86 = *(_DWORD *)(v88 + 124);
  if ( v17 || (unsigned int)v21 < *(_DWORD *)(v88 + 84) )
    goto LABEL_18;
  v22 = (_DWORD *)RtlAddressInSectionTable(v88, v18, (unsigned int)v21);
  v80 = v22;
  v19 = 0;
  if ( !v22 )
    v19 = -1073741811;
LABEL_19:
  if ( v19 < 0 )
  {
    v22 = 0LL;
    v80 = 0LL;
  }
  if ( !v22 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      3280,
      (unsigned int)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v84 + 72);
    v34 = -1073741701;
    v6 = 1;
    goto LABEL_129;
  }
  for ( i = 0; ; ++i )
  {
    v24 = i == 8;
    if ( i >= 8 )
      break;
    v25 = v114[i];
    if ( !v25 || v16 == v25 )
    {
      v24 = i == 8;
      break;
    }
  }
  if ( v24 || !v114[i] )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      if ( v16 < *((_QWORD *)&xmmword_18019C530 + 1)
        || v16 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
      {
        RtlpxLookupFunctionTable(v16, (__int64 *)&v110);
      }
      else
      {
        v110 = xmmword_18019C530;
        v111 = qword_18019C540;
      }
      if ( *((_QWORD *)&v110 + 1) != v16 )
        goto LABEL_188;
    }
    v114[v85] = v16;
    v85 = ((_BYTE)v85 + 1) & 7;
  }
  v26 = (char *)v22 + v86;
  v104 = v26;
  v27 = v16 + (unsigned int)v22[7];
  v103 = v27;
  v28 = v22[6];
  v90 = v28;
  v29 = v16 + (unsigned int)v22[8];
  v95 = v29;
  v109 = v16 + (unsigned int)v22[9];
  v5 = a1;
  v30 = 8LL * *(unsigned int *)(a1 + 132);
  v31 = (__int64 *)(v30 + v14);
  v32 = (unsigned __int64 *)(v30 + v15);
  while ( 2 )
  {
    v102 = v32;
    v101 = v31;
    v33 = *v31;
    if ( !*v31 )
    {
      *(_DWORD *)(v5 + 132) = 0;
      v2 = v91;
      goto LABEL_57;
    }
    v34 = -1073741702;
    v35 = (unsigned __int64)v33 >> 63;
    v99 = (unsigned __int64)v33 >> 63;
    v36 = -4530927LL;
    v100 = 0LL;
    if ( v33 < 0 )
    {
      v89 = (unsigned __int16)v33;
      v46 = (unsigned __int16)v33 - v22[4];
    }
    else
    {
      v37 = (const char *)(*(_QWORD *)(v91 + 48) + (unsigned int)v33);
      v100 = v37 + 2;
      if ( (*(_DWORD *)(v5 + 32) & 0x2000000) != 0 )
      {
        v76 = LdrpCheckRedirection(v91, v84, v37 + 2);
        v36 = v76;
        if ( v76 != -4530927 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            3377,
            (unsigned int)"LdrpSnapModule",
            2,
            "Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v37 + 2,
            v94,
            v76);
          v22 = v80;
          goto LABEL_54;
        }
        v29 = v95;
        v28 = v90;
      }
      v38 = *(unsigned __int16 *)v37;
      v39 = 0;
      v40 = v28 - 1;
      if ( v38 >= v28 )
        v38 = v40 / 2;
      if ( v40 < 0 )
      {
LABEL_168:
        v6 = 1;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2192,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v37 + 2,
          (const void *)v16);
        v22 = v80;
        goto LABEL_53;
      }
      while ( 1 )
      {
        v41 = (unsigned __int8 *)(v37 + 2);
        v42 = v16 + *(unsigned int *)(v29 + 4LL * v38) - (_QWORD)(v37 + 2);
        while ( 1 )
        {
          v43 = *v41;
          if ( *v41 != v41[v42] )
            break;
          ++v41;
          if ( !v43 )
          {
            v44 = 0;
            goto LABEL_41;
          }
        }
        v44 = v43 < v41[v42] ? -1 : 1;
LABEL_41:
        if ( !v44 )
          break;
        v45 = v38 - 1;
        if ( v44 >= 0 )
          v45 = v40;
        v40 = v45;
        if ( v44 >= 0 )
          v39 = v38 + 1;
        v38 = (v39 + v45) / 2;
        v29 = v95;
        if ( v45 < v39 )
          goto LABEL_168;
      }
      v46 = *(unsigned __int16 *)(v109 + 2LL * v38);
      v22 = v80;
      v27 = v103;
      v26 = v104;
    }
    if ( (unsigned int)v46 >= v22[5] )
    {
LABEL_52:
      v6 = 1;
      goto LABEL_53;
    }
    _mm_lfence();
    v47 = *(unsigned int *)(v27 + 4LL * v46);
    if ( !(_DWORD)v47 )
    {
      v34 = -1073741702;
      goto LABEL_52;
    }
    v36 = v16 + v47;
    v107 = v16 + v47;
    v34 = 0;
    if ( v16 + v47 <= (unsigned __int64)v22 || v36 >= (unsigned __int64)v26 )
      goto LABEL_52;
    v49 = (char *)(v16 + v47);
    LODWORD(v88) = 0;
    v93 = 0LL;
    v106[1] = *(_QWORD *)(v91 + 176);
    v97 = 0LL;
    Buffer = SourceString.Buffer;
    Length = SourceString.Length;
    do
    {
      v52 = strrchr(v49, 46);
      if ( v52 && (unsigned __int64)(v52 - v49) <= 0xFFFF )
      {
        Buffer = v49;
        SourceString.Buffer = v49;
        Length = (_WORD)v52 - (_WORD)v49;
        SourceString.Length = (_WORD)v52 - (_WORD)v49;
        SourceString.MaximumLength = (_WORD)v52 - (_WORD)v49;
        if ( v52[1] != 35 )
        {
          v53 = v52 + 1;
LABEL_64:
          v83 = v53;
          v34 = 0;
          v54 = 1;
          goto LABEL_65;
        }
        if ( RtlCharToInteger(v52 + 2, 0, &Value) >= 0 )
        {
          v53 = 0LL;
          goto LABEL_64;
        }
      }
      v34 = -1073741701;
      v54 = 0;
      v53 = (char *)v83;
LABEL_65:
      if ( !v54 )
        goto LABEL_105;
      if ( Length == 5 && (*(_DWORD *)Buffer | 0x20202020) == 0x6C64746E && ((unsigned __int8)Buffer[4] | 0x20) == 0x6C )
      {
        v55 = LdrpNtDllDataTableEntry;
        v93 = LdrpNtDllDataTableEntry;
      }
      else
      {
        v34 = LdrpLoadDependentModuleA(&SourceString, (__int64)&v93, (__int64)&v97);
        v6 = 1;
        if ( v34 < 0 || v34 == 259 )
          goto LABEL_106;
        v55 = v93;
        Buffer = SourceString.Buffer;
        Length = SourceString.Length;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v91 + 176) + 32LL) & 0x2000000) != 0 )
      {
        if ( v53 )
        {
          v49 = (char *)LdrpCheckRedirection(v91, v55, v53);
          v81 = v49;
          if ( v49 != (char *)-4530927LL )
          {
            v34 = 0;
            v6 = 1;
            goto LABEL_109;
          }
        }
      }
      v56 = *(_QWORD *)(v55 + 48);
      v57 = 1;
      v58 = v56;
      v106[0] = 0LL;
      if ( (v56 & 3) != 0 )
      {
        v58 = v56 & 0xFFFFFFFFFFFFFFFCuLL;
        v57 = (v56 & 1) == 0;
      }
      v59 = RtlImageNtHeaderEx(1LL, v58, 0LL, v106);
      if ( v106[0] )
      {
        v60 = *(_WORD *)(v106[0] + 24LL);
        if ( v60 == 267 )
        {
          if ( !*(_DWORD *)(v106[0] + 116LL) )
            goto LABEL_186;
          v61 = *(unsigned int *)(v106[0] + 120LL);
          if ( (_DWORD)v61 )
          {
            v87 = *(_DWORD *)(v106[0] + 124LL);
            if ( v57 || (unsigned int)v61 < *(_DWORD *)(v106[0] + 84LL) )
            {
LABEL_79:
              v4 = (char *)(v58 + v61);
              v59 = 0;
              goto LABEL_80;
            }
            v4 = (char *)RtlAddressInSectionTable(v106[0], v58, (unsigned int)v61);
            v59 = 0;
            if ( !v4 )
              v59 = -1073741811;
          }
          else
          {
            v59 = -1073741822;
          }
        }
        else
        {
          if ( v60 != 523 || !*(_DWORD *)(v106[0] + 132LL) )
          {
LABEL_186:
            v59 = -1073741811;
            goto LABEL_80;
          }
          v61 = *(unsigned int *)(v106[0] + 136LL);
          if ( (_DWORD)v61 )
          {
            v87 = *(_DWORD *)(v106[0] + 140LL);
            if ( v57 || (unsigned int)v61 < *(_DWORD *)(v106[0] + 84LL) )
              goto LABEL_79;
            v4 = (char *)RtlAddressInSectionTable(v106[0], v58, (unsigned int)v61);
            v59 = 0;
            if ( !v4 )
              v59 = -1073741811;
          }
          else
          {
            v59 = -1073741822;
          }
        }
      }
LABEL_80:
      if ( v59 < 0 )
        v4 = 0LL;
      if ( !v4 )
      {
        v34 = -1073741702;
LABEL_192:
        v4 = 0LL;
LABEL_105:
        v6 = 1;
        goto LABEL_106;
      }
      v62 = v83;
      if ( v83 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          829,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v83);
        v63 = 0;
        v64 = *((_DWORD *)v4 + 6) - 1;
        v65 = v64 / 2;
        if ( v64 >= 0 )
        {
          while ( 1 )
          {
            v66 = v83;
            v67 = v56 + *(unsigned int *)(v56 + *((unsigned int *)v4 + 8) + 4LL * v65) - (_QWORD)v83;
            while ( 1 )
            {
              v68 = *v66;
              if ( *v66 != v66[v67] )
                break;
              ++v66;
              if ( !v68 )
              {
                v69 = 0;
                goto LABEL_89;
              }
            }
            v69 = v68 < (unsigned int)v66[v67] ? -1 : 1;
LABEL_89:
            if ( !v69 )
              break;
            v70 = v65 - 1;
            if ( v69 >= 0 )
              v70 = v64;
            v64 = v70;
            if ( v69 >= 0 )
              v63 = v65 + 1;
            v65 = (v63 + v70) / 2;
            if ( v70 < v63 )
              goto LABEL_187;
          }
          v71 = *(unsigned __int16 *)(v56 + *((unsigned int *)v4 + 9) + 2LL * v65);
          v62 = v83;
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
          v83,
          (const void *)v56);
        v34 = -1073741702;
        v4 = 0LL;
LABEL_106:
        v49 = v81;
        goto LABEL_107;
      }
      v75 = Value;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        847,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Loading procedure 0x%lx by ordinal\n",
        Value);
      if ( !v75 )
      {
        v34 = -1073741811;
        goto LABEL_192;
      }
      v71 = v75 - *((_DWORD *)v4 + 4);
LABEL_97:
      if ( v71 >= *((_DWORD *)v4 + 5) )
      {
        v4 = 0LL;
        v34 = (v62 != 0LL) - 1073741512;
        goto LABEL_105;
      }
      v49 = (char *)(v56 + *(unsigned int *)(v56 + *((unsigned int *)v4 + 7) + 4LL * (int)v71));
      v81 = v49;
      if ( v49 < v4 || v49 >= &v4[v87] )
      {
        v4 = 0LL;
        v34 = 0;
        v72 = *(_QWORD *)(v55 + 48);
        if ( !qword_18019C3C8 || (dword_18019C3AC & 1) != 0 )
          goto LABEL_105;
        if ( v72 < *((_QWORD *)&xmmword_18019C530 + 1)
          || v72 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
        {
          RtlpxLookupFunctionTable(*(_QWORD *)(v55 + 48), (__int64 *)&v112);
        }
        else
        {
          v112 = xmmword_18019C530;
          v113 = qword_18019C540;
        }
        if ( *((_QWORD *)&v112 + 1) == v72 )
          goto LABEL_105;
LABEL_188:
        __fastfail(0x18u);
      }
      LODWORD(v88) = v88 + 1;
      v4 = 0LL;
    }
    while ( (_DWORD)v88 != 32 );
    v34 = -1073741701;
    v6 = 1;
LABEL_107:
    if ( v97 )
      RtlFreeHeap(LdrpHeap, 0LL, v97);
LABEL_109:
    if ( v34 == 259 )
      return 0LL;
    v16 = v98;
    LOBYTE(v35) = v99;
    if ( v34 < 0 )
      v36 = v107;
    else
      v36 = (unsigned __int64)v49;
    v22 = v80;
LABEL_53:
    if ( v34 >= 0 )
    {
LABEL_54:
      v48 = v102;
      *v102 = v36;
      v31 = v101 + 1;
      v32 = v48 + 1;
      v5 = a1;
      ++*(_DWORD *)(a1 + 132);
      v29 = v95;
      v28 = v90;
      v27 = v103;
      v26 = v104;
      continue;
    }
    break;
  }
  if ( v34 != -1073741702 && v34 != -1073741515 )
  {
LABEL_129:
    v73 = a1;
    goto LABEL_130;
  }
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v91 + 80))
    || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v84 + 80)) )
  {
    v77 = v94;
    LdrpLogLoadFailureEtwEvent((_DWORD)v94, v84 + 72, 1, (unsigned int)&LoadFailure, 0);
    LdrpLogLoadFailureEtwEvent((_DWORD)v77, v84 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
  }
  else
  {
    v77 = v94;
  }
  if ( (_BYTE)v35 )
  {
    v78 = -1073741512;
    v34 = -1073741512;
    v79 = (const char *)v89;
  }
  else
  {
    v34 = -1073741511;
    v78 = -1073741511;
    v79 = v100;
  }
  LdrpReportError(v77, v79, v78);
  v73 = a1;
LABEL_130:
  if ( *(_QWORD *)(v73 + 192) )
  {
    NtUnmapViewOfSection(-1LL);
    v73 = a1;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  if ( v34 < 0 )
    v6 = 0;
  if ( !v6 )
    LdrpLogError((unsigned int)v34, 25LL, 0LL, v73);
  return (unsigned int)v34;
}
