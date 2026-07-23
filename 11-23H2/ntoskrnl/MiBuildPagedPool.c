/*
 * XREFs of MiBuildPagedPool @ 0x140B43794
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140210FC4 (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiBuildDynamicRegion @ 0x1403763AC (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9DB8 (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiBuildPagedPool()
{
  __int64 *v0; // rax
  __int64 v1; // rdx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax

  v0 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v0, v1, 0x100000000000uLL) )
    return 0LL;
  qword_140C69938 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(
                        (__int64)MiSystemPartition,
                        (__int64)AnyMultiplexedVm,
                        3,
                        0x100000000LL) )
    return 0LL;
  qword_140C69918 = 0LL;
  qword_140C69920 = qword_140C69938;
  result = 1LL;
  qword_140C654A0 = 7680LL;
  qword_140C654A8 = 15360LL;
  return result;
}
