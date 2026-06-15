/*
 * XREFs of ?OnConnectedToStream@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z @ 0x140004E10
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030A70 (-OnConnectedToStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnConnectedToStream(CProcessSubmix *this, struct IStreamInstance *a2)
{
  return CSubmixImpl::OnConnectedToStream((CProcessSubmix *)((char *)this + 16), a2);
}
