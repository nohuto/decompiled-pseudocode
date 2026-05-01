/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x1804EF7BC
 * Callers:
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1804EF630 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804EF724 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1804EF5E8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1804EF600 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowReadyState::_WaitForUnfreezeIfNecessary(WindowReadyState *this)
{
  HWND *v2; // rcx
  HWND v3; // rcx
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  if ( WindowReadyState::IsReadyForPresentation(this) )
  {
    v3 = *v2;
    pvAttribute = 0;
    DwmGetWindowAttribute(v3, 0xFu, &pvAttribute, 4u);
    if ( pvAttribute )
      WindowReadyState::WaitFlags::Set((int *)this + 2, (__int64 *)this, 4);
  }
}
