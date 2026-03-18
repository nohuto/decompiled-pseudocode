/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x180249638
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAPEAXI@Z @ 0x1802496A0 (--_G-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAPEAXI@Z.c)
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1802496E0 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E8B50 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800FF044 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>(
        __int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
      v2,
      *(_QWORD *)(a1 + 24));
    std::_Deallocate<16,0>(*(void **)(a1 + 16), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
