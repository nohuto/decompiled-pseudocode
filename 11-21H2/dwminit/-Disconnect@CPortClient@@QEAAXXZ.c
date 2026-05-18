/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800083D0
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x1800081CC (--1CPortClient@@UEAA@XZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180008414 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  void *v2; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
