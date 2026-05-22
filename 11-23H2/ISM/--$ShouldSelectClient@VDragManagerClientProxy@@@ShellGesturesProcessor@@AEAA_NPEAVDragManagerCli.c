/*
 * XREFs of ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061870
 * Callers:
 *     std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___ @ 0x180061908 (std--accumulate_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair_enum_ShellE.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18016F688 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x180025CE8 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061800 (--$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientPr.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1801163C4 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 */

bool __fastcall ShellGesturesProcessor::ShouldSelectClient<DragManagerClientProxy>(__int64 a1, __int64 a2)
{
  DragManagerClientProxy *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !KernelContextProvider::IsDesktopAllowed(*(KernelContextProvider **)(a1 + 24), *(_QWORD *)(a2 + 136)) )
    return 0;
  if ( ShellGesturesProcessor::IsShellClient<DragManagerClientProxy>(v3, v2) )
    return 1;
  return KernelContextProvider::IsTestSigningEnabled(v5, v4) != 0;
}
