/*
 * XREFs of ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ @ 0x1800804CC
 * Callers:
 *     ?HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180080390 (-HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x18000C7E8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windo.c)
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18000F23C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___ @ 0x1800B65BE (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be_.c)
 *     ?CopyTo@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAV123@@Z @ 0x1800B668C (-CopyTo@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::Core::CompositorController::FireCommitNeeded_Callback(
        Windows::UI::Composition::Core::CompositorController *this)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  RTL_SRWLOCK v5; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    v2 = (RTL_SRWLOCK *)((char *)this + 80);
    if ( *((_QWORD *)this + 10) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 11);
      if ( v2->Ptr )
        v3 = (__int64)(*((_QWORD *)v2->Ptr + 3) - *((_QWORD *)v2->Ptr + 2)) >> 3;
      else
        v3 = 0LL;
      if ( v2 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(v2 + 1);
      if ( v3 )
      {
        v5.Ptr = 0LL;
        InitializeSRWLock(&SRWLock);
        InitializeSRWLock(&v7);
        if ( (int)Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::CopyTo(
                    v2,
                    &v5) < 0 )
          Microsoft::WRL2::FailFast::OutOfMemory(v4);
        v8 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
        v8 = (__int64)this + 40;
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_07cad9f52b96e0c2c95ce401b819a9be___(*((Microsoft::WRL2::ContextSession **)this + 3));
        Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
          &v5,
          *((_QWORD *)this + 3));
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
        Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(&v5);
      }
    }
  }
}
