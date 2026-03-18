/*
 * XREFs of EtwpInitializeProviderTraits @ 0x140864874
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14031D870 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
