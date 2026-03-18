/*
 * XREFs of zzzCancelJournalling @ 0x1C011886C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     SendMsgCleanup @ 0x1C00F7EF0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00F7FC0 (xxxReceiverDied.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  struct tagWND *v4; // rdx
  __int64 Valid; // rbx
  __int64 v6; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      if ( *(_QWORD *)(GlobalValid + 16) )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify();
  ++gdwDeferWinEvent;
  v1 = PhkFirstGlobalValid(gptiRit, 0);
  if ( v1 )
  {
    do
    {
      if ( *(_QWORD *)(v1 + 16) )
      {
        PostThreadMessage(*(_QWORD *)(v1 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      v6 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v1);
      v1 = v6;
    }
    while ( v6 );
  }
  zzzEndDeferWinEventNotify();
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v3 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v3 )
    {
      v4 = *(struct tagWND **)(v3 + 24);
      if ( v4 )
      {
        result = *((_QWORD *)v4 + 5);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0, v4, 0xF08u, 1);
      }
    }
  }
  return result;
}
