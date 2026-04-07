/*
 * XREFs of ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C2B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18003C354 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18003E064 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?GetPixelDensity@CDWMDisplay@@QEBAMXZ @ 0x18003E1CC (-GetPixelDensity@CDWMDisplay@@QEBAMXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003E27C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18005DD64 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18005F408 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x1800AF0E8 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z.c)
 *     ?EnsureDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800B0790 (-EnsureDDisplay@CDesktopManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargetsDDisplay(CDesktopManager *this)
{
  int v2; // eax
  int SourceHandleForTarget; // ebx
  int v4; // eax
  int AllDisplaysNoRef; // eax
  char v6; // r12
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct CDWMDisplaySet *, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int *, int, struct IDCompositionRenderTargetPartner **); // rbx
  unsigned int v11; // eax
  int v12; // eax
  CDWMDisplay *v13; // rcx
  struct IDCompositionRenderTargetPartner *v14; // rbx
  __int64 (__fastcall *v15)(struct IDCompositionRenderTargetPartner *, _QWORD, void ***); // rsi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct IDCompositionRenderTargetPartner *v21; // [rsp+68h] [rbp-39h] BYREF
  struct CDWMDisplaySet *v22; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-29h] BYREF
  void *v24; // [rsp+80h] [rbp-21h] BYREF
  __int128 v25; // [rsp+88h] [rbp-19h] BYREF
  __int64 v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A8h] [rbp+7h] BYREF
  int v29; // [rsp+ACh] [rbp+Bh]
  int v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B4h] [rbp+13h]
  void **v32; // [rsp+B8h] [rbp+17h] BYREF
  void *v33; // [rsp+C0h] [rbp+1Fh] BYREF
  char v34; // [rsp+C8h] [rbp+27h]

  v22 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v24 = 0LL;
  v2 = CDesktopManager::EnsureDDisplay(this);
  SourceHandleForTarget = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x5D8u);
    goto LABEL_37;
  }
  v4 = CDesktopManager::EnumerateMonitors(this, &v22);
  SourceHandleForTarget = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5DAu);
    goto LABEL_37;
  }
  if ( v22 )
    RaiseFailFastException(0LL, 0LL, 0);
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 17), (__int64)&v25);
  SourceHandleForTarget = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x5E3u);
    goto LABEL_37;
  }
  v6 = 1;
  if ( v27 != 1 )
  {
    *((_DWORD *)this + 192) = 0;
    goto LABEL_37;
  }
  v7 = *(_QWORD *)v25;
  if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) )
  {
    v6 = 0;
  }
  else
  {
    v22 = 0LL;
    v32 = (void **)&v22;
    v33 = 0LL;
    v34 = 1;
    SourceHandleForTarget = CDDisplayManager::MakeSourceHandleForTarget(*((CDDisplayManager **)this + 95), &v33, &v23);
    if ( v34 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v32,
        v33);
    if ( SourceHandleForTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SourceHandleForTarget, 0x5F9u);
      goto LABEL_31;
    }
    v21 = 0LL;
    v8 = 2;
    if ( !CDWMDXGIEnumeration::IsWarpAdapterLuid(*((CDWMDXGIEnumeration **)this + 16), *(struct _LUID *)(v7 + 168))
      && (unsigned int)(*((_DWORD *)this + 36) - 2) > 1 )
    {
      v8 = 3;
    }
    v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
    v10 = *(__int64 (__fastcall **)(__int64, struct CDWMDisplaySet *, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int *, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v9 + 528LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    v28 = *(_DWORD *)(v7 + 32);
    v29 = *(_DWORD *)(v7 + 36);
    v11 = v10(
            v9,
            v22,
            v23,
            *(_QWORD *)(v7 + 168),
            *(_DWORD *)(v7 + 176),
            *(_DWORD *)(v7 + 204),
            *(_DWORD *)(v7 + 220),
            &v28,
            v8,
            &v21);
    v12 = FailFastIfAccessDenied(v11);
    SourceHandleForTarget = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x611u);
      goto LABEL_29;
    }
    v14 = v21;
    v15 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void ***))(*(_QWORD *)v21 + 32LL);
    v28 = *(_DWORD *)(v7 + 40);
    v29 = *(_DWORD *)(v7 + 44);
    v30 = *(_DWORD *)(v7 + 48);
    v31 = *(_DWORD *)(v7 + 52);
    CDWMDisplay::GetPixelDensity(v13);
    *(float *)&v32 = (float)*(int *)(v7 + 56);
    *((float *)&v32 + 1) = (float)*(int *)(v7 + 60);
    *(float *)&v33 = (float)*(int *)(v7 + 64);
    *((float *)&v33 + 1) = (float)*(int *)(v7 + 68);
    v16 = v15(v14, *(_QWORD *)(*(_QWORD *)(v7 + 88) + 16LL), &v32);
    SourceHandleForTarget = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x618u);
      goto LABEL_29;
    }
    v17 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD))(*(_QWORD *)v21 + 24LL))(
            v21,
            *((_QWORD *)this + 9));
    SourceHandleForTarget = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x61Au);
      goto LABEL_29;
    }
    if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v7 + 88) + 16LL)) )
    {
      v18 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v21 + 40LL))(v21);
      SourceHandleForTarget = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x61Eu);
LABEL_29:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
LABEL_31:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v22);
        goto LABEL_37;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v7, v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v22);
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
  SourceHandleForTarget = v19;
  if ( v19 >= 0 )
  {
    if ( v6 )
      CDesktopManager::UpdateMaxTextureSize(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x638u);
  }
LABEL_37:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v25);
  return (unsigned int)SourceHandleForTarget;
}
