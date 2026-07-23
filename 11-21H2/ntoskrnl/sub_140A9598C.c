/*
 * XREFs of sub_140A9598C @ 0x140A9598C
 * Callers:
 *     sub_140A94880 @ 0x140A94880 (sub_140A94880.c)
 *     sub_140A94900 @ 0x140A94900 (sub_140A94900.c)
 *     sub_140A94940 @ 0x140A94940 (sub_140A94940.c)
 *     sub_140A94990 @ 0x140A94990 (sub_140A94990.c)
 *     sub_140A949D0 @ 0x140A949D0 (sub_140A949D0.c)
 *     sub_140A94A30 @ 0x140A94A30 (sub_140A94A30.c)
 *     sub_140A94AD0 @ 0x140A94AD0 (sub_140A94AD0.c)
 *     sub_140A94B20 @ 0x140A94B20 (sub_140A94B20.c)
 *     sub_140A94B50 @ 0x140A94B50 (sub_140A94B50.c)
 *     sub_140A94B90 @ 0x140A94B90 (sub_140A94B90.c)
 *     sub_140A94C00 @ 0x140A94C00 (sub_140A94C00.c)
 *     sub_140A94C60 @ 0x140A94C60 (sub_140A94C60.c)
 *     sub_140A94CE0 @ 0x140A94CE0 (sub_140A94CE0.c)
 *     sub_140A94D20 @ 0x140A94D20 (sub_140A94D20.c)
 *     sub_140A94D60 @ 0x140A94D60 (sub_140A94D60.c)
 *     sub_140A94DA0 @ 0x140A94DA0 (sub_140A94DA0.c)
 *     sub_140A94E00 @ 0x140A94E00 (sub_140A94E00.c)
 *     sub_140A94E50 @ 0x140A94E50 (sub_140A94E50.c)
 *     sub_140A94EA0 @ 0x140A94EA0 (sub_140A94EA0.c)
 *     sub_140A94EF0 @ 0x140A94EF0 (sub_140A94EF0.c)
 *     sub_140A94F40 @ 0x140A94F40 (sub_140A94F40.c)
 *     sub_140A94FA0 @ 0x140A94FA0 (sub_140A94FA0.c)
 *     sub_140A95030 @ 0x140A95030 (sub_140A95030.c)
 *     sub_140A950A0 @ 0x140A950A0 (sub_140A950A0.c)
 *     sub_140A950D0 @ 0x140A950D0 (sub_140A950D0.c)
 *     sub_140A95110 @ 0x140A95110 (sub_140A95110.c)
 *     sub_140A95160 @ 0x140A95160 (sub_140A95160.c)
 *     sub_140A951E0 @ 0x140A951E0 (sub_140A951E0.c)
 *     sub_140A95230 @ 0x140A95230 (sub_140A95230.c)
 *     sub_140A952B0 @ 0x140A952B0 (sub_140A952B0.c)
 *     sub_140A952F0 @ 0x140A952F0 (sub_140A952F0.c)
 *     sub_140A95340 @ 0x140A95340 (sub_140A95340.c)
 *     sub_140A95390 @ 0x140A95390 (sub_140A95390.c)
 *     sub_140A953E0 @ 0x140A953E0 (sub_140A953E0.c)
 *     sub_140A95430 @ 0x140A95430 (sub_140A95430.c)
 *     sub_140A95480 @ 0x140A95480 (sub_140A95480.c)
 *     sub_140A954F0 @ 0x140A954F0 (sub_140A954F0.c)
 *     sub_140A95560 @ 0x140A95560 (sub_140A95560.c)
 *     sub_140A955B0 @ 0x140A955B0 (sub_140A955B0.c)
 *     sub_140A955F0 @ 0x140A955F0 (sub_140A955F0.c)
 *     sub_140A95640 @ 0x140A95640 (sub_140A95640.c)
 *     sub_140A95680 @ 0x140A95680 (sub_140A95680.c)
 *     sub_140A956D0 @ 0x140A956D0 (sub_140A956D0.c)
 *     sub_140A95740 @ 0x140A95740 (sub_140A95740.c)
 *     sub_140A957D0 @ 0x140A957D0 (sub_140A957D0.c)
 *     sub_140A95820 @ 0x140A95820 (sub_140A95820.c)
 *     sub_140A958B4 @ 0x140A958B4 (sub_140A958B4.c)
 *     sub_140A95904 @ 0x140A95904 (sub_140A95904.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A9598C(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = BugCheckParameter3 - 1;
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFDLL )
    return sub_140A8C924(0xC4u, 0xE3uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
