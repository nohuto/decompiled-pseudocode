/*
 * XREFs of ?ApplyCachedTarget@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AE0A4
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AD128 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall EdgyImpl::ApplyCachedTarget(
        EdgyImpl *this,
        struct ContextualProcessorResponse *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 4) != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      328LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      a4);
  if ( *((_DWORD *)a2 + 2) != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      329LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      a4);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a2 + 10, (__int64 *)this + 4);
  return 0LL;
}
