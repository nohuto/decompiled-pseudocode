/*
 * XREFs of ?SetOldAppLayout@CAppLayoutOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x180792140
 * Callers:
 *     ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x1805B67E0 (-SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppLayoutOperation::SetOldAppLayout(CAppLayoutOperation *this, struct IAppLayout *a2)
{
  void (__fastcall *v3)(struct IAppLayout *, GUID *, __int64 *); // rdi
  __int64 *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(void (__fastcall **)(struct IAppLayout *, GUID *, __int64 *))(*(_QWORD *)a2 + 192LL);
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)this + 16, &v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v3(a2, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, v4);
}
