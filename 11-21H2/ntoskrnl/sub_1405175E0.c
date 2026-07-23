/*
 * XREFs of sub_1405175E0 @ 0x1405175E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140517630 @ 0x140517630 (sub_140517630.c)
 */

__int64 __fastcall sub_1405175E0(struct _DMA_ADAPTER *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 128) = a2;
  v5 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 100) &= ~2u;
  *(_QWORD *)(a2 + 136) = v5;
  *(_QWORD *)(a2 + 112) = a5;
  return sub_140517630(a1, 0, a4);
}
