/*
 * XREFs of sub_1407EE8D0 @ 0x1407EE8D0
 * Callers:
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407EE8D0(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C54198 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C54148 )
    {
      if ( qword_140C54148 <= (unsigned __int64)qword_140C54198 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C54198;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C54148;
      qword_140C541A0 += result;
    }
    qword_140C54198 = 0LL;
  }
  return result;
}
