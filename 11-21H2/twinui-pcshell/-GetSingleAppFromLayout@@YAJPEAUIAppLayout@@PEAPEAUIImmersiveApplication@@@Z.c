/*
 * XREFs of ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x180532138
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180532EC0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetSingleAppFromLayout(struct IAppLayout *a1, struct IImmersiveApplication **a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(struct IAppLayout *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = -2147467259;
  if ( a1 && (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a1 + 72LL))(a1) == 1 )
  {
    v5 = *(_QWORD *)a1;
    v9 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, GUID *, __int64 *))(v5 + 96);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v9, &v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
    v4 = v6(a1, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v7);
    if ( v4 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) == 1 )
      v4 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplication **))(*(_QWORD *)v9 + 40LL))(v9, a2);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  return (unsigned int)v4;
}
