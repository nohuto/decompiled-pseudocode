/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1407C67E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405582E0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
