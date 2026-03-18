/*
 * XREFs of ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C008DB14
 * Callers:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002D7E0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00027C4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA5B0 (-UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA5FC (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(_VIDMM_GLOBAL_ALLOC *this)
{
  if ( (*((_DWORD *)this + 18) & 0x2000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost(this);
    UncommitParavirtualizedAllocationOnHost(this);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((_VIDMM_GLOBAL_ALLOC *)((char *)this + 296));
}
