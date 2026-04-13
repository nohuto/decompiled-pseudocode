/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180060BA4
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18005B130 (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180023EEC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180051C68 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180053EA0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rdi
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING); // rdi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  signed int v19; // edx
  void **v20; // r8
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  int (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  char *v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h] BYREF
  __int64 v38; // [rsp+38h] [rbp-48h] BYREF
  int (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  char *v40; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v41; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v41 = L"microsoft-contentdeliverymanager";
  *(_QWORD *)this = 0LL;
  v37 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         (__int64)string,
         &v37);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    v5 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v6 = v37;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 56LL);
  v8 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &v41);
  v9 = v7(v6, *v8);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v9);
    v10 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v4;
  }
  v11 = v37;
  v12 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v37 + 72LL);
  if ( WindowsCreateStringReference(
         L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
         0x36u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v13 = v12(v11, string);
  v4 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
    v14 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v4;
  }
  v38 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v37)(
          v37,
          &GUID_65219584_f9cb_4ae3_81f9_a28a6ca450d9,
          &v38);
  v4 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v15);
    v16 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v4;
  }
  v39 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v38 + 24LL))(
          v38,
          &GUID_0d0e6663_2639_5a9a_9cbc_30d7d4ce533b,
          &v39);
  v4 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v18);
    v21 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
    }
    v22 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return v4;
  }
  v24 = v39;
  v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(
         v39,
         v19,
         v20);
  if ( (v4 & 0x80000000) != 0
    || (v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), char **))(*v24)[8])(v24, &v40),
        (v4 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v4);
    v33 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v33)[2])(v33);
    }
    v34 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    return v4;
  }
  if ( (_DWORD)v40 )
  {
    LODWORD(v36) = (_DWORD)v40;
    v4 = -2147483629;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x105,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x80000013LL,
      (int)"AppServiceConnectionStatus: %d",
      v36);
    v25 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
    }
    v26 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v4;
  }
  v28 = v37;
  v37 = 0LL;
  *(_QWORD *)this = v28;
  v29 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v29)[2])(v29);
  }
  v30 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return 0LL;
}
