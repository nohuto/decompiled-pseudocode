/*
 * XREFs of ??R_lambda_016b4fe22cbcaf8067ffbb75c59aa712_@@QEBAJXZ @ 0x180086650
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800909B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023F68 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180085B64 (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall _lambda_016b4fe22cbcaf8067ffbb75c59aa712_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 *); // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, HSTRING *); // rdi
  int v26; // eax
  int (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v28; // edx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  int (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  _BYTE v66[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v67; // [rsp+40h] [rbp-11h] BYREF
  __int64 v68; // [rsp+48h] [rbp-9h] BYREF
  __int64 v69; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v70; // [rsp+58h] [rbp+7h] BYREF
  __int64 v71; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v72; // [rsp+68h] [rbp+17h] BYREF
  int (__fastcall ***v73)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v74; // [rsp+78h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v67 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1800870F2LL);
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         (__int64)string,
         &v67);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v3);
    v5 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v69 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v67 + 160LL))(v67, 0LL, **a1, &v69);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v7);
    v8 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v4;
  }
  v10 = v69;
  if ( v69 )
  {
    v68 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v69 + 48LL))(v69, &v68);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v68 + 56LL))(v68, v66);
      v4 = v15;
      if ( v15 >= 0 )
      {
        while ( 1 )
        {
          if ( !v66[0] )
          {
            v35 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            v10 = v69;
            goto LABEL_49;
          }
          v72 = 0LL;
          v71 = 0LL;
          v70 = 0LL;
          v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v68 + 48LL))(v68, &v72);
          v4 = v19;
          if ( v19 < 0 )
            break;
          v20 = v72;
          v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 48LL);
          v22 = v71;
          if ( v71 )
          {
            v71 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v23 = v21(v20, &v71);
          v4 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10C,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)(unsigned int)v23);
            WindowsDeleteString(v70);
            v70 = 0LL;
            v56 = v71;
            if ( v71 )
            {
              v71 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
            }
            v57 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            }
            v58 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
            }
            v59 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
            }
            v60 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            }
            return v4;
          }
          v24 = v71;
          v25 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71 + 96LL);
          WindowsDeleteString(v70);
          v70 = 0LL;
          v26 = v25(v24, &v70);
          v4 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10C,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)(unsigned int)v26);
            WindowsDeleteString(v70);
            v70 = 0LL;
            v51 = v71;
            if ( v71 )
            {
              v71 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
            }
            v52 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
            }
            v53 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
            }
            v54 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
            }
            v55 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
            }
            return v4;
          }
          v73 = 0LL;
          (*(void (__fastcall **)(__int64, HSTRING, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v67 + 64LL))(
            v67,
            v70,
            &v73);
          v74 = 0LL;
          v27 = v73;
          v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(
                 v73,
                 v28,
                 v29);
          if ( (v4 & 0x80000000) != 0
            || (v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v27)[10])(
                       v27,
                       &v74),
                (v4 & 0x80000000) != 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10C,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)v4);
            v44 = v74;
            if ( v74 )
            {
              v74 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            }
            v45 = v73;
            if ( v73 )
            {
              v73 = 0LL;
              ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v45)[2])(v45);
            }
            WindowsDeleteString(v70);
            v70 = 0LL;
            v46 = v71;
            if ( v71 )
            {
              v71 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
            }
            v47 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
            }
            v48 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
            }
            v49 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
            }
            v50 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
            }
            return v4;
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v68 + 64LL))(v68, v66);
          v4 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10C,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)(unsigned int)v30);
            v37 = v74;
            if ( v74 )
            {
              v74 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
            }
            v38 = v73;
            if ( v73 )
            {
              v73 = 0LL;
              ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v38)[2])(v38);
            }
            WindowsDeleteString(v70);
            v70 = 0LL;
            v39 = v71;
            if ( v71 )
            {
              v71 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
            v40 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
            v41 = v68;
            if ( v68 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            }
            v42 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            }
            v43 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            }
            return v4;
          }
          v31 = v74;
          if ( v74 )
          {
            v74 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v32 = v73;
          if ( v73 )
          {
            v73 = 0LL;
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
          }
          WindowsDeleteString(v70);
          v70 = 0LL;
          v33 = v71;
          if ( v71 )
          {
            v71 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          v34 = v72;
          if ( v72 )
          {
            v72 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        WindowsDeleteString(v70);
        v70 = 0LL;
        v61 = v71;
        if ( v71 )
        {
          v71 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
        }
        v62 = v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
        }
        v63 = v68;
        if ( v68 )
        {
          v68 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        }
        v64 = v69;
        if ( v69 )
        {
          v69 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
        }
        v65 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v15);
        v16 = v68;
        if ( v68 )
        {
          v68 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v69;
        if ( v69 )
        {
          v69 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v11);
      v12 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v69;
      if ( v69 )
      {
        v69 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v67;
      if ( v67 )
      {
        v67 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    return v4;
  }
LABEL_49:
  if ( v10 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v36 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return 0LL;
}
