/*
 * XREFs of InbvIndicateProgress @ 0x140B3E018
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AB58;
  if ( qword_140C6AB58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AB58 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
