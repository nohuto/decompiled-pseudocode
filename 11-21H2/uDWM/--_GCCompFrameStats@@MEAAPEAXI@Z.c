/*
 * XREFs of ??_GCCompFrameStats@@MEAAPEAXI@Z @ 0x18010A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompFrameStats@@MEAA@XZ @ 0x180005A88 (--1CCompFrameStats@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CCompFrameStats *__fastcall CCompFrameStats::`scalar deleting destructor'(CCompFrameStats *this, char a2)
{
  CCompFrameStats::~CCompFrameStats(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCompFrameStats *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
