/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x14071C228
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1407193F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B3EC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B7F8 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
