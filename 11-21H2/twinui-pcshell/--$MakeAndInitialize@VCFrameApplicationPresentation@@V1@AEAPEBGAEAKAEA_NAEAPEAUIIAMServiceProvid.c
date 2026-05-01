/*
 * XREFs of ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18006CA8C
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18006C584 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x18006C83C (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006DC64 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
        CFrameApplicationPresentation **a1,
        const unsigned __int16 **a2,
        unsigned int *a3,
        bool *a4,
        struct IIAMServiceProvider **a5,
        struct IImmersiveApplicationInternal **a6)
{
  CFrameApplicationPresentation *v10; // rax
  CFrameApplicationPresentation *v11; // rbp
  int v12; // edi
  CFrameApplicationPresentation *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0x288uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v11 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
    v14 = v11;
    v12 = CFrameApplicationPresentation::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
