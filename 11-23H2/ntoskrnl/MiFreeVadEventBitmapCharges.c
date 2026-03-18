/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1407DFA7C
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406FB5DC (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x140A31F08 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B330 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
