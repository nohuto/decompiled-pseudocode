/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140655234
 * Callers:
 *     MiInsertNewZeroThread @ 0x1403AD11C (MiInsertNewZeroThread.c)
 *     MiZeroNodeExiting @ 0x140655C88 (MiZeroNodeExiting.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x14034E4C4 (MiSignalZeroingPassComplete.c)
 *     MiDereferencePageRunsEx @ 0x140357D84 (MiDereferencePageRunsEx.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14035E88C (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  MiDereferenceAnyActiveHugeContext((__int64)P);
  MiDeleteUltraThreadContext((__int64)(P + 26));
  v2 = P[11];
  if ( v2 )
    MiSignalZeroingPassComplete(v2);
  v3 = P[49];
  if ( v3 )
    MiDereferencePageRunsEx(v3, 1);
  ExFreePoolWithTag(P, 0);
}
