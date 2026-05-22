/*
 * XREFs of ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x180131D14
 * Callers:
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x180133F20 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013403C (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019EAD4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x18019ED2C (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18019EE70 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8)
      && *(_WORD *)(a1 + 16) == *(_WORD *)(a2 + 16);
}
