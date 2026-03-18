/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x14020AE58
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiGetPageProtection @ 0x140272900 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14027CDE0 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1, __int64 a2)
{
  __int16 v2; // r8

  return !(unsigned int)MiIsPrototypePteVadLookup(a1, a2, a1) && (v2 & 0x800) != 0LL;
}
