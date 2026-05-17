/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180041F80
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180041A78 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AE0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x18003AC48 (LdrpGetFromMUIMemCache.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     LdrMapAndVerifyResourceFile @ 0x180050748 (LdrMapAndVerifyResourceFile.c)
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 *     LdrpGetDataModulePath @ 0x1800676F0 (LdrpGetDataModulePath.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x180080AE8 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008B128 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800939E0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180099AE0 (wcsrchr.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DBE7C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EC19C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, __int16 a2, __int64 *a3, _QWORD *a4, int a5)
{
  const wchar_t *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rsi
  _BYTE *v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // r8
  int v13; // r15d
  int v14; // r12d
  int DataModulePath; // eax
  int ModuleInfoFromVirtualMemory; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 Heap; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // al
  const wchar_t *v24; // rdx
  int v25; // r15d
  int v26; // edi
  int v27; // r8d
  __int64 v28; // rax
  WCHAR *i; // rcx
  WCHAR *v30; // rdx
  __int64 v31; // rdx
  _DWORD *RcConfig; // rax
  _DWORD *v33; // rdi
  __int64 v34; // rax
  int v35; // esi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // r9d
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rcx
  char v43[4]; // [rsp+50h] [rbp-AA8h] BYREF
  int OverlayFilePathUsingChecksum; // [rsp+54h] [rbp-AA4h]
  char v45; // [rsp+58h] [rbp-AA0h]
  char v46; // [rsp+59h] [rbp-A9Fh]
  unsigned __int16 v47; // [rsp+5Ah] [rbp-A9Eh]
  __int64 v48; // [rsp+60h] [rbp-A98h] BYREF
  _WORD *v49; // [rsp+68h] [rbp-A90h]
  __int64 v50; // [rsp+70h] [rbp-A88h]
  unsigned int v51; // [rsp+78h] [rbp-A80h] BYREF
  __int64 v52; // [rsp+80h] [rbp-A78h] BYREF
  int v53; // [rsp+88h] [rbp-A70h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-A6Ch] BYREF
  int v55; // [rsp+90h] [rbp-A68h]
  __int64 v56; // [rsp+98h] [rbp-A60h] BYREF
  __int16 v57; // [rsp+A0h] [rbp-A58h] BYREF
  __int16 v58; // [rsp+A2h] [rbp-A56h]
  int v59; // [rsp+A4h] [rbp-A54h]
  char *v60; // [rsp+A8h] [rbp-A50h]
  __int64 v61; // [rsp+B0h] [rbp-A48h] BYREF
  char *v62; // [rsp+B8h] [rbp-A40h]
  HANDLE v63; // [rsp+C0h] [rbp-A38h] BYREF
  wchar_t *v64; // [rsp+C8h] [rbp-A30h] BYREF
  wchar_t *v65; // [rsp+D0h] [rbp-A28h]
  wchar_t *Str[2]; // [rsp+D8h] [rbp-A20h] BYREF
  __int64 *v67; // [rsp+E8h] [rbp-A10h]
  __int64 v68; // [rsp+F0h] [rbp-A08h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-A00h]
  _BYTE *v70; // [rsp+100h] [rbp-9F8h]
  _QWORD *v71; // [rsp+108h] [rbp-9F0h]
  int v72; // [rsp+110h] [rbp-9E8h] BYREF
  __int64 v73; // [rsp+118h] [rbp-9E0h]
  int v74; // [rsp+120h] [rbp-9D8h] BYREF
  _WORD *v75; // [rsp+128h] [rbp-9D0h]
  __int64 v76; // [rsp+130h] [rbp-9C8h] BYREF
  int v77; // [rsp+138h] [rbp-9C0h]
  __int128 v78; // [rsp+140h] [rbp-9B8h]
  __int128 v79; // [rsp+150h] [rbp-9A8h]
  __int128 v80; // [rsp+160h] [rbp-998h]
  __int64 v81; // [rsp+170h] [rbp-988h]
  WCHAR v82[2]; // [rsp+17Ch] [rbp-97Ch] BYREF
  WCHAR SourceString[352]; // [rsp+180h] [rbp-978h] BYREF
  char v84; // [rsp+440h] [rbp-6B8h] BYREF
  _WORD v85[352]; // [rsp+480h] [rbp-678h] BYREF
  char v86; // [rsp+740h] [rbp-3B8h] BYREF
  _BYTE v87[704]; // [rsp+7F0h] [rbp-308h] BYREF

  v71 = a4;
  v67 = a3;
  v47 = a2;
  v50 = a1;
  v63 = 0LL;
  v53 = 0;
  v7 = 0LL;
  Str[0] = 0LL;
  v51 = 0;
  v8 = 0LL;
  v69 = 0LL;
  v56 = 0LL;
  v68 = 0LL;
  v45 = 0;
  v76 = 72LL;
  v77 = 1;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v43[0] = 0;
  v65 = 0LL;
  v64 = 0LL;
  v46 = 1;
  v9 = 0LL;
  v48 = 0LL;
  v10 = v87;
  v70 = v87;
  v54 = 702;
  v55 = 1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v56, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = a5;
    v14 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v67 = 0LL;
      return 3221946374LL;
    }
LABEL_12:
    v52 = 0LL;
    if ( v14 )
    {
      DataModulePath = -1073741767;
    }
    else
    {
      DataModulePath = LdrpGetDataModulePath(v50, SourceString, v12, &v53, Str, &v51, &v48);
      v7 = Str[0];
      v9 = v48;
    }
    if ( DataModulePath < 0 )
    {
      ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v50, SourceString, 702LL, &v53, &v64, &v51, v43);
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory < 0 )
        goto LABEL_28;
      v7 = v64;
      Str[0] = v64;
    }
    v18 = v53 & 0xFFFFFFFE;
    if ( v18 >= 0x2BE )
      _report_rangecheckfailure();
    *(WCHAR *)((char *)SourceString + v18) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v7) >= 0 )
    {
      v7 = v65;
      Str[0] = v65;
      v19 = -1LL;
      do
        ++v19;
      while ( v65[v19] );
      v51 = 2 * v19;
    }
    v59 = 0;
    v61 = 0LL;
    v62 = 0LL;
    v75 = v85;
    v74 = 46006272;
    v73 = 0LL;
    v72 = 0;
    if ( (unsigned __int64)v51 + 12 <= 0x3C )
    {
      v60 = &v84;
      v58 = 60;
    }
    else
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v51 + 10);
      v8 = Heap;
      v69 = Heap;
      if ( !Heap )
      {
        ModuleInfoFromVirtualMemory = -1073741801;
LABEL_27:
        OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
        goto LABEL_28;
      }
      v60 = (char *)Heap;
      v58 = 2 * (v51 + 5);
      v7 = Str[0];
      v9 = v48;
    }
    v57 = 0;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v57, v7);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_28;
    v24 = L".mun";
    v25 = v13 & 0x1000000;
    if ( !v25 )
      v24 = L".mui";
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v57, v24);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_28;
    if ( v9 )
      RtlActivateActivationContextUnsafeFast((__int64)&v76, v9);
    v26 = LdrpQuerySxSMUIFile(&v57, v47, &v74, &v72, &v68);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v76);
    if ( v26 >= 0 )
    {
      v45 = 1;
      v49 = *(_WORD **)(v68 + 8);
      LODWORD(v48) = *(_DWORD *)v68;
    }
    if ( v45 )
    {
      v55 = 0;
    }
    else
    {
      v49 = v85;
      LODWORD(v48) = 46006272;
      if ( v25 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( SourceString[v28] );
        for ( i = &v82[(unsigned int)v28]; i > SourceString && *i != 92; --i )
          ;
        if ( i <= SourceString )
        {
          ModuleInfoFromVirtualMemory = -1073741686;
          goto LABEL_27;
        }
        i[1] = 0;
        RtlAppendUnicodeToString(&v48, SourceString);
        v30 = L"SystemResources\\";
      }
      else
      {
        v30 = SourceString;
      }
      RtlAppendUnicodeToString(&v48, v30);
      if ( !v25 )
      {
        v62 = &v86;
        WORD1(v61) = 170;
        if ( (int)RtlLcidToLocaleName(v47, &v61, 2LL, 0LL) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          goto LABEL_27;
        }
        RtlAppendUnicodeStringToString(&v48, &v61);
        RtlAppendUnicodeToString(&v48, L"\\");
      }
      RtlAppendUnicodeToString(&v48, v60);
      if ( !v25 )
      {
        RcConfig = LdrpGetRcConfig(v50, v31, 0, 1);
        if ( RcConfig )
        {
          v33 = RcConfig + 7;
          OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(v62, v49, v60, RcConfig + 7, &v54, v87);
          if ( OverlayFilePathUsingChecksum == -1073741789 )
          {
            v34 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v54);
            v10 = (_BYTE *)v34;
            v70 = (_BYTE *)v34;
            if ( v34 )
              OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(v62, v49, v60, v33, &v54, v34);
          }
          if ( OverlayFilePathUsingChecksum >= 0 && (int)RtlInitUnicodeStringEx(Str, v10) >= 0 )
          {
            v35 = a5;
            LOBYTE(v27) = v43[0];
            ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                            v50,
                                            (unsigned int)Str,
                                            v27,
                                            a5,
                                            (__int64)v62,
                                            2,
                                            (__int64)&v63,
                                            (__int64)&v56,
                                            (__int64)&v52);
            OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
            if ( ModuleInfoFromVirtualMemory >= 0 )
            {
              RtlInitUnicodeStringEx(&v48, v10);
              goto LABEL_28;
            }
            if ( ModuleInfoFromVirtualMemory != -1073741772 && ModuleInfoFromVirtualMemory != -1073741766 )
            {
              LOBYTE(v27) = v43[0];
              LdrpLogMapAndVerifyResourceFileFailure(
                ModuleInfoFromVirtualMemory,
                (unsigned int)Str,
                v27,
                a5,
                (__int64)&v61);
            }
            goto LABEL_77;
          }
        }
      }
    }
    v35 = a5;
