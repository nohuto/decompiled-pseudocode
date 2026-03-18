/*
 * XREFs of MiLocateCloneAddress @ 0x140234F14
 * Callers:
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiGetPfnProtection @ 0x1402E9768 (MiGetPfnProtection.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiTrimThisWsle @ 0x1403735A0 (MiTrimThisWsle.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiReferenceCloneProto @ 0x1405BBB54 (MiReferenceCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 1264); ; result = (_QWORD *)*result )
  {
    while ( 1 )
    {
      if ( !result )
        return 0LL;
      if ( a2 <= result[4] )
        break;
      result = (_QWORD *)result[1];
    }
    if ( a2 >= result[3] )
      break;
  }
  if ( !result[6] )
    return 0LL;
  return result;
}
