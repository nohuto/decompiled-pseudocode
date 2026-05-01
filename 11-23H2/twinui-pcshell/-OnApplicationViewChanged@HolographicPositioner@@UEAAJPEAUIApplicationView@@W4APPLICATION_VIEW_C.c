/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180152FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18005CE70 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180153188 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18016BDA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x1804A9170 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1804A923C (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x1804A9308 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1804A93D4 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1804A97E0 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1804AE684 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1804AEBF4 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AEF1C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1804AFAA4 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B0108 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B01F8 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B02E8 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, struct IWin32ApplicationView **),
        int a3)
{
  void (__fastcall *v6)(_QWORD, GUID *, struct IWin32ApplicationView **); // rbx
  BOOL v7; // ebx
  struct IWin32ApplicationView *v9; // rbx
  __int64 v10; // rcx
  struct IWin32ApplicationView *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  struct IWin32ApplicationView *v21; // r8
  HolographicPositioner *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  struct IWin32ApplicationView *v34[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWin32ApplicationView *v36; // [rsp+50h] [rbp+20h] BYREF
  void (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+28h] BYREF

  v37 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( a2 )
  {
    v36 = 0LL;
    v6 = (*a2)[33];
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
    v7 = ((int (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), struct IWin32ApplicationView **))v6)(
           a2,
           &v36) >= 0
      && (*(__int64 (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v36 + 24LL))(v36) == 5;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
    if ( !v7 )
    {
      if ( a3 )
      {
        if ( (unsigned int)(a3 - 7) >= 2 )
          return 0LL;
        v34[0] = 0LL;
        (**a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v34);
        v9 = v34[0];
        if ( v34[0] )
        {
          if ( IsHolographicWin32SlatesFeatureEnabled() && !*(_DWORD *)(a1 + 272) )
          {
            LODWORD(v36) = 1;
            if ( (unsigned __int8)_QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                                    v10,
                                    &v36) )
            {
              LODWORD(v36) = 6;
              if ( ((int (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), struct IWin32ApplicationView **))(*a2)[50])(
                     a2,
                     &v36) >= 0
                && !(_DWORD)v36 )
              {
                v33 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                        (HolographicPositioner *)(a1 - 176),
                        (struct IApplicationView *)a2,
                        v9,
                        0);
                v13 = v33;
                if ( v33 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8C7,
                    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                    (const char *)(unsigned int)v33);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F5,
                    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                    (const char *)v13);
                  v15 = (__int64 *)v34;
                  goto LABEL_25;
                }
              }
            }
          }
          v9 = v34[0];
        }
        if ( v9 )
          (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
        return 0LL;
      }
      v36 = 0LL;
      (**a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v36);
      v11 = v36;
      if ( v36 )
      {
        v12 = HolographicPositioner::_OnUnmanagedWin32ViewAdded(
                (HolographicPositioner *)(a1 - 176),
                (struct IApplicationView *)a2,
                v36);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1EC,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
          v15 = (__int64 *)&v36;
LABEL_25:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
          return v13;
        }
        v11 = v36;
      }
      if ( v11 )
        (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
      return 0LL;
    }
    if ( !a3 )
    {
      LODWORD(v36) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
      LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v31, v32, &v36);
      return 0LL;
    }
    v16 = a3 - 1;
    if ( !v16 )
    {
      LODWORD(v36) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
      LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v29, v30, &v36);
      return 0LL;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      LODWORD(v36) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
      LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v27, v28, &v36);
      HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 176), (struct IApplicationView *)a2);
      return 0LL;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      LODWORD(v36) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing((struct IApplicationView *)a2);
      LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v24, v25, &v36);
      if ( HolographicPositioner::_IsViewWin32Slate((void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2, 6) )
      {
        v26 = HolographicPositioner::_HandleControlLostForView(
                (HolographicPositioner *)(a1 - 176),
                (struct IApplicationView *)a2);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D5,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v26);
      }
      return 0LL;
    }
    v19 = v18 - 3;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
          HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 176), (struct IApplicationView *)a2);
        return 0LL;
      }
    }
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct IWin32ApplicationView **), __int64))(*a2)[12])(
            a2,
            1LL);
    if ( (v13 & 0x80000000) == 0 )
    {
      wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v36, &v37);
      v22 = (HolographicPositioner *)(a1 - 176);
      if ( v36 )
      {
        v23 = HolographicPositioner::_OnManagedWin32AppFocusGained(v22, (struct IApplicationView *)a2, v21);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1BA,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v23);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
      HolographicPositioner::_RaiseViewFocusGained(v22, (struct IApplicationView *)a2);
      return 0LL;
    }
    v14 = 437LL;
  }
  else
  {
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x443,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    v14 = 428LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v13);
  return v13;
}
