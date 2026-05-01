/*
 * XREFs of ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1805ED97C
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1805EC294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, void *, __int64); // rsi
  __int64 *v10; // rdi
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v3 = *a2;
  v13 = 0LL;
  v6 = *v3;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)va);
  v7 = v6(a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, (__int64 *)va);
  if ( v7 >= 0 )
  {
    v8 = v13;
    v9 = *(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v13 + 80LL);
    v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(a1, &v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    v7 = v9(v8, &unk_1806FC680, 4LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)va);
  return (unsigned int)v7;
}
