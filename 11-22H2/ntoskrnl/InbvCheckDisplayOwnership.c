/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14054E5D0
 * Callers:
 *     HalpCheckPowerButton @ 0x14040F120 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x140506B10 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E8B0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AC58 && (v0 = *(__int64 (**)(void))(qword_140C6AC58 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
