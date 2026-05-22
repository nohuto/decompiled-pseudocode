/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18016DFBC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x180012D54 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 *     ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180014668 (-erase@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 *     _std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration___::_Emplace_reallocate_ShellGesturesProcessor::GestureRegistration_const_&__::_1_::catch$5 @ 0x18006BEC0 (_std--vector_ShellGesturesProcessor--GestureRegistration_std--allocator_ShellGesturesProcessor--.c)
 *     ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18016E48C (--$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegi.c)
 *     ??0?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18016E6AC (--0-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGesturesPr.c)
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18016FE04 (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      v3 += 4;
      result = v3 - 2;
    }
    while ( v3 - 2 != a2 );
  }
  return result;
}
