/*
 * XREFs of ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780
 * Callers:
 *     ?get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x1804190E0 (-get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A66C (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x18041A6C8 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18041A798 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UwpWindowReadyState::IsReadyForPresentation(UwpWindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
