/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000D854
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000D4C4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000DDBC (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000DE08 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000DF74 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x18000E800 (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&xmmword_180016C20 + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&xmmword_180016C20 + 1));
  return v1;
}
