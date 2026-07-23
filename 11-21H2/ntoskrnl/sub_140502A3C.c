/*
 * XREFs of sub_140502A3C @ 0x140502A3C
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1403D7C1C @ 0x1403D7C1C (sub_1403D7C1C.c)
 *     strspn @ 0x1403E2FD0 (strspn.c)
 *     strtok_s @ 0x1403E7440 (strtok_s.c)
 *     sub_1406768BC @ 0x1406768BC (sub_1406768BC.c)
 *     sub_1406D068C @ 0x1406D068C (sub_1406D068C.c)
 *     sub_14082E2BC @ 0x14082E2BC (sub_14082E2BC.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_14094E74C @ 0x14094E74C (sub_14094E74C.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BA570 (RtlUnicodeStringToInt64.c)
 *     sub_140A09578 @ 0x140A09578 (sub_140A09578.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140AAA2B0 @ 0x140AAA2B0 (sub_140AAA2B0.c)
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 *     sub_140AF7DC8 @ 0x140AF7DC8 (sub_140AF7DC8.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 *     sub_140B1789C @ 0x140B1789C (sub_140B1789C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_140502A3C()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, qword_140C0CA18, 0LL);
}
