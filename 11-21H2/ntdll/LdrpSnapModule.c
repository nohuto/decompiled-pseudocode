/*
 * XREFs of LdrpSnapModule @ 0x18003C8C0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     LdrpDoPostSnapWork @ 0x180034040 (LdrpDoPostSnapWork.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180053DF8 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180053F2C (LdrpLogError.c)
 *     LdrpFreeReplacedModule @ 0x18006B238 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B3A4 (LdrpHandlePendingModuleReplaced.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     CompatCachepLookupCdb @ 0x18007AEC0 (CompatCachepLookupCdb.c)
 *     LdrpReportError @ 0x18007E00C (LdrpReportError.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpCheckRedirection @ 0x1800E1248 (LdrpCheckRedirection.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800F5D80 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r13
  signed __int64 v17; // r15
  bool v18; // bl
  unsigned __int64 v19; // rdi
  int v20; // eax
  __int16 v21; // ax
  __int64 v22; // rdx
  _DWORD *v23; // rbx
  unsigned int i; // ecx
  bool v25; // zf
  const void *v26; // rdx
  char *v27; // r9
  char *v28; // r8
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // r14
  unsigned __int64 *v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int16 *v38; // rbx
  int v39; // r9d
  int v40; // r10d
  int v41; // r11d
  unsigned __int8 *v42; // rax
  char *v43; // rdx
  unsigned __int8 v44; // cl
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  unsigned __int64 *v49; // r13
  int v50; // eax
  char v51; // r12
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // [rsp+40h] [rbp-108h]
  _DWORD *v58; // [rsp+50h] [rbp-F8h]
  __int64 v59; // [rsp+58h] [rbp-F0h]
  __int64 v60; // [rsp+60h] [rbp-E8h] BYREF
  int v61; // [rsp+68h] [rbp-E0h]
  unsigned int v62; // [rsp+6Ch] [rbp-DCh] BYREF
  _DWORD *v63; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v64; // [rsp+78h] [rbp-D0h]
  __int64 v65; // [rsp+80h] [rbp-C8h]
  __int64 *v66; // [rsp+88h] [rbp-C0h]
  unsigned __int64 *v67; // [rsp+90h] [rbp-B8h]
  char *v68; // [rsp+98h] [rbp-B0h]
  char *v69; // [rsp+A0h] [rbp-A8h]
  __int64 v70; // [rsp+A8h] [rbp-A0h]
  char *v71; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-90h]
  __int64 v73; // [rsp+C0h] [rbp-88h]
  _QWORD v74[8]; // [rsp+D0h] [rbp-78h] BYREF

  v73 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v65 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v70 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  memset(v74, 0, sizeof(v74));
  v61 = 0;
  v4 = 0;
  v56 = 0;
  v64 = 0;
  v5 = a1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 + 128);
    if ( v6 >= *(_DWORD *)(v5 + 104) )
    {
      if ( v4 < 0 )
        goto LABEL_69;
      v4 = LdrpDoPostSnapWork(v5);
      if ( v4 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_68;
    }
    v7 = v6;
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 8LL * v6);
    v9 = v8;
    v59 = v8;
    v10 = *(_QWORD *)(v5 + 88);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 176);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x80000) == 0 && *(_QWORD *)(v11 + 56) != v8 )
        {
          v9 = *(_QWORD *)(v11 + 56);
          v59 = v9;
          *(_QWORD *)(v11 + 56) = v8;
          v10 = *(_QWORD *)(v5 + 88);
        }
      }
    }
    v12 = *(_QWORD *)(v10 + 8LL * v6);
    if ( v12 != v9 )
    {
      LdrpFreeReplacedModule(v12);
      v5 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v7) = v9;
    }
    v13 = *(_QWORD *)(v5 + 136);
    v14 = *(unsigned int *)(v13 + 20 * v7);
    v15 = v14 + v3;
    v16 = v70 + *(unsigned int *)(v13 + 20 * v7 + 16);
    if ( !(_DWORD)v14 || (unsigned int)v14 > *(_DWORD *)(v2 + 64) )
      v15 = v70 + *(unsigned int *)(v13 + 20 * v7 + 16);
    if ( v9 )
      break;
LABEL_55:
    ++*(_DWORD *)(v5 + 128);
    v3 = v70;
  }
  v17 = *(_QWORD *)(v9 + 48);
  v18 = 1;
  v19 = v17;
  v60 = 0LL;
  v58 = 0LL;
  v63 = 0LL;
  if ( (v17 & 3) != 0 )
  {
    v19 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    v18 = (v17 & 1) == 0;
  }
  v20 = RtlImageNtHeaderEx(1LL, v19, 0LL, &v60);
  if ( v60 )
  {
    v21 = *(_WORD *)(v60 + 24);
    if ( v21 == 267 )
    {
      v20 = RtlpImageDirectoryEntryToData32(v19, v18, 0, (unsigned int)&v62, v60, (__int64)&v63);
      v23 = v63;
      v58 = v63;
      goto LABEL_89;
    }
    if ( v21 != 523 )
      goto LABEL_90;
    if ( !*(_DWORD *)(v60 + 132) )
      goto LABEL_90;
    v22 = *(unsigned int *)(v60 + 136);
    if ( !(_DWORD)v22 )
      goto LABEL_90;
    v62 = *(_DWORD *)(v60 + 140);
    if ( !v18 && (unsigned int)v22 >= *(_DWORD *)(v60 + 84) )
    {
      v23 = (_DWORD *)RtlAddressInSectionTable();
      v58 = v23;
      if ( v23 )
      {
        v20 = 0;
        goto LABEL_89;
      }
      goto LABEL_90;
    }
    v23 = (_DWORD *)(v19 + v22);
LABEL_19:
    v58 = v23;
  }
  else
  {
    v23 = 0LL;
LABEL_89:
    if ( v20 < 0 )
    {
LABEL_90:
      v23 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !v23 )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      3293,
      (unsigned int)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v59 + 72);
    v4 = -1073741701;
    goto LABEL_68;
  }
  for ( i = 0; ; ++i )
  {
    v25 = i == 8;
    if ( i >= 8 )
      break;
    v26 = (const void *)v74[i];
    if ( !v26 || (const void *)v17 == v26 )
    {
      v25 = i == 8;
      break;
    }
  }
  if ( v25 || !v74[i] )
  {
    RtlGuardCheckImageBase(v17, 0LL);
    v51 = v61;
    v74[v61] = v17;
    v61 = (v51 + 1) & 7;
  }
  v27 = (char *)v23 + v62;
  v69 = v27;
  v28 = (char *)(v17 + (unsigned int)v23[7]);
  v68 = v28;
  v29 = v23[6];
  LODWORD(v63) = v29;
  v30 = v17 + (unsigned int)v23[8];
  v60 = v30;
  v71 = (char *)(v17 + (unsigned int)v23[9]);
  v5 = a1;
  v31 = 8LL * *(unsigned int *)(a1 + 132);
  v32 = (__int64 *)(v31 + v15);
  v33 = (unsigned __int64 *)(v31 + v16);
  v4 = v56;
  while ( 2 )
  {
    v66 = v32;
    v67 = v33;
    v34 = *v32;
    if ( !*v32 )
    {
      *(_DWORD *)(v5 + 132) = 0;
      v2 = v65;
      goto LABEL_55;
    }
    v4 = -1073741702;
    v56 = -1073741702;
    v35 = (unsigned __int64)v34 >> 63;
    v36 = -4530927LL;
    v37 = 0LL;
    if ( v34 < 0 )
    {
      v64 = (unsigned __int16)v34;
      v47 = (unsigned __int16)v34 - v23[4];
LABEL_48:
      if ( (unsigned int)v47 < v23[5] )
      {
        v48 = *(unsigned int *)&v28[4 * v47];
        if ( (_DWORD)v48 )
        {
          v36 = v17 + v48;
          v4 = 0;
          v56 = 0;
          if ( v17 + v48 > (unsigned __int64)v23 && v36 < (unsigned __int64)v27 )
          {
            v50 = LdrpResolveForwarder((char *)(v17 + v48));
            v4 = v50;
            v56 = v50;
            if ( v50 == 259 )
              return 0LL;
            if ( v50 >= 0 )
              v36 = v72;
          }
        }
      }
    }
    else
    {
      v38 = (unsigned __int16 *)(*(_QWORD *)(v65 + 48) + (unsigned int)v34);
      v37 = (unsigned __int64)(v38 + 1);
      if ( (*(_DWORD *)(v5 + 32) & 0x2000000) == 0 )
        goto LABEL_33;
      v55 = LdrpCheckRedirection(v65, v59, v38 + 1);
      v36 = v55;
      if ( v55 != -4530927 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          3390,
          (unsigned int)"LdrpSnapModule",
          2,
          "Import '%s' of DLL '%wZ' is redirected to 0x%p",
          v38 + 1,
          v65 + 72,
          v55);
        v4 = 0;
        v56 = 0;
        v23 = v58;
        goto LABEL_52;
      }
      v30 = v60;
      v29 = (unsigned int)v63;
LABEL_33:
      v39 = *v38;
      v40 = 0;
      v41 = v29 - 1;
      if ( v39 >= v29 )
        v39 = v41 / 2;
      if ( v41 >= 0 )
      {
        while ( 1 )
        {
          v42 = (unsigned __int8 *)(v38 + 1);
          v43 = (char *)(v17 + *(unsigned int *)(v30 + 4LL * v39) - v37);
          while ( 1 )
          {
            v44 = *v42;
            if ( *v42 != v43[(_QWORD)v42] )
              break;
            ++v42;
            if ( !v44 )
            {
              v45 = 0;
              goto LABEL_40;
            }
          }
          v45 = v44 < (unsigned int)v43[(_QWORD)v42] ? -1 : 1;
LABEL_40:
          if ( !v45 )
            break;
          v46 = v39 - 1;
          if ( v45 >= 0 )
            v46 = v41;
          v41 = v46;
          if ( v45 >= 0 )
            v40 = v39 + 1;
          v39 = (v40 + v46) / 2;
          v30 = v60;
          if ( v46 < v40 )
            goto LABEL_46;
        }
        v47 = *(unsigned __int16 *)&v71[2 * v39];
        v23 = v58;
        v28 = v68;
        v27 = v69;
        goto LABEL_48;
      }
LABEL_46:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2203,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (const char *)v38 + 2,
        (const void *)v17);
      v23 = v58;
    }
    if ( v4 >= 0 )
    {
LABEL_52:
      v49 = v67;
      *v67 = v36;
      v32 = v66 + 1;
      v33 = v49 + 1;
      v5 = a1;
      ++*(_DWORD *)(a1 + 132);
      v30 = v60;
      v29 = (unsigned int)v63;
      v28 = v68;
      v27 = v69;
      continue;
    }
    break;
  }
  if ( v4 != -1073741702 && v4 != -1073741515 )
  {
LABEL_68:
    v5 = a1;
    goto LABEL_69;
  }
  v53 = v65;
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v65 + 80))
    || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v59 + 80)) )
  {
    v54 = v53 + 72;
    LdrpLogLoadFailureEtwEvent(v54, v59 + 72, 1, (unsigned int)&LoadFailure, 0);
    LdrpLogLoadFailureEtwEvent(v54, v59 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
  }
  else
  {
    v54 = v53 + 72;
  }
  if ( (_BYTE)v35 )
  {
    v4 = -1073741512;
    v37 = v64;
  }
  else
  {
    v4 = -1073741511;
  }
  LdrpReportError(v54, v37, (unsigned int)v4);
  v5 = a1;
LABEL_69:
  if ( *(_QWORD *)(v5 + 192) )
  {
    NtUnmapViewOfSection(-1LL);
    v5 = a1;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  if ( v4 < 0 )
    LdrpLogError((unsigned int)v4, 25LL, 0LL, v5);
  return (unsigned int)v4;
}
