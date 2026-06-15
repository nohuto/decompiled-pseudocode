/*
 * XREFs of ?OnStreamStopped@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z @ 0x140051550
 * Callers:
 *     ?OnStreamStopped@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z @ 0x14002F7B0 (-OnStreamStopped@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::OnStreamStopped(
        CStreamGroup *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  return CSubmixImpl::OnStreamStopped((CStreamGroup *)((char *)this + 24), a2);
}
