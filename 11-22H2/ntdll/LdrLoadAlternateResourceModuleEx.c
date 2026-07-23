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

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v7; // rdi
  wchar_t *v8; // r13
  __int64 v9; // rsi
  WCHAR *v10; // r14
  void *v11; // rax
  __int64 v12; // r8
  ULONG v14; // r15d
  ULONG v15; // r12d
  int DataModulePath; // eax
  unsigned __int64 v17; // rax
  int ModuleInfoFromVirtualMemory; // edi
  const WCHAR *v19; // rdx
  int v20; // r15d
  int v21; // edi
  int v22; // r8d
  WCHAR *v23; // rdx
  __int64 v24; // rdx
  _DWORD *RcConfig; // rax
  __int64 v26; // rdi
  ULONG v27; // esi
  int v28; // eax
  __int64 v29; // rdx
  int v30; // esi
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rcx
  wchar_t *Heap; // rax
  __int64 v35; // rax
  WCHAR *i; // rcx
  __int64 v37; // rax
  WCHAR *v38; // rax
  __int64 v39; // rax
  ULONG v40; // r9d
  int v41; // r8d
  __int64 v42; // rcx
  char v43; // [rsp+50h] [rbp-AA8h] BYREF
  NTSTATUS OverlayFilePathUsingChecksum; // [rsp+54h] [rbp-AA4h]
  char v45; // [rsp+58h] [rbp-AA0h]
  char v46; // [rsp+59h] [rbp-A9Fh]
  LANGID v47; // [rsp+5Ah] [rbp-A9Eh]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A98h] BYREF
  PVOID v49; // [rsp+70h] [rbp-A88h]
  __int64 v50; // [rsp+78h] [rbp-A80h] BYREF
  void *v51; // [rsp+80h] [rbp-A78h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-A70h] BYREF
  SIZE_T Size; // [rsp+8Ch] [rbp-A6Ch] BYREF
  ULONG_PTR v54; // [rsp+98h] [rbp-A60h] BYREF
  _UNICODE_STRING Destination; // [rsp+A0h] [rbp-A58h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+B0h] [rbp-A48h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-A38h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-A30h] BYREF
  PVOID v59; // [rsp+D0h] [rbp-A28h]
  _UNICODE_STRING Str; // [rsp+D8h] [rbp-A20h] BYREF
  PVOID *v61; // [rsp+E8h] [rbp-A10h]
  PUNICODE_STRING v62; // [rsp+F0h] [rbp-A08h] BYREF
  wchar_t *v63; // [rsp+F8h] [rbp-A00h]
  WCHAR *v64; // [rsp+100h] [rbp-9F8h]
  ULONG_PTR *v65; // [rsp+108h] [rbp-9F0h]
  int v66; // [rsp+110h] [rbp-9E8h]
  __int64 v67; // [rsp+118h] [rbp-9E0h]
  int v68; // [rsp+120h] [rbp-9D8h]
  _WORD *v69; // [rsp+128h] [rbp-9D0h]
  __int64 v70; // [rsp+130h] [rbp-9C8h] BYREF
  int v71; // [rsp+138h] [rbp-9C0h]
  __int128 v72; // [rsp+140h] [rbp-9B8h]
  __int128 v73; // [rsp+150h] [rbp-9A8h]
  __int128 v74; // [rsp+160h] [rbp-998h]
  __int64 v75; // [rsp+170h] [rbp-988h]
  WCHAR v76[2]; // [rsp+17Ch] [rbp-97Ch] BYREF
  WCHAR Source[352]; // [rsp+180h] [rbp-978h] BYREF
  char v78; // [rsp+440h] [rbp-6B8h] BYREF
  _WORD v79[352]; // [rsp+480h] [rbp-678h] BYREF
  char v80; // [rsp+740h] [rbp-3B8h] BYREF
  _WORD v81[352]; // [rsp+7F0h] [rbp-308h] BYREF

  v65 = ResourceOffset;
  v61 = ResourceDllBase;
  v47 = LanguageId;
  v49 = DllHandle;
  v57 = 0LL;
  v52 = 0;
  v7 = 0LL;
  *(_QWORD *)&Str.Length = 0LL;
  LODWORD(v50) = 0;
  v8 = 0LL;
  v63 = 0LL;
  v54 = 0LL;
  v62 = 0LL;
  v45 = 0;
  v70 = 72LL;
  v71 = 1;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v43 = 0;
  v59 = 0LL;
  BaseAddress = 0LL;
  v46 = 1;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v10 = v81;
  v64 = v81;
  Size = 0x1000002BELL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = (void *)LdrpGetFromMUIMemCache(DllHandle);
  if ( v11 == (void *)-1LL )
  {
    v14 = Flags;
    v15 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v61 = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( ResourceOffset )
        *ResourceOffset = v54;
      OverlayFilePathUsingChecksum = 0;
      return 0;
    }
    v14 = Flags;
    v15 = Flags & 0x400000;
  }
  v51 = 0LL;
  if ( v15 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v49, Source, v12, &v52, (wchar_t **)&Str, &v50, &DestinationString);
    v7 = *(const wchar_t **)&Str.Length;
    v9 = *(_QWORD *)&DestinationString.Length;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    v49,
                                    Source,
                                    (__int64)&BaseAddress,
                                    (__int64)&v50,
                                    (__int64)&v43);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_43;
    v7 = (const wchar_t *)BaseAddress;
    *(_QWORD *)&Str.Length = BaseAddress;
  }
  v17 = v52 & 0xFFFFFFFE;
  if ( v17 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v17) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v7) >= 0 )
  {
    v7 = (const wchar_t *)v59;
    *(_QWORD *)&Str.Length = v59;
    v37 = -1LL;
    do
      ++v37;
    while ( *((_WORD *)v59 + v37) );
    LODWORD(v50) = 2 * v37;
  }
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  v69 = v79;
  v68 = 46006272;
  v67 = 0LL;
  v66 = 0;
  if ( (unsigned __int64)(unsigned int)v50 + 12 > 0x3C )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v50 + 10);
    v8 = Heap;
    v63 = Heap;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_92:
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      goto LABEL_43;
    }
    Destination.Buffer = Heap;
    Destination.MaximumLength = 2 * (v50 + 5);
    v7 = *(const wchar_t **)&Str.Length;
    v9 = *(_QWORD *)&DestinationString.Length;
  }
  else
  {
    Destination.Buffer = (wchar_t *)&v78;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v7);
  OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_43;
  v19 = L".mun";
  v20 = v14 & 0x1000000;
  if ( !v20 )
    v19 = L".mui";
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v19);
  OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_43;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v70, v9);
  v21 = LdrpQuerySxSMUIFile(&Destination, &v62);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v70);
  if ( v21 >= 0 )
  {
    v45 = 1;
    DestinationString.Buffer = v62->Buffer;
    DestinationString.Length = v62->Length;
    DestinationString.MaximumLength = v62->MaximumLength;
  }
  if ( v45 )
  {
    HIDWORD(Size) = 0;
    goto LABEL_39;
  }
  DestinationString.Buffer = v79;
  *(_DWORD *)&DestinationString.Length = 46006272;
  if ( v20 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( Source[v35] );
    for ( i = &v76[(unsigned int)v35]; i > Source && *i != 92; --i )
      ;
    if ( i <= Source )
    {
      ModuleInfoFromVirtualMemory = -1073741686;
      goto LABEL_92;
    }
    i[1] = 0;
    RtlAppendUnicodeToString(&DestinationString, Source);
    v23 = L"SystemResources\\";
  }
  else
  {
    v23 = Source;
  }
  RtlAppendUnicodeToString(&DestinationString, v23);
  if ( v20 )
    goto LABEL_35;
  LocaleName.Buffer = (wchar_t *)&v80;
  LocaleName.MaximumLength = 170;
  if ( RtlLcidToLocaleName(v47, &LocaleName, 2u, 0) < 0 )
  {
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_92;
  }
  RtlAppendUnicodeStringToString(&DestinationString, &LocaleName);
  RtlAppendUnicodeToString(&DestinationString, L"\\");
