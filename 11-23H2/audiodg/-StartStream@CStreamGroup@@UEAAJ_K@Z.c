/*
 * XREFs of ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x1400523C0
 * Callers:
 *     ?StartStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x14002F990 (-StartStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::StartStream(CStreamGroup *this, unsigned __int64 a2)
{
  return CSubmixImpl::StartStream((CStreamGroup *)((char *)this + 24), a2);
}
