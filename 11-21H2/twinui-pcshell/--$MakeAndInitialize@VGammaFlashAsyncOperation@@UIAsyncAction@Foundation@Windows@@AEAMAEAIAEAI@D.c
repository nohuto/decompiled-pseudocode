/*
 * XREFs of ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x180326F2C
 * Callers:
 *     ?GammaFlash@GamingOverlayExperienceManager@@UEAAJMIIPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18032EB00 (-GammaFlash@GamingOverlayExperienceManager@@UEAAJMIIPEAPEAUIAsyncAction@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0GammaFlashAsyncOperation@@QEAA@XZ @ 0x18032B904 (--0GammaFlashAsyncOperation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VGammaFlashAsyncOperation@@@WRL@Microsoft@@QEAAXPEAVGammaFlashAsyncOperation@@@Z @ 0x18032D564 (-Attach@-$ComPtr@VGammaFlashAsyncOperation@@@WRL@Microsoft@@QEAAXPEAVGammaFlashAsyncOperation@@@.c)
 *     ?RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z @ 0x180338CEC (-RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GammaFlashAsyncOperation,Windows::Foundation::IAsyncAction,float &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        float *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  GammaFlashAsyncOperation *v8; // rax
  int v9; // esi
  GammaFlashAsyncOperation *v10; // rax
  unsigned int v11; // r9d
  GammaFlashAsyncOperation *v12; // rbx
  GammaFlashAsyncOperation *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (GammaFlashAsyncOperation *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( v8 )
  {
    v10 = GammaFlashAsyncOperation::GammaFlashAsyncOperation(v8);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<GammaFlashAsyncOperation>::Attach(&v14, v10);
    v11 = *a4;
    v12 = v14;
    v9 = GammaFlashAsyncOperation::RuntimeClassInitialize(v14, *a2, *a3, v11);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(GammaFlashAsyncOperation *, GUID *, _QWORD *))v12)(
             v12,
             &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
             a1);
    if ( v12 )
      (*(void (__fastcall **)(GammaFlashAsyncOperation *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
