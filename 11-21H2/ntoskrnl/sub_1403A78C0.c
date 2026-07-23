/*
 * XREFs of sub_1403A78C0 @ 0x1403A78C0
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403A78C0()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C54D30 )
  {
    if ( byte_140C54D49 )
      return _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
  }
  return result;
}
