/*
 * XREFs of ??$DoInvoke@V_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@@Z @ 0x1800B6392
 * Callers:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___ @ 0x1800B65BE (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be_.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001C4DC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800B6438 (--$InvokeDelegates@V_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_@@U-$ITypedEventHandler@PEAVComposi.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_>(
        __int64 a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v4; // edi
  __int64 v6; // rbx
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 8);
  v4 = 0;
  v10 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v10, (volatile int *)a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v6 = v10;
  if ( v10 )
  {
    v9 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_d16c3ce53091cdff7fe6d9084e2b21fb_,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>>(
           &v9,
           v10,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v7);
  }
  return v4;
}
