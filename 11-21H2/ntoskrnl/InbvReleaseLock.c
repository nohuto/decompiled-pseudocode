/*
 * XREFs of InbvReleaseLock @ 0x140550C9C
 * Callers:
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x140550E2C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(__int64 (**)(void))(qword_140C54D10 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
