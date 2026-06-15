/*
 * XREFs of _lambda_5eb033892be4afb4fa99fad0826c93de_::operator() @ 0x1800D8A0C
 * Callers:
 *     wil::details::lambda_call__lambda_5eb033892be4afb4fa99fad0826c93de___::_lambda_call__lambda_5eb033892be4afb4fa99fad0826c93de___ @ 0x1800D8640 (wil--details--lambda_call__lambda_5eb033892be4afb4fa99fad0826c93de___--_lambda_call__lambda_5eb0.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8D34 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_5eb033892be4afb4fa99fad0826c93de_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v5 = 0LL;
    v3 = *(__int64 **)(v2 + 40);
    v4 = *v3;
    v5 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 88))(v3, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *(_QWORD *)(*a1 + 32));
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v5);
  }
}
