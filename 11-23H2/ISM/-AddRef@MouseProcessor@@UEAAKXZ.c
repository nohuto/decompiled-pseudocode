/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x18002F430
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180069E90 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WBA@EAAKXZ @ 0x180069EB0 (-AddRef@DWMLegacyInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WBI@EAAKXZ @ 0x180069ED0 (-AddRef@DWMLegacyInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@WCA@EAAKXZ @ 0x180069EF0 (-AddRef@DWMLegacyInputTarget@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
