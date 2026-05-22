/*
 * XREFs of ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x1800650E8
 * Callers:
 *     ?remove_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180065060 (-remove_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToke.c)
 *     ?remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z @ 0x180197A1C (-remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000EDBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800A0E1C (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        __int64 a2,
        struct IUnknown *a3)
{
  Microsoft::WRL::Details::EventTargetArray *v3; // r14
  unsigned int v5; // esi
  __int64 v6; // rbx
  _QWORD *Ptr; // rax
  struct IUnknown **v10; // rcx
  bool v11; // r13
  __int64 v12; // rax
  int v13; // r12d
  struct IUnknown **v14; // r12
  __int64 v15; // r14
  void **v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h]
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  v20 = a2;
  v3 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
  v5 = 0;
  v6 = 0LL;
  v21 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v19 = v3;
  if ( !Ptr )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v19);
LABEL_3:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v21);
    return v5;
  }
  v10 = (struct IUnknown **)Ptr[2];
  v11 = 0;
  v12 = Ptr[3] - (_QWORD)v10;
  v19 = 0LL;
  v18 = (v12 >> 3) - 1;
  v17 = v18;
  if ( v12 >> 3 == 1 )
  {
    v11 = *v10 == a3;
LABEL_6:
    if ( v11 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v21, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v19);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v6 = v21;
    }
    goto LABEL_10;
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v19,
          (unsigned __int64 *)&v17);
  if ( v13 < 0 )
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    if ( v3 )
      ReleaseSRWLockExclusive((PSRWLOCK)v3);
    v5 = v13;
    goto LABEL_3;
  }
  v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v14 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v15 = v18;
    v16 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v11 || a3 != *v14 )
      {
        if ( !v15 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v19, *v14, *v16++);
        --v15;
      }
      else
      {
        v11 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v6 = 0LL;
    v3 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
    goto LABEL_6;
  }
LABEL_10:
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
  if ( v3 )
    ReleaseSRWLockExclusive((PSRWLOCK)v3);
  if ( v6 )
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v20, v6);
  return 0LL;
}
