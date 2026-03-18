/*
 * XREFs of HvlLogGuestCrashInformation @ 0x1405434E0
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x14054BFF0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14054C0E0 (HvlpSetRegister64.c)
 */

_UNKNOWN **__fastcall HvlLogGuestCrashInformation(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v12[0] = 0LL;
  if ( (HvlEnlightenments & 0x2000) != 0 )
  {
    result = (_UNKNOWN **)HvlpGetRegister64(533LL, v12);
    v11 = 0x8000000000000000uLL;
    if ( v12[0] < 0 )
    {
      HvlpSetRegister64(528LL, a1);
      HvlpSetRegister64(529LL, a2);
      HvlpSetRegister64(530LL, a3);
      HvlpSetRegister64(531LL, a4);
      HvlpSetRegister64(532LL, a5);
      if ( (v12[0] & 0x2000000000000000LL) != 0 )
        v11 = (-(__int64)(a6 != 0) & 0x2000000000000000LL) + 0x8000000000000000uLL;
      return (_UNKNOWN **)HvlpSetRegister64(533LL, v11);
    }
  }
  return result;
}
