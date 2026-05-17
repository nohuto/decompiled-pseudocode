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
        _QWORD *a5,
        unsigned int a6)
{
  int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r12
  int DelayloadExportDll; // eax
  int v12; // ebx
  __int64 v13; // r14
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rdi
  _BYTE *Heap; // rsi
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r13
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rbx
  char v25; // cl
  unsigned __int64 v26; // r14
  bool v27; // bl
  unsigned __int64 v28; // rdi
  _DWORD *v29; // r15
  int v30; // eax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int16 v34; // ax
  __int64 v35; // rax
  int v36; // r10d
  int v37; // r11d
  const char *v38; // rcx
  unsigned __int8 v39; // al
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // esi
  int ForwardedDll; // ebx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r9
  unsigned int v48; // eax
  __int64 v49; // rax
  char v50; // [rsp+40h] [rbp-598h]
  __int64 v51; // [rsp+48h] [rbp-590h] BYREF
  int v52; // [rsp+50h] [rbp-588h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-580h]
  unsigned __int64 v54; // [rsp+60h] [rbp-578h] BYREF
  int v55; // [rsp+68h] [rbp-570h]
  __int64 v56; // [rsp+70h] [rbp-568h] BYREF
  __int64 v57; // [rsp+78h] [rbp-560h] BYREF
  unsigned int v58; // [rsp+80h] [rbp-558h]
  unsigned int v59; // [rsp+84h] [rbp-554h]
  unsigned int v60; // [rsp+88h] [rbp-550h]
  const char *v61; // [rsp+90h] [rbp-548h] BYREF
  _BYTE *v62; // [rsp+98h] [rbp-540h]
  __int64 v63; // [rsp+A0h] [rbp-538h]
  __int64 v64; // [rsp+A8h] [rbp-530h]
  __int64 v65; // [rsp+B0h] [rbp-528h] BYREF
  void (__fastcall *v66)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, _QWORD); // [rsp+B8h] [rbp-520h]
  unsigned __int64 v67; // [rsp+C0h] [rbp-518h] BYREF
  unsigned __int64 v68; // [rsp+C8h] [rbp-510h]
  __int64 v69; // [rsp+D0h] [rbp-508h]
  __int64 v70; // [rsp+D8h] [rbp-500h]
  _QWORD *v71; // [rsp+E0h] [rbp-4F8h]
  _QWORD *v72; // [rsp+E8h] [rbp-4F0h]
  unsigned __int64 *v73; // [rsp+F0h] [rbp-4E8h]
  __int64 v74; // [rsp+F8h] [rbp-4E0h]
  __int64 v75; // [rsp+100h] [rbp-4D8h]
  _BYTE v76[24]; // [rsp+108h] [rbp-4D0h] BYREF
  __int64 v77[16]; // [rsp+120h] [rbp-4B8h] BYREF
  _BYTE v78[1024]; // [rsp+1A0h] [rbp-438h] BYREF

  v74 = a4;
  v7 = a3;
  v75 = a3;
  v8 = a2;
  v69 = a2;
  v9 = a1;
  v63 = a1;
  v71 = a5;
  LODWORD(v10) = 0;
  v57 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v51, a6, (__int64)a5);
  v12 = DelayloadExportDll;
  v55 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v13 = v51;
    v72 = (_QWORD *)(v51 + 48);
    RtlGuardCheckImageBase(*(_QWORD *)(v51 + 48), 0LL);
    v14 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v64 = (__int64)v14;
    v15 = a5 - v14;
    v68 = v15;
    if ( *v14 )
    {
      do
        v10 = (unsigned int)(v10 + 1);
      while ( v14[v10] );
    }
    if ( (unsigned int)v10 > 0x80 )
    {
      Heap = (_BYTE *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v10);
      v62 = Heap;
      if ( !Heap )
      {
        Heap = v78;
        v62 = v78;
        v14 = v71;
        v64 = (__int64)v71;
        LODWORD(v10) = v10 - v15;
        if ( (unsigned int)v10 > 0x80 )
          LODWORD(v10) = 128;
        LODWORD(v15) = 0;
        v68 = 0LL;
      }
    }
    else
    {
      Heap = v78;
      v62 = v78;
    }
    if ( g_ShimsEnabled )
      v66 = (void (__fastcall *)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, _QWORD))(__ROR8__(
                                                                                                   g_pfnSE_GetProcAddressForCaller,
                                                                                                   64
                                                                                                 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v66 = 0LL;
    v17 = 0;
    v60 = 0;
    if ( !(_DWORD)v10 )
      goto LABEL_57;
    v18 = 0LL;
    v70 = 0LL;
    while ( 1 )
    {
      v73 = (unsigned __int64 *)&Heap[8 * v18];
      *v73 = 0LL;
      if ( v17 != (_DWORD)v15 && v14[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        goto LABEL_56;
      v53 = 0LL;
      v54 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v14 + 8LL * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
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
      v61 = v21;
      v52 = v22;
      v23 = v13;
      v56 = v13;
      v59 = 0;
      v24 = *(_QWORD *)(v13 + 80);
      memset(v77, 0, sizeof(v77));
      v77[4] = v24;
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
            v50 = v25;
            v53 = v54;
            v21 = v61;
            v22 = v52;
            v23 = v56;
            v13 = v51;
            goto LABEL_17;
          }
          v25 = 1;
        }
        v53 = v54;
        v21 = v61;
        v22 = v52;
        v23 = v56;
        v13 = v51;
      }
      v50 = v25;
      while ( 1 )
      {
LABEL_17:
        if ( v25 )
        {
          if ( v21 )
          {
            v49 = LdrpCheckRedirection(v9, v23, v21);
            if ( v49 != -4530927 )
            {
              v15 = v49;
              v54 = v49;
              ForwardedDll = 0;
              goto LABEL_50;
            }
          }
        }
        v26 = *(_QWORD *)(v23 + 48);
        v27 = 1;
        v28 = v26;
        v65 = 0LL;
        v29 = 0LL;
        if ( (v26 & 3) != 0 )
        {
          v28 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
          v27 = (v26 & 1) == 0;
        }
        v30 = RtlImageNtHeaderEx(1LL, v28, 0LL, &v65);
        if ( v65 )
        {
          v34 = *(_WORD *)(v65 + 24);
          v31 = 267LL;
          if ( v34 == 267 )
          {
            if ( !*(_DWORD *)(v65 + 116) )
              goto LABEL_106;
            v35 = *(unsigned int *)(v65 + 120);
            if ( !(_DWORD)v35 )
              goto LABEL_106;
            v31 = *(unsigned int *)(v65 + 124);
            v58 = *(_DWORD *)(v65 + 124);
            if ( v27 || (unsigned int)v35 < *(_DWORD *)(v65 + 84) )
            {
LABEL_26:
              v29 = (_DWORD *)(v28 + v35);
              goto LABEL_27;
            }
          }
          else
          {
            v31 = 523LL;
            if ( v34 != 523 )
              goto LABEL_106;
            if ( !*(_DWORD *)(v65 + 132) )
              goto LABEL_106;
            v35 = *(unsigned int *)(v65 + 136);
            if ( !(_DWORD)v35 )
              goto LABEL_106;
            v31 = *(unsigned int *)(v65 + 140);
            v58 = *(_DWORD *)(v65 + 140);
            if ( v27 || (unsigned int)v35 < *(_DWORD *)(v65 + 84) )
              goto LABEL_26;
          }
          v29 = (_DWORD *)RtlAddressInSectionTable();
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
          v36 = 0;
          v37 = v29[6] - 1;
          v33 = (unsigned int)(v37 / 2);
          if ( v37 < 0 )
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
            ForwardedDll = -1073741702;
LABEL_107:
            v15 = v53;
            goto LABEL_45;
          }
          while ( 1 )
          {
            v32 = (int)v33;
            v38 = v21;
            v31 = v26 + *(unsigned int *)(v26 + (unsigned int)v29[8] + 4LL * (int)v33) - (_QWORD)v21;
            while ( 1 )
            {
              v39 = *v38;
              if ( *v38 != v38[v31] )
                break;
              ++v38;
              if ( !v39 )
              {
                v40 = 0;
                goto LABEL_34;
              }
            }
            v40 = v39 < (unsigned int)v38[v31] ? -1 : 1;
LABEL_34:
            if ( !v40 )
              break;
            v41 = v33 - 1;
            if ( v40 >= 0 )
              v41 = v37;
            v37 = v41;
            if ( v40 >= 0 )
              v36 = v33 + 1;
            v33 = (unsigned int)((v36 + v41) / 2);
            if ( v41 < v36 )
              goto LABEL_110;
          }
          v42 = *(unsigned __int16 *)(v26 + (unsigned int)v29[9] + 2LL * (int)v33);
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
            ForwardedDll = -1073741811;
            goto LABEL_107;
          }
          v42 = v22 - v29[4];
        }
        if ( v42 >= v29[5] )
        {
          ForwardedDll = (v21 != 0LL) - 1073741512;
          goto LABEL_107;
        }
        v15 = v26 + *(unsigned int *)(v26 + (unsigned int)v29[7] + 4LL * (int)v42);
        v53 = v15;
        v54 = v15;
        if ( v15 < (unsigned __int64)v29 || v15 >= (unsigned __int64)v29 + v58 )
        {
          ForwardedDll = 0;
          goto LABEL_45;
        }
        v48 = v59++;
        if ( v48 >= 0x20 )
          break;
        ForwardedDll = LdrpParseForwarderDescription(v15, v76, &v61, &v52);
        v13 = v51;
        if ( ForwardedDll < 0 )
          goto LABEL_46;
        LODWORD(v77[3]) = *(_DWORD *)(v56 + 272);
        ForwardedDll = LdrpLoadForwardedDll((unsigned int)v76, (unsigned int)v77, v51, v56, 2, (__int64)&v56);
        if ( ForwardedDll < 0 )
          goto LABEL_46;
        v23 = v56;
        LdrpDereferenceModule(v56, v31, v32, v33);
        v21 = v61;
        v22 = v52;
        v25 = v50;
        v9 = v63;
      }
      ForwardedDll = -1073741701;
