/*
 * XREFs of ??0?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18017C92C
 * Callers:
 *     _lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______ @ 0x180074060 (_lambda_3ac41b7c074b5572a862bd524c28f9fc_--operator()_std--pair_enum_ShellEdgyRecognizer--EdgyLo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C23C (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 *     ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x18017CA5C (--0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z.c)
 *     ?_Buy_nonzero@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAX_K@Z @ 0x18017E01C (-_Buy_nonzero@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistr.c)
 */

__int64 __fastcall std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  const struct ShellGesturesProcessor::GestureRegistration *v5; // rbp
  const struct ShellGesturesProcessor::GestureRegistration *v6; // rdi
  ShellGesturesProcessor::GestureRegistration *v7; // rbx

  v2 = a1 + 8;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8)) >> 5 )
  {
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Buy_nonzero(a1 + 8);
    v5 = *(const struct ShellGesturesProcessor::GestureRegistration **)(a2 + 16);
    v6 = *(const struct ShellGesturesProcessor::GestureRegistration **)(a2 + 8);
    v7 = *(ShellGesturesProcessor::GestureRegistration **)v2;
    while ( v6 != v5 )
    {
      ShellGesturesProcessor::GestureRegistration::GestureRegistration(v7, v6);
      v7 = (ShellGesturesProcessor::GestureRegistration *)((char *)v7 + 32);
      v6 = (const struct ShellGesturesProcessor::GestureRegistration *)((char *)v6 + 32);
    }
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>((__int64 *)v7, (__int64 *)v7);
    *(_QWORD *)(v2 + 8) = v7;
  }
  return a1;
}
