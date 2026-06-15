/*
 * XREFs of ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180020024
 * Callers:
 *     _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x180020B0C (_lambda_6c758f270a739346e4977fa18103cf5e_--operator().c)
 *     _lambda_a3aac110b84197fe884df272735eece2_::operator() @ 0x180020BD4 (_lambda_a3aac110b84197fe884df272735eece2_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, a2) >= 0;
}
