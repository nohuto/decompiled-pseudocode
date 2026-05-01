/*
 * XREFs of ?IsDesktopInputContext@@YA_NXZ @ 0x180075390
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180072060 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x18056AA20 (-v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x1800756F8 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1803FFA68 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 */

bool __fastcall IsDesktopInputContext(__int64 a1, enum Windows::Internal::Shell::Holographic::UserInputContext *a2)
{
  int UserInputContext; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v3; // rdx
  int UserDisplayContext; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  UserInputContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                       (Windows::Internal::Shell::Holographic *)&v8,
                       a2);
  if ( UserInputContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12,
      (unsigned int)"desktop\\internal\\shell\\inc\\private\\InputContextHelper.h",
      (const char *)(unsigned int)UserInputContext,
      v6);
  if ( !v8 )
    return 1;
  v9 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v9,
                         v3);
  if ( UserDisplayContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"desktop\\internal\\shell\\inc\\private\\InputContextHelper.h",
      (const char *)(unsigned int)UserDisplayContext,
      v6);
  return v9 != 1;
}
