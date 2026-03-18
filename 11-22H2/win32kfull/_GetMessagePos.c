/*
 * XREFs of _GetMessagePos @ 0x1C00AE3A4
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     NtUserGetMessagePos @ 0x1C00AE370 (NtUserGetMessagePos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02292D0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C0239990 (xxxSendHelpMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetMessagePos()
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = PtiCurrentShared();
  LODWORD(v4) = *((_DWORD *)v0 + 191);
  v1 = *((unsigned int *)v0 + 192);
  HIDWORD(v4) = *((_DWORD *)v0 + 192);
  if ( *((_DWORD *)v0 + 193) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v1);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*((_DWORD *)v0 + 193) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v4, &v4, *((unsigned int *)v0 + 193), 0LL);
      PhysicalToLogicalDPIPoint(&v4, &v4, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v4 = 0LL;
  }
  return (unsigned __int16)v4 | (WORD2(v4) << 16);
}
