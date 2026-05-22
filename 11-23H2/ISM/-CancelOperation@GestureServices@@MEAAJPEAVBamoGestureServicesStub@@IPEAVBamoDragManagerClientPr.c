/*
 * XREFs of ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801531B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1800603FC (-CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800985C8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180153290 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x1801568C0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18015CDA0 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801676D0 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall GestureServices::CancelOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct BamoDragManagerClientProxy *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  const unsigned __int16 *ProcessorTypeString; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a5;
  ProcessorTypeString = (const unsigned __int16 *)GestureServices::GetProcessorTypeString(a1, a5);
  InputETW::InputGesture::CancelOperationReceived(ProcessorTypeString, a3);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      EdgyProcessor::CancelDrag(*(EdgyProcessor **)(a1 + 72), a3, a4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
        (_QWORD *)(a1 + 200),
        v11,
        (const unsigned __int8 *)&v12);
      if ( v11[0] != *(_QWORD *)(a1 + 208) )
        GestureHandler::CancelOperation(*(GestureHandler **)(v11[0] + 24LL));
    }
  }
  else
  {
    DragNDropProcessor::CancelDrag(*(DragNDropProcessor **)(a1 + 64), a3, a4);
  }
  return 0LL;
}
