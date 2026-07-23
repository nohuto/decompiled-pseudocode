/*
 * XREFs of sub_1406E5528 @ 0x1406E5528
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_14094C2D0 @ 0x14094C2D0 (sub_14094C2D0.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 * Callees:
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 */

__int64 __fastcall sub_1406E5528(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return sub_1406E5574(
           *(_QWORD *)&qword_140D00AC0,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
