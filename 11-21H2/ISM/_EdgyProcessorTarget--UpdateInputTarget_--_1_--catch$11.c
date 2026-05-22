/*
 * XREFs of _EdgyProcessorTarget::UpdateInputTarget_::_1_::catch$11 @ 0x1801ADF8B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget_::_1_::catch_11(__int64 a1, __int64 a2)
{
  const char *v2; // r9

  v2 = (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 80) + 32LL);
  *(_DWORD *)(a2 + 32) = (_DWORD)v2;
  if ( (int)v2 >= 0 )
    return 1LL;
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x9F,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
    v2);
  return 0LL;
}
