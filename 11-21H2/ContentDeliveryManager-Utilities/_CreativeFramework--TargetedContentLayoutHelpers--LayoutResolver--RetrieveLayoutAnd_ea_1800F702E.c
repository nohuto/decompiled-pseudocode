/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$44 @ 0x1800F702E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18007979C (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch_44(
        __int64 a1,
        __int64 a2)
{
  const char *StringRawBuffer; // rax

  StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a2 + 112) + 8LL), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 232),
    (unsigned __int16 *)0x1CF,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Subscription ID: %ls",
    StringRawBuffer);
  return 0LL;
}
