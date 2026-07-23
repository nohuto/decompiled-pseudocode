/*
 * XREFs of sub_140A73A64 @ 0x140A73A64
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A73C60 @ 0x140A73C60 (sub_140A73C60.c)
 * Callees:
 *     sub_140A73844 @ 0x140A73844 (sub_140A73844.c)
 */

__int64 __fastcall sub_140A73A64(int a1)
{
  __int64 result; // rax
  char v2; // di
  unsigned __int64 i; // rbx

  result = (unsigned int)dword_140C3C3E8;
  v2 = 0;
  if ( dword_140C3C3E8 )
  {
    if ( qword_140C40418 == qword_140C3C3E0 )
    {
      v2 = 1;
      ++qword_140C40418;
    }
    for ( i = qword_140C3C3E0; i < qword_140C40418; ++i )
      sub_140A73844(i, qword_140C40410, qword_140C40408, v2, a1);
    return 1LL;
  }
  return result;
}
