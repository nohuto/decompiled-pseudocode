/*
 * XREFs of ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1C002C8E0
 * Callers:
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01AB120 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01B81F8 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPathVirtualFlagCloneCompatible(unsigned __int8 a1, unsigned __int8 a2)
{
  return ((a2 ^ a1) & 3) == 0;
}
