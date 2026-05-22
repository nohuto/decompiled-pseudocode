/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180115B9C
 * Callers:
 *     ?add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800B7940 (-add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU-$IT.c)
 *     ?add_StatusChanged@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180118684 (-add_StatusChanged@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAU-$ITypedEvent.c)
 *     ?add_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@6@PEAUEventRegistrationToken@@@Z @ 0x18012CD90 (-add_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHa.c)
 *     ?add_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@7@PEAUEventRegistrationToken@@@Z @ 0x180131780 (-add_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJPE.c)
 *     ?add_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18015AA70 (-add_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHan.c)
 *     ?add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@Z @ 0x180187770 (-add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180065400 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  volatile int *v11; // rdx
  int v12; // esi
  _QWORD *v14; // rax
  void **v15; // r14
  struct IUnknown **i; // rsi
  Microsoft::WRL::Details::EventTargetArray *v17; // rcx
  volatile int *v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  v21 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v20 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v19 = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          (unsigned __int64 *)&v19);
  if ( v12 >= 0 )
  {
    v14 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v15 = (void **)v14[4];
      for ( i = (struct IUnknown **)v14[2]; i != (struct IUnknown **)v14[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v20, *i, *v15);
        v14 = *(_QWORD **)a1;
        ++v15;
      }
    }
    v17 = v20;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v17, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v21, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v20);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v20,
        v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v21, v18);
    return 0LL;
  }
  else
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v20,
        v11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
      &v21,
      v11);
    return (unsigned int)v12;
  }
}
