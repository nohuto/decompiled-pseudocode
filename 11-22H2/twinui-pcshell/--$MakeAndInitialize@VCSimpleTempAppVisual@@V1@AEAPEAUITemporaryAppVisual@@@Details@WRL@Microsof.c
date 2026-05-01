/*
 * XREFs of ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x1805F4D18
 * Callers:
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x1805F4FC8 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x1805F4EB4 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCSimpleTempAppVisual@@@WRL@Microsoft@@QEAAXPEAVCSimpleTempAppVisual@@@Z @ 0x1805F4F84 (-Attach@-$ComPtr@VCSimpleTempAppVisual@@@WRL@Microsoft@@QEAAXPEAVCSimpleTempAppVisual@@@Z.c)
 *     ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x1805F5398 (-RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,ITemporaryAppVisual * &>(
        CSimpleTempAppVisual **a1,
        struct ITemporaryAppVisual **a2)
{
  CSimpleTempAppVisual *v4; // rax
  int v5; // edi
  CSimpleTempAppVisual *v6; // rax
  struct ITemporaryAppVisual *v7; // rdx
  CSimpleTempAppVisual *v8; // rbx
  CSimpleTempAppVisual *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CSimpleTempAppVisual *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CSimpleTempAppVisual::CSimpleTempAppVisual(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CSimpleTempAppVisual>::Attach(&v10, v6);
    v7 = *a2;
    v8 = v10;
    v5 = CSimpleTempAppVisual::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CSimpleTempAppVisual *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
