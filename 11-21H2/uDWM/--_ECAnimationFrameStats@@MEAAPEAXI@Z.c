/*
 * XREFs of ??_ECAnimationFrameStats@@MEAAPEAXI@Z @ 0x180005A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompFrameStats@@MEAA@XZ @ 0x180005A88 (--1CCompFrameStats@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CAnimationFrameStats *__fastcall CAnimationFrameStats::`vector deleting destructor'(
        CAnimationFrameStats *this,
        char a2)
{
  *(_QWORD *)this = &CAnimationFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 17) = &CAnimationFrameStats::`vftable'{for `IAnimationFrameStats'};
  CCompFrameStats::~CCompFrameStats(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationFrameStats *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
