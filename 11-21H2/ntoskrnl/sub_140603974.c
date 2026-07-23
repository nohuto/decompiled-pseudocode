/*
 * XREFs of sub_140603974 @ 0x140603974
 * Callers:
 *     sub_140604224 @ 0x140604224 (sub_140604224.c)
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 *     sub_140604DC0 @ 0x140604DC0 (sub_140604DC0.c)
 *     sub_140605200 @ 0x140605200 (sub_140605200.c)
 */

__int64 sub_140603974()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&dword_140C1A8C4, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C1A8E8 = (__int64)&qword_140C1A8E0;
    qword_140C1A8E0 = (__int64)&qword_140C1A8E0;
    sub_140604DC0();
    result = sub_140605200();
    if ( byte_140C1A8A0 )
      return sub_140602EB8();
  }
  return result;
}
