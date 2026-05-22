/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001B524
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@QEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18015AB5C (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 *     ?_Buy_nonzero@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAX_K@Z @ 0x18016FD9C (-_Buy_nonzero@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistr.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
