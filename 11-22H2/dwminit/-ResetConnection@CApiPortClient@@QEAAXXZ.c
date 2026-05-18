/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180009900
 * Callers:
 *     DwmpResetPortConnection @ 0x180009394 (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800095F8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 */

void __fastcall CApiPortClient::ResetConnection(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx

  EnterCriticalSection(&stru_180015B40);
  if ( CApiPortClient::IsConnected(v1) )
    CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  LeaveCriticalSection(&stru_180015B40);
}
