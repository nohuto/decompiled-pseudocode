/*
 * XREFs of sub_1C001FDE8 @ 0x1C001FDE8
 * Callers:
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001FDE8(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
