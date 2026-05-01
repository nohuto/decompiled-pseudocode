/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18053CE74
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x1801BF600 (CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802D4FA4 (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5100d895780d3f0a994794032c3713ad___ @ 0x18053B8F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5100d895780d3f0a994794032c3713ad___.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18053C0B0 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18053CAF0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18053CDE8 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18053D2F0 (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
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
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  int v13; // eax
  int v14; // eax
  const unsigned __int16 *v15; // r8
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _BYTE v20[8]; // [rsp+20h] [rbp-20h] BYREF
  AccessibilityExperienceManager *v21; // [rsp+28h] [rbp-18h]
  char v22; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF
  __int64 v26; // [rsp+80h] [rbp+40h] BYREF
  __int64 v27; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 50);
  v27 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( *((_QWORD *)this + 51) )
  {
    MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                              (HWND)this,
                              (enum DEVICE_SCALE_FACTOR *)this + 99);
    if ( MonitorScaleForWindow < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x275,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorScaleForWindow);
    v21 = this;
    v22 = 1;
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 108) = 0;
    *((_DWORD *)this + 109) = 0;
    if ( v2 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
      v8 = v7(v2, &v25);
      v3 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppResizeView>::operator=((__int64 *)this + 47, &v25);
        v9 = v25;
        v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 32LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v8 = v10(v9, &v24);
        v3 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, v20);
          v3 = v8;
          if ( v8 >= 0 )
          {
            AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
            AccessibilityExperienceManager::SetNoActivate(
              (AccessibilityExperienceManager *)((char *)this + 144),
              *((_DWORD *)this + 115) == 0x8000000);
            v11 = v24;
            v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 144LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
            v8 = v12(v11, &v26);
            v3 = v8;
            if ( v8 >= 0 )
            {
              v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v26 + 88LL))(v26, 1023LL, 0LL);
              if ( v13 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x28E,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v13);
              v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 48LL))(v26, 1LL, 1LL);
              if ( v14 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x28F,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v14);
              v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 112LL))(v24, 255LL, 16LL);
              v3 = v8;
              if ( v8 >= 0 )
              {
                v8 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                       this,
                       (struct IApplicationFrameWrapper **)this + 46,
                       v15);
                v3 = v8;
                if ( v8 >= 0 )
                {
                  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 32LL))(v26, 0LL);
                  if ( v16 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x297,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v16);
                  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 72LL))(
                          v24,
                          qword_18098D6F0,
                          0LL);
                  if ( v17 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x29A,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v17);
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 48LL))(v25, 2LL);
                  v3 = v8;
                  if ( v8 >= 0 )
                  {
                    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 128LL))(v25, 1LL);
                    if ( v18 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x29F,
                        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                        (const char *)(unsigned int)v18);
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
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v5);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
  return v3;
}
