/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800FF044
 * Callers:
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FF010 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDevi.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x180249638 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032CF0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E8B50 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  CD3DResource **v1; // rsi
  CD3DResource **i; // rdi
  __int64 result; // rax

  v1 = (CD3DResource **)*((_QWORD *)a1 + 3);
  for ( i = (CD3DResource **)*((_QWORD *)a1 + 2); i != v1; ++i )
    CD3DResource::RemoveResourceNotifier(*i, a1);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
    *((_QWORD *)a1 + 2),
    *((_QWORD *)a1 + 3));
  result = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 3) = result;
  return result;
}
