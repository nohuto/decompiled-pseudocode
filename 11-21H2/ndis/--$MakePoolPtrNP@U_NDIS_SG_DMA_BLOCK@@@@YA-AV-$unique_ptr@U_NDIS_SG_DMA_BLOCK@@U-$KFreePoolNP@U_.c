/*
 * XREFs of ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x1C00C7494
 * Callers:
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0134FD0 (ndisRegisterScatterGatherDmaForGenericObject.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

_QWORD *__fastcall MakePoolPtrNP<_NDIS_SG_DMA_BLOCK>(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rcx
  void *v4; // rdi

  Pool2 = (void *)ExAllocatePool2(64LL, 176LL, 1650738254);
  v3 = 0LL;
  v4 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xB0uLL);
    v3 = v4;
  }
  *a1 = v3;
  return a1;
}
