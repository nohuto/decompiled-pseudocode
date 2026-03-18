/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x14071C098
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140719264 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B25C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B668 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14077971C (AlpcpCancelMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
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
