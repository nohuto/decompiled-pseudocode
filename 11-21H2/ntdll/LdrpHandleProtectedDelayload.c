/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x18003BF80
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180035FF0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800340FC (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpGetDelayloadExportDll @ 0x18003523C (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x18007A3C8 (LdrpParseForwarderDescription.c)
 *     LdrpRedirectDelayloadFailure @ 0x18008AB6C (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpCheckRedirection @ 0x1800E1248 (LdrpCheckRedirection.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4D90 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        unsigned int a6)
{
  int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r12
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS v12; // ebx
  _QWORD *v13; // r14
  char *v14; // rbx
  unsigned __int64 v15; // rdi
  _BYTE *Heap; // rsi
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r13
  int v22; // esi
  _QWORD *v23; // rdi
  WCHAR *v24; // rbx
  char v25; // cl
  unsigned __int64 v26; // r14
  bool v27; // bl
  char *v28; // rdi
  char *v29; // r15
  NTSTATUS v30; // eax
  unsigned __int16 Magic; // ax
  __int64 SizeOfHeapCommit_low; // rax
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  const char *v36; // rcx
  signed __int64 v37; // rdx
  unsigned __int8 v38; // al
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // esi
  NTSTATUS v42; // ebx
  unsigned int v44; // eax
  __int64 v45; // rax
  char v46; // [rsp+40h] [rbp-598h]
  PVOID v47; // [rsp+48h] [rbp-590h] BYREF
  int v48; // [rsp+50h] [rbp-588h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-580h]
  unsigned __int64 v50; // [rsp+60h] [rbp-578h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-570h]
  PVOID v52; // [rsp+70h] [rbp-568h] BYREF
  __int64 v53; // [rsp+78h] [rbp-560h] BYREF
  unsigned int SizeOfHeapCommit_high; // [rsp+80h] [rbp-558h]
  unsigned int v55; // [rsp+84h] [rbp-554h]
  unsigned int v56; // [rsp+88h] [rbp-550h]
  const char *v57; // [rsp+90h] [rbp-548h] BYREF
  _BYTE *v58; // [rsp+98h] [rbp-540h]
  __int64 v59; // [rsp+A0h] [rbp-538h]
  __int64 v60; // [rsp+A8h] [rbp-530h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-528h] BYREF
  void (__fastcall *v62)(unsigned __int64 *, _QWORD *, unsigned __int64, _QWORD, _QWORD); // [rsp+B8h] [rbp-520h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-518h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-510h]
  __int64 v65; // [rsp+D0h] [rbp-508h]
  __int64 v66; // [rsp+D8h] [rbp-500h]
  __int64 v67; // [rsp+E0h] [rbp-4F8h]
  _QWORD *v68; // [rsp+E8h] [rbp-4F0h]
  unsigned __int64 *v69; // [rsp+F0h] [rbp-4E8h]
  __int64 v70; // [rsp+F8h] [rbp-4E0h]
  int v71[2]; // [rsp+100h] [rbp-4D8h]
  _BYTE v72[24]; // [rsp+108h] [rbp-4D0h] BYREF
  PWSTR Path[16]; // [rsp+120h] [rbp-4B8h] BYREF
  _BYTE BaseAddress[1024]; // [rsp+1A0h] [rbp-438h] BYREF

  v70 = a4;
  v7 = a3;
  *(_QWORD *)v71 = a3;
  v8 = a2;
  v65 = a2;
  v9 = a1;
  v59 = a1;
  v67 = (__int64)a5;
  LODWORD(v10) = 0;
  v53 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&v47, a6, (__int64)a5);
  v12 = DelayloadExportDll;
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v13 = v47;
    v68 = (char *)v47 + 48;
    RtlGuardCheckImageBase(*((PVOID *)v47 + 6));
    v14 = (char *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v60 = (__int64)v14;
    v15 = (a5 - v14) >> 3;
    v64 = v15;
    if ( *(_QWORD *)v14 )
    {
      do
        v10 = (unsigned int)(v10 + 1);
      while ( *(_QWORD *)&v14[8 * v10] );
    }
    if ( (unsigned int)v10 > 0x80 )
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v10);
      v58 = Heap;
      if ( !Heap )
      {
        Heap = BaseAddress;
        v58 = BaseAddress;
        v14 = (char *)v67;
        v60 = v67;
        LODWORD(v10) = v10 - v15;
        if ( (unsigned int)v10 > 0x80 )
          LODWORD(v10) = 128;
        LODWORD(v15) = 0;
        v64 = 0LL;
      }
    }
    else
    {
      Heap = BaseAddress;
      v58 = BaseAddress;
    }
    if ( g_ShimsEnabled )
      v62 = (void (__fastcall *)(unsigned __int64 *, _QWORD *, unsigned __int64, _QWORD, _QWORD))(__ROR8__(
                                                                                                    g_pfnSE_GetProcAddressForCaller,
                                                                                                    64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v62 = 0LL;
    v17 = 0;
    v56 = 0;
    if ( !(_DWORD)v10 )
      goto LABEL_57;
    v18 = 0LL;
    v66 = 0LL;
    while ( 1 )
    {
      v69 = (unsigned __int64 *)&Heap[8 * v18];
      *v69 = 0LL;
      if ( v17 != (_DWORD)v15
        && *(_QWORD *)&v14[8 * v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
      {
        goto LABEL_56;
      }
      v49 = 0LL;
      v50 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * ((__int64)&v14[8LL * v17 - (v19 + *(unsigned int *)(v8 + 12))] >> 3));
      if ( v20 < 0 )
      {
        v21 = 0LL;
        v22 = (unsigned __int16)v20;
      }
      else
      {
        v21 = (const char *)(v20 + v19 + 2);
        v22 = 0;
      }
      v57 = v21;
      v48 = v22;
      v23 = v13;
      v52 = v13;
      v55 = 0;
      v24 = (WCHAR *)v13[10];
      memset(Path, 0, sizeof(Path));
      Path[4] = v24;
      if ( !LdrpRedirectionModule || LdrpRedirectionModule == v9 )
      {
        v25 = 0;
      }
      else
      {
        if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
        {
          v25 = *(_BYTE *)(v9 + 104) & 1;
        }
        else
        {
          if ( LdrpRedirectionCalloutFunc )
          {
            v25 = LdrpRedirectionCalloutFunc(*(_QWORD *)(v9 + 80));
            v46 = v25;
            v49 = v50;
            v21 = v57;
            v22 = v48;
            v23 = v52;
            v13 = v47;
            goto LABEL_17;
          }
          v25 = 1;
        }
        v49 = v50;
        v21 = v57;
        v22 = v48;
        v23 = v52;
        v13 = v47;
      }
      v46 = v25;
      while ( 1 )
      {
LABEL_17:
        if ( v25 )
        {
          if ( v21 )
          {
            v45 = LdrpCheckRedirection(v9, v23, v21);
            if ( v45 != -4530927 )
            {
              v15 = v45;
              v50 = v45;
              v42 = 0;
              goto LABEL_50;
            }
          }
        }
        v26 = v23[6];
        v27 = 1;
        v28 = (char *)v26;
        OutHeaders = 0LL;
        v29 = 0LL;
        if ( (v26 & 3) != 0 )
        {
          v28 = (char *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
          v27 = (v26 & 1) == 0;
        }
        v30 = RtlImageNtHeaderEx(1u, v28, 0LL, &OutHeaders);
        if ( OutHeaders )
        {
          Magic = OutHeaders->OptionalHeader.Magic;
          if ( Magic == 267 )
          {
            if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
              goto LABEL_106;
            SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( !(_DWORD)SizeOfHeapCommit_low )
              goto LABEL_106;
            SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( v27 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
            {
LABEL_26:
              v29 = &v28[SizeOfHeapCommit_low];
              goto LABEL_27;
            }
          }
          else
          {
            if ( Magic != 523 )
              goto LABEL_106;
            if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
              goto LABEL_106;
            SizeOfHeapCommit_low = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
            if ( !(_DWORD)SizeOfHeapCommit_low )
              goto LABEL_106;
            SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
            if ( v27 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
              goto LABEL_26;
          }
          v29 = (char *)RtlAddressInSectionTable(OutHeaders, v28, SizeOfHeapCommit_low);
          if ( !v29 )
            goto LABEL_106;
          v30 = 0;
        }
        if ( v30 < 0 )
          goto LABEL_106;
LABEL_27:
        if ( !v29 )
          goto LABEL_106;
        if ( v21 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            829,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            "Locating procedure \"%s\" by name\n",
            v21);
          v33 = 0;
          v34 = *((_DWORD *)v29 + 6) - 1;
          v35 = v34 / 2;
          if ( v34 < 0 )
          {
LABEL_110:
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              2203,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
              v21,
              (const void *)v26);
LABEL_106:
            v42 = -1073741702;
LABEL_107:
            v15 = v49;
            goto LABEL_45;
          }
          while ( 1 )
          {
            v36 = v21;
            v37 = v26 + *(unsigned int *)(v26 + *((unsigned int *)v29 + 8) + 4LL * v35) - (_QWORD)v21;
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 != v36[v37] )
                break;
              ++v36;
              if ( !v38 )
              {
                v39 = 0;
                goto LABEL_34;
              }
            }
            v39 = v38 < (unsigned int)v36[v37] ? -1 : 1;
LABEL_34:
            if ( !v39 )
              break;
            v40 = v35 - 1;
            if ( v39 >= 0 )
              v40 = v34;
            v34 = v40;
            if ( v39 >= 0 )
              v33 = v35 + 1;
            v35 = (v33 + v40) / 2;
            if ( v40 < v33 )
              goto LABEL_110;
          }
          v41 = *(unsigned __int16 *)(v26 + *((unsigned int *)v29 + 9) + 2LL * v35);
        }
        else
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            847,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            "Loading procedure 0x%lx by ordinal\n",
            v22);
          if ( !v22 )
          {
            v42 = -1073741811;
            goto LABEL_107;
          }
          v41 = v22 - *((_DWORD *)v29 + 4);
        }
        if ( v41 >= *((_DWORD *)v29 + 5) )
        {
          v42 = (v21 != 0LL) - 1073741512;
          goto LABEL_107;
        }
        v15 = v26 + *(unsigned int *)(v26 + *((unsigned int *)v29 + 7) + 4LL * (int)v41);
        v49 = v15;
        v50 = v15;
        if ( v15 < (unsigned __int64)v29 || v15 >= (unsigned __int64)&v29[SizeOfHeapCommit_high] )
        {
          v42 = 0;
          goto LABEL_45;
        }
        v44 = v55++;
        if ( v44 >= 0x20 )
          break;
        v42 = LdrpParseForwarderDescription(v15, v72, &v57, &v48);
        v13 = v47;
        if ( v42 < 0 )
          goto LABEL_46;
        LODWORD(Path[3]) = *((_DWORD *)v52 + 68);
        v42 = LdrpLoadForwardedDll(v72, Path, v47, v52, 2, &v52);
        if ( v42 < 0 )
          goto LABEL_46;
        v23 = v52;
        LdrpDereferenceModule((char *)v52);
        v21 = v57;
        v22 = v48;
        v25 = v46;
        v9 = v59;
      }
      v42 = -1073741701;
LABEL_45:
      v13 = v47;
LABEL_46:
      if ( BYTE4(Path[15]) )
        RtlReleasePath(Path[0]);
      if ( v42 < 0 )
      {
        v15 = 0LL;
        v50 = 0LL;
        goto LABEL_53;
      }
      v9 = v59;
LABEL_50:
      if ( AvrfpAPILookupCallbacksEnabled )
      {
        AVrfCallAPILookupCallback(*(_QWORD *)(v9 + 48), *v68, v15, 1, (__int64)&v50);
        v15 = v50;
      }
      if ( v62 )
      {
        v63 = 0LL;
        v62(&v63, v13, v15, *(_QWORD *)(v9 + 48), 0LL);
        if ( v63 )
          v15 = v63;
      }
LABEL_53:
      *v69 = v15;
      v17 = v56;
      LODWORD(v15) = v64;
      Heap = v58;
      v9 = v59;
      v8 = v65;
      if ( v56 == (_DWORD)v64 )
      {
        Status = v42;
        v53 = *(_QWORD *)&v58[8 * (unsigned int)v64];
      }
      v14 = (char *)v60;
LABEL_56:
      v56 = ++v17;
      v18 = ++v66;
      if ( v17 >= (unsigned int)v10 )
      {
LABEL_57:
        if ( Status < 0 )
        {
          v53 = LdrpRedirectDelayloadFailure(v9, (int)v13, v8, v71[0], v70, v67, Status);
          if ( v53 )
          {
            if ( (unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671 )
              *(_QWORD *)&Heap[8 * (unsigned int)v15] = v53;
          }
        }
        LdrpWriteBackProtectedDelayLoad((_RTL_SRWLOCK *)v9, v14, (__int64)Heap, v10, v15);
        if ( BaseAddress != Heap )
          RtlFreeHeap(LdrpHeap, 0, Heap);
        LdrpDereferenceModule((char *)v13);
        return v53;
      }
    }
  }
  v53 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, (__int64)a5, DelayloadExportDll);
  if ( v53 && (v12 == -1073741515 || v12 == -1073740671) )
    LdrpWriteBackProtectedDelayLoad((_RTL_SRWLOCK *)v9, a5, (__int64)&v53, 1u, 0);
  return v53;
}
