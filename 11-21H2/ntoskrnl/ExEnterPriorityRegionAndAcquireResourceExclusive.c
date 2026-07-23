/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14063D1F0
 * Callers:
 *     sub_1406083A0 @ 0x1406083A0 (sub_1406083A0.c)
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  sub_1402ACD80((__int64)CurrentThread, 0, 0, 0LL);
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return *((_QWORD *)CurrentThread + 57);
}
