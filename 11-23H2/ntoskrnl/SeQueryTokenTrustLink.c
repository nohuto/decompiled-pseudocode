/*
 * XREFs of SeQueryTokenTrustLink @ 0x140297C70
 * Callers:
 *     PsRestoreImpersonation @ 0x14071E530 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
