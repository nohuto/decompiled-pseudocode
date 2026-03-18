/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x1C0205E5C
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(char a1, char a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v6 = 0;
  if ( qword_1C0296750 && (int)qword_1C0296750() >= 0 && qword_1C0296758 )
  {
    LOBYTE(v11) = a2;
    LOBYTE(v12) = a1;
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))qword_1C0296758)(
                           v12,
                           v11,
                           a3,
                           a4,
                           a5,
                           a6);
  }
  return v6;
}
