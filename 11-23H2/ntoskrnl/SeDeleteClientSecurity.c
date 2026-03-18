/*
 * XREFs of SeDeleteClientSecurity @ 0x14071D180
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140714B3C (AlpcpQuerySidMessage.c)
 *     AlpcpDeletePort @ 0x140718710 (AlpcpDeletePort.c)
 *     AlpcSecurityDestroyProcedure @ 0x14071C950 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpImpersonateMessage @ 0x14071CE00 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C230 (AlpcpExposeTokenAttribute.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     NtImpersonateThread @ 0x1407F5C80 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1409789B4 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
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
