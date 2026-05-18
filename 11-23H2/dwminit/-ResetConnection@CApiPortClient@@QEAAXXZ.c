/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000DDBC
 * Callers:
 *     DwmpResetPortConnection @ 0x18000D084 (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000D478 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000D854 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 */

void __fastcall CApiPortClient::ResetConnection(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx

  EnterCriticalSection(&stru_180016C30);
  if ( CApiPortClient::IsConnected(v1) )
    CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  LeaveCriticalSection(&stru_180016C30);
}
