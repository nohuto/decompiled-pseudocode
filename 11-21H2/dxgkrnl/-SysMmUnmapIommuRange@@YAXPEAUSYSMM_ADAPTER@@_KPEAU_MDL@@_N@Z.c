/*
 * XREFs of ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002FE30
 * Callers:
 *     <none>
 * Callees:
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     SmmIommuUnmapReferenced @ 0x1C006DFAC (SmmIommuUnmapReferenced.c)
 */

void __fastcall SysMmUnmapIommuRange(volatile LONG *a1, __int64 a2, struct _MDL *a3, char a4)
{
  KIRQL v8; // r15

  v8 = ExAcquireSpinLockShared(a1 + 18);
  if ( a4 || (dword_1C0130B08 & 4) != 0 )
    SmmIommuUnmapReferenced(a1 + 16, a2, a3);
  else
    SmmUnmapIommu((__int64)(a1 + 16), a2, a3);
  ExReleaseSpinLockShared(a1 + 18, v8);
}
