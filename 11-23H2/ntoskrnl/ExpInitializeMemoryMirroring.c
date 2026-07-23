/*
 * XREFs of ExpInitializeMemoryMirroring @ 0x140B75BDC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B4F454 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x14041C850 (ZwCreatePartition.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExpAddNonMirroredRanges @ 0x140B97DA4 (ExpAddNonMirroredRanges.c)
 */

NTSTATUS ExpInitializeMemoryMirroring()
{
  NTSTATUS result; // eax
  _DWORD *v1; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE PartitionHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  PartitionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  result = KeLoaderBlock_0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreatePartition(0LL, &PartitionHandle, 0x1F0003u, &ObjectAttributes, *(ULONG *)&DestinationString.Length);
    if ( result >= 0 )
    {
      v1 = *(_DWORD **)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL);
      if ( *v1 )
        ExpAddNonMirroredRanges(PartitionHandle);
      if ( v1[1] )
        ExpAddNonMirroredRanges(PartitionHandle);
      result = (int)qword_140C31A60;
      if ( qword_140C31A60 )
        return qword_140C31A60(PartitionHandle);
    }
  }
  return result;
}
