/*
 * XREFs of ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180067D64
 * Callers:
 *     ?add_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800680D0 (-add_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHandler@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180065EC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Wind.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180067654 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@P.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC (-RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatche.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilities::add_Changed(
        struct Windows::UI::Composition::CompositionCapabilities *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_12:
    v9 = (unsigned int)v6;
    v10 = 217LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncapabilities.cpp",
      (const char *)v9);
    goto LABEL_9;
  }
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>>(
         a2,
         (__int64 **)&v12);
  if ( v6 >= 0 )
  {
    if ( v12 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             (__int64)a1 + 48,
             v12,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  if ( v6 < 0 )
    goto LABEL_12;
  if ( Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((char *)a1 + 48) == 1 )
  {
    v7 = Windows::UI::Composition::CompositionCapabilitiesRegistration::RegisterForEvents(
           *((struct Windows::System::IDispatcherQueue **)a1 + 3),
           a1,
           (struct EventRegistrationToken *)a1 + 4);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = (unsigned int)v7;
      v10 = 223LL;
      goto LABEL_14;
    }
  }
  v6 = 0;
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return (unsigned int)v6;
}
