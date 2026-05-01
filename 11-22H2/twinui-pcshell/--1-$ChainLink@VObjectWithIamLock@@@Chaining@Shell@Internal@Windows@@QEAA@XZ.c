/*
 * XREFs of ??1?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802D0CDC
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802D0D3A (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::~ChainLink<ObjectWithIamLock>(
        __int64 a1)
{
  __int64 *v2; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 72));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 56));
  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(v2, *(__int64 **)(a1 + 40));
    std::_Deallocate<16,0>(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
