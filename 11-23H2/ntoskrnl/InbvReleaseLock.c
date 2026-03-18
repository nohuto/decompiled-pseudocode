/*
 * XREFs of InbvReleaseLock @ 0x14054E62C
 * Callers:
 *     DisplayBootBitmap @ 0x1403AA048 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14054E7BC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E810 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AB58;
  if ( qword_140C6AB58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AB58 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
