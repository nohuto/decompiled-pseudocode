/*
 * XREFs of MiCreatePartitionNamespace @ 0x14081E5D4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14081E318 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x14041BC00 (ZwCreateDirectoryObjectEx.c)
 *     ObCreateKernelObjectsSD @ 0x14081E1C8 (ObCreateKernelObjectsSD.c)
 *     ObCleanupSecurityDescriptor @ 0x1408643C0 (ObCleanupSecurityDescriptor.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  NTSTATUS KernelObjectsSD; // ebx
  void *v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 256), 0xF000Fu, &ObjectAttributes, 0LL, 2u);
  if ( KernelObjectsSD >= 0 )
  {
    KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( KernelObjectsSD >= 0 )
    {
      v3 = *(void **)(a1 + 256);
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = v3;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&MiKernelObjectsDirectoryName;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 576;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 264), 0xF000Fu, &ObjectAttributes, 0LL, 0);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
