/*
 * XREFs of sub_1405DE3B0 @ 0x1405DE3B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall sub_1405DE3B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v1 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 16));
  result = *(_QWORD *)(a1 + 8);
  qword_140C1C948 = result;
  return result;
}
