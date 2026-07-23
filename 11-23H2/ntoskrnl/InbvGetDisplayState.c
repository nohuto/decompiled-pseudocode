/*
 * XREFs of InbvGetDisplayState @ 0x14054EC4C
 * Callers:
 *     FinalizeBootLogo @ 0x14054EE7C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054EED0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14054F02C (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AB58 && (v0 = *(__int64 (**)(void))(qword_140C6AB58 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
