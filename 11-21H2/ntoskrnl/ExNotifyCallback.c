/*
 * XREFs of ExNotifyCallback @ 0x140232770
 * Callers:
 *     sub_1406A91F0 @ 0x1406A91F0 (sub_1406A91F0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407FFEBC @ 0x1407FFEBC (sub_1407FFEBC.c)
 *     sub_140861050 @ 0x140861050 (sub_140861050.c)
 *     sub_140952A20 @ 0x140952A20 (sub_140952A20.c)
 *     sub_140953314 @ 0x140953314 (sub_140953314.c)
 *     sub_140990270 @ 0x140990270 (sub_140990270.c)
 *     sub_140997E90 @ 0x140997E90 (sub_140997E90.c)
 *     sub_1409FA6B8 @ 0x1409FA6B8 (sub_1409FA6B8.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  sub_140232788(CallbackObject, Argument1, Argument2, 0LL);
}
