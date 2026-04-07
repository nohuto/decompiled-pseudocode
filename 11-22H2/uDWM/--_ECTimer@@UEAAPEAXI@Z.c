/*
 * XREFs of ??_ECTimer@@UEAAPEAXI@Z @ 0x180003680
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTimer@@UEAA@XZ @ 0x180004C30 (--1CTimer@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CTimer *__fastcall CTimer::`vector deleting destructor'(CTimer *this, char a2)
{
  CTimer::~CTimer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTimer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
