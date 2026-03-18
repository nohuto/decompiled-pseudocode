/*
 * XREFs of ApiSetEditionRawInputRequestedForKeyboard @ 0x1C0207708
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02967B0 && (int)qword_1C02967B0() >= 0 && qword_1C02967B8 )
    return (unsigned int)qword_1C02967B8(a1);
  return v1;
}
