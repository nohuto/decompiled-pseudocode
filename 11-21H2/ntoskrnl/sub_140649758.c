/*
 * XREFs of sub_140649758 @ 0x140649758
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 * Callees:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140649758(__int64 a1, ULONG a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax

  result = sub_140361540(a1, a2, a3, a4, a6 != 0 ? 2 : 6);
  if ( (_DWORD)result )
  {
    result = qword_140D048F8;
    if ( qword_140D048F8 )
      return sub_14042A5E0(a2, a5);
  }
  return result;
}
