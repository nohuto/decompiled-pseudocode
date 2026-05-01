/*
 * XREFs of ?InitThumbnailFactory@CDragVisual@@UEAAJXZ @ 0x1805326C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDragVisual::InitThumbnailFactory(IUnknown **this)
{
  HRESULT Service; // ebx
  __int64 *v3; // rbx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, IUnknown *, __int64, __int64 *); // rsi
  __int64 *v6; // rdi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  Service = 0;
  if ( !this[6] )
  {
    v8 = 0LL;
    v3 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3);
    Service = IUnknown_QueryService(
                *(this - 1),
                &stru_1806EBC80,
                &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                (void **)v3);
    if ( Service >= 0 )
    {
      v4 = v8;
      v5 = *(__int64 (__fastcall **)(__int64, IUnknown *, __int64, __int64 *))(*(_QWORD *)v8 + 56LL);
      v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)(this + 6), &v9);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v6);
      Service = v5(v4, this[16], 1LL, v6);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  }
  return (unsigned int)Service;
}
