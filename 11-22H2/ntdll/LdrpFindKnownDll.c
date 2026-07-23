/*
 * XREFs of LdrpFindKnownDll @ 0x18002C594
 * Callers:
 *     LdrpLoadKnownDll @ 0x18002D480 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpAllocateUnicodeString @ 0x18002B3D0 (LdrpAllocateUnicodeString.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenSection @ 0x18009F4D0 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int UnicodeString; // ebx
  const WCHAR *v10; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    1654,
    (__int64)"LdrpFindKnownDll",
    3u,
    "DLL name: %wZ\n",
    Source);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_7;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenSection(SectionHandle, 0xDu, &ObjectAttributes);
  UnicodeString = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_5;
LABEL_7:
    UnicodeString = -1073741515;
    goto LABEL_5;
  }
  UnicodeString = LdrpAllocateUnicodeString(
                    (__int64)Destination,
                    Source->Length + (unsigned int)LdrpKnownDllPath.Length + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(Destination, L"\\");
    v10 = (wchar_t *)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v10);
    UnicodeString = 0;
  }
LABEL_5:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    1726,
    (__int64)"LdrpFindKnownDll",
    4u,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
