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

int __fastcall RtlpHandleInvalidUserCallTarget(void *a1, __int64 a2, int a3, __int64 a4)
{
  int result; // eax
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  if ( a3 <= 1 )
  {
    if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    {
      return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
    }
    else if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
           || !RtlGuardIsExportSuppressedAddress(a1)
           || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), result < 0) )
    {
      RtlFailFast2(0xAu);
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
    v10 = a3;
    v11 = a4;
    result = NtQuerySystemInformationEx(SystemXfgCheckFailureInformation, InputBuffer, 0x20u, 0LL, 0, 0LL);
    if ( result < 0 )
      RtlFailFast3(0x40u);
  }
  return result;
}
