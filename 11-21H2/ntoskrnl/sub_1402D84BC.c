/*
 * XREFs of sub_1402D84BC @ 0x1402D84BC
 * Callers:
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_14075C460 @ 0x14075C460 (sub_14075C460.c)
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075C9D4 @ 0x14075C9D4 (sub_14075C9D4.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_14075CDF8 @ 0x14075CDF8 (sub_14075CDF8.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     sub_140825DCC @ 0x140825DCC (sub_140825DCC.c)
 *     sub_140826C10 @ 0x140826C10 (sub_140826C10.c)
 *     sub_140826D50 @ 0x140826D50 (sub_140826D50.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 *     sub_14085C084 @ 0x14085C084 (sub_14085C084.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 *     sub_1409653FC @ 0x1409653FC (sub_1409653FC.c)
 *     sub_1409654F8 @ 0x1409654F8 (sub_1409654F8.c)
 *     sub_1409655BC @ 0x1409655BC (sub_1409655BC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1402D84BC(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A1A0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A1B0);
  }
  return v3;
}
