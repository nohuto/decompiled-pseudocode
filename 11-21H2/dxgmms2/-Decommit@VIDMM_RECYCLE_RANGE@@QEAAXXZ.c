/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007F0F4
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007F02C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C007F4F8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F760 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081380 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rdx
  int v3; // ecx
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = *((int *)this + 16);
  v3 = *((_DWORD *)this + 16) - 1;
  if ( !v3 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v7 - 3) > 3 && (unsigned int)(*(_DWORD *)v7 - 9) > 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v7 + 8), this);
      v6 = 5LL;
    }
    else
    {
      v6 = 0LL;
    }
    goto LABEL_6;
  }
  if ( v3 == 2 )
  {
    v4 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v4, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v5, this);
    v6 = 4LL;
LABEL_6:
    VIDMM_RECYCLE_RANGE::Transition(this, v6);
    return;
  }
  WdLogSingleEntry5(0LL, 270LL, 52LL, 1LL, v1, 0LL);
}
