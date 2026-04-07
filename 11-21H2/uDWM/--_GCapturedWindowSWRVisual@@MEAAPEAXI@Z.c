/*
 * XREFs of ??_GCapturedWindowSWRVisual@@MEAAPEAXI@Z @ 0x1800CBA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CapturedWindowSWRVisual@@MEAA@XZ @ 0x1800CB818 (--1CapturedWindowSWRVisual@@MEAA@XZ.c)
 */

CapturedWindowSWRVisual *__fastcall CapturedWindowSWRVisual::`scalar deleting destructor'(
        CapturedWindowSWRVisual *this,
        char a2)
{
  CapturedWindowSWRVisual::~CapturedWindowSWRVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CapturedWindowSWRVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
