/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1803B7720
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1803B5770 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1803B756C (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802D0B62 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     WPP_SF_ @ 0x1803A4AE0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1803A4C10 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1803A4DBC (WPP_SF_qd.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1803AC690 (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1803B2264 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1803B6158 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     WPP_SF_qqL @ 0x1803BA810 (WPP_SF_qqL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_PrepareToSwitchHelper(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // r14
  int GlomForWindow; // edi
  CAppViewManager *v16; // rcx
  int v17; // ebx
  bool v18; // bl
  int v19; // eax
  _QWORD *v20; // rcx
  USHORT v21; // dx
  int v22; // esi
  int v23; // eax
  __int64 *v24; // rdx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-E0h]
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  bool v31; // [rsp+31h] [rbp-CFh] BYREF
  struct IUnknown *v32; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v33; // [rsp+40h] [rbp-C0h] BYREF
  CAppViewManager *v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _BYTE *v38; // [rsp+70h] [rbp-90h]
  __int64 *v39; // [rsp+78h] [rbp-88h]
  _QWORD v40[40]; // [rsp+80h] [rbp-80h] BYREF

  v34 = a1;
  v37 = a5;
  v39 = a6;
  v38 = a7;
  v36 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v40,
    (__int64)"PrepareToSwitchHelper");
  v40[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v40);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, a2, a3, a4);
  v35 = 0LL;
  v14 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v30 = 0;
  v31 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v33, &v30);
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !v30 )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids,
        -2147024891);
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v32, &v31);
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v16, (struct IImmersiveApplicationInternal *)v32) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_62;
  }
  v17 = ((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[25].Release)(v33);
  v18 = ((unsigned int (__fastcall *)(struct IUnknown *))v32->lpVtbl[25].Release)(v32) == v17;
  if ( v31 )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33)
      && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
    {
      if ( (a4 & 2) == 0 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids);
        goto LABEL_47;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)v34 + 15)
                                                                                            + 104LL))(
              *((_QWORD *)v34 + 15),
              v33,
              v32,
              0LL);
      GlomForWindow = v19;
      v20 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_47:
        v24 = (__int64 *)&v32;
        v25 = 0;
        goto LABEL_56;
      }
      v21 = 20;
LABEL_46:
      WPP_SF_d(v20[2], v21, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids, v19);
      goto LABEL_47;
    }
    if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
    {
      v22 = a4 & 2;
      goto LABEL_40;
    }
    if ( !v18 )
    {
      v22 = a4 & 2;
      if ( !v22 )
      {
LABEL_29:
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids);
        if ( (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0 )
        {
          v14 = 1;
        }
        else
        {
          v14 = 0;
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)v34 + 15) + 80LL))(
                            *((_QWORD *)v34 + 15),
                            v32);
        }
        *v36 = 1;
        goto LABEL_47;
      }
LABEL_40:
      v14 = (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0;
      if ( v22 != 2 )
        goto LABEL_47;
      if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33) )
        *v36 = 1;
      v19 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)v34 + 15)
                                                                                            + 104LL))(
              *((_QWORD *)v34 + 15),
              v33,
              v32,
              0LL);
      GlomForWindow = v19;
      v20 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_47;
      v21 = 22;
      goto LABEL_46;
    }
    if ( (a4 & 2) == 0 )
      goto LABEL_29;
    v23 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)v34 + 15)
                                                                                           + 104LL))(
            *((_QWORD *)v34 + 15),
            v32,
            v33,
            v37);
    GlomForWindow = v23;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids, v23);
  }
  else if ( (unsigned int)SHIsSameObject(v33, v32) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids);
  }
  else
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)v34 + 15)
                                                                                                 + 96LL))(
            *((_QWORD *)v34 + 15),
            a3,
            v32,
            v33,
            v37);
    GlomForWindow = v26;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v29) = v26;
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids, a2, v29);
    }
  }
  v25 = 1;
  v24 = (__int64 *)&v33;
LABEL_56:
  Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v35, v24);
  if ( GlomForWindow >= 0 )
  {
    if ( v14 )
    {
      *v38 = 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids);
    }
    v27 = v35;
    v35 = 0LL;
    *v39 = v27;
    GlomForWindow = v25;
  }
LABEL_62:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v40, GlomForWindow);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
  CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v40);
  return (unsigned int)GlomForWindow;
}
