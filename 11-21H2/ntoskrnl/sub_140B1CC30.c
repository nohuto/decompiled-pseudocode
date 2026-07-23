/*
 * XREFs of sub_140B1CC30 @ 0x140B1CC30
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x14041CEA0 (ZwCreatePartition.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140B5439C @ 0x140B5439C (sub_140B5439C.c)
 */

NTSTATUS sub_140B1CC30()
{
  NTSTATUS result; // eax
  _DWORD *v1; // rbx
  __int64 v2; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE PartitionHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  PartitionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  result = qword_140D068D0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 3752LL) )
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
      v1 = *(_DWORD **)(*(_QWORD *)(qword_140D068D0 + 240) + 3752LL);
      if ( *v1 )
        sub_140B5439C(PartitionHandle);
      v2 = (unsigned int)v1[1];
      if ( (_DWORD)v2 )
        sub_140B5439C(PartitionHandle);
      result = qword_140C15BC0;
      if ( qword_140C15BC0 )
        return sub_14042A5E0(PartitionHandle, v2);
    }
  }
  return result;
}
