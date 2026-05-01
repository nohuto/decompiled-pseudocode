/*
 * XREFs of ?ContainsApp@CDropFeedback@@UEAA_NPEAUIImmersiveApplication@@@Z @ 0x1805E9690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDropFeedback::ContainsApp(CDropFeedback *this, struct IImmersiveApplication *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  char v6; // r14
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 **v11; // rax
  __int64 *AddressOf; // rax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v16 = 0;
  v3 = *((_QWORD *)this + 13);
  if ( !v3 )
    return 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v17);
  v5 = 0;
  v6 = 1;
  if ( !v17 )
  {
LABEL_9:
    if ( v16 )
      return v6;
    return 0;
  }
  while ( !v16 )
  {
    v7 = *((_QWORD *)this + 13);
    v18 = 0LL;
    v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    if ( v8(v7, v5, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v18) >= 0 )
    {
      v9 = v18;
      v14 = 0LL;
      v10 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 40LL);
      v11 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, &v15);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v11);
      if ( v10(v9, AddressOf) >= 0 )
        (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, int *))(*(_QWORD *)a2 + 104LL))(a2, v14, &v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    if ( ++v5 >= v17 )
      goto LABEL_9;
  }
  return v6;
}
