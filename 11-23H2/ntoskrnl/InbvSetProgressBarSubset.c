/*
 * XREFs of InbvSetProgressBarSubset @ 0x140383960
 * Callers:
 *     Phase1Initialization @ 0x140821230 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AB58;
  if ( qword_140C6AB58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AB58 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
