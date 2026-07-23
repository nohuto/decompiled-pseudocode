/*
 * XREFs of sub_140554344 @ 0x140554344
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140554344(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C54DC0 && qword_140C54DF8 && byte_140C54DB8 )
  {
    result = sub_14042A5E0(qword_140C54DF8, a2);
    if ( (int)result >= 0 )
    {
      qword_140D00A80 = 0LL;
      byte_140C54DB8 = 0;
    }
  }
  return result;
}
