/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1407D43DC
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     RtlIsApiSetImplemented @ 0x1407D4330 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x140861F94 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x14035F358 (MmQueryApiSetSchema.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 130);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