LABEL_35:
  RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
  if ( !v20 )
  {
    RcConfig = LdrpGetRcConfig(v49, v24, 0, 1);
    if ( RcConfig )
    {
      v26 = (__int64)(RcConfig + 7);
      OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                       LocaleName.Buffer,
                                       (__int64)DestinationString.Buffer,
                                       (__int64)Destination.Buffer,
                                       (__int64)(RcConfig + 7),
                                       (unsigned int *)&Size,
                                       v81);
      if ( OverlayFilePathUsingChecksum == -1073741789 )
      {
        v38 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
        v10 = v38;
        v64 = v38;
        if ( v38 )
          OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(
                                           LocaleName.Buffer,
                                           (__int64)DestinationString.Buffer,
                                           (__int64)Destination.Buffer,
                                           v26,
                                           (unsigned int *)&Size,
                                           v38);
      }
      if ( OverlayFilePathUsingChecksum >= 0 && RtlInitUnicodeStringEx(&Str, v10) >= 0 )
      {
        v27 = Flags;
        LOBYTE(v22) = v43;
        ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                        (_DWORD)v49,
                                        (unsigned int)&Str,
                                        v22,
                                        Flags,
                                        (__int64)LocaleName.Buffer,
                                        2,
                                        (__int64)&v57,
                                        (__int64)&v54,
                                        (__int64)&v51);
        OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
        if ( ModuleInfoFromVirtualMemory >= 0 )
        {
          RtlInitUnicodeStringEx(&DestinationString, v10);
          goto LABEL_43;
        }
        if ( ModuleInfoFromVirtualMemory != -1073741772 && ModuleInfoFromVirtualMemory != -1073741766 )
        {
          LOBYTE(v22) = v43;
          LdrpLogMapAndVerifyResourceFileFailure(
            ModuleInfoFromVirtualMemory,
            (unsigned int)&Str,
            v22,
            Flags,
            (__int64)&LocaleName);
        }
        goto LABEL_40;
      }
    }
  }
