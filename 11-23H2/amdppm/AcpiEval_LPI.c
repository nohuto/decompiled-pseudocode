/*
 * XREFs of AcpiEval_LPI @ 0x1C0027BB0
 * Callers:
 *     InitAcpiLpiStates @ 0x1C003BD3C (InitAcpiLpiStates.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C00293BC (AcpiEvaluateMethod.c)
 *     AcpiParseLpiObject @ 0x1C0029CE0 (AcpiParseLpiObject.c)
 */

__int64 __fastcall AcpiEval_LPI(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80000u);
  v4 = AcpiEvaluateMethod(a1, 1229999199, 0, (unsigned int)&P, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 272) |= *(_QWORD *)(a1 + 280) & 0xE0000000000LL;
    v4 = AcpiParseLpiObject(P, v5, 0LL, a2);
  }
  if ( P )
    ExFreePoolWithTag(P, (ULONG)0);
  if ( v4 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
  return (unsigned int)v4;
}
