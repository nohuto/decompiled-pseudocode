/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1800EB0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800EC5A4 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EDC10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EDC98 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // ecx
  int v7; // r14d
  void (__fastcall *v8)(struct IApplicationViewOperation *, __int64 *); // rbx
  void (__fastcall *v9)(struct IApplicationViewOperation *, __int64 *); // rbx
  int v10; // eax
  int v11; // edi
  RTL_SRWLOCK *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // r9d
  bool v20; // cf
  unsigned __int64 v21; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+6Ch] [rbp-94h]
  int v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  int v35; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v36; // [rsp+A4h] [rbp-5Ch] BYREF
  struct IImmersiveApplication *v37; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h]
  PSRWLOCK v46; // [rsp+F0h] [rbp-10h]
  _BYTE v47[48]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 168LL))(a3, &v27) < 0 )
  {
    v27 = 0;
    goto LABEL_4;
  }
  if ( v27 <= 0x11 )
  {
    v6 = 139538;
    if ( _bittest(&v6, v27) )
    {
LABEL_4:
      v7 = 0;
      if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v35) >= 0 )
        v7 = 2 - (v35 != 0);
      v29 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 152LL))(a3, v47) >= 0;
      v34 = 0LL;
      v8 = *(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
      v8(a3, &v34);
      v33 = 0LL;
      v9 = *(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 184LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      v9(a3, &v33);
      v31 = 0LL;
      v28 = (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
              a3,
              &v31,
              (char *)&v31 + 4) >= 0;
      v10 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 136LL))(
              a3,
              &v36);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8BB,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_31:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
        return (unsigned int)v11;
      }
      v45 = 0LL;
      v12 = CApplicationManagerUtility::g_pIAMGlobals;
      v46 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
      v37 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      v26 = 0LL;
      v38 = 0LL;
      v11 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
              (int)this + 416,
              (unsigned int)&v37,
              (unsigned int)&v38,
              (unsigned int)&v39);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
      if ( v11 >= 0 )
        v11 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 52) + 8 * v39))(
                *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v39),
                &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                (__int64 *)&v26);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
      if ( v11 < 0 )
      {
        v23 = (unsigned int)v11;
        v24 = 2247LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
                a3,
                &v41,
                &v40);
        v11 = v13;
        if ( v13 < 0 )
        {
          v24 = 2252LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v26 + 560))(v26, v41, v40);
          v11 = v13;
          if ( v13 < 0 )
          {
            v24 = 2253LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
                    a3,
                    &v43,
                    &v42);
            v11 = v13;
            if ( v13 < 0 )
            {
              v24 = 2257LL;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v26 + 568))(v26, v43, v42);
              v11 = v13;
              if ( v13 < 0 )
              {
                v24 = 2258LL;
              }
              else
              {
                if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 248LL))(
                       a3,
                       &v44) < 0
                  || (v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v26 + 592))(v26, v44), v11 = v13, v13 >= 0) )
                {
                  v14 = *(_QWORD *)a3;
                  v32 = 0LL;
                  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(v14 + 264))(a3, &v32) >= 0 )
                  {
                    wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::ReportUsage(
                      &`wil::Feature<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::GetImpl'::`2'::impl,
                      0LL,
                      v15);
                    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v26 + 632))(v26, v32, 0LL);
                    if ( v16 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x8E5,
                        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        (const char *)(unsigned int)v16);
                  }
                  v30 = 0LL;
                  v17 = *v26;
                  v30 = 0LL;
                  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 504))(v26, &v30);
                  v11 = v18;
                  if ( v18 < 0 )
                  {
                    v25 = 2283LL;
                  }
                  else
                  {
                    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 144LL))(v30, v36);
                    v11 = v18;
                    if ( v18 < 0 )
                    {
                      v25 = 2284LL;
                    }
                    else
                    {
                      v19 = *((_DWORD *)this + 186);
                      v20 = (_BYTE)v28 != 0;
                      LOBYTE(v28) = -(char)v28;
                      v21 = (unsigned __int64)&v31 & -(__int64)v20;
                      v20 = (_BYTE)v29 != 0;
                      LOBYTE(v29) = -(char)v29;
                      v18 = CApplicationManager::_SetViewPositionHelper(
                              (char *)this - 216,
                              v34,
                              (unsigned __int64)v47 & -(__int64)v20,
                              v33,
                              v7,
                              v19,
                              0LL,
                              v21,
                              1,
                              v27,
                              a2,
                              v26);
                      v11 = v18;
                      if ( v18 >= 0 )
                      {
                        if ( v30 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                        if ( v32 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
                        if ( v12 )
                          ReleaseSRWLockExclusive(v12);
                        v11 = 0;
LABEL_29:
                        if ( v45 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                        goto LABEL_31;
                      }
                      v25 = 2297LL;
                    }
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v25,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v18);
                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v32);
LABEL_47:
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
                  if ( v12 )
                    ReleaseSRWLockExclusive(v12);
                  goto LABEL_29;
                }
                v24 = 2264LL;
              }
            }
          }
        }
        v23 = (unsigned int)v13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)v23);
      goto LABEL_47;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x892,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
