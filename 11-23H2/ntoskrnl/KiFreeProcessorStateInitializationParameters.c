/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x14056BE34
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KiFreeProcessorStacks @ 0x14056BD4C (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x14057093C (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x1407E9B3C (KeUninitThread.c)
 *     MmFreeIndependentPages @ 0x14087FBB0 (MmFreeIndependentPages.c)
 */

signed __int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  signed __int64 result; // rax
  __int64 v4; // rcx

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    KeUninitThread(v1);
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  if ( *(_WORD *)(a1 + 32) || *(_BYTE *)(a1 + 34) )
    KiFreeProcessorNumber();
  result = KiFreeProcessorStacks((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return MmFreeIndependentPages(v4, *(unsigned int *)(a1 + 16));
  return result;
}
