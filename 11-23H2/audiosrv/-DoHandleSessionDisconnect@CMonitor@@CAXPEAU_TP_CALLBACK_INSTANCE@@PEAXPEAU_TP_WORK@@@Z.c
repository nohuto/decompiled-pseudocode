/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012FF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1SessionDisconnectedContext@@QEAA@XZ @ 0x18012FE70 (--1SessionDisconnectedContext@@QEAA@XZ.c)
 *     ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x180130144 (-HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(PTP_CALLBACK_INSTANCE Instance, CMonitor **Context, PTP_WORK Work)
{
  CMonitor::HandleSessionDisconnected(Context[1], (enum AudioSessionDisconnectReason)Context);
  SessionDisconnectedContext::~SessionDisconnectedContext((SessionDisconnectedContext *)Context);
  operator delete(Context);
}
