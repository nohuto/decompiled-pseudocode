/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800B3BF0
 * Callers:
 *     ??$WeakReferenceCallback@VUndockedSearchAppExperienceManager@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@PEAUIViewEventArgs@6784@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@P82@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@4567@@ZPEAPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@7@@Z @ 0x1800B3770 (--$WeakReferenceCallback@VUndockedSearchAppExperienceManager@@U-$ITypedEventHandler@PEAUIViewWra.c)
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B4200 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x1800B4240 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 WeakReference; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // r8
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  volatile int *v13; // rdx
  __int64 v14; // r9

  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), a2);
    *(_QWORD *)a2 = v5;
    return 0LL;
  }
  WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference(
                             (Microsoft::WRL::Details *)(a1 - 8),
                             (struct IUnknown *)a2);
  v8 = (Microsoft::WRL::Details::WeakReferenceImpl *)WeakReference;
  if ( WeakReference )
  {
    *(_DWORD *)(WeakReference + 16) = v2;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v12 )
    {
      v12 = v11;
      if ( i )
      {
        *(_QWORD *)a2 = v8;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      *((_DWORD *)v8 + 4) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v9, v11);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v8, 1u);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 12), v13);
    *(_QWORD *)a2 = v14;
    return 0LL;
  }
  return 2147942414LL;
}
