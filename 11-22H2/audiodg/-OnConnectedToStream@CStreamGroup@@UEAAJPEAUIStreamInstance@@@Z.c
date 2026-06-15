/*
 * XREFs of ?OnConnectedToStream@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400514F0
 * Callers:
 *     ?OnConnectedToStream@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z @ 0x14002F790 (-OnConnectedToStream@CStreamGroup@@WBI@EAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::OnConnectedToStream(CStreamGroup *this, __int64 (***a2)(void))
{
  return CSubmixImpl::OnConnectedToStream((CStreamGroup *)((char *)this + 24), a2);
}
