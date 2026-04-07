/*
 * XREFs of ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18004D734
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004D0B8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D9E8 (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     ?InternalRelease@?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C73C (-InternalRelease@-$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CGlobalLightSet::AddNewSharedDistantLightWithType(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v13; // eax
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rsi
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64, void **); // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  void *v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h] BYREF
  int v32; // [rsp+58h] [rbp-18h]
  int Buffer; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v6 = a2;
  v8 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v30[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v29 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         v30,
         &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  v27 = 0LL;
  v11 = v29;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v29 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  v13 = v12(v11, &v27);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 89LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_14;
  }
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v27)[9])(v27, a3);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 90LL;
    goto LABEL_20;
  }
  v14 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v27;
  v31 = *a4;
  v32 = *((_DWORD *)a4 + 2);
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v14[11])(v27, &v31);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 91LL;
    goto LABEL_20;
  }
  v26 = 0LL;
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
  v16 = **v27;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v26);
  v17 = v16(v15, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, &v26);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_13;
  }
  v28 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v8 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v28,
    0LL);
  v19 = v18(v8, v26, &v28);
  v10 = v19;
  if ( v19 < 0 )
  {
    v24 = (unsigned int)v19;
    v25 = 99LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v24);
    goto LABEL_12;
  }
  v20 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v6, v28);
  v10 = v20 | 0x10000000;
  if ( v20 < 0 )
  {
    v25 = 100LL;
LABEL_25:
    v24 = v10;
    goto LABEL_26;
  }
  Buffer = v6;
  v21 = v26;
  v26 = 0LL;
  v34 = v21;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
  {
    v10 = -2147024882;
    v25 = 105LL;
    goto LABEL_25;
  }
  v10 = 0;
LABEL_12:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v28);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v26);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
  return v10;
}
