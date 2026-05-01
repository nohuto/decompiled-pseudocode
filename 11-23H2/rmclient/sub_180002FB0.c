/*
 * XREFs of sub_180002FB0 @ 0x180002FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003000 @ 0x180003000 (sub_180003000.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 */

__int64 __fastcall sub_180002FB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = sub_180004DB0();
  if ( (int)result >= 0 )
  {
    if ( qword_180032C78 )
      return sub_180003000(qword_180032C78, a2);
    else
      return 2147500037LL;
  }
  return result;
}
