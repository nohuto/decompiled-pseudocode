/*
 * XREFs of ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18016FE04
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002290 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 *     std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___ @ 0x180061908 (std--accumulate_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair_enum_ShellE.c)
 *     ??1?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@XZ @ 0x18016EAC4 (--1-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGesturesPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18016DFBC (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

void __fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
