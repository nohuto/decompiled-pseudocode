/*
 * XREFs of ?Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z @ 0x180064068
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ShellHandwritingProcessor::Create(_QWORD *a1)
{
  return Microsoft::WRL::Details::MakeAndInitialize<ShellHandwritingProcessor,IContextualProcessor,>(a1);
}
