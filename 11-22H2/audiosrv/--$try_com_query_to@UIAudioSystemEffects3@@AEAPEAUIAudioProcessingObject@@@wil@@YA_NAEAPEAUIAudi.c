/*
 * XREFs of ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x1801043BC
 * Callers:
 *     _lambda_df24f15366d6610125bb6b32643d6b1f_::operator() @ 0x180105240 (_lambda_df24f15366d6610125bb6b32643d6b1f_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x180150DD0 (std--_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProce_ea_180150DD0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17, a2) >= 0;
}
