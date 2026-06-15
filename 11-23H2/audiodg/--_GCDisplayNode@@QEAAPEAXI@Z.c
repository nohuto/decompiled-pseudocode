/*
 * XREFs of ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140061CA0
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ @ 0x140061C28 (--1-$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x1400628F8 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ABE4 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CDisplayNode *__fastcall CDisplayNode::`scalar deleting destructor'(CDisplayNode *this)
{
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64)this + 56);
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64)this + 8);
  operator delete(this);
  return this;
}
