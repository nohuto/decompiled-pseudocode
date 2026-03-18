/*
 * XREFs of StartScreenSaver @ 0x1C021D230
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C00FEF70 (SetTimerCoalescingTolerance.c)
 */

__int64 __fastcall StartScreenSaver(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v4; // rdx

  result = gppiScreenSaver;
  v2 = a1;
  if ( !gppiScreenSaver )
  {
    result = gPowerState;
    if ( (gPowerState & 1) == 0 )
    {
      GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
      result = CInputGlobals::GetLastInputTime(gpInputGlobals);
      if ( GlobalTickCount != result )
      {
        if ( !gProtocolType && !LODWORD(gPowerTransitionsState[0]) )
        {
          v4 = 2LL;
          goto LABEL_10;
        }
        if ( !(_DWORD)v2 || (result = gpsi, (*gpsi & 0x200) != 0) )
        {
          v4 = v2;
LABEL_10:
          result = PostWinlogonMessage(1024LL, v4);
          if ( (int)result >= 0 )
          {
            CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
            return SetTimerCoalescingTolerance(3);
          }
        }
      }
    }
  }
  return result;
}
