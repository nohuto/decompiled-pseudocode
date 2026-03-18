/*
 * XREFs of HalInitSystem @ 0x140A8BDB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpInitSystemPhase1 @ 0x140A8C31C (HalpInitSystemPhase1.c)
 *     __security_init_cookie @ 0x140B182E8 (__security_init_cookie.c)
 *     HalpInitSystemPhase0 @ 0x140B76E14 (HalpInitSystemPhase0.c)
 */

__int64 __fastcall HalInitSystem(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
      KeBugCheckEx(0x5Cu, 0x8200uLL, 0xFFFFFFFFC000000DuLL, (unsigned int)BugCheckParameter3, 0LL);
    return HalpInitSystemPhase1(a2);
  }
  else
  {
    _security_init_cookie();
    return HalpInitSystemPhase0(a2);
  }
}
