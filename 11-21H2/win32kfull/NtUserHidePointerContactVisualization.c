/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C016CAE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v4 = 0;
    UserSetLastError(87LL, v2);
  }
  else
  {
    v4 = CTouchProcessor::SetPointerVisualization(gpTouchProcessor, a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
