/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180009900 (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180009AB8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180009F3C (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&xmmword_180015B30 + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&xmmword_180015B30 + 1));
  return v1;
}
