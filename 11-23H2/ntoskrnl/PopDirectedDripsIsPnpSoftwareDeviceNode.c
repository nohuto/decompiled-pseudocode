/*
 * XREFs of PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140983B64
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x14098BEE0 (PopIssueDirectedPowerTransition.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x14099FD50 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 */

bool __fastcall PopDirectedDripsIsPnpSoftwareDeviceNode(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *AttachedDeviceReferenceWithTag; // rax
  bool v3; // bl

  v1 = *(_QWORD *)(a1 + 32);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag((_QWORD *)v1, 0x78466F50u);
  v3 = (_QWORD *)v1 == AttachedDeviceReferenceWithTag && *(PDRIVER_OBJECT *)(v1 + 8) == PiSwDeviceDriverObject;
  ObfDereferenceObject(AttachedDeviceReferenceWithTag);
  return v3;
}
