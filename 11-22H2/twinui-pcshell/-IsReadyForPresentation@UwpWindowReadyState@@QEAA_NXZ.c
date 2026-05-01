/*
 * XREFs of ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x1800A05A0
 * Callers:
 *     ?get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x18004FE80 (-get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800A0328 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A04F0 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1800A0550 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall UwpWindowReadyState::IsReadyForPresentation(UwpWindowReadyState *this)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 2) )
      return 1;
  }
  return result;
}
