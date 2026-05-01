/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18016F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(
        CImmersiveShellComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v7; // rdi
  void (__fastcall *v8)(char *, GUID *, IUnknown **); // rbx
  IUnknown *punk[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (char *)this - 40;
  punk[0] = 0LL;
  v8 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
  v8(v7, &GUID_00000000_0000_0000_c000_000000000046, punk);
  LODWORD(v8) = IUnknown_QueryService(punk[0], a2, a3, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
  return (unsigned int)v8;
}
