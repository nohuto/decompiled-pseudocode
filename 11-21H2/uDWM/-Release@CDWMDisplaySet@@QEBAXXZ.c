/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003DC54
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B119C (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x18003DCA4 (--1CDWMDisplaySet@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
    {
      CDWMDisplaySet::~CDWMDisplaySet(this);
      (*(void (__fastcall **)(WPF::HeapBase *, CDWMDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
    }
  }
}
