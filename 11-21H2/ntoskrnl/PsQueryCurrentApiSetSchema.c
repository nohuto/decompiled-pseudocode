/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1406D972C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x140861984 (ExIsMultiSessionSku.c)
 * Callees:
 *     MmQueryApiSetSchema @ 0x140251894 (MmQueryApiSetSchema.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
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
