/*
 * XREFs of ?OnStreamStarted@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z @ 0x140051570
 * Callers:
 *     ?OnStreamStarted@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z @ 0x14002F7D0 (-OnStreamStarted@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::OnStreamStarted(
        CStreamGroup *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  return CSubmixImpl::OnStreamStarted((CStreamGroup *)((char *)this + 24), a2);
}
