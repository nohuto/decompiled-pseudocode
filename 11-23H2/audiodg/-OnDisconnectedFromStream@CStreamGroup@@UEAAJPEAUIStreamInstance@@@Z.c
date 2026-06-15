/*
 * XREFs of ?OnDisconnectedFromStream@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400514D0
 * Callers:
 *     ?OnDisconnectedFromStream@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z @ 0x14002F770 (-OnDisconnectedFromStream@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::OnDisconnectedFromStream(
        CStreamGroup *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  return CSubmixImpl::OnDisconnectedFromStream((CStreamGroup *)((char *)this + 24), a2);
}
