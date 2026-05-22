/*
 * XREFs of ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18017E338
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ??$emplace@AEAIAEAUtagPOINT@@@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUHandlerContext@ShellGesturesProcessor@@AEAIAEAUtagPOINT@@@Z @ 0x18017C780 (--$emplace@AEAIAEAUtagPOINT@@@-$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEAAAEAUH.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // rdi

  if ( *(_BYTE *)(a1 + 32) )
  {
    v2 = *(std::_Ref_count_base **)(a1 + 24);
    if ( v2 )
      std::_Ref_count_base::_Decwref(v2);
    v3 = *(_QWORD **)(a1 + 8);
    if ( v3 )
    {
      if ( v3[4] )
        DestroyInteractionContext();
      operator delete(v3);
    }
    *(_BYTE *)(a1 + 32) = 0;
  }
}
