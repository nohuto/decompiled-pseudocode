/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18017FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18008C708 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1800C0BA8 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800C3894 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1802FF100 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_1802FF100.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x1802FF260 (Windows--Internal--ComTaskPool--QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  int v2; // ebx
  CCriticalFailureHandler *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rdi
  unsigned __int16 **v12; // r8
  int ImmersiveAppIdFromWindow; // ebx
  volatile int *v14; // rdx
  volatile int *v15; // rdx
  void *v16; // r8
  __int64 v17; // rdx
  CApplicationFrameWrapper **v18; // rdx
  CApplicationFrameWrapper *v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  HWND v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 *v26; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v27; // [rsp+28h] [rbp-51h]
  CApplicationFrameWrapper *v28; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h] BYREF
  __int64 v31; // [rsp+48h] [rbp-31h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned int PropW; // [rsp+60h] [rbp-19h] BYREF
  struct HWND__ v36[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h]
  __int64 v38; // [rsp+78h] [rbp-1h]
  __int64 v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh] BYREF
  char *v41; // [rsp+90h] [rbp+17h] BYREF
  HWND v42[7]; // [rsp+98h] [rbp+1Fh] BYREF
  int v43; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v44; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    v2 = CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 0, &v30);
    v43 = v2;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_15:
      if ( v2 < 0 )
      {
        if ( v2 != -2147024882 && v2 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v4,
            &v43,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            0x21Bu,
            v26,
            v27);
          v2 = v43;
        }
        if ( v2 < 0 )
          goto LABEL_82;
      }
      v31 = 0LL;
      v5 = v30;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
      v2 = v6(v5, &v31);
      v43 = v2;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_32:
        if ( v2 < 0 )
        {
          if ( v2 != -2147024882 && v2 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v7,
              &v43,
              L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              0x22Bu,
              v26,
              v27);
            v2 = v43;
          }
          if ( v2 < 0 )
          {
LABEL_80:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
            if ( v2 >= 0 )
              *((_BYTE *)this + 184) = 1;
LABEL_82:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
            return (unsigned int)v2;
          }
        }
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 24LL))(v31, &v44);
        v43 = v2;
        if ( CRVPrivate::cfhImmersiveShellStartup )
        {
LABEL_49:
          if ( v2 >= 0 )
            goto LABEL_85;
          if ( v2 != -2147024882 && v2 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v8,
              &v43,
              L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              0x22Fu,
              v26,
              v27);
            v2 = v43;
          }
          if ( v2 >= 0 )
          {
LABEL_85:
            v9 = 0;
            if ( v44 )
            {
              do
              {
                v29 = 0LL;
                v10 = v31;
                v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v31 + 32LL);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
                if ( v11(v10, v9, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee, &v29) >= 0 )
                {
                  if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v29 + 24LL))(v29, &hWnd) < 0 )
                    goto LABEL_77;
                  *(_QWORD *)&v36[0].unused = 0LL;
                  v37 = 0LL;
                  v38 = 0LL;
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
                  v37 = -1LL;
                  v38 = -1LL;
                  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, v36, v12);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    PropW = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                    v28 = 0LL;
                    v39 = v29;
                    v40 = v30;
                    v41 = (char *)this - 40;
                    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(
                      (volatile signed __int64 **)&v28,
                      v14);
                    ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                                 (unsigned int)&v28,
                                                 (unsigned int)&v41,
                                                 (unsigned int)&v40,
                                                 (unsigned int)&v39,
                                                 (__int64)v36,
                                                 (__int64)&PropW);
                    if ( ImmersiveAppIdFromWindow >= 0 )
                    {
                      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                      if ( CApplicationFrameWrapper::IsManagedBy(
                             (struct IUnknown **)v28,
                             *((struct IUnknown **)this + 17)) )
                      {
                        ImmersiveAppIdFromWindow = 0;
                        v17 = *((_QWORD *)this + 9);
                        if ( v17 != *((_QWORD *)this + 11)
                          || (ImmersiveAppIdFromWindow = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                                                           (__int64)this + 64,
                                                           v17 + 1,
                                                           v16),
                              ImmersiveAppIdFromWindow >= 0) )
                        {
                          v18 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
                          if ( v18 )
                          {
                            *v18 = v28;
                            v19 = v28;
                            if ( v28 )
                            {
                              v20 = *((_QWORD *)v28 + 8);
                              while ( v20 >= 0 )
                              {
                                if ( (_DWORD)v20 != 0x7FFFFFFF )
                                {
                                  v21 = v20;
                                  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 8, v20 + 1, v20);
                                  if ( v21 != v20 )
                                    continue;
                                }
                                goto LABEL_71;
                              }
                              Microsoft::WRL::Details::SafeUnknownIncrementReference(
                                (Microsoft::WRL::Details *)(2 * v20 + 16),
                                (volatile int *)((unsigned __int64)v20 >> 63));
                            }
                          }
                        }
                      }
                      else
                      {
                        ImmersiveAppIdFromWindow = -2147024809;
                      }
LABEL_71:
                      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                    }
                    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(
                      (volatile signed __int64 **)&v28,
                      v15);
                    if ( ImmersiveAppIdFromWindow >= 0 )
                    {
                      v22 = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                      if ( v22 )
                      {
                        if ( !IsWindow(v22) )
                        {
                          v42[0] = hWnd;
                          Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                            v24,
                            v23,
                            v25,
                            v42);
                        }
                      }
                    }
                  }
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
                  if ( ImmersiveAppIdFromWindow < 0 )
LABEL_77:
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v29);
                }
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
                ++v9;
              }
              while ( v9 < v44 );
              v2 = v43;
            }
          }
          goto LABEL_80;
        }
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v34) >= 0 )
        {
          switch ( v34 )
          {
            case 2u:
              v2 = -2023406815;
              goto LABEL_47;
            case 3u:
              v2 = -2023406814;
              goto LABEL_47;
            case 4u:
              v2 = -2147418094;
              goto LABEL_47;
            case 5u:
              v2 = -2147022986;
LABEL_47:
              v43 = v2;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_49;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v33) >= 0 )
      {
        switch ( v33 )
        {
          case 2u:
            v2 = -2023406815;
            goto LABEL_30;
          case 3u:
            v2 = -2023406814;
            goto LABEL_30;
          case 4u:
            v2 = -2147418094;
            goto LABEL_30;
          case 5u:
            v2 = -2147022986;
LABEL_30:
            v43 = v2;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_32;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v45) >= 0 )
    {
      switch ( v45 )
      {
        case 2u:
          v2 = -2023406815;
          goto LABEL_13;
        case 3u:
          v2 = -2023406814;
          goto LABEL_13;
        case 4u:
          v2 = -2147418094;
          goto LABEL_13;
        case 5u:
          v2 = -2147022986;
LABEL_13:
          v43 = v2;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_15;
  }
  return (unsigned int)v2;
}
