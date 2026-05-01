/*
 * XREFs of ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18069F978
 * Callers:
 *     ??R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ @ 0x180250390 (--R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017CF0C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@CanPinToTaskbar@TaskbarPinningTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1806998D8 (--$-0$$V@CanPinToTaskbar@TaskbarPinningTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18069A374 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18069A410 (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z @ 0x18069A4A8 (--$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z.c)
 *     ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x18069E9F8 (--1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1806A2E8C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarPinHelper::CanPinToTaskbar(TaskbarPinHelper *this, struct IShellItem *a2, bool *a3)
{
  char v5; // dl
  int v6; // eax
  unsigned int v7; // ebx
  char v8; // bl
  unsigned int v9; // edx
  void **v10; // rax
  struct IShellItem **v11; // r8
  struct IShellItemVtbl *lpVtbl; // rbx
  __int64 (__fastcall *v13)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *); // rdi
  int v14; // eax
  HRESULT v15; // eax
  __int64 v16; // rdx
  char v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B0h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+68h] [rbp-98h] BYREF
  IShellItem v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[320]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LOBYTE(a2->lpVtbl) = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar)
    && !(unsigned int)SHWindowsPolicy(&POLID_TaskbarNoPinnedList) )
  {
    memset_0(v25, 0, sizeof(v25));
    TaskbarPinningTelemetry::CanPinToTaskbar::CanPinToTaskbar((__int64)v25, v5);
    v24 = 0LL;
    v6 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
           (unsigned int)&v24,
           (_DWORD)this,
           0,
           (unsigned int)&`TaskbarPinHelper::CanPinToTaskbar'::`2'::propKeys,
           3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
        (const char *)(unsigned int)v6);
LABEL_28:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar((TaskbarPinningTelemetry::CanPinToTaskbar *)v25);
      return v7;
    }
    v8 = 0;
    v18[0] = 0;
    v19 = PKEY_AppUserModel_HostEnvironment;
    v20 = 14;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>(&v24, &v19, v22) < 0
      || (unsigned int)(v22[0] - 1) > 1 )
    {
      v8 = 1;
    }
    else
    {
      pv = 0LL;
      v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
      v19 = PKEY_AppUserModel_PackageInstallPath;
      v20 = 15;
      if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
                  &v24,
                  &v19,
                  (unsigned __int16 **)v10) >= 0 )
      {
        if ( !pv || (v8 = 1, !*(_WORD *)pv) )
          v8 = 0;
        v18[0] = v8;
      }
      TaskbarPinningTelemetry::CanPinToTaskbar::ImmersiveAppInstalled<bool &>((__int64)v25, v18);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v8 )
    {
      v23.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v23);
      if ( TaskbarPinHelper::GetTaskbarPinnableItem(this, &v23, v11) >= 0 )
      {
        *(_QWORD *)v22 = 0LL;
        lpVtbl = v23.lpVtbl;
        v13 = (__int64 (__fastcall *)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *))*((_QWORD *)v23.lpVtbl->QueryInterface + 3);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
        v14 = v13(lpVtbl, 0LL, &BHID_DataObject, &GUID_0000010e_0000_0000_c000_000000000046, v22);
        v7 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x88,
            (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v14);
LABEL_19:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v23);
          goto LABEL_28;
        }
        pv = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pv);
        v15 = CoCreateInstance(&CLSID_TaskbandPin, 0LL, 1u, &GUID_bdb5b98e_c3eb_4245_a7eb_ac74965f23ad, &pv);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 139LL;
LABEL_22:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pv);
          goto LABEL_19;
        }
        v15 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)pv + 40LL))(pv, *(_QWORD *)v22, 10LL);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 142LL;
          goto LABEL_22;
        }
        LOBYTE(a2->lpVtbl) = v15 != 1;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pv);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v23);
    }
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25, v9);
    v7 = 0;
    goto LABEL_28;
  }
  return 2147942405LL;
}