LABEL_77:
    LOBYTE(v27) = v43[0];
    v36 = LdrMapAndVerifyResourceFile(
            v50,
            (unsigned int)&v48,
            v27,
            v35,
            (__int64)v62,
            v55,
            (__int64)&v63,
            (__int64)&v56,
            (__int64)&v52);
    ModuleInfoFromVirtualMemory = v36;
    OverlayFilePathUsingChecksum = v36;
    if ( !v25
      && (v36 == -1073741772 || v36 == -1073741766)
      && (unsigned __int8)LdrpGetFileDriverStoreRoot(SourceString, v37, v85) )
    {
      v49 = v85;
      v38 = -1LL;
      do
        ++v38;
      while ( v85[v38] );
      LOWORD(v48) = 2 * v38;
      WORD1(v48) = 702;
      RtlAppendUnicodeToString(&v48, L"\\");
      RtlAppendUnicodeStringToString(&v48, &v61);
      RtlAppendUnicodeToString(&v48, L"\\");
      RtlAppendUnicodeToString(&v48, v60);
      v39 = v35;
      LOBYTE(v40) = v43[0];
      v21 = v50;
      ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                      v50,
                                      (unsigned int)&v48,
                                      v40,
                                      v39,
                                      (__int64)v62,
                                      v55,
                                      (__int64)&v63,
                                      (__int64)&v56,
                                      (__int64)&v52);
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      goto LABEL_29;
    }
