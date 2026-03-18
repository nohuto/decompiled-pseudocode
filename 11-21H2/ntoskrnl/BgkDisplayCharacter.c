/*
 * XREFs of BgkDisplayCharacter @ 0x140AB0670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1405515F8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140551644 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x140AAB76C (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140C54905 || byte_140C54904 )
  {
    byte_140C54905 = 0;
    byte_140C54904 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140C54D30 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
