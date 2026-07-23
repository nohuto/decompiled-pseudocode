/*
 * XREFs of sub_140398000 @ 0x140398000
 * Callers:
 *     sub_140397F20 @ 0x140397F20 (sub_140397F20.c)
 * Callees:
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_140398000(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  char result; // al

  v4 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (sub_140346210(BugCheckParameter2, a2 + 32),
        (result = sub_1402EF0CC(*((_QWORD *)qword_140D06C40 + 2), (int)BugCheckParameter2, a2, 0xFFFFFFFF, v4)) == 0) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
