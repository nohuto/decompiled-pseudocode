/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180011A54
 * Callers:
 *     ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800119D0 (-remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken.c)
 *     ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z @ 0x180069EFC (-UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatc.c)
 *     ??$InvokeDelegates@V_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18016092C (--$InvokeDelegates@V_lambda_26e7c45e3546dfe70bac8262412ba5b5_@@U-$ITypedEventHandler@PEAVComposi.c)
 *     ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180160AB4 (--$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U-$IEventHandler@PEAUIInspectable.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000EDBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800A0E1C (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rbx
  _QWORD *Ptr; // rax
  struct IUnknown **v8; // rcx
  bool v9; // r13
  __int64 v10; // rax
  int v12; // r12d
  struct IUnknown **v13; // r12
  __int64 v14; // r14
  void **v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
  v4 = 0;
  v5 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v18 = v2;
  if ( !Ptr )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
LABEL_22:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v17);
    return v4;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0;
  v10 = Ptr[3] - (_QWORD)v8;
  v18 = 0LL;
  v16 = (v10 >> 3) - 1;
  v19 = v16;
  if ( v10 >> 3 == 1 )
  {
    v9 = *v8 == a2;
LABEL_4:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v17, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v5 = v17;
    }
    goto LABEL_8;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v18,
          (unsigned __int64 *)&v19);
  if ( v12 < 0 )
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    if ( v2 )
      ReleaseSRWLockExclusive((PSRWLOCK)v2);
    v4 = v12;
    goto LABEL_22;
  }
  v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v13 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v14 = v16;
    v15 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v14 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *v13, *v15++);
        --v14;
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    v5 = v17;
    v2 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
    goto LABEL_4;
  }
LABEL_8:
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
  if ( v2 )
    ReleaseSRWLockExclusive((PSRWLOCK)v2);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return 0LL;
}
