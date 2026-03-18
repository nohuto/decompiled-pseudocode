/*
 * XREFs of ApiSetEditionWakeSomeone @ 0x1C00C9C84
 * Callers:
 *     HandleDeferredInput @ 0x1C00074D0 (HandleDeferredInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionWakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02963B8;
  if ( qword_1C02963B8 )
  {
    result = (__int64 (*)(void))qword_1C02963B8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02963C0;
      if ( qword_1C02963C0 )
        return (__int64 (*)(void))qword_1C02963C0(a1, a2, a3, a4);
    }
  }
  return result;
}
