/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C020671C
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0064820 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296680;
  if ( qword_1C0296680 )
  {
    result = (__int64 (*)(void))qword_1C0296680();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296688;
      if ( qword_1C0296688 )
        return (__int64 (*)(void))qword_1C0296688(a1, a2, 0LL, a4, a5);
    }
  }
  return result;
}
