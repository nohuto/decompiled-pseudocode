/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14054EBF0
 * Callers:
 *     HalpCheckPowerButton @ 0x14040F960 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x140506F50 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x14054EED0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AB58 && (v0 = *(__int64 (**)(void))(qword_140C6AB58 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
