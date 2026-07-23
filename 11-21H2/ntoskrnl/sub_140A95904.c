/*
 * XREFs of sub_140A95904 @ 0x140A95904
 * Callers:
 *     sub_140A94880 @ 0x140A94880 (sub_140A94880.c)
 *     sub_140A94A30 @ 0x140A94A30 (sub_140A94A30.c)
 *     sub_140A94C30 @ 0x140A94C30 (sub_140A94C30.c)
 *     sub_140A94C60 @ 0x140A94C60 (sub_140A94C60.c)
 *     sub_140A94E00 @ 0x140A94E00 (sub_140A94E00.c)
 *     sub_140A94EA0 @ 0x140A94EA0 (sub_140A94EA0.c)
 *     sub_140A94EF0 @ 0x140A94EF0 (sub_140A94EF0.c)
 *     sub_140A94F40 @ 0x140A94F40 (sub_140A94F40.c)
 *     sub_140A95000 @ 0x140A95000 (sub_140A95000.c)
 *     sub_140A95390 @ 0x140A95390 (sub_140A95390.c)
 *     sub_140A95480 @ 0x140A95480 (sub_140A95480.c)
 *     sub_140A954F0 @ 0x140A954F0 (sub_140A954F0.c)
 *     sub_140A955F0 @ 0x140A955F0 (sub_140A955F0.c)
 *     sub_140A95640 @ 0x140A95640 (sub_140A95640.c)
 *     sub_140A95680 @ 0x140A95680 (sub_140A95680.c)
 *     sub_140A95820 @ 0x140A95820 (sub_140A95820.c)
 *     sub_140A958B4 @ 0x140A958B4 (sub_140A958B4.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 */

void __fastcall sub_140A95904(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    sub_140A9598C((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    sub_140A9598C(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( v4 + v5 < v4
      || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
      || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      sub_140A8C924(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}
