/*
 * XREFs of ??R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ @ 0x18002DE00
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180038790 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800247DC (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180028BFC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppListEntry@Core@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002916C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall _lambda_ab8afa584d195baf28431d185b201c0d_::operator()(_QWORD **a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  int v20; // edx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64 *); // rdi
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v29; // eax
  int v30; // edx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rdi
  int v35; // [rsp+20h] [rbp-59h]
  __int64 v36; // [rsp+30h] [rbp-49h] BYREF
  __int64 v37; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v38[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  __int64 v40; // [rsp+50h] [rbp-29h] BYREF
  __int64 v41; // [rsp+58h] [rbp-21h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-19h] BYREF
  _BYTE v43[8]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v44; // [rsp+70h] [rbp-9h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-1h] BYREF
  int v46; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+17h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v47 = 0LL;
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         v49,
         &v47);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v37 = 0LL;
    v4 = v47;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v47 + 160LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v6 = v5(v4, 0LL, **a1, &v37);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v6,
        v35);
LABEL_5:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      goto LABEL_44;
    }
    v7 = v37;
    if ( v37 )
    {
      v36 = 0LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      v9 = v8(v7, &v36);
      v3 = v9;
      if ( v9 < 0
        || (v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v36 + 56LL))(v36, v38), v3 = v9, v9 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x188,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v9,
          v35);
LABEL_9:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        goto LABEL_5;
      }
      if ( v38[0] )
      {
        v39 = 0LL;
        v10 = v36;
        v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v36 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
        v12 = v11(v10, &v39);
        v3 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x188,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v12,
            v35);
LABEL_14:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
          goto LABEL_9;
        }
        v40 = 0LL;
        v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v39;
        v14 = **v39;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
        v15 = v14(v13, &GUID_5f738b61_f86a_4917_93d1_f1ee9d3b35d9, &v40);
        v3 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x188,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v15,
            v35);
LABEL_17:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          goto LABEL_14;
        }
        v42 = 0LL;
        v16 = v40;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v40 + 64LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
        v18 = v17(v16, &v42);
        v3 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x188,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v18,
            v35);
LABEL_20:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
          goto LABEL_17;
        }
        v41 = 0LL;
        v19 = v42;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
        v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>>(
               v19,
               v20,
               v21);
        if ( v3 >= 0 )
          v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v19)[8])(
                 v19,
                 &v41);
        if ( v3 < 0 )
        {
          v22 = (unsigned int)v3;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x188,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v22,
            v35);
LABEL_26:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
          goto LABEL_20;
        }
        v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 56LL))(v41, &v46);
        v3 = v23;
        if ( v23 < 0 )
        {
          v22 = (unsigned int)v23;
          goto LABEL_25;
        }
        if ( v46 )
        {
          v44 = 0LL;
          v24 = v41;
          v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v41 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          v26 = v25(v24, 0LL, &v44);
          v3 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x188,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v26,
              v35);
LABEL_32:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
            goto LABEL_26;
          }
          v45 = 0LL;
          v27 = v44;
          v28 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v44 + 56LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
          v29 = v28(v27, &v45);
          v3 = v29;
          if ( v29 < 0 )
          {
            v32 = (unsigned int)v29;
LABEL_35:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x188,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)v32,
              v35);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
            goto LABEL_32;
          }
          v33 = v45;
          v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(
                 v45,
                 v30,
                 v31);
          if ( v3 >= 0 )
            v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v33)[8])(
                   v33,
                   v43);
          if ( v3 < 0 )
          {
            v32 = (unsigned int)v3;
            goto LABEL_35;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v3 = 0;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x188,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v2,
    v35);
LABEL_44:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
  return (unsigned int)v3;
}
