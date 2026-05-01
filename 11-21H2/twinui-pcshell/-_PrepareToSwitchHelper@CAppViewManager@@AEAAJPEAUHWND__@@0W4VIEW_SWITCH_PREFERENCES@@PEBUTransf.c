/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802FCBB8
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FB564 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FCA04 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800281C8 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180028794 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1802EC2B8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1802EC3E8 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1802EC594 (WPP_SF_qd.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3CF4 (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F87C0 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     WPP_SF_qqL @ 0x1802FEC08 (WPP_SF_qqL.c)
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
  int GlomForWindow; // ebx
  CAppViewManager *v16; // rcx
  int v17; // esi
  int v18; // ebx
  bool v19; // bl
  int v20; // eax
  _QWORD *v21; // rcx
  USHORT v22; // dx
  int v23; // edi
  int v24; // eax
  __int64 *v25; // rdx
  int v26; // edi
  int v27; // eax
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-E0h]
  bool v31; // [rsp+30h] [rbp-D0h] BYREF
  bool v32; // [rsp+31h] [rbp-CFh] BYREF
  struct IUnknown *v33; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  _BYTE *v38; // [rsp+60h] [rbp-A0h]
  __int64 *v39; // [rsp+68h] [rbp-98h]
  _QWORD v40[40]; // [rsp+70h] [rbp-90h] BYREF

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
  v34 = 0LL;
  v33 = 0LL;
  v31 = 0;
  v32 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v34, &v31);
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !v31 )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids,
        -2147024891);
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v33, &v32);
  v17 = GlomForWindow;
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v16, (struct IImmersiveApplicationInternal *)v33) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_62;
  }
  v18 = ((__int64 (__fastcall *)(struct IUnknown *))v34->lpVtbl[25].Release)(v34);
  v19 = ((unsigned int (__fastcall *)(struct IUnknown *))v33->lpVtbl[25].Release)(v33) == v18;
  if ( v32 )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v34->lpVtbl[16].Release)(v34)
      && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33) )
    {
      if ( (a4 & 2) == 0 )
      {
        GlomForWindow = v17;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
        goto LABEL_46;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                              + 104LL))(
              *((_QWORD **)a1 + 15),
              v34,
              v33,
              0LL);
      GlomForWindow = v20;
      v21 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v22 = 20;
LABEL_45:
        WPP_SF_d(v21[2], v22, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids, v20);
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    v23 = a4 & 2;
    if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33) )
    {
LABEL_27:
      v14 = (((__int64 (__fastcall *)(struct IUnknown *))v34->lpVtbl[11].Release)(v34) & 2) != 0;
      if ( v23 == 2 )
      {
        if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v34->lpVtbl[16].Release)(v34) )
          *v36 = 1;
        v20 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                                + 104LL))(
                *((_QWORD **)a1 + 15),
                v34,
                v33,
                0LL);
        GlomForWindow = v20;
        v21 = WPP_GLOBAL_Control;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          goto LABEL_46;
        v22 = 22;
        goto LABEL_45;
      }
      GlomForWindow = v17;
LABEL_46:
      v25 = (__int64 *)&v33;
      v26 = 0;
      goto LABEL_56;
    }
    if ( !v19 )
    {
      if ( v23 )
        goto LABEL_27;
LABEL_30:
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
      if ( (((__int64 (__fastcall *)(struct IUnknown *))v34->lpVtbl[11].Release)(v34) & 2) != 0 )
      {
        v14 = 1;
        GlomForWindow = v17;
      }
      else
      {
        v14 = 0;
        GlomForWindow = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *))(**((_QWORD **)a1 + 15) + 80LL))(
                          *((_QWORD **)a1 + 15),
                          v33);
      }
      *v36 = 1;
      goto LABEL_46;
    }
    if ( !v23 )
      goto LABEL_30;
    v24 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15)
                                                                                             + 104LL))(
            *((_QWORD **)a1 + 15),
            v33,
            v34,
            v37);
    GlomForWindow = v24;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids, v24);
  }
  else if ( (unsigned int)SHIsSameObject(v34, v33) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
    GlomForWindow = v17;
  }
  else
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD *, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15) + 96LL))(
            *((_QWORD **)a1 + 15),
            a3,
            v33,
            v34,
            v37);
    GlomForWindow = v27;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v30) = v27;
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids, a2, v30);
    }
  }
  v26 = 1;
  v25 = (__int64 *)&v34;
LABEL_56:
  Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v35, v25);
  if ( GlomForWindow >= 0 )
  {
    if ( v14 )
    {
      *v38 = 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
    }
    v28 = v35;
    v35 = 0LL;
    *v39 = v28;
    GlomForWindow = v26;
  }
LABEL_62:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v40, GlomForWindow);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
  CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v40);
  return (unsigned int)GlomForWindow;
}
