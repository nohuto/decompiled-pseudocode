/*
 * XREFs of LdrpIncludeAlternateForwarders @ 0x1800DCD48
 * Callers:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

bool LdrpIncludeAlternateForwarders()
{
  struct _PEB *v0; // rcx

  v0 = NtCurrentPeb();
  return (v0->ProcessParameters->Flags & 0x4000000) != 0 || (v0->NtGlobalFlag2 & 2) != 0;
}
