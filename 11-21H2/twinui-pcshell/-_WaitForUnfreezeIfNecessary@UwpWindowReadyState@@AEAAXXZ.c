/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24
 * Callers:
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x18041A6C8 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A868 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall UwpWindowReadyState::_WaitForUnfreezeIfNecessary(UwpWindowReadyState *this)
{
  HWND *v2; // rcx
  HWND v3; // rcx
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  if ( UwpWindowReadyState::IsReadyForPresentation(this) )
  {
    v3 = *v2;
    pvAttribute = 0;
    DwmGetWindowAttribute(v3, 0xFu, &pvAttribute, 4u);
    if ( pvAttribute )
      UwpWindowReadyState::WaitFlags::Set((int *)this + 2, (__int64 *)this, 4);
  }
}
