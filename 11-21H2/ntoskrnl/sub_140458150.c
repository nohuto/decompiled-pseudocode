/*
 * XREFs of sub_140458150 @ 0x140458150
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 */

__int64 __fastcall sub_140458150(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  a2[16] = a2;
  a2[17] = a2[4];
  a2[14] = a5;
  return HalAllocateAdapterChannel(a1, (__int64)(a2 + 10), a3, a4);
}
