/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x14057BE6C
 * Callers:
 *     KiProcessControlProtection @ 0x14057BFC0 (KiProcessControlProtection.c)
 * Callees:
 *     KiShouldLogUserModeReturnMismatch @ 0x140975758 (KiShouldLogUserModeReturnMismatch.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E91F0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 */

__int64 __fastcall KiLogControlProtectionUserModeReturnMismatch(unsigned int a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rsi
  __int64 result; // rax

  Process = KeGetCurrentThread()->Process;
  result = KiShouldLogUserModeReturnMismatch(Process, a1, *(_QWORD *)(a3 + 8));
  if ( (_BYTE)result )
    return EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process, a3);
  return result;
}
