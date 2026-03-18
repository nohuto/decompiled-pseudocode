/*
 * XREFs of ApiSetEditionHandleAltTab @ 0x1C0206384
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionHandleAltTab(
        char a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8))(void)
{
  __int64 (*result)(void); // rax
  __int64 v13; // rcx

  result = qword_1C0296790;
  if ( qword_1C0296790 )
  {
    result = (__int64 (*)(void))qword_1C0296790();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296798;
      if ( qword_1C0296798 )
      {
        v13 = a5;
        LOBYTE(v13) = a1;
        return (__int64 (*)(void))qword_1C0296798(v13, a2, a3, a4, a5, a6, a7, a8);
      }
    }
  }
  return result;
}
