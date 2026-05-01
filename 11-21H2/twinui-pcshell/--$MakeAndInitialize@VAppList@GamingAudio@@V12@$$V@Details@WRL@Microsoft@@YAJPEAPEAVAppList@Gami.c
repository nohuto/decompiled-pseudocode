/*
 * XREFs of ??$MakeAndInitialize@VAppList@GamingAudio@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppList@GamingAudio@@@Z @ 0x180326E5C
 * Callers:
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033C830 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0AppList@GamingAudio@@QEAA@XZ @ 0x18032B730 (--0AppList@GamingAudio@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppList@GamingAudio@@QEAAJXZ @ 0x180340710 (-RuntimeClassInitialize@AppList@GamingAudio@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamingAudio::AppList,GamingAudio::AppList,>(
        GamingAudio::AppList **a1)
{
  GamingAudio::AppList *v2; // rax
  int v3; // edi
  GamingAudio::AppList *v4; // rsi
  GamingAudio::AppList *v6; // [rsp+40h] [rbp+8h] BYREF
  GamingAudio::AppList *v7; // [rsp+48h] [rbp+10h]
  GamingAudio::AppList *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (GamingAudio::AppList *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = (GamingAudio::AppList *)GamingAudio::AppList::AppList(v2);
    v6 = v4;
    v3 = GamingAudio::AppList::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
