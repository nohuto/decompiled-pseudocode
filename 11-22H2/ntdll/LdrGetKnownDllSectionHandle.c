/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180086920
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     NtOpenSection @ 0x18009F4D0 (NtOpenSection.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    4728,
    (__int64)"LdrGetKnownDllSectionHandle",
    3u,
    "DLL name: %ws\n",
    DllName);
  if ( KnownDlls32 )
    return -1073741811;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = NtOpenSection(Section, 0xDu, &ObjectAttributes);
    }
  }
  else
  {
    inited = -1073741816;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    4759,
    (__int64)"LdrGetKnownDllSectionHandle",
    4u,
    "Status: 0x%08lx\n",
    inited);
  return inited;
}
