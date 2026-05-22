/*
 * XREFs of ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C
 * Callers:
 *     ??$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVVisual@345@AEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@$$QEAPEAVVisual@567@AEA_N@Z @ 0x18011C59C (--$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVV.c)
 *     ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C (-RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z @ 0x18007E660 (-GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z @ 0x1800B7E42 (-SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4Int.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z @ 0x18015344C (-CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4.c)
 *     ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x1801615D0 (-SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::RuntimeClassInitialize(
        struct Microsoft::WRL2::ContextSession **this,
        struct Windows::UI::Composition::Visual *a2,
        char a3)
{
  struct Windows::UI::Composition::Compositor *v4; // rdx
  int NonDefaultPointerEventRouter; // eax
  int v8; // ebx
  __int64 v9; // rdx
  Windows::UI::Composition::Visual *v10; // rbx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // rax
  __int64 v14; // rbx
  struct CWeakReferenceBase **v15; // r8
  __int64 *v16; // rsi
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // rcx
  __int64 v18; // rbx
  const char *v20; // [rsp+28h] [rbp-18h]
  struct Microsoft::WRL2::ContextRuntimeClass *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IUnknown *v23; // [rsp+78h] [rbp+38h] BYREF
  struct IUnknown *v24; // [rsp+88h] [rbp+48h] BYREF

  v24 = 0LL;
  v4 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)a2 + 3);
  v23 = 0LL;
  NonDefaultPointerEventRouter = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
                                   (Windows::UI::Composition::CompositionObject *)this,
                                   v4);
  v8 = NonDefaultPointerEventRouter;
  if ( NonDefaultPointerEventRouter >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(this + 29, (volatile signed __int32 *)a2);
    v10 = this[29];
    *((_BYTE *)this + 224) = a3;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
    NonDefaultPointerEventRouter = Windows::UI::Composition::Visual::GetOrCreateNonDefaultPointerEventRouter(
                                     v10,
                                     (struct Windows::UI::Composition::ICompositionInteractionPartner **)&v24);
    v8 = NonDefaultPointerEventRouter;
    if ( NonDefaultPointerEventRouter >= 0 )
    {
      v12 = (char *)(this + 30);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 30);
      v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             this[3],
             v24,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPointerEventRouter::s_InterfaceType,
             v21);
      v13 = v21[0];
      this[30] = v21[0];
      if ( v8 < 0 )
      {
        v11 = (unsigned int)v8;
        v9 = 84LL;
        goto LABEL_6;
      }
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v13 + 3) + 456LL),
        *((_DWORD *)v13 + 32),
        17,
        2LL);
      v14 = *(_QWORD *)v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v23);
      NonDefaultPointerEventRouter = Windows::UI::Composition::CompositionPointerEventRouter::CreateAndAttachManipulationTarget(
                                       v14,
                                       0LL,
                                       &v23);
      v8 = NonDefaultPointerEventRouter;
      if ( NonDefaultPointerEventRouter >= 0 )
      {
        v15 = (struct CWeakReferenceBase **)(*(_QWORD *)v12 + 168LL);
        if ( *v15 )
        {
          v8 = -2147024809;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x6D,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
            (const char *)0x80070057LL,
            (int)"PointerEventRouter (Interaction) object already has an owner.",
            v20);
          goto LABEL_18;
        }
        NonDefaultPointerEventRouter = Windows::UI::Composition::CompositorCommon::GetWeakReferenceBase(
                                         *(Windows::UI::Composition::CompositorCommon **)(*(_QWORD *)v12 + 24LL),
                                         (struct Windows::UI::Composition::CompositionObject *)this,
                                         v15);
        v8 = NonDefaultPointerEventRouter;
        if ( NonDefaultPointerEventRouter >= 0 )
        {
          v16 = (__int64 *)(this + 31);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 31);
          NonDefaultPointerEventRouter = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                                           this[3],
                                           v23,
                                           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionManipulation::s_InterfaceType,
                                           v21);
          v17 = v21[0];
          v8 = NonDefaultPointerEventRouter;
          this[31] = v21[0];
          if ( NonDefaultPointerEventRouter >= 0 )
          {
            Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(v17, 0LL, 0LL);
            Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(*v16, 1LL, 0LL);
            Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(*v16, 2LL, 0LL);
            Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis(*v16, 0, 0);
            Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis(*v16, 1, 0);
            Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis(*v16, 2, 0);
            v18 = *v16;
            DirectComposition::CDevice::ResourceSetIntegerProperty(
              *(DirectComposition::CDevice **)(*(_QWORD *)(*v16 + 24) + 456LL),
              *(_DWORD *)(*v16 + 128),
              0,
              2LL);
            *(_DWORD *)(v18 + 152) = 2;
            v8 = 0;
            *((_DWORD *)this + 66) = 1;
            goto LABEL_18;
          }
          v9 = 115LL;
        }
        else
        {
          v9 = 110LL;
        }
      }
      else
      {
        v9 = 96LL;
      }
    }
    else
    {
      v9 = 79LL;
    }
  }
  else
  {
    v9 = 67LL;
  }
  v11 = (unsigned int)NonDefaultPointerEventRouter;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)v11);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
  return (unsigned int)v8;
}
