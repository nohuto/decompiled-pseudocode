/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x14000DB64
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DCE0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<unsigned char>::~vector<unsigned char>()
{
  return std::vector<unsigned char>::_Tidy();
}
