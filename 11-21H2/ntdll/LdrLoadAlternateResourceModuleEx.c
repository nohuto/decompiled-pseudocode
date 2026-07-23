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
  _DWORD *v11; // rax
  __int64 v12; // r8
  ULONG v13; // r15d
  ULONG v14; // r12d
  int DataModulePath; // eax
  NTSTATUS ModuleInfoFromVirtualMemory; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  wchar_t *Heap; // rax
  PVOID v21; // rsi
  __int64 v22; // rax
  char v23; // al
  const WCHAR *v24; // rdx
  int v25; // r15d
  int v26; // edi
  int v27; // r8d
  __int64 v28; // rax
  WCHAR *i; // rcx
  WCHAR *v30; // rdx
  __int64 v31; // rdx
  WCHAR *v32; // rax
  ULONG v33; // esi
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  ULONG v37; // r9d
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rcx
  char v41; // [rsp+50h] [rbp-AA8h] BYREF
  NTSTATUS OverlayFilePathUsingChecksum; // [rsp+54h] [rbp-AA4h]
  char v43; // [rsp+58h] [rbp-AA0h]
  char v44; // [rsp+59h] [rbp-A9Fh]
  LANGID v45; // [rsp+5Ah] [rbp-A9Eh]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A98h] BYREF
  PVOID BaseOfImage; // [rsp+70h] [rbp-A88h]
  __int64 v48; // [rsp+78h] [rbp-A80h] BYREF
  void *v49; // [rsp+80h] [rbp-A78h] BYREF
  int v50; // [rsp+88h] [rbp-A70h] BYREF
  SIZE_T Size; // [rsp+8Ch] [rbp-A6Ch] BYREF
  ULONG_PTR v52; // [rsp+98h] [rbp-A60h] BYREF
  _UNICODE_STRING Destination; // [rsp+A0h] [rbp-A58h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+B0h] [rbp-A48h] BYREF
  HANDLE v55; // [rsp+C0h] [rbp-A38h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-A30h] BYREF
  PVOID v57; // [rsp+D0h] [rbp-A28h]
  _UNICODE_STRING Str; // [rsp+D8h] [rbp-A20h] BYREF
  PVOID *v59; // [rsp+E8h] [rbp-A10h]
  PUNICODE_STRING v60; // [rsp+F0h] [rbp-A08h] BYREF
  wchar_t *v61; // [rsp+F8h] [rbp-A00h]
  WCHAR *v62; // [rsp+100h] [rbp-9F8h]
  ULONG_PTR *v63; // [rsp+108h] [rbp-9F0h]
  int v64; // [rsp+110h] [rbp-9E8h]
  __int64 v65; // [rsp+118h] [rbp-9E0h]
  int v66; // [rsp+120h] [rbp-9D8h]
  _WORD *v67; // [rsp+128h] [rbp-9D0h]
  __int64 v68; // [rsp+130h] [rbp-9C8h] BYREF
  int v69; // [rsp+138h] [rbp-9C0h]
  __int128 v70; // [rsp+140h] [rbp-9B8h]
  __int128 v71; // [rsp+150h] [rbp-9A8h]
  __int128 v72; // [rsp+160h] [rbp-998h]
  __int64 v73; // [rsp+170h] [rbp-988h]
  WCHAR v74[2]; // [rsp+17Ch] [rbp-97Ch] BYREF
  WCHAR Source[352]; // [rsp+180h] [rbp-978h] BYREF
  char v76; // [rsp+440h] [rbp-6B8h] BYREF
  _WORD v77[352]; // [rsp+480h] [rbp-678h] BYREF
  char v78; // [rsp+740h] [rbp-3B8h] BYREF
  _BYTE v79[704]; // [rsp+7F0h] [rbp-308h] BYREF

  v63 = ResourceOffset;
  v59 = ResourceDllBase;
  v45 = LanguageId;
  BaseOfImage = DllHandle;
  v55 = 0LL;
  v50 = 0;
  v7 = 0LL;
  *(_QWORD *)&Str.Length = 0LL;
  LODWORD(v48) = 0;
  v8 = 0LL;
  v61 = 0LL;
  v52 = 0LL;
  v60 = 0LL;
  v43 = 0;
  v68 = 72LL;
  v69 = 1;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v41 = 0;
  v57 = 0LL;
  BaseAddress = 0LL;
  v44 = 1;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v10 = (WCHAR *)v79;
  v62 = (WCHAR *)v79;
  Size = 0x1000002BELL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v52, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = Flags;
    v14 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v59 = 0LL;
      return -1073020922;
    }