LABEL_45:
      v13 = v51;
LABEL_46:
      if ( BYTE4(v77[15]) )
        RtlReleasePath(v77[0], v31, v32, v33);
      if ( ForwardedDll < 0 )
      {
        v15 = 0LL;
        v54 = 0LL;
        goto LABEL_53;
      }
      v9 = v63;
LABEL_50:
      if ( AvrfpAPILookupCallbacksEnabled )
      {
        AVrfCallAPILookupCallback(*(_QWORD *)(v9 + 48), *v72, v15, 1, (__int64)&v54);
        v15 = v54;
      }
      if ( v66 )
      {
        v67 = 0LL;
        v66(&v67, v13, v15, *(_QWORD *)(v9 + 48), 0LL);
        if ( v67 )
          v15 = v67;
      }
LABEL_53:
      *v73 = v15;
      v17 = v60;
      LODWORD(v15) = v68;
      Heap = v62;
      v9 = v63;
      v8 = v69;
      if ( v60 == (_DWORD)v68 )
      {
        v55 = ForwardedDll;
        v57 = *(_QWORD *)&v62[8 * (unsigned int)v68];
      }
      v14 = (_QWORD *)v64;
LABEL_56:
      v60 = ++v17;
      v18 = ++v70;
      if ( v17 >= (unsigned int)v10 )
      {
LABEL_57:
        if ( v55 < 0 )
        {
          v57 = LdrpRedirectDelayloadFailure(v9, v13, v8, v75, v74, (__int64)v71, v55);
          if ( v57 )
          {
            if ( (unsigned int)(v55 + 1073741512) <= 1 || v55 == -1073741702 || v55 == -1073740671 )
              *(_QWORD *)&Heap[8 * (unsigned int)v15] = v57;
          }
        }
        LdrpWriteBackProtectedDelayLoad(v9, (unsigned __int64)v14, (unsigned __int64)Heap, (unsigned int)v10, v15);
        if ( v78 != Heap )
          RtlFreeHeap(LdrpHeap, 0, (__int64)Heap);
        LdrpDereferenceModule(v13, v44, v45, v46);
        return v57;
      }
    }
  }
  v57 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, (__int64)a5, DelayloadExportDll);
  if ( v57 && (v12 == -1073741515 || v12 == -1073740671) )
    LdrpWriteBackProtectedDelayLoad(v9, (unsigned __int64)a5, (unsigned __int64)&v57, 1uLL, 0);
  return v57;
}
