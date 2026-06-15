/*
 * XREFs of ?OnStreamStopped@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009250
 * Callers:
 *     ?OnStreamStopped@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030AD0 (-OnStreamStopped@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnStreamStopped(CProcessSubmix *this, struct IStreamInstance *a2)
{
  return CSubmixImpl::OnStreamStopped((CProcessSubmix *)((char *)this + 16), a2);
}
