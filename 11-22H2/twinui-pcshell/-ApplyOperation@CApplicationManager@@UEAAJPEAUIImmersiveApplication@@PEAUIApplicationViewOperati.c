/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x18000CD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000D3F4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000D61C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
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
  int First; // edi
  RTL_SRWLOCK *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // r9d
  bool v19; // cf
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-E0h]
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
  _QWORD v43[2]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v44[48]; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

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
      v29 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 152LL))(a3, v44) >= 0;
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
      First = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x884,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v10,
          v25);
        goto LABEL_24;
      }
      v43[0] = 0LL;
      v12 = CApplicationManagerUtility::g_pIAMGlobals;
      v43[1] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      v37 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v37);
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
                (char *)this - 216,
                &v37,
                &v26,
                0LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
      if ( First < 0 )
      {
        v22 = (unsigned int)First;
        v23 = 2192LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
                a3,
                &v39,
                &v38);
        First = v13;
        if ( v13 < 0 )
        {
          v23 = 2197LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v26 + 560))(v26, v39, v38);
          First = v13;
          if ( v13 < 0 )
          {
            v23 = 2198LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
                    a3,
                    &v41,
                    &v40);
            First = v13;
            if ( v13 < 0 )
            {
              v23 = 2202LL;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v26 + 568))(v26, v41, v40);
              First = v13;
              if ( v13 < 0 )
              {
                v23 = 2203LL;
              }
              else
              {
                if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 248LL))(
                       a3,
                       &v42) < 0
                  || (v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v26 + 592))(v26, v42), First = v13, v13 >= 0) )
                {
                  v14 = *(_QWORD *)a3;
                  v32 = 0LL;
                  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(v14 + 264))(a3, &v32) >= 0 )
                  {
                    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v26 + 632))(v26, v32, 0LL);
                    if ( v15 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x8AE,
                        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        (const char *)(unsigned int)v15,
                        v25);
                  }
                  v30 = 0LL;
                  v16 = *v26;
                  v30 = 0LL;
                  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v16 + 504))(v26, &v30);
                  First = v17;
                  if ( v17 < 0 )
                  {
                    v24 = 2228LL;
                  }
                  else
                  {
                    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 144LL))(v30, v36);
                    First = v17;
                    if ( v17 < 0 )
                    {
                      v24 = 2229LL;
                    }
                    else
                    {
                      v18 = *((_DWORD *)this + 186);
                      v19 = (_BYTE)v28 != 0;
                      LOBYTE(v28) = -(char)v28;
                      v20 = (unsigned __int64)&v31 & -(__int64)v19;
                      v19 = (_BYTE)v29 != 0;
                      LOBYTE(v29) = -(char)v29;
                      v17 = CApplicationManager::_SetViewPositionHelper(
                              (char *)this - 216,
                              v34,
                              (unsigned __int64)v44 & -(__int64)v19,
                              v33,
                              v7,
                              v18,
                              0LL,
                              v20,
                              1,
                              v27,
                              a2,
                              v26);
                      First = v17;
                      if ( v17 >= 0 )
                      {
                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
                        if ( v12 )
                          ReleaseSRWLockExclusive(v12);
                        First = 0;
LABEL_23:
                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v43);
LABEL_24:
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
                        return (unsigned int)First;
                      }
                      v24 = 2242LL;
                    }
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v24,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v17,
                    v25);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
LABEL_40:
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
                  if ( v12 )
                    ReleaseSRWLockExclusive(v12);
                  goto LABEL_23;
                }
                v23 = 2209LL;
              }
            }
          }
        }
        v22 = (unsigned int)v13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)v22,
        v25);
      goto LABEL_40;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85B,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)0x80070057LL,
    v25);
  return 2147942487LL;
}
