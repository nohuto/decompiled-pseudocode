/*
 * XREFs of _lambda_7a47a105f9b5dad1ba9e001874e9af85_::operator() @ 0x18001C3A4
 * Callers:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___ @ 0x18001C33C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85_.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@Z @ 0x18001C434 (--$DoInvoke@V_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_@@@-$EventSource@UIAsyncActionCompletedHan.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7a47a105f9b5dad1ba9e001874e9af85_::operator()(Microsoft::WRL2::NestableRuntimeClass **a1)
{
  Microsoft::WRL2::NestableRuntimeClass *v1; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  unsigned int v4; // edi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*a1);
    v1 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v1 + 128);
  }
  v3 = *a1;
  v6[0] = &v8;
  v8 = v1;
  v6[1] = &v7;
  v7 = 1;
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_235ffb6b1ffc6a4928642e92ab1f25a5_>(
         (char *)v3 + 184,
         v6);
  if ( v1 )
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v1 + 16LL))(v1);
  return v4;
}
