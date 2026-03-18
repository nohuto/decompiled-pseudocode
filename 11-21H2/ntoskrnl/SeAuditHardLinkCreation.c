/*
 * XREFs of SeAuditHardLinkCreation @ 0x1409C76E0
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C7700 (SeAuditHardLinkCreationWithTransaction.c)
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
