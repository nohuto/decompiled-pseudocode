/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180007D3C
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180007B44 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180007E00 (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180007E4C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180007FA8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180008430 (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&xmmword_180015AF0 + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&xmmword_180015AF0 + 1));
  return v1;
}
