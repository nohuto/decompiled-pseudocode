/*
 * XREFs of ?GetAllEdgyLocationsFromRegistrations@ShellGesturesProcessor@@AEAA?AW4EdgyLocation@ShellEdgyRecognizer@@QEAUtagTOUCH_GESTURE_SETTINGS@@@Z @ 0x1800742F8
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     _lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______ @ 0x180074060 (_lambda_3ac41b7c074b5572a862bd524c28f9fc_--operator()_std--pair_enum_ShellEdgyRecognizer--EdgyLo.c)
 */

__int64 __fastcall ShellGesturesProcessor::GetAllEdgyLocationsFromRegistrations(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rdi
  __int64 result; // rax
  _QWORD *i; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD ***)(a1 + 40);
  result = 0LL;
  v5[0] = a1;
  v5[1] = a2;
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    result = lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______(
               v5,
               result,
               (__int64)(i + 2));
  return result;
}
