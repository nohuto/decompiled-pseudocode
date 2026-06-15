/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140020B80
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140007380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140020290 (--0CDeviceGraphObjectCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140020C84 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140024740 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectCache,CDeviceGraphObjectCache,__int64 &,float &,unsigned int &,_tlgProvider_t const * &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        float *a3,
        unsigned int *a4,
        const struct _tlgProvider_t **a5)
{
  CDeviceGraphObjectCache *v9; // rax
  volatile signed __int64 *v10; // rbx
  volatile int *v11; // rdx
  int v12; // esi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  *a1 = 0LL;
  v9 = (CDeviceGraphObjectCache *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = (volatile signed __int64 *)CDeviceGraphObjectCache::CDeviceGraphObjectCache(v9);
    v12 = CDeviceGraphObjectCache::RuntimeClassInitialize((CDeviceGraphObjectCache *)v10, *a2, *a3, *a4, *a5);
    if ( v12 >= 0 )
    {
      if ( v10 )
      {
        v13 = *((_QWORD *)v10 + 5);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64(v10 + 5, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v11);
      }
LABEL_8:
      *a1 = v10;
      v12 = 0;
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
