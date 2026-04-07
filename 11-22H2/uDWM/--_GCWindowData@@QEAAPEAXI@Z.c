/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x1800073C8
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x1800069FC (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1801065F4 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180007AB8 (--1CWindowData@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  CWindowData::~CWindowData(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
