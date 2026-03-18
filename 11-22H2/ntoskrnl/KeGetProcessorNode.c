/*
 * XREFs of KeGetProcessorNode @ 0x14036E390
 * Callers:
 *     KiInitializeTopologyStructures @ 0x140A8D958 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformationAmd @ 0x140A9F998 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNode(__int64 a1)
{
  return KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
}
