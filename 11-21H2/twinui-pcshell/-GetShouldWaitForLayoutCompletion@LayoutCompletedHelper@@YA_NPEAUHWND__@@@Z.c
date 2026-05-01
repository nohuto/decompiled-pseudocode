/*
 * XREFs of ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x18040DF78
 * Callers:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18040DFA4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(LayoutCompletedHelper *this, HWND a2)
{
  return (unsigned int)GetPropW((HWND)this, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion") == 1;
}
