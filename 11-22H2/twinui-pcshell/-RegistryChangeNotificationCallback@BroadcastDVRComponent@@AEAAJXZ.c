/*
 * XREFs of ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800A8860
 * Callers:
 *     ?StaticRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x1801BF860 (-StaticRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800A7798 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x180148EDC (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1801490A8 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95_____lambda_ada185189abb389ce449ddc8fe061d95___ @ 0x180182B1C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ada185189abb3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::RegistryChangeNotificationCallback(BroadcastDVRComponent *this)
{
  char v2; // si
  char v3; // bl
  unsigned int v4; // esi
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  char v10; // al
  char v11[8]; // [rsp+30h] [rbp-10h] BYREF
  BroadcastDVRComponent *v12; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v14; // [rsp+80h] [rbp+40h] BYREF
  BroadcastDVRComponent *v15; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v2 = 0;
  v3 = 0;
  GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnEntry(
    *((_BYTE *)this + 445),
    *((_BYTE *)this + 433),
    *((_BYTE *)this + 434),
    *((_BYTE *)this + 435));
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"AppCaptureEnabled",
              &v14) >= 0 )
  {
    if ( !*((_BYTE *)this + 445) )
    {
      if ( !v14 )
        goto LABEL_28;
      v2 = 1;
    }
    v10 = 1;
    if ( v14 )
    {
LABEL_29:
      *((_BYTE *)this + 445) = v10;
      goto LABEL_2;
    }
LABEL_28:
    v10 = 0;
    goto LABEL_29;
  }
LABEL_2:
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"HistoricalCaptureEnabled",
              &v14) < 0 )
    goto LABEL_3;
  if ( !*((_BYTE *)this + 433) )
  {
    if ( !v14 )
    {
LABEL_37:
      *((_BYTE *)this + 433) = 0;
      goto LABEL_3;
    }
    v3 = 1;
  }
  if ( !v14 )
    goto LABEL_37;
  *((_BYTE *)this + 433) = 1;
  if ( v2 )
    v3 = 1;
LABEL_3:
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"HistoricalCaptureOnBatteryAllowed",
              &v14) >= 0 )
    *((_BYTE *)this + 434) = v14 != 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"HistoricalCaptureOnWirelessDisplayAllowed",
              &v14) >= 0 )
    *((_BYTE *)this + 435) = v14 != 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"MicrophoneCaptureEnabled",
              &v14) >= 0 )
    *((_BYTE *)this + 449) = v14 != 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"CameraCaptureEnabledByDefault",
              &v14) >= 0 )
    *((_BYTE *)this + 450) = v14 != 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Broadcast\\GlobalConfig",
              L"MicrophoneCaptureEnabledByDefault",
              &v14) >= 0 )
    *((_BYTE *)this + 451) = v14 != 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Broadcast\\GlobalConfig",
              L"CameraCaptureEnabledByDefault",
              &v14) >= 0 )
    *((_BYTE *)this + 452) = v14 != 0;
  v11[0] = v3;
  v12 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v4 = *((_DWORD *)this + 60);
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95_____lambda_ada185189abb389ce449ddc8fe061d95___(
                    &v15,
                    v11);
  v6 = *v5;
  *v5 = 0LL;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  SHTaskPoolQueueTask(3LL, 2LL, v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v12 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v12 + 16LL))(v12);
  v7 = GameDVR_OutputDebug::Initialize();
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x46B,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v7,
      v6);
  v8 = RegNotifyChangeKeyValue(*((HKEY *)this + 47), 1, 0x10000004u, *((HANDLE *)this + 49), 1);
  GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnExit(
    *((_BYTE *)this + 445),
    *((_BYTE *)this + 433),
    *((_BYTE *)this + 434),
    *((_BYTE *)this + 435));
  (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return v8;
}
