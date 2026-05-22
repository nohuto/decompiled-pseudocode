/*
 * XREFs of ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18011A940
 * Callers:
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1801191EC (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x180119C04 (-DisconnectAllSections@SipcPort@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::IncreaseSectionEventCount(HANDLE *this)
{
  if ( ++*((_DWORD *)this + 11) == 1 )
    SetEvent(this[1]);
}
