/*
 * XREFs of ??1CText@@EEAA@XZ @ 0x180046F6C
 * Callers:
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180046F10 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180047128 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CText::~CText(CText *this)
{
  *(_QWORD *)this = &CText::`vftable';
  if ( *((_QWORD *)this + 37) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 37) = 0LL;
  }
  CText::ReleaseResources(this);
  CRenderDataVisual::~CRenderDataVisual(this);
}
