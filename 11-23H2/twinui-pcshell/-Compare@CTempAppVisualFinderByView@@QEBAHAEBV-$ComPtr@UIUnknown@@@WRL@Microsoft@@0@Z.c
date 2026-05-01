/*
 * XREFs of ?Compare@CTempAppVisualFinderByView@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1805F1DDC
 * Callers:
 *     ??$FindEx@VCTempAppVisualFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByView@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1805F17E0 (--$FindEx@VCTempAppVisualFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisual@@@WR.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITemporaryAppVisual@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805F16DC (--$As@UITemporaryAppVisual@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIT.c)
 */

__int64 __fastcall CTempAppVisualFinderByView::Compare(
        struct IUnknown **a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        struct IUnknown *a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rsi
  __int64 *v7; // rdi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IUnknown *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v11 = 0LL;
  v4 = -1;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ITemporaryAppVisual>(a2, &v11) >= 0 )
  {
    v5 = v11;
    v10 = 0LL;
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, v9);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
    if ( v6(v5, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 && v10 )
      v4 = ((unsigned int)SHIsSameObject(v10, *a1) != 0) - 1;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  return v4;
}
