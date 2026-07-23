/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x14055A598
 * Callers:
 *     IoCaptureLiveDump @ 0x14094BBE8 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x14041D6D0 (ZwOpenPartition.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055BA58 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  __int64 v8; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+98h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+B8h] [rbp+17h]
  int v13; // [rsp+C0h] [rbp+1Fh]
  int v14; // [rsp+C4h] [rbp+23h]
  bool *v15; // [rsp+C8h] [rbp+27h]
  int v16; // [rsp+D0h] [rbp+2Fh]
  int v17; // [rsp+D4h] [rbp+33h]
  PVOID *p_Object; // [rsp+D8h] [rbp+37h]
  int v19; // [rsp+E0h] [rbp+3Fh]
  int v20; // [rsp+E4h] [rbp+43h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenPartition((PHANDLE)(a1 + 1096), 2u, &ObjectAttributes);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1096),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1104) = Object,
        v2 < 0) )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
    IopLiveDumpTraceOpenVMMemoryPartitionFailure((unsigned int)v2);
    if ( (unsigned int)dword_140C03870 > 5 && tlgKeywordOn((__int64)&dword_140C03870, 0x200000000000LL) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &v8;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      v8 = 0x1000000LL;
      v6 = v4;
      v15 = &v6;
      p_Object = &Object;
      v13 = 8;
      v16 = 1;
      LODWORD(Object) = v2;
      v19 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03870,
        (unsigned __int8 *)byte_14002BD58,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v11);
    }
  }
  return (unsigned int)v2;
}
