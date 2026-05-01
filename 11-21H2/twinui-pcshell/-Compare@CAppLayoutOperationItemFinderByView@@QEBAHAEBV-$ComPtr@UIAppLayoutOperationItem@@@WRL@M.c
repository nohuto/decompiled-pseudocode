/*
 * XREFs of ?Compare@CAppLayoutOperationItemFinderByView@@QEBAHAEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@0@Z @ 0x180613310
 * Callers:
 *     ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806131F4 (--$FindEx@VCAppLayoutOperationItemFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutOpera.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperationItemFinderByView::Compare(struct IUnknown **a1, __int64 *a2, struct IUnknown *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebp
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *a2;
  v10 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 32LL);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(v3, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
    v5 = ((unsigned int)SHIsSameObject(v10, *a1) != 0) - 1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v10);
  return v5;
}
