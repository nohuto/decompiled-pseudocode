/*
 * XREFs of ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006E970
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E504 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

void __fastcall SysMmUnmapIommuContiguousRange(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        SIZE_T a4,
        bool a5)
{
  struct _MDL *v6; // rbx
  KIRQL v9; // al
  bool v10; // r10
  KIRQL v11; // r15

  v6 = (struct _MDL *)((unsigned __int64)a3.QuadPart >> 12);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)a1 + 18);
  v10 = 0;
  v11 = v9;
  if ( a5 || (dword_1C0130B08 & 4) != 0 )
    v10 = 1;
  SmmUnmapContiguousRangeFromIommu((struct SYSMM_ADAPTER *)((char *)a1 + 64), a2, v6, a4, v10);
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)a1 + 18, v11);
}
