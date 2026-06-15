/*
 * XREFs of ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18011FE30
 * Callers:
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180120090 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801226DC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180122CA8 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180123F4C (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::AbortMonitor(CMonitor *this)
{
  bool v2; // zf

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
  }
  v2 = *((_DWORD *)this + 14) == 3;
  *((_BYTE *)this + 60) = 1;
  if ( v2 )
    CMonitor::Stop(this);
  CMonitor::Terminate(this, 1, 0LL);
}
