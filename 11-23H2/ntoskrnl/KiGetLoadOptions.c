/*
 * XREFs of KiGetLoadOptions @ 0x140B9593C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
