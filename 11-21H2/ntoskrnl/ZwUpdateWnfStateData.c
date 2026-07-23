/*
 * XREFs of ZwUpdateWnfStateData @ 0x14041F2A0
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x14024C440 (FsRtlSendModernAppTermination.c)
 *     sub_14038AB60 @ 0x14038AB60 (sub_14038AB60.c)
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     sub_14058E0C0 @ 0x14058E0C0 (sub_14058E0C0.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CDDF8 @ 0x1405CDDF8 (sub_1405CDDF8.c)
 *     sub_1405D0668 @ 0x1405D0668 (sub_1405D0668.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_140638DC8 @ 0x140638DC8 (sub_140638DC8.c)
 *     sub_14063BB20 @ 0x14063BB20 (sub_14063BB20.c)
 *     sub_14069DD40 @ 0x14069DD40 (sub_14069DD40.c)
 *     sub_1406C0298 @ 0x1406C0298 (sub_1406C0298.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406E9850 @ 0x1406E9850 (sub_1406E9850.c)
 *     sub_1406E9E7C @ 0x1406E9E7C (sub_1406E9E7C.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_14078B9BC @ 0x14078B9BC (sub_14078B9BC.c)
 *     sub_14078BD64 @ 0x14078BD64 (sub_14078BD64.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 *     sub_1407B67A0 @ 0x1407B67A0 (sub_1407B67A0.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407EE6D0 @ 0x1407EE6D0 (sub_1407EE6D0.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     sub_1407F2930 @ 0x1407F2930 (sub_1407F2930.c)
 *     sub_1407F4BB0 @ 0x1407F4BB0 (sub_1407F4BB0.c)
 *     sub_1408088B0 @ 0x1408088B0 (sub_1408088B0.c)
 *     sub_14080A040 @ 0x14080A040 (sub_14080A040.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 *     sub_140811C98 @ 0x140811C98 (sub_140811C98.c)
 *     sub_140826850 @ 0x140826850 (sub_140826850.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_14085CEF8 @ 0x14085CEF8 (sub_14085CEF8.c)
 *     sub_1408604BC @ 0x1408604BC (sub_1408604BC.c)
 *     sub_140861CE0 @ 0x140861CE0 (sub_140861CE0.c)
 *     sub_140863B40 @ 0x140863B40 (sub_140863B40.c)
 *     sub_140863B7C @ 0x140863B7C (sub_140863B7C.c)
 *     sub_140863F58 @ 0x140863F58 (sub_140863F58.c)
 *     sub_140864810 @ 0x140864810 (sub_140864810.c)
 *     sub_140923614 @ 0x140923614 (sub_140923614.c)
 *     sub_14092A77C @ 0x14092A77C (sub_14092A77C.c)
 *     sub_14092FB38 @ 0x14092FB38 (sub_14092FB38.c)
 *     sub_140947DA4 @ 0x140947DA4 (sub_140947DA4.c)
 *     sub_140947E30 @ 0x140947E30 (sub_140947E30.c)
 *     sub_140947F80 @ 0x140947F80 (sub_140947F80.c)
 *     sub_14094F7C0 @ 0x14094F7C0 (sub_14094F7C0.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 *     sub_140990924 @ 0x140990924 (sub_140990924.c)
 *     sub_140995F04 @ 0x140995F04 (sub_140995F04.c)
 *     sub_1409964E4 @ 0x1409964E4 (sub_1409964E4.c)
 *     sub_140996DE8 @ 0x140996DE8 (sub_140996DE8.c)
 *     sub_14099862C @ 0x14099862C (sub_14099862C.c)
 *     sub_140998678 @ 0x140998678 (sub_140998678.c)
 *     sub_140998A68 @ 0x140998A68 (sub_140998A68.c)
 *     sub_14099D0B0 @ 0x14099D0B0 (sub_14099D0B0.c)
 *     sub_1409A2EE4 @ 0x1409A2EE4 (sub_1409A2EE4.c)
 *     sub_1409A3CB0 @ 0x1409A3CB0 (sub_1409A3CB0.c)
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 *     sub_1409B06C4 @ 0x1409B06C4 (sub_1409B06C4.c)
 *     sub_1409BEEA8 @ 0x1409BEEA8 (sub_1409BEEA8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140AF3434 @ 0x140AF3434 (sub_140AF3434.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 *     sub_140B301A8 @ 0x140B301A8 (sub_140B301A8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return sub_140433F80(StateName, Buffer);
}
