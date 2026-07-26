/*
 * XREFs of ndisDmaTelemetryKnobsUpdateRoutine @ 0x1C00CB090
 * Callers:
 *     <none>
 * Callees:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1C0031F28 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     wcscmp_0 @ 0x1C003601D (wcscmp_0.c)
 */

__int64 __fastcall ndisDmaTelemetryKnobsUpdateRoutine(void *a1, const struct KnobDescriptor *a2, unsigned __int64 a3)
{
  if ( !wcscmp_0(L"DmaTelemetryBucketMasks", a2->Name) )
    ndisDmaTelemetryUpdateBucketSchema(a3);
  return 0LL;
}
