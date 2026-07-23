/*
 * XREFs of _local_unwind @ 0x1403E0F50
 * Callers:
 *     sub_140243B10 @ 0x140243B10 (sub_140243B10.c)
 *     sub_1402470D0 @ 0x1402470D0 (sub_1402470D0.c)
 *     sub_1402566A0 @ 0x1402566A0 (sub_1402566A0.c)
 *     sub_140376100 @ 0x140376100 (sub_140376100.c)
 *     sub_140378CF0 @ 0x140378CF0 (sub_140378CF0.c)
 *     sub_1403A06D0 @ 0x1403A06D0 (sub_1403A06D0.c)
 *     sub_1403A13C0 @ 0x1403A13C0 (sub_1403A13C0.c)
 *     sub_1403B6350 @ 0x1403B6350 (sub_1403B6350.c)
 *     sub_1406391E0 @ 0x1406391E0 (sub_1406391E0.c)
 *     sub_1409FA388 @ 0x1409FA388 (sub_1409FA388.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140B19880 @ 0x140B19880 (sub_140B19880.c)
 *     sub_140B19A20 @ 0x140B19A20 (sub_140B19A20.c)
 *     sub_140B19A70 @ 0x140B19A70 (sub_140B19A70.c)
 *     sub_140B19AC0 @ 0x140B19AC0 (sub_140B19AC0.c)
 *     sub_140B19B10 @ 0x140B19B10 (sub_140B19B10.c)
 *     sub_140B19B60 @ 0x140B19B60 (sub_140B19B60.c)
 *     sub_140B19BC0 @ 0x140B19BC0 (sub_140B19BC0.c)
 *     sub_140B19C20 @ 0x140B19C20 (sub_140B19C20.c)
 *     sub_140B19C80 @ 0x140B19C80 (sub_140B19C80.c)
 *     sub_140B19CE0 @ 0x140B19CE0 (sub_140B19CE0.c)
 *     sub_140B19E40 @ 0x140B19E40 (sub_140B19E40.c)
 *     sub_140B19EB0 @ 0x140B19EB0 (sub_140B19EB0.c)
 *     sub_140B19F00 @ 0x140B19F00 (sub_140B19F00.c)
 *     sub_140B19F7C @ 0x140B19F7C (sub_140B19F7C.c)
 * Callees:
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
