/*
 * XREFs of ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1800738C0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x180074218 (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1800AA8C0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180115B7C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x180124434 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x18014E778 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ?GetProcessId@DragManagerClientProxy@@QEAA?BIXZ @ 0x18016153C (-GetProcessId@DragManagerClientProxy@@QEAA-BIXZ.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180164A78 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x18016585C (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x18017CAA4 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     ?GetProcessId@ShellGesturesClientProxy@@QEAAIXZ @ 0x18017D15C (-GetProcessId@ShellGesturesClientProxy@@QEAAIXZ.c)
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18017DC6C (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18017E338 (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ShellGesturesProcessor::StartOperation(
        KernelContextProvider **this,
        unsigned int a2,
        bool a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct DragManagerClientProxy *a6)
{
  DragManagerClientProxy *v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 appended; // rax
  unsigned int *v13; // r8
  _QWORD **v14; // r9
  unsigned int v15; // r12d
  __int64 v16; // r8
  struct DragManagerClientProxy *v17; // rbx
  __int64 v18; // rdi
  ShellGesturesClientProxy *v19; // rcx
  unsigned int ProcessId; // ebx
  unsigned int v21; // r8d
  KernelContextProvider *v22; // rcx
  KernelContextProvider *v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // rdi
  struct InputSite *v31; // r9
  GestureHandler *v32; // rbx
  std::_Ref_count_base *v33; // rcx
  struct InputSite *v35; // [rsp+20h] [rbp-58h]
  GestureHandler *v36; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v37; // [rsp+38h] [rbp-40h]
  __int128 v38; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v39; // [rsp+88h] [rbp+10h] BYREF

  v39 = a2;
  v10 = a6;
  if ( !KernelContextProvider::IsDesktopAllowed(this[3], *((_QWORD *)a6 + 17)) )
    return 0;
  appended = std::_Fnv1a_append_bytes(v11, (const unsigned __int8 *const)&v39, 4uLL);
  v13 = *(unsigned int **)(std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
                             this + 16,
                             &v38,
                             &v39,
                             appended)
                         + 8);
  if ( !v13 )
    v13 = (unsigned int *)this[17];
  if ( v13 == (unsigned int *)this[17] )
    return 0;
  v15 = PointerTypeToInputType(v13[8], 0LL);
  v17 = *(struct DragManagerClientProxy **)(v16 + 64);
  v18 = *(_QWORD *)(v16 + 24);
  if ( a3 )
  {
    v19 = *(ShellGesturesClientProxy **)(v18 + 224);
    if ( !v19 )
      return 0;
    ProcessId = ShellGesturesClientProxy::GetProcessId(v19);
    if ( ProcessId != DragManagerClientProxy::GetProcessId(v10) )
      return 0;
    a6 = 0LL;
    v21 = 0;
    v22 = this[17];
    v23 = *(KernelContextProvider **)v22;
    v24 = 0;
    v25 = 0;
    while ( v23 != v22 )
    {
      if ( *((_QWORD *)v23 + 3) == v18 )
      {
        v25 += *((_DWORD *)v23 + 16);
        v24 += *((_DWORD *)v23 + 17);
        ++v21;
      }
      v23 = *(KernelContextProvider **)v23;
    }
    LODWORD(a6) = v25 / v21;
    v26 = v24 % v21;
    HIDWORD(a6) = v24 / v21;
    v17 = a6;
  }
  else
  {
    v26 = 0LL;
    v27 = *v14;
    while ( 1 )
    {
      v28 = v26;
      if ( v27 == v14 )
        break;
      v29 = v27 + 3;
      v27 = (_QWORD *)*v27;
      ++v26;
      if ( *v29 != v18 )
        v26 = v28;
    }
    if ( v26 != 1 )
      return 0;
  }
  if ( *(_BYTE *)(v18 + 424) )
    return 0;
  v30 = v18 + 392;
  std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(v30, v26);
  ShellGesturesProcessor::HandlerContext::HandlerContext(
    (ShellGesturesProcessor::HandlerContext *)v30,
    a2,
    (struct tagPOINT)v17,
    a3);
  *(_BYTE *)(v30 + 32) = 1;
  ShellGesturesProcessor::CreateHandlerForHandlerContext(
    (struct ShellGesturesProcessor::HandlerContext *)v30,
    (struct tagPOINT)v17,
    a5);
  std::weak_ptr<SystemCursorService2>::lock(v30 + 16, &v36);
  v32 = v36;
  if ( v36 )
  {
    GestureHandler::AddGestureClient(v36, a4, v10, v31, v35);
    v38 = 0LL;
    GestureHandler::InitializeForGesture(v32, a2, v15, &v38);
  }
  v33 = v37;
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  ShellGesturesProcessor::SendCurrentGestureEvent(v33, (struct ShellGesturesProcessor::HandlerContext *)v30);
  *(_DWORD *)(v30 + 4) = 2;
  return 1;
}
