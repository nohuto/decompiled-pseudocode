/*
 * XREFs of LdrpIncludeAlternateForwarders @ 0x1800DD4C8
 * Callers:
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

bool LdrpIncludeAlternateForwarders()
{
  struct _PEB *v0; // rcx

  v0 = NtCurrentPeb();
  return (v0->ProcessParameters->Flags & 0x4000000) != 0 || (v0->NtGlobalFlag2 & 2) != 0;
}
