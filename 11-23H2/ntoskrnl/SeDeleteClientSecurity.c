/*
 * XREFs of SeDeleteClientSecurity @ 0x14071D380
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140714D4C (AlpcpQuerySidMessage.c)
 *     AlpcpDeletePort @ 0x140718910 (AlpcpDeletePort.c)
 *     AlpcSecurityDestroyProcedure @ 0x14071CB50 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpImpersonateMessage @ 0x14071D000 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C420 (AlpcpExposeTokenAttribute.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     NtImpersonateThread @ 0x1407F5F50 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140978BB4 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeDeleteClientSecurity(__int64 a1)
{
  _DWORD *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1[48] == 1 || v1 )
    return ObfDereferenceObjectWithTag(v1, 0x63436553u);
  return result;
}
