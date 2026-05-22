/*
 * XREFs of ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074180
 * Callers:
 *     _lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______ @ 0x180074060 (_lambda_3ac41b7c074b5572a862bd524c28f9fc_--operator()_std--pair_enum_ShellEdgyRecognizer--EdgyLo.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18017D908 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x180027040 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074110 (--$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientPr.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x180124434 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
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
