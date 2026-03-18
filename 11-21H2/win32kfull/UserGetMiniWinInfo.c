/*
 * XREFs of UserGetMiniWinInfo @ 0x1C0005308
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0020F78 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(__int64 a1, struct tagMINIWINDOWINFO *a2, _DWORD *a3)
{
  struct tagMINIWINDOWINFO *v3; // rbp
  unsigned int v5; // ebx
  const struct tagWND *v6; // rax
  const struct tagWND *v7; // rdi

  v3 = a2;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = (const struct tagWND *)HMValidateHandleNoSecure(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, v3);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 64);
  }
  return v5;
}
