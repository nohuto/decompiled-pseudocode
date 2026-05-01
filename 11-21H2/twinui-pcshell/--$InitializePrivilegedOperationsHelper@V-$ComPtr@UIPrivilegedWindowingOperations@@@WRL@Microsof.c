/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@@Z @ 0x1800D69E4
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006E66C (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx

  v4 = *a1 - *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1;
  if ( *a1 == *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data4;
  if ( v4 )
    return 2147500033LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a3);
  v7(a2, &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b, a3);
  return 0LL;
}
