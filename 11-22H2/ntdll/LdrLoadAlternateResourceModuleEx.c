/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18001F930
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180084070 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     LdrpGetDataModulePath @ 0x1800083E0 (LdrpGetDataModulePath.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18000B228 (GetOverlayFilePathUsingChecksum.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrMapAndVerifyResourceFile @ 0x18002E9C0 (LdrMapAndVerifyResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpQuerySxSMUIFile @ 0x180075D14 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x18007704C (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180087E1C (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008E930 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180094BB0 (wcsrchr.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DC39C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EB94C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5)
{
  wchar_t *v7; // rdi
  _WORD *v8; // r13
  __int64 v9; // rsi
  _WORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  int v14; // r15d
  int v15; // r12d
  int DataModulePath; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int ModuleInfoFromVirtualMemory; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  wchar_t *v22; // rdx
  int v23; // r15d
  int v24; // edi
  WCHAR *v25; // rdx
  __int64 v26; // rdx
  _DWORD *RcConfig; // rax
  __int64 v28; // rdi
  int v29; // esi
  int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  _WORD *Heap; // rax
  __int64 v40; // rax
  WCHAR *i; // rcx
  __int64 v42; // rax
  _WORD *v43; // rax
  __int64 v44; // rax
  int v45; // r9d
  int v46; // r8d
  __int64 v47; // rcx
  char v48[4]; // [rsp+50h] [rbp-AA8h] BYREF
  int OverlayFilePathUsingChecksum; // [rsp+54h] [rbp-AA4h]
  char v50; // [rsp+58h] [rbp-AA0h]
  char v51; // [rsp+59h] [rbp-A9Fh]
  unsigned __int16 v52; // [rsp+5Ah] [rbp-A9Eh]
  __int64 v53; // [rsp+60h] [rbp-A98h] BYREF
  _WORD *v54; // [rsp+68h] [rbp-A90h]
  __int64 v55; // [rsp+70h] [rbp-A88h]
  unsigned int v56; // [rsp+78h] [rbp-A80h] BYREF
  __int64 v57; // [rsp+80h] [rbp-A78h] BYREF
  unsigned int v58; // [rsp+88h] [rbp-A70h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-A6Ch] BYREF
  int v60; // [rsp+90h] [rbp-A68h]
  __int64 v61; // [rsp+98h] [rbp-A60h] BYREF
  unsigned __int16 v62; // [rsp+A0h] [rbp-A58h] BYREF
  __int16 v63; // [rsp+A2h] [rbp-A56h]
  int v64; // [rsp+A4h] [rbp-A54h]
  char *v65; // [rsp+A8h] [rbp-A50h]
  const void *v66; // [rsp+B0h] [rbp-A48h] BYREF
  char *v67; // [rsp+B8h] [rbp-A40h]
  __int64 v68; // [rsp+C0h] [rbp-A38h] BYREF
  wchar_t *v69; // [rsp+C8h] [rbp-A30h] BYREF
  wchar_t *v70; // [rsp+D0h] [rbp-A28h]
  wchar_t *Str[2]; // [rsp+D8h] [rbp-A20h] BYREF
  __int64 *v72; // [rsp+E8h] [rbp-A10h]
  __int64 v73; // [rsp+F0h] [rbp-A08h] BYREF
  _WORD *v74; // [rsp+F8h] [rbp-A00h]
  _WORD *v75; // [rsp+100h] [rbp-9F8h]
  _QWORD *v76; // [rsp+108h] [rbp-9F0h]
  int v77; // [rsp+110h] [rbp-9E8h] BYREF
  __int64 v78; // [rsp+118h] [rbp-9E0h]
  int v79; // [rsp+120h] [rbp-9D8h] BYREF
  _WORD *v80; // [rsp+128h] [rbp-9D0h]
  __int64 v81; // [rsp+130h] [rbp-9C8h] BYREF
  int v82; // [rsp+138h] [rbp-9C0h]
  __int128 v83; // [rsp+140h] [rbp-9B8h]
  __int128 v84; // [rsp+150h] [rbp-9A8h]
  __int128 v85; // [rsp+160h] [rbp-998h]
  __int64 v86; // [rsp+170h] [rbp-988h]
  WCHAR v87[2]; // [rsp+17Ch] [rbp-97Ch] BYREF
  WCHAR SourceString[352]; // [rsp+180h] [rbp-978h] BYREF
  char v89; // [rsp+440h] [rbp-6B8h] BYREF
  _WORD v90[352]; // [rsp+480h] [rbp-678h] BYREF
  char v91; // [rsp+740h] [rbp-3B8h] BYREF
  _WORD v92[352]; // [rsp+7F0h] [rbp-308h] BYREF

  v76 = a4;
  v72 = a3;
  v52 = a2;
  v55 = a1;
  v68 = 0LL;
  v58 = 0;
  v7 = 0LL;
  Str[0] = 0LL;
  v56 = 0;
  v8 = 0LL;
  v74 = 0LL;
  v61 = 0LL;
  v73 = 0LL;
  v50 = 0;
  v81 = 72LL;
  v82 = 1;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v48[0] = 0;
  v70 = 0LL;
  v69 = 0LL;
  v51 = 1;
  v9 = 0LL;
  v53 = 0LL;
  v10 = v92;
  v75 = v92;
  v59 = 702;
  v60 = 1;
  if ( !a1 || !(_WORD)a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v61, 4LL);
  if ( v11 == -1 )
  {
    v14 = a5;
    v15 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v72 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = v11;
      if ( a4 )
        *a4 = v61;
      OverlayFilePathUsingChecksum = 0;
      return 0LL;
    }
    v14 = a5;
    v15 = a5 & 0x400000;
  }
  v57 = 0LL;
  if ( v15 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v55, SourceString, v12, &v58, Str, &v56, &v53);
    v7 = Str[0];
    v9 = v53;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v55, SourceString, 702LL, &v58, &v69, &v56, v48);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_43;
    v7 = v69;
    Str[0] = v69;
  }
  v17 = v58 & 0xFFFFFFFE;
  if ( v17 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v17) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v7) >= 0 )
  {
    v7 = v70;
    Str[0] = v70;
    v42 = -1LL;
    do
      ++v42;
    while ( v70[v42] );
    v56 = 2 * v42;
  }
  v64 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v80 = v90;
  v79 = 46006272;
  v78 = 0LL;
  v77 = 0;
  if ( (unsigned __int64)v56 + 12 > 0x3C )
  {
    Heap = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v56 + 10);
    v8 = Heap;
    v74 = Heap;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_92:
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      goto LABEL_43;
    }
    v65 = (char *)Heap;
    v63 = 2 * (v56 + 5);
    v7 = Str[0];
    v9 = v53;
  }
  else
  {
    v65 = &v89;
    v63 = 60;
  }
  v62 = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v62, v7);
  OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_43;
  v22 = L".mun";
  v23 = v14 & 0x1000000;
  if ( !v23 )
    v22 = L".mui";
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v62, v22);
  OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_43;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v81, v9);
  v24 = LdrpQuerySxSMUIFile(&v62, v52, &v79, &v77, &v73);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v81);
  if ( v24 >= 0 )
  {
    v50 = 1;
    v54 = *(_WORD **)(v73 + 8);
    LODWORD(v53) = *(_DWORD *)v73;
  }
  if ( v50 )
  {
    v60 = 0;
    goto LABEL_39;
  }
  v54 = v90;
  LODWORD(v53) = 46006272;
  if ( v23 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( SourceString[v40] );
    for ( i = &v87[(unsigned int)v40]; i > SourceString && *i != 92; --i )
      ;
    if ( i <= SourceString )
    {
      ModuleInfoFromVirtualMemory = -1073741686;
      goto LABEL_92;
    }
    i[1] = 0;
    RtlAppendUnicodeToString((unsigned __int16 *)&v53, SourceString);
    v25 = L"SystemResources\\";
  }
  else
  {
    v25 = SourceString;
  }
  RtlAppendUnicodeToString((unsigned __int16 *)&v53, v25);
  if ( v23 )
    goto LABEL_35;
  v67 = &v91;
  WORD1(v66) = 170;
  if ( (int)RtlLcidToLocaleName(v52, (__int64)&v66, 2, 0) < 0 )
  {
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_92;
  }
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v53, &v66);
  RtlAppendUnicodeToString((unsigned __int16 *)&v53, L"\\");
