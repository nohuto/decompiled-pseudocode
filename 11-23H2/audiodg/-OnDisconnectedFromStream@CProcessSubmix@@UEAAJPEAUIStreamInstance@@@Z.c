/*
 * XREFs of ?OnDisconnectedFromStream@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400021D0
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030A90 (-OnDisconnectedFromStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnDisconnectedFromStream(CProcessSubmix *this, struct IStreamInstance *a2)
{
  return CSubmixImpl::OnDisconnectedFromStream((CProcessSubmix *)((char *)this + 16), a2);
}
