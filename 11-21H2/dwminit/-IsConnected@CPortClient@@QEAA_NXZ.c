/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180008430
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180007D3C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
