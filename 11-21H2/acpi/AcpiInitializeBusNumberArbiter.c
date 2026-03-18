/*
 * XREFs of AcpiInitializeBusNumberArbiter @ 0x1C00ACE08
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C0049B58 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1C009E128 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializeBusNumberArbiter(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)(a1 + 136);
  v3[15] = AcpiArblibUnpackRequirement;
  v3[16] = AcpiArblibPackResource;
  v3[17] = AcpiArblibUnpackResource;
  v3[18] = AcpiArblibScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)v3, *(_QWORD *)(a2 + 768), 6, a1);
}
