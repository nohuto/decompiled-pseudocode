/*
 * XREFs of ?Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x180616428
 * Callers:
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180615E68 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AppLayoutFinders::CAppLayoutItemFinderByApplication::Compare(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // r14d
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 **v10; // rax
  __int64 *AddressOf; // rax
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF
  __int64 v15; // [rsp+68h] [rbp+48h] BYREF

  v14 = a3;
  v3 = *a2;
  v15 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
  if ( v6(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v7) >= 0 )
  {
    v8 = v15;
    v13 = 0LL;
    v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
    v10 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v10);
    if ( v9(v8, AddressOf) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, *a1, &v14);
      v5 = ((_DWORD)v14 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v5;
}
