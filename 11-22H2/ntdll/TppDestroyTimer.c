/*
 * XREFs of TppDestroyTimer @ 0x18007AD3C
 * Callers:
 *     TppFreeWait @ 0x18007ACB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18007AD00 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FFC0 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(_QWORD *a1)
{
  __int64 v2; // rdx
  volatile signed __int32 *v3; // r8
  __int64 v4; // r9

  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  return TppCleanupGroupMemberDestroy(a1, v2, v3, v4);
}
