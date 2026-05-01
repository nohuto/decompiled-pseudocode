/*
 * XREFs of ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803DA414 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA8E4 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803DAD7C (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180082C2C (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x180083590 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall BroadcastDVRComponent::EvaluateIfViewIsGame(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        char *a4,
        HWND *a5,
        void **a6,
        LPVOID *a7)
{
  bool v11; // di
  int (__fastcall *v12)(struct IApplicationView *, GUID *, __int64 *); // rbx
  void *v13; // rbx
  unsigned __int16 **v14; // r8
  HWND v15; // rdi
  HWND Ancestor; // rax
  int ImmersiveAppIdFromWindow; // eax
  __int64 *v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  char v21; // bl
  const unsigned __int16 *v22; // rax
  __int64 v24; // rbx
  int (__fastcall *v25)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  __int64 v27; // rbx
  int (__fastcall *v28)(__int64, __int64); // rdi
  __int64 v29; // rax
  char v30; // r14
  BroadcastDVRComponent *v31; // rcx
  __int64 v32; // rbx
  int (__fastcall *v33)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v34; // rbx
  int (__fastcall *v35)(__int64, __int64, GUID *, __int64 *); // rdi
  void *v36; // rbx
  PCWSTR StringRawBuffer; // rax
  PCWSTR v38; // rax
  void *v39; // rcx
  __int64 v40; // [rsp+40h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  void *v43; // [rsp+58h] [rbp-28h] BYREF
  __int64 v44; // [rsp+60h] [rbp-20h] BYREF
  __int64 v45; // [rsp+68h] [rbp-18h] BYREF
  __int64 v46[2]; // [rsp+70h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp+50h] BYREF
  void *v48; // [rsp+D8h] [rbp+58h] BYREF

  v46[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v46);
  v44 = 0LL;
  hwnd = 0LL;
  v43 = 0LL;
  v11 = 0;
  *(_WORD *)a3 = 0;
  *(_BYTE *)(a3 + 2) = 0;
  *a4 = 0;
  v12 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v44);
  if ( v12(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v44) < 0 )
  {
    v45 = 0LL;
    v42 = 0LL;
    v40 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(v46, &v45) < 0 )
    {
LABEL_34:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
      goto LABEL_11;
    }
    v24 = v45;
    v25 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v42);
    if ( v25(v24, AddressOf) < 0 )
    {
LABEL_33:
      v11 = 0;
      goto LABEL_34;
    }
    v48 = 0LL;
    v27 = v42;
    v28 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 32LL);
    v29 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v48);
    if ( v28(v27, v29) < 0 )
      goto LABEL_41;
    v30 = 1;
    *(_BYTE *)(a3 + 3) = 1;
    v31 = *(BroadcastDVRComponent **)(a1 + 256);
    if ( !v31
      || (*(int (__fastcall **)(BroadcastDVRComponent *, void *, __int64))(*(_QWORD *)v31 + 40LL))(v31, v48, a3) < 0 )
    {
      *(_BYTE *)a3 = 0;
    }
    LOBYTE(pv) = 0;
    if ( (int)BroadcastDVRComponent::IsExpandedResources(v31, a2, (bool *)&pv) >= 0 && (_BYTE)pv )
      *(_BYTE *)a3 = 1;
    v32 = v42;
    v33 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v42 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
    if ( v33(v32, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v40) >= 0 )
      (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v40 + 32LL))(v40, &hwnd);
    v34 = v42;
    v35 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v42 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
    if ( v35(v34, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v40) >= 0 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v40 + 32LL))(v40, &v43);
    v36 = v48;
    if ( v48 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( !(unsigned int)_o__wcsicmp(StringRawBuffer, v36) )
        goto LABEL_29;
      v36 = v48;
    }
    v38 = WindowsGetStringRawBuffer(qword_18098EFA0, 0LL);
    if ( (unsigned int)_o__wcsicmp(v38, v36) )
      v30 = 0;
LABEL_29:
    *a4 = v30;
    if ( a7 != &v48 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a7,
        v48);
      v39 = 0LL;
      v48 = 0LL;
      goto LABEL_31;
    }
LABEL_41:
    v39 = v48;
LABEL_31:
    if ( v39 )
      CoTaskMemFree(v39);
    goto LABEL_33;
  }
  v13 = 0LL;
  pv = 0LL;
  if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v44 + 24LL))(v44, &hwnd) >= 0 )
  {
    v15 = hwnd;
    Ancestor = GetAncestor(hwnd, 2u);
    if ( Ancestor )
      v15 = Ancestor;
    v43 = v15;
    v11 = 0;
  }
  if ( !*(_QWORD *)(a1 + 256) )
    goto LABEL_39;
  pv = 0LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hwnd, (HWND)&pv, v14);
  v18 = *(__int64 **)(a1 + 256);
  v19 = *v18;
  if ( ImmersiveAppIdFromWindow >= 0 )
  {
    v11 = 1;
    v13 = pv;
    if ( (*(int (__fastcall **)(__int64 *, LPVOID, __int64))(v19 + 40))(v18, pv, a3) < 0 )
      *(_BYTE *)a3 = 0;
    if ( a7 != &pv )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a7,
        v13);
      v13 = 0LL;
    }
    goto LABEL_9;
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, HWND, __int64))(v19 + 32))(v18, hwnd, a3);
  v13 = pv;
  if ( v20 < 0 )
LABEL_39:
    *(_BYTE *)a3 = 0;
LABEL_9:
  if ( v13 )
    CoTaskMemFree(v13);
LABEL_11:
  *a6 = v43;
  *a5 = hwnd;
  v21 = *a4;
  v22 = WindowsGetStringRawBuffer(*(HSTRING *)(a3 + 32), 0LL);
  GameDVRTraceProvider::BroadcastDVRComponent_EvaluateIfViewIsGame(
    hwnd,
    v43,
    *(_BYTE *)a3,
    *(_BYTE *)(a3 + 1),
    *(_BYTE *)(a3 + 3),
    v22,
    v21,
    v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v44);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v46);
}
