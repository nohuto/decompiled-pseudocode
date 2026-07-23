/*
 * XREFs of sub_1403AF9E8 @ 0x1403AF9E8
 * Callers:
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_1403AF7F0 @ 0x1403AF7F0 (sub_1403AF7F0.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 */

struct _KPRCB *__fastcall sub_1403AF9E8(int a1, unsigned __int8 *a2, _GROUP_AFFINITY *a3)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v4 = qword_140D088C0[a1];
  Affinity.Group = *(unsigned __int8 *)(v4 + 208);
  Affinity.Mask = *(_QWORD *)(v4 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  result = (struct _KPRCB *)(unsigned int)dword_140D06B08;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    result = KeGetCurrentPrcb();
    *(_DWORD *)(*((_QWORD *)result + 4375) + 20LL) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  *a2 = CurrentIrql;
  return result;
}
