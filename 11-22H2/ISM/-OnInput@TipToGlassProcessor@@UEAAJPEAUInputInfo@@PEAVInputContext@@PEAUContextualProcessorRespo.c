/*
 * XREFs of ?OnInput@TipToGlassProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DFF30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall TipToGlassProcessor::OnInput(
        TipToGlassProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)a2 & 0x10) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\lib\\tipto"
           "glassprocessor.cpp",
      (const char *)a4);
  *((_DWORD *)a4 + 2) = 3;
  return 0LL;
}
