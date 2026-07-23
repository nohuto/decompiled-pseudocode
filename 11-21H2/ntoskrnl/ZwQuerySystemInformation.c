/*
 * XREFs of ZwQuerySystemInformation @ 0x14041BE20
 * Callers:
 *     sub_140262938 @ 0x140262938 (sub_140262938.c)
 *     sub_140377310 @ 0x140377310 (sub_140377310.c)
 *     sub_1403DE6E0 @ 0x1403DE6E0 (sub_1403DE6E0.c)
 *     sub_14054B568 @ 0x14054B568 (sub_14054B568.c)
 *     sub_1405F7090 @ 0x1405F7090 (sub_1405F7090.c)
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 *     sub_140625BF0 @ 0x140625BF0 (sub_140625BF0.c)
 *     RtlQueryModuleInformation @ 0x1406C6410 (RtlQueryModuleInformation.c)
 *     sub_1406CE7A8 @ 0x1406CE7A8 (sub_1406CE7A8.c)
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_1407F8490 @ 0x1407F8490 (sub_1407F8490.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140813FE4 @ 0x140813FE4 (sub_140813FE4.c)
 *     sub_1408140B4 @ 0x1408140B4 (sub_1408140B4.c)
 *     sub_14081413C @ 0x14081413C (sub_14081413C.c)
 *     sub_140825DCC @ 0x140825DCC (sub_140825DCC.c)
 *     sub_140828AC4 @ 0x140828AC4 (sub_140828AC4.c)
 *     RtlSystemTimeToLocalTime @ 0x14085CBB0 (RtlSystemTimeToLocalTime.c)
 *     sub_14085E010 @ 0x14085E010 (sub_14085E010.c)
 *     sub_1408649BC @ 0x1408649BC (sub_1408649BC.c)
 *     sub_140946FEC @ 0x140946FEC (sub_140946FEC.c)
 *     sub_140989608 @ 0x140989608 (sub_140989608.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B5D40 (RtlLocalTimeToSystemTime.c)
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 *     sub_1409E8BA0 @ 0x1409E8BA0 (sub_1409E8BA0.c)
 *     sub_1409F9960 @ 0x1409F9960 (sub_1409F9960.c)
 *     sub_1409FC5BC @ 0x1409FC5BC (sub_1409FC5BC.c)
 *     sub_140A10FDC @ 0x140A10FDC (sub_140A10FDC.c)
 *     sub_140A179E0 @ 0x140A179E0 (sub_140A179E0.c)
 *     sub_140A52AD8 @ 0x140A52AD8 (sub_140A52AD8.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140AA8B28 @ 0x140AA8B28 (sub_140AA8B28.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 *     sub_140B2BEEC @ 0x140B2BEEC (sub_140B2BEEC.c)
 *     sub_140B2D708 @ 0x140B2D708 (sub_140B2D708.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&SystemInformationClass, SystemInformation);
}
