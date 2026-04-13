/*
 * XREFs of ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800CC05C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch$11 @ 0x1800DCFDF (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ProcessLayoutBindings_--_1_--c.c)
 * Callees:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800CC0AC (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetBoundedLayoutType(
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
      (HSTRING)&stru_1801787A8,
      a2,
      a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x37,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\l"
                                "ayoutresolver.cpp",
                           v4);
  }
  return result;
}
