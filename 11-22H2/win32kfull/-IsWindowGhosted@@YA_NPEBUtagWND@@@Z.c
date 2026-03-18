/*
 * XREFs of ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C005EF60
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012A800 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C013C6B8 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F48A4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

char __fastcall IsWindowGhosted(const struct tagWND *a1)
{
  char v2; // bl

  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL) )
    return 0;
  v2 = 1;
  if ( !GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) && !GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return 0;
  return v2;
}
