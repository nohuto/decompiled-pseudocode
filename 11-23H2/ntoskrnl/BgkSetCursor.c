/*
 * XREFs of BgkSetCursor @ 0x140AF1120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054EF88 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14054EFD4 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140C6AB68 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
