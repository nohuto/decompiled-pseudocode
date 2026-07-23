/*
 * XREFs of ZwQueryKey @ 0x14041BA20
 * Callers:
 *     sub_1403A7874 @ 0x1403A7874 (sub_1403A7874.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_14055F2A0 @ 0x14055F2A0 (sub_14055F2A0.c)
 *     sub_1406253D0 @ 0x1406253D0 (sub_1406253D0.c)
 *     sub_14064CC20 @ 0x14064CC20 (sub_14064CC20.c)
 *     sub_14067A3F4 @ 0x14067A3F4 (sub_14067A3F4.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_1406C55CC @ 0x1406C55CC (sub_1406C55CC.c)
 *     sub_1406CB590 @ 0x1406CB590 (sub_1406CB590.c)
 *     sub_1406DAA38 @ 0x1406DAA38 (sub_1406DAA38.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_1406E74D0 @ 0x1406E74D0 (sub_1406E74D0.c)
 *     sub_1408386A0 @ 0x1408386A0 (sub_1408386A0.c)
 *     sub_140859794 @ 0x140859794 (sub_140859794.c)
 *     sub_14085D7FC @ 0x14085D7FC (sub_14085D7FC.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_14093FE38 @ 0x14093FE38 (sub_14093FE38.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_1409654F8 @ 0x1409654F8 (sub_1409654F8.c)
 *     sub_1409CF26C @ 0x1409CF26C (sub_1409CF26C.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     sub_140AF6E6C @ 0x140AF6E6C (sub_140AF6E6C.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&KeyInformationClass);
}
