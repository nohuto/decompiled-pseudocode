/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x18002CC40
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180079D30 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x180079D50 (-AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x180079D70 (-AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x180079D90 (-AddRef@GameControllerRawInputProvider@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
