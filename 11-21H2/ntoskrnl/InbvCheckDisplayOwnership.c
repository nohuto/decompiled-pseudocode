/*
 * XREFs of InbvCheckDisplayOwnership @ 0x140550BA0
 * Callers:
 *     HalpCheckPowerButton @ 0x140417010 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x14050A880 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C54D10 && (v0 = *(__int64 (**)(void))(qword_140C54D10 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
