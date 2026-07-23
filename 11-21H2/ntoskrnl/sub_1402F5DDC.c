/*
 * XREFs of sub_1402F5DDC @ 0x1402F5DDC
 * Callers:
 *     sub_1407A69D4 @ 0x1407A69D4 (sub_1407A69D4.c)
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140967C2C @ 0x140967C2C (sub_140967C2C.c)
 */

__int64 __fastcall sub_1402F5DDC(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --*((_WORD *)CurrentThread + 242);
  if ( byte_140D01161 )
    sub_140967C2C(v9);
  return v11;
}
