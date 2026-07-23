/*
 * XREFs of sub_1409192C8 @ 0x1409192C8
 * Callers:
 *     sub_1407F85CC @ 0x1407F85CC (sub_1407F85CC.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 */

void __fastcall sub_1409192C8(ULONG_PTR *a1)
{
  if ( a1[3] )
    sub_140919308(a1[2]);
  sub_14071BF40(a1[2]);
  sub_140346D64(a1, 0x34374D43u);
}
