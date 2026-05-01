/*
 * XREFs of ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180143AB0
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1801438D4 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18022E74A (-GetForegroundAppId@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x18008F050 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppIdWithAppResolverFallback(
        HANDLE Process,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  int ProcessAppId; // ebx
  __int64 *ppv; // rbx
  DWORD ProcessId; // eax
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  ProcessAppId = CallerIdentity::GetProcessAppId(Process, a2, a3);
  if ( ProcessAppId < 0 )
  {
    v9 = 0LL;
    ppv = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v9, &v10);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(ppv);
    ProcessAppId = CoCreateInstance_0(
                     &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)ppv);
    if ( ProcessAppId >= 0 )
    {
      ProcessId = GetProcessId(Process);
      ProcessAppId = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(
                       v9,
                       ProcessId,
                       a2,
                       0LL,
                       0LL,
                       0LL);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v9);
  }
  return (unsigned int)ProcessAppId;
}
