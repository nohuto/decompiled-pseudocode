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
  _QWORD *v8; // rcx
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  bool v18; // bl
  char *v19; // rdi
  NTSTATUS v20; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v23; // rbx
  unsigned int i; // ecx
  bool v25; // zf
  void *v26; // rdx
  char *v27; // r9
  char *v28; // r8
  unsigned int v29; // edx
  _IMAGE_NT_HEADERS64 *v30; // rcx
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
  void *v52; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rax
  int NtHeaders; // [rsp+20h] [rbp-128h]
  int NtHeadersa; // [rsp+20h] [rbp-128h]
  int v59; // [rsp+40h] [rbp-108h]
  __int64 v61; // [rsp+50h] [rbp-F8h]
  _QWORD *v62; // [rsp+58h] [rbp-F0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-E8h] BYREF
  int v64; // [rsp+68h] [rbp-E0h]
  unsigned int Size; // [rsp+6Ch] [rbp-DCh]
  __int64 v66; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-D0h]
  __int64 v68; // [rsp+80h] [rbp-C8h]
  __int64 *v69; // [rsp+88h] [rbp-C0h]
  unsigned __int64 *v70; // [rsp+90h] [rbp-B8h]
  char *v71; // [rsp+98h] [rbp-B0h]
  char *v72; // [rsp+A0h] [rbp-A8h]
  __int64 v73; // [rsp+A8h] [rbp-A0h]
  char *v74; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-90h]
  __int64 v76; // [rsp+C0h] [rbp-88h]
  _QWORD v77[8]; // [rsp+D0h] [rbp-78h] BYREF

  v76 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v68 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v73 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  memset(v77, 0, sizeof(v77));
  v64 = 0;
  v4 = 0;
  v59 = 0;
  v67 = 0;
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
    v8 = *(_QWORD **)(*(_QWORD *)(v5 + 88) + 8LL * v6);
    v9 = v8;
    v62 = v8;
    v10 = *(_QWORD *)(v5 + 88);
    if ( v8 )
    {
      v11 = v8[22];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x80000) == 0 && *(_QWORD **)(v11 + 56) != v8 )
        {
          v9 = *(_QWORD **)(v11 + 56);
          v62 = v9;
          *(_QWORD *)(v11 + 56) = v8;
          v10 = *(_QWORD *)(v5 + 88);
        }
      }
    }
    v12 = *(_QWORD **)(v10 + 8LL * v6);
    if ( v12 != v9 )
    {
      LdrpFreeReplacedModule(v12);
      v5 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v7) = v9;
    }
    v13 = *(_QWORD *)(v5 + 136);
    v14 = *(unsigned int *)(v13 + 20 * v7);
    v15 = v14 + v3;
    v16 = v73 + *(unsigned int *)(v13 + 20 * v7 + 16);
    if ( !(_DWORD)v14 || (unsigned int)v14 > *(_DWORD *)(v2 + 64) )
      v15 = v73 + *(unsigned int *)(v13 + 20 * v7 + 16);
    if ( v9 )
      break;
