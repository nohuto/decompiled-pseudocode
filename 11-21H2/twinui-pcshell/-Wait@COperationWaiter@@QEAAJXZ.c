/*
 * XREFs of ?Wait@COperationWaiter@@QEAAJXZ @ 0x1800ED844
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800EA4A0 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1800ED880 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 */

__int64 __fastcall COperationWaiter::Wait(void **this)
{
  unsigned int v2; // [rsp+20h] [rbp-18h]
  unsigned int v3; // [rsp+28h] [rbp-10h]

  return SHProcessMessagesUntilEventsEx((HWND)this, this + 5, 1u, 0x1388u, v2, v3) != 0 ? 0x80004004 : 0;
}
