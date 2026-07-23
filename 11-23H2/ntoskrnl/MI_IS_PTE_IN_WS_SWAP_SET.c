/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14034F6B4
 * Callers:
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiAbandonPrivatePfn @ 0x1402ED384 (MiAbandonPrivatePfn.c)
 *     MiWriteCompletePfn @ 0x1402F49E0 (MiWriteCompletePfn.c)
 *     MiAddToReservationCluster @ 0x140637CFC (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 17056) + 204LL);
  result = 1LL;
  if ( (v2 & 0x10) == 0 && ((v2 & 0x20) == 0 || (*(_QWORD *)a2 & 2) == 0) )
    return 0LL;
  return result;
}
