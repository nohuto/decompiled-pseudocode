/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x18000247C
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x1800A5420 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBB80 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpSetModuleSigningLevel @ 0x1800E0C90 (LdrpSetModuleSigningLevel.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int32 v4; // esi
  __int64 v7; // rax
  int v9; // ebx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0 || NtCompareSigningLevels(*(_BYTE *)(v7 + 284), 0xCu) >= 0) )
  {
    LOBYTE(a4) = 12;
    v9 = LdrpSetModuleSigningLevel(a2, *(_QWORD *)(a1 + 56), &v10, a4, &v11);
    if ( v9 >= 0 )
    {
      v4 = NtCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      if ( (v4 & 0x80000000) == 0 )
        return v4;
LABEL_17:
      LdrpLogIntegrityContinuityTelemetry(a1, v9, v10, v4, v11);
      return v4;
    }
    if ( v9 == -1073741701 || v9 == -1073740760 || v9 == -1073740285 || v9 == -1058471934 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
    }
    else
    {
      if ( !LdrpEnforceIntegrityContinuity )
        goto LABEL_17;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
    }
    v4 = v9;
    goto LABEL_17;
  }
  return v4;
}
