/*
 * XREFs of ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C013A2D0
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C009D6C0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     <none>
 */

void Ndis::BindEngine::BeginBindOperation(void)
{
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
}
