/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D9D60 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A10D0 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A3180 (NtMakeTemporaryObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlImageRvaToVa @ 0x1800F6EE0 (RtlImageRvaToVa.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180102900 (LdrVerifyMappedImageMatchesChecksum.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  ULONG *p_Flags; // r15
  LDR_SECTION_INFO *p_SectionInfo; // rsi
  ULONG AllocationAttributes; // eax
  NTSTATUS result; // eax
  int v8; // edi
  int v9; // r13d
  NTSTATUS v10; // eax
  __int64 v11; // r15
  ULONG v12; // r8d
  char *v13; // rax
  char v14; // [rsp+50h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-98h] BYREF
  LDR_SECTION_INFO *v19; // [rsp+78h] [rbp-90h]
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-88h] BYREF
  PIMAGE_SECTION_HEADER LastRvaSection; // [rsp+88h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK OutHeaders; // [rsp+90h] [rbp-78h] BYREF
  PLDR_VERIFY_IMAGE_INFO v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  POBJECT_ATTRIBUTES *p_ObjA; // [rsp+B0h] [rbp-58h]
  _BYTE FileInformation[8]; // [rsp+B8h] [rbp-50h] BYREF
  ULONG FileLength; // [rsp+C0h] [rbp-48h]

  v23 = VerifyInfo;
  if ( VerifyInfo->Size != 64 )
    return -1073741584;
  p_Flags = &VerifyInfo->Flags;
  LastRvaSection = (PIMAGE_SECTION_HEADER)&VerifyInfo->Flags;
  if ( (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (*(_BYTE *)p_Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_18013A428;
  v19 = p_SectionInfo;
  AllocationAttributes = p_SectionInfo->AllocationAttributes;
  LODWORD(v17) = AllocationAttributes & 0x1000000;
  v18 = AllocationAttributes & 0x1000000;
  v14 = (AllocationAttributes & 0x1000000) != 0;
  OutHeaders.Pointer = (void *)((unsigned __int8)ImageFileHandle & 1);
  p_ObjA = &p_SectionInfo->ObjA;
  result = NtCreateSection(
             &SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v8 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           0x10u);
    if ( v8 < 0 )
      goto LABEL_30;
    if ( LOBYTE(OutHeaders.Status) )
    {
      v9 = v17;
    }
    else
    {
      v8 = NtQueryInformationFile(ImageFileHandle, &OutHeaders, FileInformation, 0x18u, FileStandardInformation);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !LdrVerifyMappedImageMatchesChecksum(BaseAddress, ViewSize, FileLength) )
        v8 = -1073741279;
      v9 = v17;
      if ( v8 < 0 )
        goto LABEL_29;
    }
    if ( (*(_BYTE *)p_Flags & 5) != 0 )
    {
      v8 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, (PIMAGE_NT_HEADERS *)&OutHeaders);
      if ( v8 >= 0 )
      {
        if ( (*(_BYTE *)p_Flags & 4) != 0 )
          VerifyInfo->ImageCharacteristics = *((_WORD *)OutHeaders.Pointer + 11);
        if ( (*(_BYTE *)p_Flags & 1) != 0 && VerifyInfo->CallbackInfo.ImportCallbackRoutine )
        {
          v10 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, v14, 1u, (unsigned int *)&v18, &v17);
          v11 = v17;
          if ( v10 < 0 )
            v11 = 0LL;
          v17 = v11;
          v24 = v11;
          if ( v11 )
          {
            LastRvaSection = 0LL;
            while ( *(_DWORD *)(v11 + 12) )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( v9 )
                v13 = (char *)BaseAddress + v12;
              else
                v13 = (char *)RtlImageRvaToVa((PIMAGE_NT_HEADERS)OutHeaders.Pointer, BaseAddress, v12, &LastRvaSection);
              ((void (__fastcall *)(PVOID, char *))VerifyInfo->CallbackInfo.ImportCallbackRoutine)(
                VerifyInfo->CallbackInfo.ImportCallbackParameter,
                v13);
              v11 += 20LL;
              v24 = v11;
            }
          }
        }
      }
    }
LABEL_29:
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_30:
    if ( v8 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_18013A428 )
    {
      if ( *p_ObjA && ((*p_ObjA)->Attributes & 0x10) != 0 )
        NtMakeTemporaryObject(SectionHandle);
      NtClose(SectionHandle);
    }
    else
    {
      p_SectionInfo->SectionHandle = SectionHandle;
    }
    return v8;
  }
  return result;
}
