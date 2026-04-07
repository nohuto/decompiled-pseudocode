/*
 * XREFs of ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18004CEC8
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
  __int64 (__fastcall *v11)(__int64, __int64, void **); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  void *v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  int Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v21 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v20 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         &v21,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_14;
  }
  v26 = 0LL;
  v5 = v20;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v20 + 64LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  v7 = v6(v5, &v26);
  v4 = v7;
  if ( v7 < 0 )
  {
    v16 = 257LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_13;
  }
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v26)[7])(
         v26,
         0xFFFFFFFFLL);
  v4 = v7;
  if ( v7 < 0 )
  {
    v16 = 260LL;
    goto LABEL_18;
  }
  v25 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
  v9 = **v26;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v25);
  v10 = v9(v8, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, &v25);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
  v19 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v2 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v19,
    0LL);
  v12 = v11(v2, v25, &v19);
  v4 = v12;
  if ( v12 < 0 )
  {
    v17 = (unsigned int)v12;
    v18 = 268LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v17);
    goto LABEL_11;
  }
  v13 = NtDCompositionSetMaterialProperty(*((_QWORD *)this + 11), 0LL, v19);
  v4 = v13 | 0x10000000;
  if ( v13 < 0 )
  {
    v18 = 269LL;
LABEL_23:
    v17 = v4;
    goto LABEL_24;
  }
  Buffer = 0;
  v14 = v25;
  v25 = 0LL;
  v23 = v14;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), &Buffer, 0x10u, 0LL) )
  {
    v4 = -2147024882;
    v18 = 274LL;
    goto LABEL_23;
  }
  v4 = 0;
LABEL_11:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v25);
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return v4;
}