LABEL_28:
    v21 = v50;
LABEL_29:
    v22 = v52;
    if ( !v52 )
      v22 = -1LL;
    v52 = v22;
    if ( ModuleInfoFromVirtualMemory == -1073741523
      || ModuleInfoFromVirtualMemory == -1073741659
      || ModuleInfoFromVirtualMemory == -1073741801 )
    {
      v23 = 0;
    }
    else
    {
      v23 = v46;
    }
    if ( v23 )
      LdrpSetAlternateResourceModuleHandle(
        v21,
        &v52,
        &v63,
        0LL,
        v47,
        v14 != 0 ? 33 : 1,
        ModuleInfoFromVirtualMemory,
        v56);
    if ( v52 == -1 )
    {
      *v67 = 0LL;
    }
    else
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v41 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v41 = 2147353477LL;
      if ( (*(_BYTE *)v41 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v42 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v42 = 2147353476LL;
        LdrpTraceLoadMUIDll(&v48, *(unsigned __int8 *)v42);
      }
      *v67 = v52;
      if ( v71 )
        *v71 = v56;
      ModuleInfoFromVirtualMemory = 0;
      OverlayFilePathUsingChecksum = 0;
    }
    if ( v64 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v64);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v65 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v65);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v8 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v10 )
    {
      if ( v87 != v10 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
        return (unsigned int)OverlayFilePathUsingChecksum;
      }
    }
    return (unsigned int)ModuleInfoFromVirtualMemory;
  }
  if ( !v11 )
  {
    v13 = a5;
    v14 = a5 & 0x400000;
    goto LABEL_12;
  }
  *a3 = (__int64)v11;
  if ( a4 )
    *a4 = v56;
  OverlayFilePathUsingChecksum = 0;
  return 0LL;
}
