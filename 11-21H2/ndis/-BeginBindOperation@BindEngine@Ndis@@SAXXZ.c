/*
 * XREFs of ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C012E5B4
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C0097680 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     <none>
 */

void Ndis::BindEngine::BeginBindOperation(void)
{
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
}
