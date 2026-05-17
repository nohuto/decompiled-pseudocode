/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x18010A4F0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180093AD0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x180034238 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     NtQuerySystemInformationEx @ 0x1800A6D80 (NtQuerySystemInformationEx.c)
 *     RtlFailFast2 @ 0x1800A9000 (RtlFailFast2.c)
 *     RtlFailFast3 @ 0x1800A9010 (RtlFailFast3.c)
 *     RtlDisableXfgOnTarget @ 0x18010A108 (RtlDisableXfgOnTarget.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010A234 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010A414 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010A4B8 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpXfgTlLogFailure @ 0x18011EFDC (RtlpXfgTlLogFailure.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a3 <= 1 )
  {
    if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    {
      return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
    }
    else if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
           || !RtlGuardIsExportSuppressedAddress(a1)
           || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
    {
      RtlFailFast2(0xAu);
    }
  }
  else if ( (unsigned int)LdrControlFlowGuardXfgEnabled() && (BYTE1(qword_18018F3D8) & 3) == 1 )
  {
    RtlpXfgTlLogFailure(a3, a2, a1, a4, *(_QWORD *)(a1 - 8));
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
