/*
 * XREFs of sub_140AF33B0 @ 0x140AF33B0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_14081D3C0 @ 0x14081D3C0 (sub_14081D3C0.c)
 *     sub_140AF3434 @ 0x140AF3434 (sub_140AF3434.c)
 */

__int64 sub_140AF33B0()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&stru_140C1F420);
  memset(&byte_140C1F3A0, 0, 0x50uLL);
  dword_140C1F3B8 = -1;
  dword_140C1F390 = 0;
  qword_140C1F378 = 0LL;
  dword_140C1F3BC = 3;
  sub_14081D3C0(0);
  ExSubscribeWnfStateChange((int)&v1, (int)&qword_14000F178, 1, 0, (__int64)sub_14099CB50, 0LL);
  return sub_140AF3434();
}
