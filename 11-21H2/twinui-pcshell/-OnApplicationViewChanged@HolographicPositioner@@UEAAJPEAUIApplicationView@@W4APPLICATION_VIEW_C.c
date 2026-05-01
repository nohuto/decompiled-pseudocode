/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180032720 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800982E0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18009B388 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x18009EC04 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x1803CC18C (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1803CC234 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x1803CC2DC (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1803CC384 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803D17A8 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1803D1D18 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D2038 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1803D2BD8 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D323C (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D332C (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D341C (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, struct IWin32ApplicationView **),
        int a3)
{
  void (__fastcall *v6)(_QWORD, GUID *, struct IWin32ApplicationView **); // rbx
  __int64 *AddressOf; // rax
  BOOL v8; // ebx
  struct IWin32ApplicationView *v10; // rbx
  struct IWin32ApplicationView *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  struct IWin32ApplicationView *v16; // r8
  HolographicPositioner *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  struct IWin32ApplicationView *v29[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWin32ApplicationView *v31; // [rsp+50h] [rbp+20h] BYREF
  void (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+28h] BYREF

  v32 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( a2 )
  {
    v31 = 0LL;
    v6 = (*a2)[33];
    AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v31);
    v8 = ((int (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), __int64 *))v6)(
           a2,
           AddressOf) >= 0
      && (*(__int64 (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v31 + 24LL))(v31) == 5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    if ( !v8 )
    {
      if ( a3 )
      {
        if ( (unsigned int)(a3 - 7) > 1 )
          return 0LL;
        v29[0] = 0LL;
        (**a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v29);
        v10 = v29[0];
        if ( v29[0] )
        {
          if ( IsHolographicWin32SlatesFeatureEnabled() )
          {
            if ( HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)(a1 - 184)) )
            {
              LODWORD(v31) = 6;
              if ( ((int (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), struct IWin32ApplicationView **))(*a2)[50])(
                     a2,
                     &v31) >= 0
                && !(_DWORD)v31 )
              {
                v28 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                        (HolographicPositioner *)(a1 - 184),
                        (struct IApplicationView *)a2,
                        v10,
                        0);
                v13 = v28;
                if ( v28 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8D3,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                    (const char *)(unsigned int)v28);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F7,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                    (const char *)v13);
                  v15 = (__int64 *)v29;
                  goto LABEL_25;
                }
              }
            }
          }
          v10 = v29[0];
        }
        if ( v10 )
          (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
        return 0LL;
      }
      v31 = 0LL;
      (**a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v31);
      v11 = v31;
      if ( v31 )
      {
        v12 = HolographicPositioner::_OnUnmanagedWin32ViewAdded(
                (HolographicPositioner *)(a1 - 184),
                (struct IApplicationView *)a2,
                v31);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1EE,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
          v15 = (__int64 *)&v31;
LABEL_25:
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v15);
          return v13;
        }
        v11 = v31;
      }
      if ( v11 )
        (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
      return 0LL;
    }
    switch ( a3 )
    {
      case 0:
        LODWORD(v31) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
        LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v26, v27, &v31);
        return 0LL;
      case 1:
        LODWORD(v31) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
        LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v24, v25, &v31);
        return 0LL;
      case 2:
        LODWORD(v31) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
        LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v22, v23, &v31);
        HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 184), (struct IApplicationView *)a2);
        return 0LL;
      case 4:
        LODWORD(v31) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
        LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v19, v20, &v31);
        if ( HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6) )
        {
          v21 = HolographicPositioner::_HandleControlLostForView(
                  (HolographicPositioner *)(a1 - 184),
                  (struct IApplicationView *)a2);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1D7,
              (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v21,
              (int)v29[0]);
        }
        return 0LL;
    }
    if ( a3 <= 6 )
      return 0LL;
    if ( a3 > 8 )
    {
      if ( a3 == 9 )
        HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 184), (struct IApplicationView *)a2);
      return 0LL;
    }
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), __int64))(*a2)[12])(
            a2,
            1LL);
    if ( (v13 & 0x80000000) == 0 )
    {
      wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v31, &v32);
      v17 = (HolographicPositioner *)(a1 - 184);
      if ( v31 )
      {
        v18 = HolographicPositioner::_OnManagedWin32AppFocusGained(v17, (struct IApplicationView *)a2, v16);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1BC,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v18,
            (int)v29[0]);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
      HolographicPositioner::_RaiseViewFocusGained(v17, (struct IApplicationView *)a2);
      return 0LL;
    }
    v14 = 439LL;
  }
  else
  {
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44F,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    v14 = 430LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v13);
  return v13;
}
