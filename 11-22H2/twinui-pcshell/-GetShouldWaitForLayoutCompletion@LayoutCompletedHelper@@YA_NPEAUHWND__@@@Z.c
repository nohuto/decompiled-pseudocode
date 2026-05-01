/*
 * XREFs of ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x1800A0E08
 * Callers:
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1804EF630 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(LayoutCompletedHelper *this, HWND a2)
{
  return (unsigned int)GetPropW((HWND)this, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion") == 1;
}
