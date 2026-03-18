/*
 * XREFs of InbvSetScrollRegion @ 0x14054E730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AC58 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
