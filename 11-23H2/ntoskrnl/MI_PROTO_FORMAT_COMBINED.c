/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x14020AE38
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1, __int64 a2)
{
  __int16 v2; // r8

  return !(unsigned int)MiIsPrototypePteVadLookup(a1, a2, a1) && (v2 & 0x800) != 0LL;
}
