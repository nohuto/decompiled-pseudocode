/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801BD070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180049364 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1800498D8 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1803BAD20 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_1803BAD20.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x1803BAE80 (Windows--Internal--ComTaskPool--QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
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
  void *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  CApplicationFrameWrapper **v17; // rdx
  CApplicationFrameWrapper *v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  HWND v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 *v25; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v26; // [rsp+28h] [rbp-51h]
  CApplicationFrameWrapper *v27; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+38h] [rbp-41h] BYREF
  __int64 v29; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned int PropW; // [rsp+60h] [rbp-19h] BYREF
  struct HWND__ v35[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h]
  __int64 v37; // [rsp+78h] [rbp-1h]
  __int64 v38; // [rsp+80h] [rbp+7h] BYREF
  __int64 v39; // [rsp+88h] [rbp+Fh] BYREF
  char *v40; // [rsp+90h] [rbp+17h] BYREF
  HWND v41[7]; // [rsp+98h] [rbp+1Fh] BYREF
  int v42; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v43; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v44; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    v2 = CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 0, &v29);
    v42 = v2;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_15:
      if ( v2 < 0 )
      {
        if ( v2 != -2147024882 && v2 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v4,
            &v42,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            0x21Bu,
            v25,
            v26);
          v2 = v42;
        }
        if ( v2 < 0 )
          goto LABEL_82;
      }
      v30 = 0LL;
      v5 = v29;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      v2 = v6(v5, &v30);
      v42 = v2;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_32:
        if ( v2 < 0 )
        {
          if ( v2 != -2147024882 && v2 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v7,
              &v42,
              L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              0x22Bu,
              v25,
              v26);
            v2 = v42;
          }
          if ( v2 < 0 )
          {
LABEL_80:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
            if ( v2 >= 0 )
              *((_BYTE *)this + 184) = 1;
LABEL_82:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
            return (unsigned int)v2;
          }
        }
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 24LL))(v30, &v43);
        v42 = v2;
        if ( CRVPrivate::cfhImmersiveShellStartup )
        {
LABEL_49:
          if ( v2 >= 0 )
            goto LABEL_85;
          if ( v2 != -2147024882 && v2 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v8,
              &v42,
              L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              0x22Fu,
              v25,
              v26);
            v2 = v42;
          }
          if ( v2 >= 0 )
          {
LABEL_85:
            v9 = 0;
            if ( v43 )
            {
              do
              {
                v28 = 0LL;
                v10 = v30;
                v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v30 + 32LL);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
                if ( v11(v10, v9, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee, &v28) >= 0 )
                {
                  if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v28 + 24LL))(v28, &hWnd) < 0 )
                    goto LABEL_77;
                  *(_QWORD *)&v35[0].unused = 0LL;
                  v36 = 0LL;
                  v37 = 0LL;
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
                  v36 = -1LL;
                  v37 = -1LL;
                  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(
                                               (CallerIdentity *)hWnd,
                                               v35,
                                               v12);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    PropW = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                    v27 = 0LL;
                    v38 = v28;
                    v39 = v29;
                    v40 = (char *)this - 40;
                    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v27);
                    ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                                 (unsigned int)&v27,
                                                 (unsigned int)&v40,
                                                 (unsigned int)&v39,
                                                 (unsigned int)&v38,
                                                 (__int64)v35,
                                                 (__int64)&PropW);
                    if ( ImmersiveAppIdFromWindow >= 0 )
                    {
                      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                      if ( CApplicationFrameWrapper::IsManagedBy(
                             (struct IUnknown **)v27,
                             *((struct IUnknown **)this + 17)) )
                      {
                        ImmersiveAppIdFromWindow = 0;
                        v15 = *((_QWORD *)this + 9);
                        if ( v15 != *((_QWORD *)this + 11)
                          || (ImmersiveAppIdFromWindow = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                                                           (__int64)this + 64,
                                                           v15 + 1,
                                                           v14),
                              ImmersiveAppIdFromWindow >= 0) )
                        {
                          v16 = *((_QWORD *)this + 9);
                          *((_QWORD *)this + 9) = v16 + 1;
                          v17 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * v16);
                          if ( v17 )
                          {
                            *v17 = v27;
                            v18 = v27;
                            if ( v27 )
                            {
                              v19 = *((_QWORD *)v27 + 8);
                              while ( v19 >= 0 )
                              {
                                if ( (_DWORD)v19 != 0x7FFFFFFF )
                                {
                                  v20 = v19;
                                  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 8, v19 + 1, v19);
                                  if ( v20 != v19 )
                                    continue;
                                }
                                goto LABEL_71;
                              }
                              Microsoft::WRL::Details::SafeUnknownIncrementReference(
                                (Microsoft::WRL::Details *)(2 * v19 + 16),
                                (volatile int *)((unsigned __int64)v19 >> 63));
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
                    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v27);
                    if ( ImmersiveAppIdFromWindow >= 0 )
                    {
                      v21 = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                      if ( v21 )
                      {
                        if ( !IsWindow(v21) )
                        {
                          v41[0] = hWnd;
                          Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                            v23,
                            v22,
                            v24,
                            v41);
                        }
                      }
                    }
                  }
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
                  if ( ImmersiveAppIdFromWindow < 0 )
LABEL_77:
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v28);
                }
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
                ++v9;
              }
              while ( v9 < v43 );
              v2 = v42;
            }
          }
          goto LABEL_80;
        }
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v33) >= 0 )
        {
          switch ( v33 )
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
              v42 = v2;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_49;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v32) >= 0 )
      {
        switch ( v32 )
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
            v42 = v2;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_32;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v44) >= 0 )
    {
      switch ( v44 )
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
          v42 = v2;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_15;
  }
  return (unsigned int)v2;
}
