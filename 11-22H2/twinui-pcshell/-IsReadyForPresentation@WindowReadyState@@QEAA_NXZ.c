/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1804EF5E8
 * Callers:
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x1802D9840 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1804EDFD0 (-get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1804EF630 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804EF724 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x1804EF7BC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
