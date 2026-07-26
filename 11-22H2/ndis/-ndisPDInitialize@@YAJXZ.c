/*
 * XREFs of ?ndisPDInitialize@@YAJXZ @ 0x1C01615E4
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ??0NDIS_PD_GLOBAL@@QEAA@XZ @ 0x1C011F680 (--0NDIS_PD_GLOBAL@@QEAA@XZ.c)
 */

__int64 ndisPDInitialize(void)
{
  NDIS_PD_GLOBAL *PoolWithTag; // rax

  PoolWithTag = (NDIS_PD_GLOBAL *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
  if ( PoolWithTag )
  {
    *(_QWORD *)&qword_1C00F5708 = NDIS_PD_GLOBAL::NDIS_PD_GLOBAL(PoolWithTag);
    return *(_QWORD *)&qword_1C00F5708 == 0LL ? 0xC000009A : 0;
  }
  else
  {
    *(_QWORD *)&qword_1C00F5708 = 0LL;
    return 3221225626LL;
  }
}
