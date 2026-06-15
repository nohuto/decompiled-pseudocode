/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180120090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ??1SessionDisconnectedContext@@QEAA@XZ @ 0x18011FD8C (--1SessionDisconnectedContext@@QEAA@XZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18011FE30 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(
        PTP_CALLBACK_INSTANCE Instance,
        SessionDisconnectedContext *Context,
        PTP_WORK Work)
{
  CMonitor *v3; // rdi

  v3 = (CMonitor *)*((_QWORD *)Context + 1);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
  }
  CMonitor::AbortMonitor(v3);
  SessionDisconnectedContext::~SessionDisconnectedContext(Context);
  operator delete(Context);
}
