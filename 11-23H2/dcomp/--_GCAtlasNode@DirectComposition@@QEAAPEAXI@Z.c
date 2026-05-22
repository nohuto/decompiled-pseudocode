/*
 * XREFs of ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18
 * Callers:
 *     ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0 (-Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z.c)
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 *     ??1CAtlasNode@DirectComposition@@QEAA@XZ @ 0x180027EE8 (--1CAtlasNode@DirectComposition@@QEAA@XZ.c)
 *     ??1CDynamicPool@DirectComposition@@EEAA@XZ @ 0x1800859D4 (--1CDynamicPool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ??1CAtlasNode@DirectComposition@@QEAA@XZ @ 0x180027EE8 (--1CAtlasNode@DirectComposition@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CAtlasNode *__fastcall DirectComposition::CAtlasNode::`scalar deleting destructor'(
        DirectComposition::CAtlasNode *this)
{
  DirectComposition::CAtlasNode::~CAtlasNode(this);
  operator delete(this, 0x50uLL);
  return this;
}
