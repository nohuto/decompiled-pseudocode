/*
 * XREFs of ??$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Details@WRL@Microsoft@@YAJPEAPEAVCoverWindowAcc@@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Z @ 0x180526528
 * Callers:
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1805267EC (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CoverWindowAcc@@QEAA@XZ @ 0x180526620 (--0CoverWindowAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x180526EC8 (-RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CoverWindowAcc,CoverWindowAcc,HWND__ * &,unsigned short const * &,IRawElementProviderFragment * &>(
        CoverWindowAcc **a1,
        HWND *a2,
        const unsigned __int16 **a3,
        struct IRawElementProviderFragment **a4)
{
  CoverWindowAcc *v8; // rax
  int v9; // esi
  CoverWindowAcc *v10; // rbx
  CoverWindowAcc *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CoverWindowAcc *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  if ( v8 )
  {
    v10 = CoverWindowAcc::CoverWindowAcc(v8);
    v12 = v10;
    v9 = CoverWindowAcc::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(CoverWindowAcc *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
