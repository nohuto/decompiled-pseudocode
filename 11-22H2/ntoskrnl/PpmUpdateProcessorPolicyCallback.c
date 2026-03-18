/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x140390670
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x14039069C (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 33968), *(_QWORD *)(a1 + 33976), a2, a3);
  return 0LL;
}