LABEL_55:
    ++*(_DWORD *)(v5 + 128);
    v3 = v73;
  }
  v17 = v9[6];
  v18 = 1;
  v19 = (char *)v17;
  OutHeaders = 0LL;
  v61 = 0LL;
  v66 = 0LL;
  if ( (v17 & 3) != 0 )
  {
    v19 = (char *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    v18 = (v17 & 1) == 0;
  }
  v20 = RtlImageNtHeaderEx(1u, v19, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v20 = RtlpImageDirectoryEntryToData32(v19, OutHeaders, (__int64)&v66);
      v23 = (char *)v66;
      v61 = v66;
      goto LABEL_89;
    }
    if ( Magic != 523 )
      goto LABEL_90;
    if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      goto LABEL_90;
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
      goto LABEL_90;
    Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
    if ( !v18 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v23 = (char *)RtlAddressInSectionTable(OutHeaders, v19, VirtualAddress);
      v61 = (__int64)v23;
      if ( v23 )
      {
        v20 = 0;
        goto LABEL_89;
      }
      goto LABEL_90;
    }
    v23 = &v19[VirtualAddress];
LABEL_19:
    v61 = (__int64)v23;
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
      v62 + 9);
    v4 = -1073741701;
    goto LABEL_68;
  }
  for ( i = 0; ; ++i )
  {
    v25 = i == 8;
    if ( i >= 8 )
      break;
    v26 = (void *)v77[i];
    if ( !v26 || (void *)v17 == v26 )
    {
      v25 = i == 8;
      break;
    }
  }
  if ( v25 || !v77[i] )
  {
    RtlGuardCheckImageBase((PVOID)v17);
    v51 = v64;
    v77[v64] = v17;
    v64 = (v51 + 1) & 7;
  }
  v27 = &v23[Size];
  v72 = v27;
  v28 = (char *)(v17 + *((unsigned int *)v23 + 7));
  v71 = v28;
  v29 = *((_DWORD *)v23 + 6);
  LODWORD(v66) = v29;
  v30 = (_IMAGE_NT_HEADERS64 *)(v17 + *((unsigned int *)v23 + 8));
  OutHeaders = v30;
  v74 = (char *)(v17 + *((unsigned int *)v23 + 9));
  v5 = a1;
  v31 = 8LL * *(unsigned int *)(a1 + 132);
  v32 = (__int64 *)(v31 + v15);
  v33 = (unsigned __int64 *)(v31 + v16);
  v4 = v59;
  while ( 2 )
  {
    v69 = v32;
    v70 = v33;
    v34 = *v32;
    if ( !*v32 )
    {
      *(_DWORD *)(v5 + 132) = 0;
      v2 = v68;
      goto LABEL_55;
    }
    v4 = -1073741702;
    v59 = -1073741702;
    v35 = (unsigned __int64)v34 >> 63;
    v36 = -4530927LL;
    v37 = 0LL;
    if ( v34 < 0 )
    {
      v67 = (unsigned __int16)v34;
      v47 = (unsigned __int16)v34 - *((_DWORD *)v23 + 4);
LABEL_48:
      if ( (unsigned int)v47 < *((_DWORD *)v23 + 5) )
      {
        v48 = *(unsigned int *)&v28[4 * v47];
        if ( (_DWORD)v48 )
        {
          v36 = v17 + v48;
          v4 = 0;
          v59 = 0;
          if ( v17 + v48 > (unsigned __int64)v23 && v36 < (unsigned __int64)v27 )
          {
            v50 = LdrpResolveForwarder((char *)(v17 + v48));
            v4 = v50;
            v59 = v50;
            if ( v50 == 259 )
              return 0LL;
            if ( v50 >= 0 )
              v36 = v75;
          }
        }
      }
    }
    else
    {
      v38 = (unsigned __int16 *)(*(_QWORD *)(v68 + 48) + (unsigned int)v34);
      v37 = (unsigned __int64)(v38 + 1);
      if ( (*(_DWORD *)(v5 + 32) & 0x2000000) == 0 )
        goto LABEL_33;
      v56 = LdrpCheckRedirection(v68, v62, v38 + 1);
      v36 = v56;
      if ( v56 != -4530927 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          3390,
          (unsigned int)"LdrpSnapModule",
          2,
          "Import '%s' of DLL '%wZ' is redirected to 0x%p",
          v38 + 1,
          v68 + 72,
          v56);
        v4 = 0;
        v59 = 0;
        v23 = (char *)v61;
        goto LABEL_52;
      }
      v30 = OutHeaders;
      v29 = v66;
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
          v43 = (char *)(v17 + *(&v30->Signature + v39) - v37);
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
          v30 = OutHeaders;
          if ( v46 < v40 )
            goto LABEL_46;
        }
        v47 = *(unsigned __int16 *)&v74[2 * v39];
        v23 = (char *)v61;
        v28 = v71;
        v27 = v72;
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
      v23 = (char *)v61;
    }
    if ( v4 >= 0 )
    {
LABEL_52:
      v49 = v70;
      *v70 = v36;
      v32 = v69 + 1;
      v33 = v49 + 1;
      v5 = a1;
      ++*(_DWORD *)(a1 + 132);
      v30 = OutHeaders;
      v29 = v66;
      v28 = v71;
      v27 = v72;
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
  v54 = v68;
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v68 + 80))
    || (unsigned int)CompatCachepLookupCdb((wchar_t *)v62[10]) )
  {
    v55 = v54 + 72;
    LOBYTE(NtHeaders) = 0;
    LdrpLogLoadFailureEtwEvent(v55, v62 + 9, 1LL, &LoadFailure, NtHeaders);
    LOBYTE(NtHeadersa) = 1;
    LdrpLogLoadFailureEtwEvent(v55, v62 + 9, 1LL, &LoadFailureOperational, NtHeadersa);
  }
  else
  {
    v55 = v54 + 72;
  }
  if ( (_BYTE)v35 )
  {
    v4 = -1073741512;
    v37 = v67;
  }
  else
  {
    v4 = -1073741511;
  }
  LdrpReportError(v55, v37, (unsigned int)v4);
  v5 = a1;
LABEL_69:
  v52 = *(void **)(v5 + 192);
  if ( v52 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v52);
    v5 = a1;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  if ( v4 < 0 )
    LdrpLogError((unsigned int)v4, 25LL, 0LL, v5);
  return (unsigned int)v4;
}
