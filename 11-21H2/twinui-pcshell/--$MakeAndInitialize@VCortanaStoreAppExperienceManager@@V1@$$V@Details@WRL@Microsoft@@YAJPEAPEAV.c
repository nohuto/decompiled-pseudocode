/*
 * XREFs of ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x18015BBB4
 * Callers:
 *     ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18015BB00 (-CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18013560C (-InternalRelease@-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x18015BC78 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 *     ??0CortanaStoreAppExperienceManager@@QEAA@XZ @ 0x18015BD0C (--0CortanaStoreAppExperienceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManager,CortanaStoreAppExperienceManager,>(
        volatile signed __int64 **a1)
{
  CortanaStoreAppExperienceManager *v2; // rax
  volatile signed __int64 *v3; // rdi
  volatile int *v4; // rdx
  int v5; // esi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (CortanaStoreAppExperienceManager *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (volatile signed __int64 *)CortanaStoreAppExperienceManager::CortanaStoreAppExperienceManager(v2);
    v9 = v3;
    v5 = CortanaStoreAppExperienceManager::RuntimeClassInitialize((CortanaStoreAppExperienceManager *)v3);
    if ( v5 >= 0 )
    {
      if ( v3 )
      {
        v6 = *((_QWORD *)v3 + 20);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64(v3 + 20, v6 + 1, v6);
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
    Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
