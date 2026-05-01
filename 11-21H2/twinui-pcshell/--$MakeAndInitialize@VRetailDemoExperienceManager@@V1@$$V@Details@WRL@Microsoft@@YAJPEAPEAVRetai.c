/*
 * XREFs of ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1800CA8C4
 * Callers:
 *     ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CA990 (-CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x1800C99E0 (-RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800CAA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellCo.c)
 *     ??0RetailDemoExperienceManager@@QEAA@XZ @ 0x18010A8D0 (--0RetailDemoExperienceManager@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManager,RetailDemoExperienceManager,>(
        RetailDemoExperienceManager **a1)
{
  RetailDemoExperienceManager *v2; // rax
  RetailDemoExperienceManager *v3; // rdi
  volatile int *v4; // rdx
  int v5; // esi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *a1 = 0LL;
  v2 = (RetailDemoExperienceManager *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = RetailDemoExperienceManager::RetailDemoExperienceManager(v2);
    v5 = RetailDemoExperienceManager::RuntimeClassInitialize((void **)v3);
    if ( v5 >= 0 )
    {
      if ( v3 )
      {
        v6 = *((_QWORD *)v3 + 23);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 23, v6 + 1, v6);
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
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
