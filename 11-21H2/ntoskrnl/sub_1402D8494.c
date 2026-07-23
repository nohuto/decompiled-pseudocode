/*
 * XREFs of sub_1402D8494 @ 0x1402D8494
 * Callers:
 *     sub_1406EAFE4 @ 0x1406EAFE4 (sub_1406EAFE4.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     sub_140825DCC @ 0x140825DCC (sub_140825DCC.c)
 *     sub_140826C10 @ 0x140826C10 (sub_140826C10.c)
 *     sub_140826D50 @ 0x140826D50 (sub_140826D50.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 *     sub_14084DC30 @ 0x14084DC30 (sub_14084DC30.c)
 *     sub_14085C084 @ 0x14085C084 (sub_14085C084.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     sub_1409646B4 @ 0x1409646B4 (sub_1409646B4.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 *     sub_140965160 @ 0x140965160 (sub_140965160.c)
 *     sub_1409653FC @ 0x1409653FC (sub_1409653FC.c)
 *     sub_1409654F8 @ 0x1409654F8 (sub_1409654F8.c)
 *     sub_1409655BC @ 0x1409655BC (sub_1409655BC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402D8494(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A1A4);
  }
}
