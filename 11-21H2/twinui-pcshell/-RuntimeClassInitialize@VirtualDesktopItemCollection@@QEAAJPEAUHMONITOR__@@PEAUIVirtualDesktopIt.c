/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A9310
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A8CB8 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18049FCD8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049FCD8.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804A9824 (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::RuntimeClassInitialize(
        VirtualDesktopItemCollection *this,
        HMONITOR a2,
        struct IVirtualDesktopItemFactory *a3,
        struct IVirtualDesktopManagerInternal *a4,
        struct IVirtualDesktopNotificationService *a5)
{
  struct IVirtualDesktop *v8; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(struct IVirtualDesktopManagerInternal *, _QWORD, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, struct IVirtualDesktop **); // rdi
  int v19; // eax
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IVirtualDesktop *v23; // [rsp+60h] [rbp+30h] BYREF
  HMONITOR v24; // [rsp+68h] [rbp+38h] BYREF
  __int64 v25; // [rsp+70h] [rbp+40h] BYREF

  v24 = a2;
  v8 = (struct IVirtualDesktop *)*((_QWORD *)this + 20);
  if ( v8 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopItemFactory *))(*(_QWORD *)a3 + 8LL))(a3);
      v8 = (struct IVirtualDesktop *)*((_QWORD *)this + 20);
    }
    v23 = v8;
    *((_QWORD *)this + 20) = a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 21, (__int64)a4);
  v9 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0(
         (_QWORD *)this + 22,
         (__int64)a5);
  v12 = v9;
  if ( v9 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v10,
      v11);
    *((_QWORD *)this + 24) = 0LL;
    v25 = 0LL;
    v13 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, _QWORD, __int64 *))(*(_QWORD *)a4 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v14 = v13(a4, *((_QWORD *)this + 24), &v25);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v25 + 24LL))(v25, &v24);
      v12 = v14;
      if ( v14 >= 0 )
      {
        v16 = 0;
        if ( (_DWORD)v24 )
        {
          while ( 1 )
          {
            v23 = 0LL;
            v17 = v25;
            v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v25 + 32LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
            v19 = v18(v17, v16, &GUID_536d3495_b208_4cc9_ae26_de8111275bf8, &v23);
            v12 = v19;
            if ( v19 < 0 )
              break;
            v19 = VirtualDesktopItemCollection::_AddDesktopItem(this, v23, v16, 1);
            v12 = v19;
            if ( v19 < 0 )
            {
              v21 = 80LL;
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
            if ( ++v16 >= (unsigned int)v24 )
              goto LABEL_16;
          }
          v21 = 79LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
        }
        else
        {
LABEL_16:
          v12 = 0;
        }
        goto LABEL_17;
      }
      v15 = 75LL;
    }
    else
    {
      v15 = 72LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v14);
LABEL_17:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    return v12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v9);
  return v12;
}
