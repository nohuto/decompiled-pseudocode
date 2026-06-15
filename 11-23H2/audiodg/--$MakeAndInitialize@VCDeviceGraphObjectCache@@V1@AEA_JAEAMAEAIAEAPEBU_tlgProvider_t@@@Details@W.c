/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140003840
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140017A70 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140003468 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 *     ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140003E08 (--0CDeviceGraphObjectCache@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001F7FC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ @ 0x140070958 (--1-$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ.c)
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
  int v12; // edi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  CDeviceGraphObjectCache *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CDeviceGraphObjectCache *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v9;
  v16[0] = v9;
  if ( !v9 )
  {
    v12 = -2147024882;
LABEL_14:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v17);
    return (unsigned int)v12;
  }
  v16[1] = v9;
  v10 = (volatile signed __int64 *)CDeviceGraphObjectCache::CDeviceGraphObjectCache(v9);
  v16[0] = v10;
  v17 = 0LL;
  v12 = CDeviceGraphObjectCache::RuntimeClassInitialize((CDeviceGraphObjectCache *)v10, *a2, *a3, *a4, *a5);
  if ( v12 < 0 )
  {
    Microsoft::WRL::ComPtr<CDeviceGraphObjectCache>::~ComPtr<CDeviceGraphObjectCache>(v16);
    goto LABEL_14;
  }
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
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(v10);
  return 0LL;
}
