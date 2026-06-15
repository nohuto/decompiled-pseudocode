/*
 * XREFs of ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x18002E758
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_@@JPEAUIAudioProcessingObject@@U_GUID@@I@std@@EEAAJ$$QEAPEAUIAudioProcessingObject@@$$QEAU_GUID@@$$QEAI@Z @ 0x180049CD0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_@@JPEAUIAudioProcessin.c)
 *     std::_Func_impl_no_alloc__lambda_b98dbbb0b0cb5835d52ba9955c0682aa__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x18004A020 (std--_Func_impl_no_alloc__lambda_b98dbbb0b0cb5835d52ba9955c0682aa__long_IAudioProcessingObject__.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_25385759_3236_4101_a943_25693dfb5d2d, a2) >= 0;
}
