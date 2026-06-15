/*
 * XREFs of ?StartStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140069530
 * Callers:
 *     ?StartStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x140030C70 (-StartStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::StartStream(CProcessSubmix *this, __int64 a2)
{
  return CSubmixImpl::StartStream((CProcessSubmix *)((char *)this + 16), a2);
}