LABEL_35:
  RtlAppendUnicodeToString((unsigned __int16 *)&v53, v65);
  if ( !v23 )
  {
    RcConfig = LdrpGetRcConfig(v55, v26, 0, 1);
    if ( RcConfig )
    {
      v28 = (__int64)(RcConfig + 7);
      OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                       (__int64)v67,
                                       (int)v54,
                                       (__int64)v65,
                                       (__int64)(RcConfig + 7),
                                       &v59,
                                       v92);
      if ( OverlayFilePathUsingChecksum == -1073741789 )
      {
        v43 = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v59);
        v10 = v43;
        v75 = v43;
        if ( v43 )
          OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                           (__int64)v67,
                                           (int)v54,
                                           (__int64)v65,
                                           v28,
                                           &v59,
                                           v43);
      }
      if ( OverlayFilePathUsingChecksum >= 0 && (int)RtlInitUnicodeStringEx((__int64)Str, (__int64)v10) >= 0 )
      {
        v29 = a5;
        LOBYTE(v20) = v48[0];
        ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                        v55,
                                        (unsigned int)Str,
                                        v20,
                                        a5,
                                        (__int64)v67,
                                        2,
                                        (__int64)&v68,
                                        (__int64)&v61,
                                        (__int64)&v57);
        OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
        if ( ModuleInfoFromVirtualMemory >= 0 )
        {
          RtlInitUnicodeStringEx((__int64)&v53, (__int64)v10);
          goto LABEL_43;
        }
        if ( ModuleInfoFromVirtualMemory != -1073741772 && ModuleInfoFromVirtualMemory != -1073741766 )
        {
          LOBYTE(v20) = v48[0];
          LdrpLogMapAndVerifyResourceFileFailure(ModuleInfoFromVirtualMemory, (unsigned int)Str, v20, a5, (__int64)&v66);
        }
        goto LABEL_40;
      }
    }
  }
