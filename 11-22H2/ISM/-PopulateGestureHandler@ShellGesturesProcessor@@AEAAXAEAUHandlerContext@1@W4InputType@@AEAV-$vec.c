/*
 * XREFs of ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18017D908
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074110 (--$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientPr.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074180 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180115B7C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180164A78 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x18016585C (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801C8F8C (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::PopulateGestureHandler(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 i; // rax
  char v8; // di
  int InputType; // r15d
  __int64 v10; // rbp
  __int64 j; // rbx
  struct InputSite *v12; // r9
  GestureHandler *v13; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-28h]

  for ( i = *a4; ; i += 32LL )
  {
    if ( i == a4[1] )
    {
      v8 = 0;
      goto LABEL_6;
    }
    if ( *(_BYTE *)(i + 24) )
      break;
  }
  v8 = 1;
LABEL_6:
  std::weak_ptr<SystemCursorService2>::lock(a2 + 16, &v13);
  if ( v13 )
  {
    InputType = PointerManipulationHelper::GetInputType(a3);
    v10 = a4[1];
    for ( j = *a4; j != v10; j += 32LL )
    {
      if ( (InputType & *(_DWORD *)(j + 8)) != 0
        && ShellGesturesProcessor::ShouldSelectClient<DragManagerClientProxy>(a1, *(_QWORD *)(j + 16))
        && (!v8 || *(_BYTE *)(j + 24)) )
      {
        GestureHandler::AddGestureClient(v13, *(_QWORD *)j, *(struct DragManagerClientProxy **)(j + 16), v12);
        if ( IsEdition(8778LL) )
        {
          if ( ShellGesturesProcessor::IsShellClient<DragManagerClientProxy>(a1, *(DragManagerClientProxy **)(j + 16))
            && *(_DWORD *)(*(_QWORD *)(j + 16) + 144LL) )
          {
            MITSetLastInputRecipient();
          }
        }
      }
    }
    v15 = 0LL;
    GestureHandler::InitializeForGesture((__int64)v13);
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
