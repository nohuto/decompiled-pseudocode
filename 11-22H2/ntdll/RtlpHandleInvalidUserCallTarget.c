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

int __fastcall RtlpHandleInvalidUserCallTarget(void *a1, __int64 a2, int a3, __int64 a4)
{
  int result; // eax
  int v9; // eax
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]

  if ( a3 <= 1 )
  {
    if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    {
      return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
    }
    else
    {
      LOBYTE(v9) = LdrControlFlowGuardEnforcedWithExportSuppression();
      if ( !v9
        || !RtlGuardIsExportSuppressedAddress(a1)
        || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), result < 0) )
      {
        RtlFailFast2(0xAu);
      }
    }
  }
  else if ( (unsigned int)LdrControlFlowGuardXfgEnabled()
         && (BYTE1(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[2]) & 3) == 1 )
  {
    RtlpXfgTlLogFailure(a3, a2, (_DWORD)a1, a4, *((_QWORD *)a1 - 1));
    return RtlDisableXfgOnTarget((__int64)a1);
  }
  else
  {
    InputBuffer[0] = a2;
    InputBuffer[1] = a1;
    v11 = a3;
    v12 = a4;
    result = NtQuerySystemInformationEx(SystemXfgCheckFailureInformation, InputBuffer, 0x20u, 0LL, 0, 0LL);
    if ( result < 0 )
      RtlFailFast3(0x40u);
  }
  return result;
}
