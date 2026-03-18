/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x140550B40
 * Callers:
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140A6BDD0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(__int64 (**)(void))(qword_140C54D10 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
