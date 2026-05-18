/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x180009C98
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, int a2, void *a3)
{
  *((_DWORD *)this + 7) = a2;
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = GetProcessHeap();
  return this;
}
