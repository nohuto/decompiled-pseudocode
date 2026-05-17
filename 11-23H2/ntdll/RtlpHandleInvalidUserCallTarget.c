/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x18010BB50
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18008F220 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C368 (LdrControlFlowGuardXfgEnabled.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 *     RtlFailFast2 @ 0x1800A5EF0 (RtlFailFast2.c)
 *     RtlFailFast3 @ 0x1800A5F00 (RtlFailFast3.c)
 *     RtlDisableXfgOnTarget @ 0x18010B768 (RtlDisableXfgOnTarget.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010B894 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010BA74 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010BB18 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC74 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpXfgTlLogFailure @ 0x180121D6C (RtlpXfgTlLogFailure.c)
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
  else if ( (unsigned int)LdrControlFlowGuardXfgEnabled(a1, a2) && (BYTE1(qword_18019C3F8) & 3) == 1 )
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
