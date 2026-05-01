/*
 * XREFs of ??C?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA?AV?$test_data_control@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@1@XZ @ 0x18044A5A0
 * Callers:
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0 (_lambda_751c3952807d6b9c6862705cee6a52fd_--operator().c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 */

__int64 *__fastcall tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::operator->(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = v3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v5 = *v3;
  *a2 = *v3;
  a2[1] = v3[1];
  tip::details::test_common_data<1>::begin_update(v5 + 8);
  return a2;
}
