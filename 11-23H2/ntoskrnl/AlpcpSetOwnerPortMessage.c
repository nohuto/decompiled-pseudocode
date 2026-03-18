/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x14071BFF4
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x140715748 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x140716058 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B1EC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B5F8 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
