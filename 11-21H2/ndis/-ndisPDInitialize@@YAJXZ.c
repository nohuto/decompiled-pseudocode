/*
 * XREFs of ?ndisPDInitialize@@YAJXZ @ 0x1C0156680
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ??0NDIS_PD_GLOBAL@@QEAA@XZ @ 0x1C0115C44 (--0NDIS_PD_GLOBAL@@QEAA@XZ.c)
 */

__int64 ndisPDInitialize(void)
{
  NDIS_PD_GLOBAL *PoolWithTag; // rax

  PoolWithTag = (NDIS_PD_GLOBAL *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
  if ( PoolWithTag )
  {
    qword_1C00EC710 = (__int64)NDIS_PD_GLOBAL::NDIS_PD_GLOBAL(PoolWithTag);
    if ( qword_1C00EC710 )
      return 0LL;
  }
  else
  {
    qword_1C00EC710 = 0LL;
  }
  return 3221225626LL;
}
