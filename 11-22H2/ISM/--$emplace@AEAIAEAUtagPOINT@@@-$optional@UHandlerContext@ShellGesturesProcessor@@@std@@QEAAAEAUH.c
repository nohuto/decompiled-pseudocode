/*
 * XREFs of ??$emplace@AEAIAEAUtagPOINT@@@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUHandlerContext@ShellGesturesProcessor@@AEAIAEAUtagPOINT@@@Z @ 0x18017C780
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x18017CAA4 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18017E338 (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 */

ShellGesturesProcessor::HandlerContext *__fastcall std::optional<ShellGesturesProcessor::HandlerContext>::emplace<unsigned int &,tagPOINT &>(
        ShellGesturesProcessor::HandlerContext *this,
        unsigned int *a2,
        struct tagPOINT *a3)
{
  ShellGesturesProcessor::HandlerContext *result; // rax

  std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(this, a2);
  ShellGesturesProcessor::HandlerContext::HandlerContext(this, *a2, *a3, 0);
  result = this;
  *((_BYTE *)this + 32) = 1;
  return result;
}
