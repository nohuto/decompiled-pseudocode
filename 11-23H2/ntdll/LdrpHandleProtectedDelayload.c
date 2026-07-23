/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180023120
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18002BE90 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x18001605C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x180018DF0 (LdrpLoadForwardedDll.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpParseForwarderDescription @ 0x180073010 (LdrpParseForwarderDescription.c)
 *     RtlGuardCheckImageBase @ 0x180074418 (RtlGuardCheckImageBase.c)
 *     LdrpRedirectDelayloadFailure @ 0x180086B80 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpCheckRedirection @ 0x1800E0D7C (LdrpCheckRedirection.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4F50 (AVrfCallAPILookupCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  int v7; // r13d
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS v11; // esi
  _QWORD *v12; // r14
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r13
  _BYTE *Heap; // r12
  unsigned int v19; // edi
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  const char *v23; // r12
  int v24; // esi
  _QWORD *v25; // rdi
  __int64 v26; // rbx
  char v27; // cl
  unsigned __int64 v28; // r14
  bool v29; // bl
  char *v30; // rdi
  char *v31; // r15
  NTSTATUS v32; // eax
  unsigned __int16 Magic; // ax
  __int64 SizeOfHeapCommit_low; // rax
  int v35; // r10d
  int v36; // r11d
  int v37; // r9d
  const char *v38; // rcx
  signed __int64 v39; // rdx
  unsigned __int8 v40; // al
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // esi
  char *v44; // r14
  NTSTATUS ForwardedDll; // ebx
  PVOID v46; // rdi
  int Status; // edx
  unsigned int v49; // eax
  __int64 v50; // rax
  char i; // [rsp+40h] [rbp-588h]
  PVOID v52; // [rsp+48h] [rbp-580h] BYREF
  int v53; // [rsp+50h] [rbp-578h] BYREF
  NTSTATUS v54; // [rsp+54h] [rbp-574h]
  int v55[2]; // [rsp+58h] [rbp-570h]
  char *v56; // [rsp+60h] [rbp-568h]
  __int64 v57; // [rsp+68h] [rbp-560h] BYREF
  PVOID v58; // [rsp+70h] [rbp-558h] BYREF
  __int64 v59; // [rsp+78h] [rbp-550h] BYREF
  unsigned int SizeOfHeapCommit_high; // [rsp+80h] [rbp-548h]
  unsigned int v61; // [rsp+84h] [rbp-544h]
  unsigned int v62; // [rsp+88h] [rbp-540h]
  const char *v63; // [rsp+90h] [rbp-538h] BYREF
  int v64[2]; // [rsp+98h] [rbp-530h]
  _BYTE *v65; // [rsp+A0h] [rbp-528h]
  __int64 v66; // [rsp+A8h] [rbp-520h]
  __int64 v67; // [rsp+B0h] [rbp-518h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-510h] BYREF
  void (__fastcall *v69)(char **, PVOID, char *, _QWORD, _QWORD); // [rsp+C0h] [rbp-508h]
  char *v70; // [rsp+C8h] [rbp-500h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-4F8h]
  __int64 v72; // [rsp+D8h] [rbp-4F0h]
  _QWORD *v73; // [rsp+E0h] [rbp-4E8h]
  char **v74; // [rsp+E8h] [rbp-4E0h]
  __int64 v75; // [rsp+F0h] [rbp-4D8h]
  int v76[2]; // [rsp+F8h] [rbp-4D0h]
  _BYTE v77[16]; // [rsp+100h] [rbp-4C8h] BYREF
  PWSTR Path[3]; // [rsp+110h] [rbp-4B8h] BYREF
  int v79; // [rsp+128h] [rbp-4A0h]
  __int64 v80; // [rsp+130h] [rbp-498h]
  char v81; // [rsp+18Ch] [rbp-43Ch]
  _BYTE BaseAddress[1024]; // [rsp+190h] [rbp-438h] BYREF

  v75 = a4;
  v7 = a3;
  *(_QWORD *)v76 = a3;
  *(_QWORD *)v64 = a2;
  *(_QWORD *)v55 = a1;
  v72 = a5;
  v59 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&v52, a6, a5);
  v11 = DelayloadExportDll;
  v54 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v12 = v52;
    v73 = (char *)v52 + 48;
    RtlGuardCheckImageBase(*((PVOID *)v52 + 6));
    v13 = a2;
    v14 = a1;
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 12));
    v66 = (__int64)v15;
    v16 = (a5 - (__int64)v15) >> 3;
    v71 = v16;
    LODWORD(v17) = 0;
    if ( *v15 )
    {
      do
        v17 = (unsigned int)(v17 + 1);
      while ( v15[v17] );
    }
    if ( (unsigned int)v17 > 0x80 )
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v17);
      v65 = Heap;
      v14 = a1;
      v13 = a2;
      if ( !Heap )
      {
        Heap = BaseAddress;
        v65 = BaseAddress;
        v15 = (_QWORD *)v72;
        v66 = v72;
        LODWORD(v17) = v17 - v16;
        if ( (unsigned int)v17 > 0x80 )
          LODWORD(v17) = 128;
        LODWORD(v16) = 0;
        v71 = 0LL;
      }
    }
    else
    {
      Heap = BaseAddress;
      v65 = BaseAddress;
    }
    if ( g_ShimsEnabled )
      v69 = (void (__fastcall *)(char **, PVOID, char *, _QWORD, _QWORD))(__ROR8__(
                                                                            g_pfnSE_GetProcAddressForCaller,
                                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v69 = 0LL;
    v19 = 0;
    v62 = 0;
    if ( !(_DWORD)v17 )
    {
      Status = v54;
      goto LABEL_60;
    }
    v20 = 0LL;
    v67 = 0LL;
    while ( 1 )
    {
      v74 = (char **)&Heap[8 * v20];
      *v74 = 0LL;
      if ( v19 != (_DWORD)v16 && v15[v20] - *(_QWORD *)(v14 + 48) >= (unsigned __int64)*(unsigned int *)(v14 + 64) )
      {
LABEL_58:
        Status = v54;
        goto LABEL_59;
      }
      v56 = 0LL;
      v57 = 0LL;
      v21 = *(_QWORD *)(v14 + 48);
      v22 = *(_QWORD *)(v21
                      + *(unsigned int *)(v13 + 16)
                      + 8 * (((__int64)v15 + 8LL * v19 - (v21 + *(unsigned int *)(v13 + 12))) >> 3));
      if ( v22 < 0 )
      {
        v23 = 0LL;
        v24 = (unsigned __int16)v22;
      }
      else
      {
        v23 = (const char *)(v22 + v21 + 2);
        v24 = 0;
      }
      v63 = v23;
      v53 = v24;
      v25 = v12;
      v58 = v12;
      v61 = 0;
      v26 = v12[10];
      memset_thunk_772440563353939046(Path, 0, 0x80uLL);
      v80 = v26;
      if ( !LdrpRedirectionModule || LdrpRedirectionModule == *(_QWORD *)v55 )
      {
        v27 = 0;
      }
      else
      {
        if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
        {
          v27 = *(_BYTE *)(*(_QWORD *)v55 + 104LL) & 1;
        }
        else
        {
          if ( LdrpRedirectionCalloutFunc )
          {
            v27 = LdrpRedirectionCalloutFunc(*(_QWORD *)(*(_QWORD *)v55 + 80LL));
            i = v27;
            v56 = (char *)v57;
            v23 = v63;
            v24 = v53;
            v25 = v58;
            goto LABEL_17;
          }
          v27 = 1;
        }
        v56 = (char *)v57;
        v23 = v63;
        v24 = v53;
        v25 = v58;
      }
      for ( i = v27; ; v27 = i )
      {
LABEL_17:
        if ( v27 )
        {
          if ( v23 )
          {
            v50 = LdrpCheckRedirection(*(_QWORD *)v55, v25, v23);
            if ( v50 != -4530927 )
            {
              v44 = (char *)v50;
              v57 = v50;
              ForwardedDll = 0;
              v46 = v52;
              goto LABEL_52;
            }
          }
        }
        v28 = v25[6];
        v29 = 1;
        v30 = (char *)v28;
        OutHeaders = 0LL;
        v31 = 0LL;
        if ( (v28 & 3) != 0 )
        {
          v30 = (char *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
          v29 = (v28 & 1) == 0;
        }
        v32 = RtlImageNtHeaderEx(1u, v30, 0LL, &OutHeaders);
        if ( OutHeaders )
        {
          Magic = OutHeaders->OptionalHeader.Magic;
          if ( Magic == 267 )
          {
            if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
              goto LABEL_116;
            SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( (_DWORD)SizeOfHeapCommit_low )
            {
              SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
              if ( v29 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
LABEL_26:
                v31 = &v30[SizeOfHeapCommit_low];
                v32 = 0;
                goto LABEL_27;
              }
              v31 = (char *)RtlAddressInSectionTable(OutHeaders, v30, SizeOfHeapCommit_low);
              v32 = 0;
              if ( !v31 )
                v32 = -1073741811;
            }
            else
            {
              v32 = -1073741822;
            }
          }
          else
          {
            if ( Magic != 523 || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
            {
LABEL_116:
              v32 = -1073741811;
              goto LABEL_27;
            }
            SizeOfHeapCommit_low = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
            if ( (_DWORD)SizeOfHeapCommit_low )
            {
              SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
              if ( v29 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
                goto LABEL_26;
              v31 = (char *)RtlAddressInSectionTable(OutHeaders, v30, SizeOfHeapCommit_low);
              v32 = 0;
              if ( !v31 )
                v32 = -1073741811;
            }
            else
            {
              v32 = -1073741822;
            }
          }
        }
LABEL_27:
        if ( v32 < 0 )
          v31 = 0LL;
        if ( !v31 )
          goto LABEL_121;
        if ( v23 )
          break;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          847,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Loading procedure 0x%lx by ordinal\n",
          v24);
        if ( !v24 )
        {
          ForwardedDll = -1073741811;
          goto LABEL_122;
        }
        v43 = v24 - *((_DWORD *)v31 + 4);
LABEL_44:
        if ( v43 >= *((_DWORD *)v31 + 5) )
        {
          ForwardedDll = (v23 != 0LL) - 1073741512;
          goto LABEL_122;
        }
        v44 = (char *)(*(unsigned int *)(v28 + *((unsigned int *)v31 + 7) + 4LL * (int)v43) + v28);
        v56 = v44;
        v57 = (__int64)v44;
        if ( v44 < v31 || v44 >= &v31[SizeOfHeapCommit_high] )
        {
          ForwardedDll = 0;
          goto LABEL_47;
        }
        v49 = v61++;
        if ( v49 >= 0x20 )
        {
          ForwardedDll = -1073741701;
          goto LABEL_47;
        }
        ForwardedDll = LdrpParseForwarderDescription(v44, v77, &v63, &v53);
        v46 = v52;
        if ( ForwardedDll < 0 )
          goto LABEL_48;
        v79 = *((_DWORD *)v58 + 68);
        ForwardedDll = LdrpLoadForwardedDll((__int64)v77, (int)Path, (__int64)v52, v58, 2, (__int64)&v58);
        if ( ForwardedDll < 0 )
          goto LABEL_48;
        v25 = v58;
        LdrpDereferenceModule((char *)v58);
        v23 = v63;
        v24 = v53;
      }
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        829,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        v23);
      v35 = 0;
      v36 = *((_DWORD *)v31 + 6) - 1;
      v37 = v36 / 2;
      if ( v36 >= 0 )
      {
        while ( 1 )
        {
          v38 = v23;
          v39 = v28 + *(unsigned int *)(v28 + *((unsigned int *)v31 + 8) + 4LL * v37) - (_QWORD)v23;
          while ( 1 )
          {
            v40 = *v38;
            if ( *v38 != v38[v39] )
              break;
            ++v38;
            if ( !v40 )
            {
              v41 = 0;
              goto LABEL_36;
            }
          }
          v41 = v40 < (unsigned int)v38[v39] ? -1 : 1;
LABEL_36:
          if ( !v41 )
            break;
          v42 = v37 - 1;
          if ( v41 >= 0 )
            v42 = v36;
          v36 = v42;
          if ( v41 >= 0 )
            v35 = v37 + 1;
          v37 = (v35 + v42) / 2;
          if ( v42 < v35 )
            goto LABEL_117;
        }
        v43 = *(unsigned __int16 *)(v28 + *((unsigned int *)v31 + 9) + 2LL * v37);
        goto LABEL_44;
      }
LABEL_117:
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2192,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v23,
        (const void *)v28);
LABEL_121:
      ForwardedDll = -1073741702;
LABEL_122:
      v44 = v56;
LABEL_47:
      v46 = v52;
LABEL_48:
      if ( v81 )
        RtlReleasePath(Path[0]);
      if ( ForwardedDll < 0 )
      {
        v44 = 0LL;
        v57 = 0LL;
      }
LABEL_52:
      if ( ForwardedDll >= 0 )
      {
        if ( AvrfpAPILookupCallbacksEnabled )
        {
          AVrfCallAPILookupCallback(*(_QWORD *)(*(_QWORD *)v55 + 48LL), *v73, (_DWORD)v44, 1, (__int64)&v57);
          v44 = (char *)v57;
        }
        if ( v69 )
        {
          v70 = 0LL;
          v69(&v70, v46, v44, *(_QWORD *)(*(_QWORD *)v55 + 48LL), 0LL);
          if ( v70 )
            v44 = v70;
        }
      }
      *v74 = v44;
      v19 = v62;
      LODWORD(v16) = v71;
      Heap = v65;
      v20 = v67;
      v12 = v52;
      v14 = *(_QWORD *)v55;
      if ( v62 != (_DWORD)v71 )
      {
        v15 = (_QWORD *)v66;
        goto LABEL_58;
      }
      Status = ForwardedDll;
      v54 = ForwardedDll;
      v59 = *(_QWORD *)&v65[8 * (unsigned int)v71];
      v15 = (_QWORD *)v66;
LABEL_59:
      v62 = ++v19;
      v67 = ++v20;
      v13 = *(_QWORD *)v64;
      if ( v19 >= (unsigned int)v17 )
      {
LABEL_60:
        if ( Status < 0 )
        {
          v59 = LdrpRedirectDelayloadFailure(v55[0], (int)v12, v64[0], v76[0], v75, v72, Status);
          if ( v59 )
          {
            if ( (unsigned int)(v54 + 1073741512) <= 1 || v54 == -1073741702 || v54 == -1073740671 )
              *(_QWORD *)&Heap[8 * (unsigned int)v16] = v59;
          }
        }
        LdrpWriteBackProtectedDelayLoad(v55[0], (_DWORD)v15, (_DWORD)Heap, v17, v16);
        if ( BaseAddress != Heap )
          RtlFreeHeap(LdrpHeap, 0, Heap);
        LdrpDereferenceModule((char *)v12);
        return v59;
      }
    }
  }
  v59 = LdrpRedirectDelayloadFailure(a1, 0, a2, v7, a4, a5, DelayloadExportDll);
  if ( v59 && (v11 == -1073740671 || v11 == -1073741515) )
    LdrpWriteBackProtectedDelayLoad(a1, a5, (unsigned int)&v59, 1, 0);
  return v59;
}
