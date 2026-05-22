/*
 * XREFs of std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___ @ 0x180061908
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061870 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ??0?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18016E6AC (--0-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGesturesPr.c)
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18016FE04 (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::accumulate_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____________enum_ShellEdgyRecognizer::EdgyLocation__lambda_38975a45fe1403ec3bfa406907b8df5b___(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // r14
  int v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0;
  while ( a1 != a2 )
  {
    std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>(
      &v10,
      a1 + 2);
    for ( i = v11[0]; i != v11[1]; i += 32LL )
    {
      if ( ShellGesturesProcessor::ShouldSelectClient<DragManagerClientProxy>(a4, *(_QWORD *)(i + 16)) )
      {
        v7 |= v10;
        break;
      }
    }
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(v11);
    a1 = (_QWORD *)*a1;
  }
  return v7;
}
