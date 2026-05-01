/*
 * XREFs of ?GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z @ 0x1807411C0
 * Callers:
 *     ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1804782B4 (-CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x18048223C (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveAppHelpers::GetNormalDisplayNameFromAppId(
        PCWSTR pszItem,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 *ppv; // rbx
  HRESULT v6; // ebx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v8, &v9);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(ppv);
  v6 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)ppv);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, const unsigned __int16 *))(*(_QWORD *)v8 + 40LL))(v8, 0LL, a2);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v8);
  return (unsigned int)v6;
}
