/*
 * XREFs of ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800E2FEC
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800D0228 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A394 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x1800E3040 (-Reset@CBatchOptimizer@@AEAAXXZ.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::CBatchOptimizer(CBatchOptimizer *this, struct CDrawListBatchManager *a2)
{
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  `vector constructor iterator'(
    (char *)this + 80,
    520LL,
    8LL,
    (void (__fastcall *)(char *))SharedStateLayer::SharedStateLayer);
  CBatchOptimizer::Reset(this);
  return this;
}
