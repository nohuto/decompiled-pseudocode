/*
 * XREFs of ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800E52A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x1800E5244 (--1CTimelineBase@@UEAA@XZ.c)
 */

CTimelineBase *__fastcall CTimelineBase::`vector deleting destructor'(CTimelineBase *this, char a2)
{
  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTimelineBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
