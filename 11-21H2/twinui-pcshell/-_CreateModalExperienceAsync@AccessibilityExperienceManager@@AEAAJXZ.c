/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180488704
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x180181BA0 (CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18038667C (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5100d895780d3f0a994794032c3713ad___ @ 0x180486F80 (Windows--Internal--ComTaskPool--QueueTask__lambda_5100d895780d3f0a994794032c3713ad___.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x180487834 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x180488380 (-SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180488678 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180488B80 (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  int MonitorScaleForWindow; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  int v17; // eax
  const unsigned __int16 *v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _BYTE v23[8]; // [rsp+20h] [rbp-20h] BYREF
  AccessibilityExperienceManager *v24; // [rsp+28h] [rbp-18h]
  char v25; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF
  __int64 v28; // [rsp+78h] [rbp+38h] BYREF
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 50);
  v30 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  if ( *((_QWORD *)this + 51) )
  {
    MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                              (HWND)this,
                              (enum DEVICE_SCALE_FACTOR *)this + 99);
    if ( MonitorScaleForWindow < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x275,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorScaleForWindow);
    v24 = this;
    v25 = 1;
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 108) = 0;
    *((_DWORD *)this + 109) = 0;
    if ( v2 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
      v8 = v7(v2, &v28);
      v3 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppResizeView>::operator=((__int64 *)this + 47, &v28);
        v9 = v28;
        v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 32LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
        v8 = v10(v9, &v27);
        v3 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 24LL))(v27, v23);
          v3 = v8;
          if ( v8 >= 0 )
          {
            AccessibilityExperienceManager::ExcludeWindowFromCapture(this, v11, v12, v13);
            AccessibilityExperienceManager::SetNoActivate(
              (AccessibilityExperienceManager *)((char *)this + 144),
              *((_DWORD *)this + 115) == 0x8000000);
            v14 = v27;
            v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 144LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
            v8 = v15(v14, &v29);
            v3 = v8;
            if ( v8 >= 0 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 88LL))(v29, 1023LL, 0LL);
              if ( v16 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x28E,
                  (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v16);
              v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 48LL))(v29, 1LL, 1LL);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x28F,
                  (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v17);
              v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 255LL, 16LL);
              v3 = v8;
              if ( v8 >= 0 )
              {
                v8 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                       this,
                       (struct IApplicationFrameWrapper **)this + 46,
                       v18);
                v3 = v8;
                if ( v8 >= 0 )
                {
                  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 32LL))(v29, 0LL);
                  if ( v19 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x297,
                      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v19);
                  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 72LL))(
                          v27,
                          qword_1807B3A38,
                          0LL);
                  if ( v20 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x29A,
                      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v20);
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, 2LL);
                  v3 = v8;
                  if ( v8 >= 0 )
                  {
                    v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 128LL))(v28, 1LL);
                    if ( v21 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x29F,
                        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                        (const char *)(unsigned int)v21);
                    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_5100d895780d3f0a994794032c3713ad___();
                    v3 = v8;
                    if ( v8 >= 0 )
                    {
                      v3 = 0;
                      goto LABEL_38;
                    }
                    v6 = 681LL;
                  }
                  else
                  {
                    v6 = 669LL;
                  }
                }
                else
                {
                  v6 = 661LL;
                }
              }
              else
              {
                v6 = 657LL;
              }
            }
            else
            {
              v6 = 652LL;
            }
          }
          else
          {
            v6 = 645LL;
          }
        }
        else
        {
          v6 = 642LL;
        }
      }
      else
      {
        v6 = 639LL;
      }
      v5 = (unsigned int)v8;
    }
    else
    {
      v3 = -2144927145;
      v5 = 2150040151LL;
      v6 = 638LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v5);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  return v3;
}
