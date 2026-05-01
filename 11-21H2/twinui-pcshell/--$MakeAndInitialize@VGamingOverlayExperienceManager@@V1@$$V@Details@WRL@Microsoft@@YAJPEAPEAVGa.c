/*
 * XREFs of ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18013D9E0
 * Callers:
 *     ?CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18013D930 (-CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18013DAB0 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x18013DDEC (--0GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamingOverlayExperienceManager,GamingOverlayExperienceManager,>(
        volatile signed __int64 **a1)
{
  GamingOverlayExperienceManager *v2; // rax
  volatile signed __int64 *v3; // rdi
  volatile int *v4; // rdx
  int v5; // esi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *a1 = 0LL;
  v2 = (GamingOverlayExperienceManager *)operator new(0x568uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (volatile signed __int64 *)GamingOverlayExperienceManager::GamingOverlayExperienceManager(v2);
    v5 = GamingOverlayExperienceManager::RuntimeClassInitialize((GamingOverlayExperienceManager *)v3);
    if ( v5 >= 0 )
    {
      if ( v3 )
      {
        v6 = *((_QWORD *)v3 + 25);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64(v3 + 25, v6 + 1, v6);
            if ( v7 != v6 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v4);
      }
LABEL_8:
      *a1 = v3;
      v5 = 0;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
