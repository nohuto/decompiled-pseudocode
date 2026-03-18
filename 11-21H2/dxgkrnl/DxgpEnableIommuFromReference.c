/*
 * XREFs of DxgpEnableIommuFromReference @ 0x1C02C3B38
 * Callers:
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3BA8 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3C20 (-EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall DxgpEnableIommuFromReference(__int64 a1, __int64 a2, char *a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = *a3;
  result = 0LL;
  if ( *a3 == -1 )
    return 3221225485LL;
  if ( v3 || (result = SysMmEnableIommu(a1, a2), (int)result >= 0) )
    *a3 = v3 + 1;
  return result;
}
