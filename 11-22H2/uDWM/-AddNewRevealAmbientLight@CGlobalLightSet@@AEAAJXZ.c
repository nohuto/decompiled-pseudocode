/*
 * XREFs of ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18003F4F8
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FFFC (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800402D4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CGlobalLightSet::AddNewRevealAmbientLight(CGlobalLightSet *this)
{
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rsi
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, __int64, HANDLE *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  HANDLE v19; // rcx
  bool v20; // cc
  HANDLE hObject; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  int Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v23 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v22 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         &v23,
         &v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3,
      (int)hObject);
    goto LABEL_13;
  }
  v27 = 0LL;
  v5 = v22;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22 + 64LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  v7 = v6(v5, &v27);
  v4 = v7;
  if ( v7 < 0 )
  {
    v16 = 253LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7,
      (int)hObject);
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    goto LABEL_13;
  }
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v27)[7])(
         v27,
         0xFFFFFFFFLL);
  v4 = v7;
  if ( v7 < 0 )
  {
    v16 = 256LL;
    goto LABEL_17;
  }
  v28 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
  v9 = **v27;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v28);
  v10 = v9(v8, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, &v28);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10,
      (int)hObject);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v28);
    goto LABEL_20;
  }
  hObject = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v2 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v12 = v11(v2, v28, &hObject);
  v4 = v12;
  if ( v12 < 0 )
  {
    v17 = (unsigned int)v12;
    v18 = 264LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v17,
      (int)hObject);
    v19 = hObject;
    v20 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_25;
  }
  v13 = NtDCompositionSetMaterialProperty(*((_QWORD *)this + 11), 0LL, hObject);
  v4 = v13 | 0x10000000;
  if ( v13 < 0 )
  {
    v17 = v4;
    v18 = 265LL;
    goto LABEL_23;
  }
  Buffer = 0;
  v14 = v28;
  v28 = 0LL;
  v25 = v14;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), &Buffer, 0x10u, 0LL) )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      (int)hObject);
    v19 = hObject;
    v20 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_25:
    if ( v20 )
      CloseHandle(v19);
    goto LABEL_19;
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  v4 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v4;
}
