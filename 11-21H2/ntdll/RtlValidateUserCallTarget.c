/*
 * XREFs of RtlValidateUserCallTarget @ 0x18010A264
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     CfgAddressToBitState @ 0x18010A0C4 (CfgAddressToBitState.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(unsigned __int64 a1, _DWORD *a2)
{
  char v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, (const signed __int64 *)LdrSystemDllInitBlock.CfgBitMap);
  v5 = 0;
  if ( !v4 )
    goto LABEL_12;
  v6 = v4 - 1;
  if ( !v6 )
  {
    LOBYTE(v5) = (v3 & 0xF) == 0;
    *a2 = (v5 ^ 1) + 1;
    return v5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      *a2 = 16;
      return v5;
    }
    if ( (v3 & 0xF) == 0 )
    {
      *a2 = 4;
      return 1;
    }
LABEL_12:
    *a2 = 2;
    return v5;
  }
  if ( v7 != 1 )
    goto LABEL_12;
  *a2 = 8;
  return 1;
}
