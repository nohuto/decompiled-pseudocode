/*
 * XREFs of ??$query@UITextInputHostInfoProvider@@@?$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITextInputHostInfoProvider@@Uerr_exception_policy@wil@@@1@XZ @ 0x18021842C
 * Callers:
 *     ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x18062B7CC (-GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ITouchKeyboardExperienceManager,wil::err_exception_policy>::query<ITextInputHostInfoProvider>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
