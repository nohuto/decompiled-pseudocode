/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180009F3C
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
