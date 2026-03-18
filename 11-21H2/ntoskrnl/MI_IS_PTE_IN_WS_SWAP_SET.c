/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402297E4
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     MiAddToReservationCluster @ 0x14059AAF8 (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 16736) + 204LL);
  return (v2 & 0x10) != 0 || (v2 & 0x20) != 0 && (*(_QWORD *)a2 & 2) != 0;
}
