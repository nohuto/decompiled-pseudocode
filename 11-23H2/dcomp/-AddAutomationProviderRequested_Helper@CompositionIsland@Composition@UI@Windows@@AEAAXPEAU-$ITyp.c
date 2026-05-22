/*
 * XREFs of ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x18006AB7C
 * Callers:
 *     ?add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18006B6A0 (-add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU-$ITyped.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180065EC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Wind.c)
 *     ??4?$ComPtr@VCompositionIsland@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionIsland@Composition@UI@Windows@@@Z @ 0x18006AD28 (--4-$ComPtr@VCompositionIsland@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ??4?$ComPtr@UIUiaEndpointNotifier@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AD70 (--4-$ComPtr@UIUiaEndpointNotifier@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18006ADD0 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Win_ea_18006ADD0.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180113634 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::AddAutomationProviderRequested_Helper(
        __int64 *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  _QWORD *v3; // r14
  __int64 v7; // rax
  int v8; // eax
  struct _TP_WORK *v9; // rax
  struct _TP_WORK *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  int v12; // ebx
  signed int LastError; // eax
  bool v14; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 pv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v3 = a1 + 52;
  if ( !a1[52] )
  {
    v17 = 0LL;
    v7 = *a1;
    pv = 0LL;
    *(_OWORD *)v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 304))(a1, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x658,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v8,
        v15);
    v15 = (unsigned __int64)a1[22];
    pv = v15;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionIsland>::operator=(v18, a1);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18[1]);
    v9 = CreateThreadpoolWork(Windows::UI::Composition::CompositionIsland::RegisterUIAEndpoint_Callback, &pv, 0LL);
    v10 = v9;
    if ( v9 )
    {
      SubmitThreadpoolWork(v9);
      WaitForThreadpoolWorkCallbacks(v10, 0);
      CloseThreadpoolWork(v10);
      Microsoft::WRL::ComPtr<IUiaEndpointNotifier>::operator=(v3, &v18[1]);
    }
    else
    {
      LastError = GetLastError();
      v14 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v14 = LastError < 0;
      }
      if ( v14 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x679,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
          (const char *)(unsigned int)LastError,
          v15);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18[1]);
    v11 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
  }
  if ( !a2 )
  {
    v12 = -2147024809;
LABEL_20:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x67D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)v12,
      v15);
    return;
  }
  *(_QWORD *)&v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  v12 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *>>(
          a2,
          &v15);
  if ( v12 >= 0 )
  {
    if ( (_QWORD)v15 )
      v12 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
              (__int64)(a1 + 49),
              (struct IUnknown *)v15,
              *(void **)(*(_QWORD *)a2 + 24LL),
              a3);
    else
      v12 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  if ( v12 < 0 )
    goto LABEL_20;
}
