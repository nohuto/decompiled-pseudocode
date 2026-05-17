/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x18010A6B0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18008EA20 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C538 (LdrControlFlowGuardXfgEnabled.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 *     RtlFailFast2 @ 0x1800A3E40 (RtlFailFast2.c)
 *     RtlFailFast3 @ 0x1800A3E50 (RtlFailFast3.c)
 *     RtlDisableXfgOnTarget @ 0x18010A2C8 (RtlDisableXfgOnTarget.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010A3F4 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010A5D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010A678 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A7D4 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpXfgTlLogFailure @ 0x1801208BC (RtlpXfgTlLogFailure.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // ebp
  __int64 result; // rax
  int v9; // eax

  v6 = a2;
  if ( a3 <= 1 )
  {
    if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    {
      return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
    }
    else
    {
      LOBYTE(v9) = LdrControlFlowGuardEnforcedWithExportSuppression();
      if ( !v9
        || !RtlGuardIsExportSuppressedAddress(a1)
        || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
      {
        RtlFailFast2(0xAu);
      }
    }
  }
  else if ( (unsigned int)LdrControlFlowGuardXfgEnabled(a1, a2) && (BYTE1(qword_1801993E8) & 3) == 1 )
  {
    RtlpXfgTlLogFailure(a3, v6, a1, a4, *(_QWORD *)(a1 - 8));
    return RtlDisableXfgOnTarget(a1);
  }
  else
  {
    result = NtQuerySystemInformationEx();
    if ( (int)result < 0 )
      RtlFailFast3(0x40u);
  }
  return result;
}
