/*
 * XREFs of sub_1409397B8 @ 0x1409397B8
 * Callers:
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoGetDeviceNumaNode @ 0x1406EAE80 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall sub_1409397B8(__int64 a1, USHORT *a2)
{
  __int64 v2; // rcx
  struct _DEVICE_OBJECT *v4; // rax
  struct _DEVICE_OBJECT *v5; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  NodeNumber = 0;
  v4 = (struct _DEVICE_OBJECT *)sub_1402A4000(v2);
  v5 = v4;
  if ( !v4 )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(v4, &NodeNumber);
  ObfDereferenceObject(v5);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}
