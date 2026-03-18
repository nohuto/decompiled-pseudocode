/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x1801F1490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800459DC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
}
