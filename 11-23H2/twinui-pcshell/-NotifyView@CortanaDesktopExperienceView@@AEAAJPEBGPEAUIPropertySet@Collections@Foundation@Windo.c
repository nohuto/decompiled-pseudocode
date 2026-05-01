/*
 * XREFs of ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048464C
 * Callers:
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804842C8 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180484418 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x180484720 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1804848D0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180484B68 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1804852E0 (-OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485424 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485BD0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804861D8 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?TryInvokeBack@CortanaDesktopExperienceView@@EEAAJXZ @ 0x180488260 (-TryInvokeBack@CortanaDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804845F0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::NotifyView(
        CortanaDesktopExperienceView *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const WCHAR *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a2;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, (unsigned int)a3);
  v6 = CortanaDesktopExperienceView::NotifyView(this, (HSTRING)v5[1].Reserved.Reserved1, a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
