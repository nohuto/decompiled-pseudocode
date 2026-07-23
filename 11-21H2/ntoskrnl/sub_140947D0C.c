/*
 * XREFs of sub_140947D0C @ 0x140947D0C
 * Callers:
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14036B850 (IoGetDeviceAttachmentBaseRef.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

__int64 __fastcall sub_140947D0C(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v3; // ebx
  PDEVICE_OBJECT v4; // rdx
  _DWORD *DeviceNode; // rcx
  int v6; // eax

  sub_14077572C(1);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v3 = 0;
  v4 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
  {
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (unsigned int)(DeviceNode[75] - 789) > 1 )
    {
      v6 = DeviceNode[176];
      if ( (v6 & 0x8000) != 0 )
        v3 = 255;
      else
        DeviceNode[176] = v6 | 0x8000;
    }
    else
    {
      v3 = -1073741738;
    }
    ObfDereferenceObject(v4);
  }
  else
  {
    v3 = -1073741808;
  }
  sub_140775698(1);
  return v3;
}
