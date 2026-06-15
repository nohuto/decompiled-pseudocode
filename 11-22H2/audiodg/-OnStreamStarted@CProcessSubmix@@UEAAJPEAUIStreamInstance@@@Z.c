/*
 * XREFs of ?OnStreamStarted@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009230
 * Callers:
 *     ?OnStreamStarted@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030AF0 (-OnStreamStarted@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnStreamStarted(CProcessSubmix *this, struct IStreamInstance *a2)
{
  return CSubmixImpl::OnStreamStarted((CProcessSubmix *)((char *)this + 16), a2);
}
