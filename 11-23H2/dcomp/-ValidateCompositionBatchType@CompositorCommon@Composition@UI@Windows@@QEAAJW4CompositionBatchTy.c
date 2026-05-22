/*
 * XREFs of ?ValidateCompositionBatchType@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@@Z @ 0x180002D58
 * Callers:
 *     ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC (-GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEA.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::ValidateCompositionBatchType(__int64 a1, int a2)
{
  int v2; // edx
  int v4; // edx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2 - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 || v4 == 3 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0xC5B,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)0x80070057LL,
    (int)"Unsupported CompositionBatchType",
    v5);
  return 2147942487LL;
}
