/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00F01BC
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C00334D0 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00027C4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this)
{
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 0LL, 0LL, 0LL);
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 1LL, 0LL, 0LL);
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 2LL, 0LL, 0LL);
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 3LL, 0LL, 0LL);
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 4LL, 0LL, 0LL);
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
    WdLogSingleEntry5(0LL, 270LL, 2LL, 5LL, 0LL, 0LL);
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_PROCESS_HEAP *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
