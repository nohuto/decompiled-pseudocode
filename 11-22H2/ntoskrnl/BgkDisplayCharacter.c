/*
 * XREFs of BgkDisplayCharacter @ 0x140AF1F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054F028 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14054F074 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x140AF020C (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140C6AC89 || byte_140C6AC70 )
  {
    byte_140C6AC89 = 0;
    byte_140C6AC70 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140C6AC68 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
