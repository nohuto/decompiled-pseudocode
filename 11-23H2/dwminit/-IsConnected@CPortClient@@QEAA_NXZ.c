/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x18000E800
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000D854 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
