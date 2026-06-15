/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14001F640
 * Callers:
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x14001F428 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14001F6CC (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14001F770 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001F7FC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rdi
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v6; // r8
  unsigned __int64 v7; // rdx
  bool i; // zf
  signed __int64 v9; // rax
  struct IUnknownVtbl *v11; // r10

  v2 = *(_QWORD *)(a1 + 24);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 16), a2);
    v6 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v7 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7, v2);
    for ( i = v2 == v9; ; i = v9 == v2 )
    {
      v2 = v9;
      if ( i )
      {
        a2->lpVtbl = v6;
        return 0LL;
      }
      if ( v9 < 0 )
        break;
      LODWORD(v6->Release) = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7, v9);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v6,
      1u);
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), (volatile int *)a2);
  a2->lpVtbl = v11;
  return 0LL;
}
