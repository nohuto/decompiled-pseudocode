/*
 * XREFs of sub_1800211B8 @ 0x1800211B8
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 *     unknown_libname_32 @ 0x180101172 (unknown_libname_32.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_180101494 @ 0x180101494 (sub_180101494.c)
 *     sub_1801014DC @ 0x1801014DC (sub_1801014DC.c)
 *     unknown_libname_38 @ 0x18010155A (unknown_libname_38.c)
 *     sub_1801015A2 @ 0x1801015A2 (sub_1801015A2.c)
 *     sub_1801015FC @ 0x1801015FC (sub_1801015FC.c)
 *     sub_180101644 @ 0x180101644 (sub_180101644.c)
 *     sub_18010169E @ 0x18010169E (sub_18010169E.c)
 *     sub_1801016F8 @ 0x1801016F8 (sub_1801016F8.c)
 *     sub_180101958 @ 0x180101958 (sub_180101958.c)
 *     sub_18010198E @ 0x18010198E (sub_18010198E.c)
 *     sub_1801019B2 @ 0x1801019B2 (sub_1801019B2.c)
 *     sub_1801019E8 @ 0x1801019E8 (sub_1801019E8.c)
 *     sub_180101A30 @ 0x180101A30 (sub_180101A30.c)
 *     sub_180101A66 @ 0x180101A66 (sub_180101A66.c)
 *     sub_18010430B @ 0x18010430B (sub_18010430B.c)
 * Callees:
 *     sub_1800213A4 @ 0x1800213A4 (sub_1800213A4.c)
 *     sub_18002146C @ 0x18002146C (sub_18002146C.c)
 */

__int64 __fastcall sub_1800211B8(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 48) )
    sub_18002146C(
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(_QWORD *)(a1 + 56));
  else
    sub_1800213A4(
      *(_QWORD *)a1,
      2,
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40));
  return sub_180010910(a1);
}
