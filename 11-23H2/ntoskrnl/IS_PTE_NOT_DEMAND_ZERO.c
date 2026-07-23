/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026A610 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiAbandonPrivatePfn @ 0x1402ED384 (MiAbandonPrivatePfn.c)
 *     MiPrefetchJumpVad @ 0x140632528 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiGetClusterPage @ 0x14066A544 (MiGetClusterPage.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C65B40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C65B40;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
