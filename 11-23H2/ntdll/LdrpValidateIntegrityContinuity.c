/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180088D20
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x1800A2260 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBA50 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpSetModuleSigningLevel @ 0x1800E08C8 (LdrpSetModuleSigningLevel.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v3 = 0;
  v4 = a2;
  v11 = 0;
  v5 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v6 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v6 + 280) & 0x8000) != 0
     || (LOBYTE(a1) = *(_BYTE *)(v6 + 284), LOBYTE(a2) = 12, (int)NtCompareSigningLevels(a1, a2) >= 0)) )
  {
    v9 = LdrpSetModuleSigningLevel(v4, *(_QWORD *)(v5 + 56), (unsigned int)&v11, 12, (__int64)&v12);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(v5 + 56);
      LOBYTE(v8) = 12;
      LOBYTE(v10) = *(_BYTE *)(v10 + 284);
      v3 = NtCompareSigningLevels(v10, v8);
      if ( (v3 & 0x80000000) == 0 )
        return v3;
LABEL_17:
      LdrpLogIntegrityContinuityTelemetry(v5, v9, v11, v3, v12);
      return v3;
    }
    if ( v9 == -1073741701 || v9 == -1073740760 || v9 == -1073740285 || v9 == -1058471934 )
    {
      *(_BYTE *)(*(_QWORD *)(v5 + 56) + 284LL) = 1;
    }
    else
    {
      if ( !LdrpEnforceIntegrityContinuity )
        goto LABEL_17;
      *(_BYTE *)(*(_QWORD *)(v5 + 56) + 284LL) = 1;
    }
    v3 = v9;
    goto LABEL_17;
  }
  return v3;
}
