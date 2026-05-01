/*
 * XREFs of ?Compare@CAppLayoutOperationItemFinderByApplication@@QEBAHAEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@0@Z @ 0x180613264
 * Callers:
 *     ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180613184 (--$FindEx@VCAppLayoutOperationItemFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayo.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperationItemFinderByApplication::Compare(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 **v7; // rax
  __int64 *AddressOf; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = *a2;
  v10 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  v7 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v11);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v7);
  if ( v6(v3, AddressOf) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 104LL))(v10, *a1, &v11);
    v5 = ((_DWORD)v11 != 0) - 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v5;
}