LABEL_12:
    v49 = 0LL;
    if ( v14 )
    {
      DataModulePath = -1073741767;
    }
    else
    {
      DataModulePath = LdrpGetDataModulePath(BaseOfImage, Source, v12, &v50, &Str, &v48, &DestinationString);
      v7 = *(const wchar_t **)&Str.Length;
      v9 = *(_QWORD *)&DestinationString.Length;
    }
    if ( DataModulePath < 0 )
    {
      ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                      BaseOfImage,
                                      Source,
                                      (__int64)&BaseAddress,
                                      (__int64)&v48,
                                      (__int64)&v41);
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory < 0 )
        goto LABEL_28;
      v7 = (const wchar_t *)BaseAddress;
      *(_QWORD *)&Str.Length = BaseAddress;
    }
    v18 = v50 & 0xFFFFFFFE;
    if ( v18 >= 0x2BE )
      _report_rangecheckfailure();
    *(WCHAR *)((char *)Source + v18) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v7) >= 0 )
    {
      v7 = (const wchar_t *)v57;
      *(_QWORD *)&Str.Length = v57;
      v19 = -1LL;
      do
        ++v19;
      while ( *((_WORD *)v57 + v19) );
      LODWORD(v48) = 2 * v19;
    }
    *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
    *(_QWORD *)&LocaleName.Length = 0LL;
    LocaleName.Buffer = 0LL;
    v67 = v77;
    v66 = 46006272;
    v65 = 0LL;
    v64 = 0;
    if ( (unsigned __int64)(unsigned int)v48 + 12 <= 0x3C )
    {
      Destination.Buffer = (wchar_t *)&v76;
      Destination.MaximumLength = 60;
    }
    else
    {
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v48 + 10);
      v8 = Heap;
      v61 = Heap;
      if ( !Heap )
      {
        ModuleInfoFromVirtualMemory = -1073741801;
LABEL_27:
        OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
        goto LABEL_28;
      }
      Destination.Buffer = Heap;
      Destination.MaximumLength = 2 * (v48 + 5);
      v7 = *(const wchar_t **)&Str.Length;
      v9 = *(_QWORD *)&DestinationString.Length;
    }
    Destination.Length = 0;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v7);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_28;
    v24 = L".mun";
    v25 = v13 & 0x1000000;
    if ( !v25 )
      v24 = L".mui";
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v24);
    OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_28;
    if ( v9 )
      RtlActivateActivationContextUnsafeFast((__int64)&v68, v9);
    v26 = LdrpQuerySxSMUIFile(&Destination, &v60);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v68);
    if ( v26 >= 0 )
    {
      v43 = 1;
      DestinationString.Buffer = v60->Buffer;
      DestinationString.Length = v60->Length;
      DestinationString.MaximumLength = v60->MaximumLength;
    }
    if ( v43 )
    {
      HIDWORD(Size) = 0;
    }
    else
    {
      DestinationString.Buffer = v77;
      *(_DWORD *)&DestinationString.Length = 46006272;
      if ( v25 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( Source[v28] );
        for ( i = &v74[(unsigned int)v28]; i > Source && *i != 92; --i )
          ;
        if ( i <= Source )
        {
          ModuleInfoFromVirtualMemory = -1073741686;
          goto LABEL_27;
        }
        i[1] = 0;
        RtlAppendUnicodeToString(&DestinationString, Source);
        v30 = L"SystemResources\\";
      }
      else
      {
        v30 = Source;
      }
      RtlAppendUnicodeToString(&DestinationString, v30);
      if ( !v25 )
      {
        LocaleName.Buffer = (wchar_t *)&v78;
        LocaleName.MaximumLength = 170;
        if ( RtlLcidToLocaleName(v45, &LocaleName, 2u, 0) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          goto LABEL_27;
        }
        RtlAppendUnicodeStringToString(&DestinationString, &LocaleName);
        RtlAppendUnicodeToString(&DestinationString, L"\\");
      }
      RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
      if ( !v25 && LdrpGetRcConfig(BaseOfImage, v31, 0, 1) )
      {
        OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Size, v79);
        if ( OverlayFilePathUsingChecksum == -1073741789 )
        {
          v32 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
          v10 = v32;
          v62 = v32;
          if ( v32 )
            OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Size, v32);
        }
        if ( OverlayFilePathUsingChecksum >= 0 && RtlInitUnicodeStringEx(&Str, v10) >= 0 )
        {
          v33 = Flags;
          LOBYTE(v27) = v41;
          ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                          (_DWORD)BaseOfImage,
                                          (unsigned int)&Str,
                                          v27,
                                          Flags,
                                          (__int64)LocaleName.Buffer,
                                          2,
                                          (__int64)&v55,
                                          (__int64)&v52,
                                          (__int64)&v49);
          OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
          if ( ModuleInfoFromVirtualMemory >= 0 )
          {
            RtlInitUnicodeStringEx(&DestinationString, v10);
            goto LABEL_28;
          }
          if ( ModuleInfoFromVirtualMemory != -1073741772 && ModuleInfoFromVirtualMemory != -1073741766 )
          {
            LOBYTE(v27) = v41;
            LdrpLogMapAndVerifyResourceFileFailure(
              ModuleInfoFromVirtualMemory,
              (unsigned int)&Str,
              v27,
              Flags,
              (__int64)&LocaleName);
          }
          goto LABEL_77;
        }
      }
    }
    v33 = Flags;
