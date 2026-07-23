/*
 * XREFs of sub_140AAB1AC @ 0x140AAB1AC
 * Callers:
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     sub_140AADC80 @ 0x140AADC80 (sub_140AADC80.c)
 */

__int64 __fastcall sub_140AAB1AC(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C54910 = qword_140C54880;
      dword_140C54930 = dword_140C5487C;
      result = (unsigned int)dword_140C54878;
      dword_140C54918 = dword_140C54878;
      stru_140C54920 = (_RTL_BITMAP)xmmword_140C54888;
    }
  }
  else
  {
    dword_140C54878 = dword_140C54918;
    qword_140C54880 = qword_140C54910;
    dword_140C5487C = dword_140C54930;
    xmmword_140C54888 = (__int128)stru_140C54920;
    return sub_140AADC80(a2, a3, a4);
  }
  return result;
}
