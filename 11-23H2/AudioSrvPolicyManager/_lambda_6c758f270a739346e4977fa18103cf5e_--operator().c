/*
 * XREFs of _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x18002091C
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800224D0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x18001FE34 (--$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_6c758f270a739346e4977fa18103cf5e_::operator()(_QWORD **a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 64LL))(**a1);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (unsigned int)_o__wcsicmp(v5, v4) )
    return 0;
  v8 = 0LL;
  if ( wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(*a1, (__int64)&v8) )
  {
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL, v6, 0LL);
  }
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v8);
  return 1;
}
