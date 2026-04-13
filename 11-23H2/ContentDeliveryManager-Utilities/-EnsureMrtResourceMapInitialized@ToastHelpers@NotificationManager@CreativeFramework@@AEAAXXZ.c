/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800C01F4
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800BF958 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // r14
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64 *); // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  HRESULT v16; // eax
  LPVOID v17; // rbx
  __int64 (__fastcall *v18)(LPVOID, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rax
  int v20; // eax
  LPVOID v21; // rbx
  __int64 (__fastcall *v22)(LPVOID, GUID *, char *); // rsi
  int v23; // eax
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, GUID *, __int64 *); // rdi
  int v26; // eax
  int ppv; // [rsp+20h] [rbp-49h]
  int ppva; // [rsp+20h] [rbp-49h]
  LPVOID v29; // [rsp+30h] [rbp-39h] BYREF
  HSTRING v30; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-29h] BYREF
  __int64 v32; // [rsp+48h] [rbp-21h] BYREF
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  int v34; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v35; // [rsp+60h] [rbp-9h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1h] BYREF
  HSTRING string; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v36 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, &v36);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)ActivationFactory,
        ppv);
    v33 = 0LL;
    v4 = v36;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v36 + 128LL);
    v33 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
      0x37u,
      0x36u);
    v6 = v5(v4, *(_QWORD *)&hstringHeader.Reserved.Reserved2[16], &v33);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v6,
        ppv);
    v35 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Windows.Internal.StateRepository.Package",
      0x29u,
      0x28u);
    v7 = RoGetActivationFactory(
           *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
           &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419,
           &v35);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x170,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v7,
        ppv);
    v31 = 0LL;
    v8 = *v35;
    v31 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v8 + 208))(v35, v33, &v31);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v9,
        ppv);
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v31 + 56))(v31, &v34);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v10,
        ppv);
    if ( !v34 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x176,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070490LL,
        ppv);
    v32 = 0LL;
    v11 = *v31;
    v32 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 48))(v31, 0LL, &v32);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x178,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v12,
        ppv);
    v30 = 0LL;
    v13 = v32;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 176LL);
    WindowsDeleteString(0LL);
    v30 = 0LL;
    v15 = v14(v13, &v30);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v15,
        ppv);
    v29 = 0LL;
    v16 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v29);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v16,
        ppva);
    v17 = v29;
    v18 = *(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v29 + 40LL);
    StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
    v20 = v18(v17, StringRawBuffer);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v20,
        ppva);
    v21 = v29;
    v22 = *(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v29 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v23 = v22(v21, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 64);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x181,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v23,
        ppva);
    v24 = v29;
    v25 = *(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)v29 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v26 = v25(v24, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v2);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x182,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v26,
        ppva);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
    WindowsDeleteString(v30);
    v30 = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v32);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v36);
  }
}
