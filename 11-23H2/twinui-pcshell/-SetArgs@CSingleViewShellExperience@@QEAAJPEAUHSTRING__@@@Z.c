/*
 * XREFs of ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180747CB4
 * Callers:
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x180432990 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180441980 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180447990 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x18046E750 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 *     ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18046F600 (-Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x18046F860 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetArgs(HSTRING *this, HSTRING a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = Microsoft::WRL::Wrappers::HString::Set(this, &v6);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42C,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
