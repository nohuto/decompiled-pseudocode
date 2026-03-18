/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x1409B07A8
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1409B0F50 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 1024) = a2;
}
