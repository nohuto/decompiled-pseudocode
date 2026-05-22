/*
 * XREFs of ?OnInterestedPropertyChanged@HotkeyContextualProcessor@@UEAAJGPEBXI@Z @ 0x1801B29C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall HotkeyContextualProcessor::OnInterestedPropertyChanged(
        HotkeyContextualProcessor *this,
        __int16 a2,
        _WORD *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 31 )
  {
    if ( (_DWORD)a4 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        207LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
        a4);
    *(_WORD *)(*((_QWORD *)this + 4) + 352LL) = *a3;
  }
  return 0LL;
}
