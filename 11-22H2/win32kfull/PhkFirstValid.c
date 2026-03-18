/*
 * XREFs of PhkFirstValid @ 0x1C0071984
 * Callers:
 *     xxxCallMouseHook @ 0x1C000E574 (xxxCallMouseHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00717AC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00718F0 (EditionKeyEventLLHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01AC290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AC470 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01BBC8C (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01C4E30 (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(a1 + 8 * v3 + 928);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
