/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1800A0550
 * Callers:
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x1800A05A0 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C3144 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
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
      UwpWindowReadyState::WaitFlags::Set((char *)this + 8, this, 4LL);
  }
}