LABEL_39:
  v27 = Flags;
LABEL_40:
  LOBYTE(v22) = v43;
  v28 = LdrMapAndVerifyResourceFile(
          (_DWORD)v49,
          (unsigned int)&DestinationString,
          v22,
          v27,
          (__int64)LocaleName.Buffer,
          HIDWORD(Size),
          (__int64)&v57,
          (__int64)&v54,
          (__int64)&v51);
  ModuleInfoFromVirtualMemory = v28;
  OverlayFilePathUsingChecksum = v28;
  if ( !v20
    && (v28 == -1073741766 || v28 == -1073741772)
    && (unsigned __int8)LdrpGetFileDriverStoreRoot(Source, v29, v79) )
  {
    DestinationString.Buffer = v79;
    v39 = -1LL;
    do
      ++v39;
    while ( v79[v39] );
    DestinationString.Length = 2 * v39;
    DestinationString.MaximumLength = 702;
    RtlAppendUnicodeToString(&DestinationString, L"\\");
    RtlAppendUnicodeStringToString(&DestinationString, &LocaleName);
    RtlAppendUnicodeToString(&DestinationString, L"\\");
    RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
    v40 = v27;
    LOBYTE(v41) = v43;
    v30 = (int)v49;
    ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                    (_DWORD)v49,
                                    (unsigned int)&DestinationString,
                                    v41,
                                    v40,
                                    (__int64)LocaleName.Buffer,
                                    HIDWORD(Size),
                                    (__int64)&v57,
                                    (__int64)&v54,
                                    (__int64)&v51);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    goto LABEL_44;
  }
LABEL_43:
  v30 = (int)v49;
LABEL_44:
  v31 = (__int64)v51;
  if ( !v51 )
    v31 = -1LL;
  v51 = (void *)v31;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v32 = 0;
  }
  else
  {
    v32 = v46;
  }
  if ( v32 )
    LdrpSetAlternateResourceModuleHandle(
      v30,
      (unsigned int)&v51,
      (unsigned int)&v57,
      0,
      v47,
      v15 != 0 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v54);
  if ( v51 == (void *)-1LL )
  {
    *v61 = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v33 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v33 = 2147353477LL;
    if ( (*(_BYTE *)v33 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v42 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v42 = 2147353476LL;
      LdrpTraceLoadMUIDll(&DestinationString, *(unsigned __int8 *)v42);
    }
    *v61 = v51;
    if ( v65 )
      *v65 = v54;
    ModuleInfoFromVirtualMemory = 0;
    OverlayFilePathUsingChecksum = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v59 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
  }
  if ( v10 && v81 != v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return OverlayFilePathUsingChecksum;
  }
  return ModuleInfoFromVirtualMemory;
}
