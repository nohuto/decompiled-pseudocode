/*
 * XREFs of sub_140A7F8F2 @ 0x140A7F8F2
 * Callers:
 *     sub_140A7F844 @ 0x140A7F844 (sub_140A7F844.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_140A993C8 @ 0x140A993C8 (sub_140A993C8.c)
 */

_BOOL8 __fastcall sub_140A7F8F2(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( dword_140D5751C )
  {
    if ( (unsigned int)dword_140D06884 <= 4 && KeGetCurrentIrql() <= 2u && sub_1402ABBD0() )
    {
      if ( qword_140D57500 )
      {
        sub_140A993C8();
        if ( a1 != &dword_140C1A938 && (struct _KTHREAD *)qword_140C1A930 != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
