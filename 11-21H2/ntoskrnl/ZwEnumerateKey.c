/*
 * XREFs of ZwEnumerateKey @ 0x14041BDA0
 * Callers:
 *     sub_1403A77D4 @ 0x1403A77D4 (sub_1403A77D4.c)
 *     sub_1403C5F68 @ 0x1403C5F68 (sub_1403C5F68.c)
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_140620160 @ 0x140620160 (sub_140620160.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140697B34 @ 0x140697B34 (sub_140697B34.c)
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 *     sub_1406C2EE8 @ 0x1406C2EE8 (sub_1406C2EE8.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_14080D370 @ 0x14080D370 (sub_14080D370.c)
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 *     sub_140836228 @ 0x140836228 (sub_140836228.c)
 *     DxgkInitialize @ 0x140836CC8 (DxgkInitialize.c)
 *     sub_1408386A0 @ 0x1408386A0 (sub_1408386A0.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14083FC00 @ 0x14083FC00 (sub_14083FC00.c)
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_14084A618 @ 0x14084A618 (sub_14084A618.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 *     sub_140862888 @ 0x140862888 (sub_140862888.c)
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_1409CF26C @ 0x1409CF26C (sub_1409CF26C.c)
 *     sub_1409DAD00 @ 0x1409DAD00 (sub_1409DAD00.c)
 *     sub_1409E0DC0 @ 0x1409E0DC0 (sub_1409E0DC0.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140A0A95C @ 0x140A0A95C (sub_140A0A95C.c)
 *     sub_140A14D98 @ 0x140A14D98 (sub_140A14D98.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 *     sub_140B4BB08 @ 0x140B4BB08 (sub_140B4BB08.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&Index);
}
