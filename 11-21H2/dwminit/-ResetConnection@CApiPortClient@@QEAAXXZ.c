/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180007E00
 * Callers:
 *     DwmpResetPortConnection @ 0x180007894 (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180007AF8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180007D3C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 */

void __fastcall CApiPortClient::ResetConnection(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx

  EnterCriticalSection(&stru_180015B00);
  if ( CApiPortClient::IsConnected(v1) )
    CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  LeaveCriticalSection(&stru_180015B00);
}
