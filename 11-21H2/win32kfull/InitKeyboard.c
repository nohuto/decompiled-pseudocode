/*
 * XREFs of InitKeyboard @ 0x1C011F950
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C011F9CC (-GetBiosNumLockStatus@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitKeyboard()
{
  __int64 result; // rax

  result = gProtocolType;
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    result = gfsSASModifiersDown;
    gfsModifiers = 0;
    gfsModOnlyCandidate = 0;
    gfsRawModifiersForHotKey = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
  return result;
}
