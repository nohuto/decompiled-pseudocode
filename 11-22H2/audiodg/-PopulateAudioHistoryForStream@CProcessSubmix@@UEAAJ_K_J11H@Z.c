/*
 * XREFs of ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z @ 0x140069300
 * Callers:
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11H@Z @ 0x140030B30 (-PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::PopulateAudioHistoryForStream(
        CProcessSubmix *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return CSubmixImpl::PopulateAudioHistoryForStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4, a5, a6);
}
