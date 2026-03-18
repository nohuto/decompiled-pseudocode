/*
 * XREFs of PipRecordOpenHandleVeto @ 0x140971C14
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140971C9C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1402AEFD0 (RtlCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302AF0 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x1409640BC (PnpCollectOpenHandles.c)
 */

void __fastcall PipRecordOpenHandleVeto(unsigned int a1, PVOID **a2, struct _DEVICE_OBJECT *a3, __int64 a4, __int64 a5)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v8; // rbx

  *(_DWORD *)a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v8 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 8), (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v8);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(a5 + 8), 0LL);
  }
}
