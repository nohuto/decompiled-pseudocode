/*
 * XREFs of ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800CC0D4
 * Callers:
 *     ?SetChosenLayoutType@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18005E0D0 (-SetChosenLayoutType@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800CC0FC (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType(
        CreativeFramework::TargetedContentLayoutHelpers::Settings *this,
        const wchar_t *a2,
        HSTRING a3,
        HSTRING a4)
{
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
      (HSTRING)this,
      (HSTRING)&stru_1801786D8,
      a2,
      a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\l"
                                "ayoutresolver.cpp",
                           v4);
  }
  return result;
}
