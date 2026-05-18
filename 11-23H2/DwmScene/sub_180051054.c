/*
 * XREFs of sub_180051054 @ 0x180051054
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 * Callees:
 *     sub_180051DFC @ 0x180051DFC (sub_180051DFC.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180051054(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8

  *a1 = &unk_180111D18;
  std::ios::ios(a1 + 18);
  std::istream::istream(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 2);
  a1[2] = &std::stringbuf::`vftable';
  v4 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_180051DFC(a1 + 2, a2, v4, 2LL);
  return a1;
}
