/*
 * XREFs of InbvReleaseLock @ 0x14054ECEC
 * Callers:
 *     DisplayBootBitmap @ 0x1403AA228 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14054EE7C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054EED0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
