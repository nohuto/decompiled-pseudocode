/*
 * XREFs of ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140024840
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x140033A70 (-DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::DestroyStream(CProcessSubmix *this, unsigned __int64 a2)
{
  return CSubmixImpl::DestroyStream((CProcessSubmix *)((char *)this + 16), a2);
}