LABEL_39:
  v29 = a5;
LABEL_40:
  LOBYTE(v20) = v48[0];
  v30 = LdrMapAndVerifyResourceFile(
          v55,
          (unsigned int)&v53,
          v20,
          v29,
          (__int64)v67,
          v60,
          (__int64)&v68,
          (__int64)&v61,
          (__int64)&v57);
  ModuleInfoFromVirtualMemory = v30;
  OverlayFilePathUsingChecksum = v30;
  if ( !v23
    && (v30 == -1073741766 || v30 == -1073741772)
    && (unsigned __int8)LdrpGetFileDriverStoreRoot(SourceString, v18, v90) )
  {
    v54 = v90;
    v44 = -1LL;
    do
      ++v44;
    while ( v90[v44] );
    LOWORD(v53) = 2 * v44;
    WORD1(v53) = 702;
    RtlAppendUnicodeToString((unsigned __int16 *)&v53, L"\\");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v53, &v66);
    RtlAppendUnicodeToString((unsigned __int16 *)&v53, L"\\");
    RtlAppendUnicodeToString((unsigned __int16 *)&v53, v65);
    v45 = v29;
    LOBYTE(v46) = v48[0];
    v31 = v55;
    ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                    v55,
                                    (unsigned int)&v53,
                                    v46,
                                    v45,
                                    (__int64)v67,
                                    v60,
                                    (__int64)&v68,
                                    (__int64)&v61,
                                    (__int64)&v57);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    goto LABEL_44;
  }
LABEL_43:
  v31 = v55;
LABEL_44:
  v32 = v57;
  v33 = -1LL;
  if ( !v57 )
    v32 = -1LL;
  v57 = v32;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v34 = 0;
  }
  else
  {
    v34 = v51;
  }
  if ( v34 )
    LdrpSetAlternateResourceModuleHandle(
      v31,
      (unsigned int)&v57,
      (unsigned int)&v68,
      0,
      v52,
      v15 != 0 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v61);
  if ( v57 == -1 )
  {
    *v72 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v33, v18, v20, v21) )
      v38 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v38 = 2147353477LL;
    if ( (*(_BYTE *)v38 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v38, v35, v36, v37) )
        v47 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v47 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v53, *(unsigned __int8 *)v47);
    }
    *v72 = v57;
    if ( v76 )
      *v76 = v61;
    ModuleInfoFromVirtualMemory = 0;
    OverlayFilePathUsingChecksum = 0;
  }
  if ( v69 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v69);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v70 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v70);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v10 && v92 != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
    return (unsigned int)OverlayFilePathUsingChecksum;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
