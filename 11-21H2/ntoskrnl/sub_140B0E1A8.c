/*
 * XREFs of sub_140B0E1A8 @ 0x140B0E1A8
 * Callers:
 *     sub_140B0E52C @ 0x140B0E52C (sub_140B0E52C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     IoGetConfigurationInformation @ 0x140811D00 (IoGetConfigurationInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B0E478 @ 0x140B0E478 (sub_140B0E478.c)
 */

__int64 sub_140B0E1A8()
{
  ULONG DiskCount; // esi
  int v1; // eax
  const WCHAR *v2; // rbx
  bool v3; // r12
  ULONG i; // edi
  int v5; // r15d
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h]
  PCWSTR SourceString; // [rsp+30h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID InterfaceClassGuid; // [rsp+58h] [rbp-59h] BYREF
  WCHAR v14[64]; // [rsp+68h] [rbp-49h] BYREF

  DestinationString = 0LL;
  DeviceObject = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  LODWORD(v8) = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  InterfaceClassGuid = (GUID)xmmword_140025768;
  v1 = sub_140B0E478((PZZWSTR *)&SourceString, &InterfaceClassGuid);
  v2 = SourceString;
  v3 = v1 < 0;
  if ( v1 < 0 )
    DiskCount += 20;
  for ( i = 0; i < DiskCount; ++i )
  {
    if ( v2 && *v2 )
    {
      v5 = -1;
      RtlInitUnicodeString(&DestinationString, v2);
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v2 += v6 + 1;
      if ( v3 && !*v2 )
        DiskCount = i + 20;
    }
    else
    {
      v5 = i;
      sub_1402E0198(v14, 64LL, L"\\Device\\Harddisk%d\\Partition0", i, v8);
      RtlInitUnicodeString(&DestinationString, v14);
    }
    if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
    {
      sub_14080F068(DeviceObject, v5);
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return 0LL;
}
