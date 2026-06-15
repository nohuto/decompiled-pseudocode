/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14007D980
 * Callers:
 *     ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140071808 (--$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140080FB0 (-remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventR.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x14001EA4C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14001EA8C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140071B44 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rsi
  volatile signed __int32 *v4; // rbx
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  bool v8; // r12
  __int64 v9; // r13
  __int64 v10; // r13
  int v11; // r15d
  struct IUnknown **v13; // r15
  void **v14; // rsi
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+50h] BYREF
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
    goto LABEL_21;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          (volatile signed __int32 **)&v15,
          (unsigned __int64 *)&v17);
  if ( v11 >= 0 )
  {
    v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v13 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_25:
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
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
LABEL_21:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v16;
    }
    goto LABEL_25;
  }
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v11;
}
