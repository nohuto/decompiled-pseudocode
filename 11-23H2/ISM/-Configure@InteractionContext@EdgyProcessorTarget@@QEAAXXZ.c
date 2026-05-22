/*
 * XREFs of ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1801CAE80
 * Callers:
 *     ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x1801CBB98 (-OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1801CBE08 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall EdgyProcessorTarget::InteractionContext::Configure(EdgyProcessorTarget::InteractionContext *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int InteractionContext; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    ResetInteractionContext(v3);
  }
  else
  {
    InteractionContext = CreateInteractionContext(v1);
    if ( InteractionContext < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x366,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)InteractionContext,
        v10[0]);
  }
  v5 = *v1;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = SetPropertyInteractionContext(v5, 3LL, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x372,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v6,
      v10[0]);
  v7 = SetPropertyInteractionContext(*v1, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x373,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v7,
      v10[0]);
  v8 = SetInteractionConfigurationInteractionContext(*v1, 2LL, v10);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x374,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v8,
      v10[0]);
  v9 = RegisterOutputCallbackInteractionContext(*v1, EdgyProcessorTarget::InteractionContext::StaticCallback, this);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x375,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9,
      v10[0]);
}
