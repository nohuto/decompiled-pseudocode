/*
 * XREFs of SmpCheckSubSysStatus @ 0x140003C20
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmpCheckSubSysStatus(__int64 a1)
{
  bool result; // al

  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    return 1;
  result = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    return *(_DWORD *)(a1 + 24) != -1;
  if ( *(_QWORD *)(a1 + 48) )
    return 1;
  return result;
}
