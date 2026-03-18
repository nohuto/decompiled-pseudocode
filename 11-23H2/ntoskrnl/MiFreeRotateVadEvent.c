/*
 * XREFs of MiFreeRotateVadEvent @ 0x140A312C0
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406FB5DC (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x140A312F8 (MiFreeRotateView.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B330 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD2FC (MiFreeInPageSupportBlock.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
