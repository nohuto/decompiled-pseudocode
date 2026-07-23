/*
 * XREFs of KiGetSubNodeForGroup @ 0x140355900
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x1407C4A84 (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140A88BB0 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 24);
}
