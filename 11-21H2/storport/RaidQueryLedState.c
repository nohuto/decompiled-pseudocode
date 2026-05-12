/*
 * XREFs of RaidQueryLedState @ 0x1C004F070
 * Callers:
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C00228C4 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 * Callees:
 *     RaidQueryLedStateByAcpiDsm @ 0x1C004F0D8 (RaidQueryLedStateByAcpiDsm.c)
 *     RaidQueryLedStateByNpem @ 0x1C004F168 (RaidQueryLedStateByNpem.c)
 */

__int64 __fastcall RaidQueryLedState(__int64 a1, __int64 a2)
{
  int LedStateByAcpiDsm; // r8d
  __int64 v5; // rcx
  char v6; // al

  if ( !a1 || !a2 )
    return 3221225485LL;
  LedStateByAcpiDsm = RaidQueryLedStateByAcpiDsm();
  if ( LedStateByAcpiDsm == -1073741637 )
    LedStateByAcpiDsm = RaidQueryLedStateByNpem(a1, a2, 3221225659LL);
  if ( LedStateByAcpiDsm >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_BYTE *)(v5 + 109);
    if ( v6 >= 0 )
      *(_BYTE *)(v5 + 109) = v6 | 0x80;
  }
  return (unsigned int)LedStateByAcpiDsm;
}
