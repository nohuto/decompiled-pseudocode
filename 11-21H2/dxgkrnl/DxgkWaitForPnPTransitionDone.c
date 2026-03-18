/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x1C0349734
 * Callers:
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01F3910 (DpiIndicateConnectorChangeWorkItem.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C01C010C (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(KWAIT_REASON a1, KPROCESSOR_MODE a2, unsigned int a3, unsigned int a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 122), a1, a2, a3, a4);
}
