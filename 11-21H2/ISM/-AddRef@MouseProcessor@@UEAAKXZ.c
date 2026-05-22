/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x1800265B0
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180052C80 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WBA@EAAKXZ @ 0x180052CA0 (-AddRef@DWMLegacyInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WBI@EAAKXZ @ 0x180052CC0 (-AddRef@DWMLegacyInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WCA@EAAKXZ @ 0x180052CE0 (-AddRef@DWMLegacyInputTarget@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
