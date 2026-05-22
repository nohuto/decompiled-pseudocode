/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___ @ 0x1800B65BE
 * Callers:
 *     ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ @ 0x1800804CC (-FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$DoInvoke@V_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@@Z @ 0x1800B6392 (--$DoInvoke@V_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___(
        Microsoft::WRL2::ContextSession *this,
        __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-18h]
  __int64 *v9; // [rsp+48h] [rbp-10h]
  const void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v4 = **(_QWORD **)(a2 + 8);
  v12 = 0LL;
  v11 = v4;
  v8 = &v11;
  v9 = &v12;
  *(_QWORD *)&v7 = &v11;
  *((_QWORD *)&v7 + 1) = &v12;
  v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_>(
         *(_QWORD *)a2,
         &v7);
  if ( v5 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v5, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
