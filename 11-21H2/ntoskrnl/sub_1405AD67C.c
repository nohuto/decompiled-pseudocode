/*
 * XREFs of sub_1405AD67C @ 0x1405AD67C
 * Callers:
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_14028CEE0 @ 0x14028CEE0 (sub_14028CEE0.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140369180 @ 0x140369180 (sub_140369180.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1405AD67C(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x9AuLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(unsigned __int16 *)(a1 + 32));
}
