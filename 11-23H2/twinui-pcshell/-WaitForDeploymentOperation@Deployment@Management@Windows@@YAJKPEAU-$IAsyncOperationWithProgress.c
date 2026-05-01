/*
 * XREFs of ?WaitForDeploymentOperation@Deployment@Management@Windows@@YAJKPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@3@PEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAPEAUIDeploymentResult@123@@Z @ 0x18046B6AC
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$DelegateInvokeHelper@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@V_lambda_9a0aae7dbba35881869cec547d91271e_@@$0?0PEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@W4AsyncStatus@23ABI@@@?$DelegateArgTraits@P8?$IAsyncOperationWithProgressCompletedHandler_impl@U?$AggregateType@PEAVDeploymentResult@Deployment@Management@Windows@@PEAUIDeploymentResult@234@@Internal@Foundation@Windows@@UDeploymentProgress@Deployment@Management@4@@Foundation@Windows@@EAAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@W4AsyncStatus@23ABI@@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_9a0aae7dbba35881869cec547d91271e_@@@Z @ 0x180465DF0 (--0-$DelegateInvokeHelper@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@De.c)
 */

// Hidden C++ exception states: #wind=4
__int64 Windows::Management::Deployment::WaitForDeploymentOperation(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  __int64 v4; // rbx
  HANDLE Event; // rax
  void *v6; // rsi
  signed int v7; // eax
  signed int v8; // edi
  void *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  DWORD v11; // eax
  signed int LastError; // eax
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  __int64 v19; // [rsp+80h] [rbp+50h]
  va_list va1; // [rsp+88h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v4 = 0LL;
  v16 = 0LL;
  v15 = 0;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  v6 = Event;
  if ( Event )
  {
    v14 = (unsigned __int64)Event;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
      v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::IDeploymentResult *>,Windows::Management::Deployment::DeploymentProgress>::*)(Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,_lambda_9a0aae7dbba35881869cec547d91271e_,-1,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> *,enum ABI::Windows::Foundation::AsyncStatus>::DelegateInvokeHelper<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,_lambda_9a0aae7dbba35881869cec547d91271e_,-1,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> *,enum ABI::Windows::Foundation::AsyncStatus>(
             (__int64)v9,
             &v14);
    else
      v4 = 0LL;
    *(_QWORD *)&v14 = v4;
    if ( v4 )
    {
      v10 = **a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      v8 = v10(a2, &GUID_00000036_0000_0000_c000_000000000046, &v16);
      if ( v8 >= 0 )
      {
        v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a2)[8])(a2, v4);
        if ( v8 >= 0 )
        {
          v11 = WaitForSingleObject(v6, 0xFFFFFFFF);
          if ( v11 == 258 )
          {
            v8 = -2147023436;
          }
          else if ( v11 )
          {
            LastError = GetLastError();
            v8 = LastError;
            if ( LastError > 0 )
              v8 = (unsigned __int16)LastError | 0x80070000;
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 56LL))(v16, &v15);
            if ( v8 >= 0 )
            {
              if ( !v19
                || (v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[10])(a2),
                    v8 >= 0) )
              {
                if ( v15 == 2 )
                {
                  v8 = -2147009288;
                }
                else if ( v15 == 3 )
                {
                  LODWORD(v17) = 0;
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, (__int64 *)va);
                  if ( v8 >= 0 )
                    v8 = v17;
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
              }
            }
          }
        }
      }
    }
    else
    {
      v8 = -2147024882;
    }
    CloseHandle(v6);
  }
  else
  {
    v7 = GetLastError();
    v8 = v7;
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v8;
}
