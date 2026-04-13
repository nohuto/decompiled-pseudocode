/*
 * XREFs of ??R_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEBA@XZ @ 0x18007E088
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180084760 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800247DC (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$BlockOnCompletionAndGetResults@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@UIDeploymentResult@234@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@UIDeploymentResult@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007AA34 (--$BlockOnCompletionAndGetResults@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_::operator()(_QWORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, HSTRING, __int64 *); // rdi
  int v19; // eax
  _BYTE v21[8]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  __int64 v24; // [rsp+48h] [rbp-11h] BYREF
  __int64 v25; // [rsp+50h] [rbp-9h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1h] BYREF
  __int64 v27; // [rsp+60h] [rbp+7h] BYREF
  __int64 v28; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+70h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v31; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v29 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         v31,
         &v29);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v24 = 0LL;
    v4 = v29;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v29 + 160LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    v6 = v5(v4, 0LL, **a1, &v24);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v7 = v24;
      if ( !v24 )
      {
LABEL_20:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        v3 = 0;
        goto LABEL_21;
      }
      v23 = 0LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      v9 = v8(v7, &v23);
      v3 = v9;
      if ( v9 < 0
        || (v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 56LL))(v23, v21), v3 = v9, v9 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x121,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v9);
      }
      else
      {
        while ( 1 )
        {
          if ( !v21[0] )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
            goto LABEL_20;
          }
          v26 = 0LL;
          v25 = 0LL;
          string = 0LL;
          v10 = v23;
          v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          v12 = v11(v10, &v26);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v13 = v26;
          v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
          v12 = v14(v13, &v25);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v15 = v25;
          v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 96LL);
          WindowsDeleteString(string);
          string = 0LL;
          v12 = v16(v15, &string);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v27 = 0LL;
          v17 = v29;
          v18 = *(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v29 + 64LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          v18(v17, string, &v27);
          v28 = 0LL;
          v19 = BlockOnCompletionAndGetResults<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress,Windows::Management::Deployment::IDeploymentResult>(
                  v27,
                  &v28);
          v3 = v19;
          if ( v19 < 0
            || (v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 64LL))(v23, v21), v3 = v19, v19 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x121,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)(unsigned int)v19);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            goto LABEL_24;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x121,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_24:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  return v3;
}
