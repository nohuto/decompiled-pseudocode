/*
 * XREFs of ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x180112F80
 * Callers:
 *     ?remove_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180113C20 (-remove_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventReg.c)
 *     ?remove_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18012CF00 (-remove_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJUEventRegistrati.c)
 *     ?remove_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180131AE0 (-remove_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA.c)
 *     ?remove_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1801577F0 (-remove_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUEven.c)
 *     ?remove_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18015AD40 (-remove_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUEventRegistratio.c)
 *     ?remove_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180187860 (-remove_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000EDBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800A0E1C (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        __int64 a2,
        struct IUnknown *a3)
{
  Microsoft::WRL::Details::EventTargetArray *v3; // r14
  unsigned int v5; // esi
  __int64 v6; // rbx
  volatile int *v8; // rdx
  RTL_SRWLOCK v9; // rax
  struct IUnknown **v10; // rcx
  bool v11; // r13
  __int64 v12; // rax
  int v13; // r12d
  struct IUnknown **v15; // r12
  __int64 v16; // r14
  void **v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h]
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h]
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  v21 = a2;
  v3 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
  v5 = 0;
  v6 = 0LL;
  v22 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v9.Ptr = a1->Ptr;
  v20 = v3;
  if ( !v9.Ptr )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)&v20);
LABEL_11:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
      &v22,
      v8);
    return v5;
  }
  v10 = (struct IUnknown **)*((_QWORD *)v9.Ptr + 2);
  v11 = 0;
  v12 = *((_QWORD *)v9.Ptr + 3) - (_QWORD)v10;
  v20 = 0LL;
  v19 = (v12 >> 3) - 1;
  v18 = v19;
  if ( v12 >> 3 == 1 )
  {
    v11 = *v10 == a3;
LABEL_21:
    if ( v11 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v22, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v20);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v6 = v22;
    }
    goto LABEL_25;
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v20,
          (unsigned __int64 *)&v18);
  if ( v13 < 0 )
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v20,
        v8);
    if ( v3 )
      ReleaseSRWLockExclusive((PSRWLOCK)v3);
    v5 = v13;
    goto LABEL_11;
  }
  v15 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v15 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v16 = v19;
    v17 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v11 || a3 != *v15 )
      {
        if ( !v16 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v20, *v15, *v17++);
        --v16;
      }
      else
      {
        v11 = 1;
      }
      ++v15;
    }
    while ( v15 != *((struct IUnknown ***)a1->Ptr + 3) );
    v6 = 0LL;
    v3 = (Microsoft::WRL::Details::EventTargetArray *)&a1[2];
    goto LABEL_21;
  }
LABEL_25:
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v20,
      v8);
  if ( v3 )
    ReleaseSRWLockExclusive((PSRWLOCK)v3);
  if ( v6 )
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v21, v6);
  return 0LL;
}
