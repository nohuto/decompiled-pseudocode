/*
 * XREFs of MiLocateCloneAddress @ 0x140294598
 * Callers:
 *     MiGetPfnProtection @ 0x1402160B4 (MiGetPfnProtection.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiProbeLeafPteAccess @ 0x140236C50 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiGetPageProtection @ 0x140272A20 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiTrimThisWsle @ 0x1402E27D8 (MiTrimThisWsle.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiQueryLeafPte @ 0x1403318B0 (MiQueryLeafPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617C30 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x14064D2D4 (MiMakeProtoPrivate.c)
 *     MiClonePteReadonly @ 0x140663224 (MiClonePteReadonly.c)
 *     MiReferenceExistingCloneProto @ 0x1406653AC (MiReferenceExistingCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 1264);
  if ( !result )
    return 0LL;
  do
  {
    if ( a2 <= result[4] )
    {
      if ( a2 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
    else
    {
      result = (_QWORD *)result[1];
    }
  }
  while ( result );
  if ( !result || !result[6] )
    return 0LL;
  return result;
}
