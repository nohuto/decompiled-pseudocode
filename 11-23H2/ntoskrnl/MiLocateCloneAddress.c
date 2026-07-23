/*
 * XREFs of MiLocateCloneAddress @ 0x140294828
 * Callers:
 *     MiGetPfnProtection @ 0x1402160B4 (MiGetPfnProtection.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiTrimThisWsle @ 0x1402E2A68 (MiTrimThisWsle.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiQueryLeafPte @ 0x140331B40 (MiQueryLeafPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x14064D824 (MiMakeProtoPrivate.c)
 *     MiClonePteReadonly @ 0x140663774 (MiClonePteReadonly.c)
 *     MiReferenceExistingCloneProto @ 0x1406658FC (MiReferenceExistingCloneProto.c)
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
