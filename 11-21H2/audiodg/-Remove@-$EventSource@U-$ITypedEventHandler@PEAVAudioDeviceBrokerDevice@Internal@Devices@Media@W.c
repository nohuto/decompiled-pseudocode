/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14001E818
 * Callers:
 *     ?remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14002D900 (-remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJ.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14002D930 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     ??$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1400714E8 (--$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140071678 (--$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x14001EA4C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14001EA8C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140071B44 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v4; // rbx
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  bool v8; // r12
  __int64 v9; // r13
  __int64 v10; // r13
  int v12; // r15d
  struct IUnknown **v13; // r15
  void **v14; // rsi
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+60h] [rbp+40h] BYREF
  __int64 v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0;
  v9 = Ptr[3];
  v15 = 0LL;
  v10 = ((v9 - (__int64)v7) >> 3) - 1;
  v17 = v10;
  if ( !v10 )
  {
    v8 = *v7 == a2;
    goto LABEL_4;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v15,
          &v17);
  if ( v12 >= 0 )
  {
    v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v13 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_8:
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
      return 0LL;
    }
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v8 || a2 != *v13 )
      {
        if ( !v10 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v13, *v14++);
        --v10;
      }
      else
      {
        v8 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
LABEL_4:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v16;
    }
    goto LABEL_8;
  }
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v12;
}
