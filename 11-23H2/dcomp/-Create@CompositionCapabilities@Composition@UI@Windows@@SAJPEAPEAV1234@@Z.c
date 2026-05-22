/*
 * XREFs of ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38
 * Callers:
 *     ?GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionCapabilities@234@@Z @ 0x18003CBC0 (-GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositi.c)
 *     ?GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICompositionCapabilities@234@@Z @ 0x18011B950 (-GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDispatcherQueue@System@Windows@@@Z @ 0x18001D624 (--4-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDispatcherQueue@S.c)
 *     ??0CompositionCapabilities@Composition@UI@Windows@@QEAA@XZ @ 0x18003CCFC (--0CompositionCapabilities@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z @ 0x18003DADC (-GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilities::Create(
        struct Windows::UI::Composition::CompositionCapabilities **a1)
{
  int CurrentDispatcherQueue; // eax
  unsigned int v3; // ebx
  struct Windows::System::IDispatcherQueue *v4; // rdi
  void *v5; // rax
  Windows::UI::Composition::CompositionCapabilities *v6; // rax
  __int64 *v7; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  const char *v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::System::IDispatcherQueue *v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  void *v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  CurrentDispatcherQueue = Windows::UI::Composition::CoreHelper::GetCurrentDispatcherQueue(&v14);
  v3 = CurrentDispatcherQueue;
  if ( CurrentDispatcherQueue < 0 )
  {
    v9 = (unsigned int)CurrentDispatcherQueue;
    v10 = 56LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncapabilities.cpp",
      (const char *)v9);
    goto LABEL_13;
  }
  v4 = v14;
  if ( !v14 )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x3D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncapabilities.cpp",
      (const char *)0x80070005LL,
      (int)"The dispatcher queue for current thread is empty.",
      v11);
LABEL_13:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    goto LABEL_7;
  }
  v15 = 0LL;
  v12 = 0LL;
  v5 = DefaultHeap::Alloc(0x58uLL);
  v16 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    v3 = -2147024882;
    v10 = 65LL;
    v9 = 2147942414LL;
    goto LABEL_12;
  }
  v6 = (Windows::UI::Composition::CompositionCapabilities *)memset_0(v5, 0, 0x58uLL);
  if ( v6 )
    v7 = (__int64 *)Windows::UI::Composition::CompositionCapabilities::CompositionCapabilities(v6);
  else
    v7 = 0LL;
  v7[1] = (__int64)&Windows::UI::Composition::CompositionCapabilities::s_InterfaceType;
  Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>::operator=(v7 + 3, (__int64)v4);
  *a1 = (struct Windows::UI::Composition::CompositionCapabilities *)v7;
  v3 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  return v3;
}
