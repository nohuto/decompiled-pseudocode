/*
 * XREFs of KeBugCheck @ 0x14041F3B0
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 *     sub_1402513D0 @ 0x1402513D0 (sub_1402513D0.c)
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_1404244D0 @ 0x1404244D0 (sub_1404244D0.c)
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     sub_1409DEDF8 @ 0x1409DEDF8 (sub_1409DEDF8.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     sub_140A59724 @ 0x140A59724 (sub_140A59724.c)
 *     sub_140A59A7C @ 0x140A59A7C (sub_140A59A7C.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 *     sub_140B25AE4 @ 0x140B25AE4 (sub_140B25AE4.c)
 *     sub_140B2EB08 @ 0x140B2EB08 (sub_140B2EB08.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
