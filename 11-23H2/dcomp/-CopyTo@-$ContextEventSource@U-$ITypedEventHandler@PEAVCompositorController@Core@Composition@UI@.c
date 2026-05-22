/*
 * XREFs of ?CopyTo@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAV123@@Z @ 0x1800B668C
 * Callers:
 *     ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ @ 0x1800804CC (-FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180065400 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::CopyTo(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int v2; // ebp
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  struct IUnknown **i; // rsi
  volatile int *v8; // rdx
  Microsoft::WRL::Details::EventTargetArray *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( *(_QWORD *)a2 )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( a1->Ptr )
  {
    v10 = 0LL;
    v5 = a1 + 1;
    AcquireSRWLockExclusive(a1 + 1);
    v11 = (__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           &v10,
           (unsigned __int64 *)&v11);
    v2 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x2CBu);
    }
    else
    {
      for ( i = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2); i != *((struct IUnknown ***)a1->Ptr + 3); ++i )
        Microsoft::WRL::Details::EventTargetArray::AddTail(v10, *i, 0LL);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v5 = (RTL_SRWLOCK *)(a2 + 8);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 8));
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a2, (char *)&v10);
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v10,
        v8);
  }
  return v2;
}
