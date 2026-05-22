/*
 * XREFs of ?OnHitTest@TapProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B3DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnHitTest(
        TapProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // eax
  __int64 result; // rax

  *(_DWORD *)a4 = 0;
  v4 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 8)) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
    v4 = 3;
  *(_DWORD *)a4 = v4;
  result = 0LL;
  *((_DWORD *)this + 17) = 0;
  return result;
}
