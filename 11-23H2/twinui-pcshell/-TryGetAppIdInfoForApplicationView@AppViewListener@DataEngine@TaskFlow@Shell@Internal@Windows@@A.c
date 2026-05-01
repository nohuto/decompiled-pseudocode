/*
 * XREFs of ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1804A4CBC
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C28D0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x1802D6056 (-DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AW4AppIdKin.c)
 *     ??$FailedToRetreiveAppIdInfo@J@TaskFlowDataEngineTelemetry@@SAX$$QEAJ@Z @ 0x1804A2A00 (--$FailedToRetreiveAppIdInfo@J@TaskFlowDataEngineTelemetry@@SAX$$QEAJ@Z.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1804A37D4 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DWORD a4)
{
  int v6; // edi
  __int64 v7; // rcx
  char *v8; // rbx
  unsigned __int16 **v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r9d
  signed int LastError; // eax
  signed int v14; // eax
  void *v16; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v17; // [rsp+28h] [rbp-D8h] BYREF
  DWORD dwSize[4]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR ExeName[264]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v20[2088]; // [rsp+250h] [rbp+150h] BYREF

  v17 = 0LL;
  v6 = -1;
  if ( (*(int (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)a3 + 136LL))(a3, &v17) >= 0 )
  {
    v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v7, v17);
    goto LABEL_17;
  }
  if ( !a4 )
    goto LABEL_17;
  v8 = (char *)OpenProcess(0x1000u, 0, a4);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v8, &v17, v9) < 0 )
    {
      dwSize[0] = 260;
      memset_0(ExeName, 0, 0x208uLL);
      if ( QueryFullProcessImageNameW(v8, 0, ExeName, dwSize) )
      {
        memset_0(v20, 0, 0x1048uLL);
        EncodeCommonRelativePath(v20, v11, ExeName, v12);
        wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v16,
          (__int64)v20,
          -1LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v17,
          v16);
        v6 = 2;
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        LODWORD(v16) = LastError;
        TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long>((int *)&v16);
      }
    }
    else
    {
      v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v10, v17);
    }
LABEL_16:
    CloseHandle(v8);
    goto LABEL_17;
  }
  v14 = GetLastError();
  if ( v14 > 0 )
    v14 = (unsigned __int16)v14 | 0x80070000;
  LODWORD(v16) = v14;
  TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long>((int *)&v16);
  if ( v8 && v8 != (char *)-1LL )
    goto LABEL_16;
LABEL_17:
  *(_DWORD *)a2 = v6;
  *(_QWORD *)(a2 + 8) = v17;
  return a2;
}