LABEL_77:
    LOBYTE(v27) = v41;
    v34 = LdrMapAndVerifyResourceFile(
            (_DWORD)BaseOfImage,
            (unsigned int)&DestinationString,
            v27,
            v33,
            (__int64)LocaleName.Buffer,
            HIDWORD(Size),
            (__int64)&v55,
            (__int64)&v52,
            (__int64)&v49);
    ModuleInfoFromVirtualMemory = v34;
    OverlayFilePathUsingChecksum = v34;
    if ( !v25
      && (v34 == -1073741772 || v34 == -1073741766)
      && (unsigned __int8)LdrpGetFileDriverStoreRoot(Source, v35, v77) )
    {
      DestinationString.Buffer = v77;
      v36 = -1LL;
      do
        ++v36;
      while ( v77[v36] );
      DestinationString.Length = 2 * v36;
      DestinationString.MaximumLength = 702;
      RtlAppendUnicodeToString(&DestinationString, L"\\");
      RtlAppendUnicodeStringToString(&DestinationString, &LocaleName);
      RtlAppendUnicodeToString(&DestinationString, L"\\");
      RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
      v37 = v33;
      LOBYTE(v38) = v41;
      v21 = BaseOfImage;
      ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                      (_DWORD)BaseOfImage,
                                      (unsigned int)&DestinationString,
                                      v38,
                                      v37,
                                      (__int64)LocaleName.Buffer,
                                      HIDWORD(Size),
                                      (__int64)&v55,
                                      (__int64)&v52,
                                      (__int64)&v49);
      OverlayFilePathUsingChecksum = ModuleInfoFromVirtualMemory;
      goto LABEL_29;
    }
LABEL_28:
    v21 = BaseOfImage;
LABEL_29:
    v22 = (__int64)v49;
    if ( !v49 )
      v22 = -1LL;
    v49 = (void *)v22;
    if ( ModuleInfoFromVirtualMemory == -1073741523
      || ModuleInfoFromVirtualMemory == -1073741659
      || ModuleInfoFromVirtualMemory == -1073741801 )
    {
      v23 = 0;
    }
    else
    {
      v23 = v44;
    }
    if ( v23 )
      LdrpSetAlternateResourceModuleHandle(
        (__int64)v21,
        &v49,
        &v55,
        0LL,
        v45,
        v14 != 0 ? 33 : 1,
        ModuleInfoFromVirtualMemory,
        v52);
    if ( v49 == (void *)-1LL )
    {
      *v59 = 0LL;
    }
    else
    {
      if ( RtlGetCurrentServiceSessionId() )
        v39 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v39 = 2147353477LL;
      if ( (*(_BYTE *)v39 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v40 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v40 = 2147353476LL;
        LdrpTraceLoadMUIDll(&DestinationString, *(unsigned __int8 *)v40);
      }
      *v59 = v49;
      if ( v63 )
        *v63 = v52;
      ModuleInfoFromVirtualMemory = 0;
      OverlayFilePathUsingChecksum = 0;
    }
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v57 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v57);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v8 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      ModuleInfoFromVirtualMemory = OverlayFilePathUsingChecksum;
    }
    if ( v10 )
    {
      if ( v79 != (_BYTE *)v10 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        return OverlayFilePathUsingChecksum;
      }
    }
    return ModuleInfoFromVirtualMemory;
  }
  if ( !v11 )
  {
    v13 = Flags;
    v14 = Flags & 0x400000;
    goto LABEL_12;
  }
  *ResourceDllBase = v11;
  if ( ResourceOffset )
    *ResourceOffset = v52;
  OverlayFilePathUsingChecksum = 0;
  return 0;
}
