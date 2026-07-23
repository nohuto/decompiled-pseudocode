/*
 * XREFs of sub_1409F7CD0 @ 0x1409F7CD0
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 */

void __fastcall sub_1409F7CD0(__int64 a1)
{
  NTSTATUS v1; // eax

  if ( a1 )
  {
    v1 = ExRaiseHardError(a1, 0LL);
    PsTerminateSystemThread(v1);
  }
}
