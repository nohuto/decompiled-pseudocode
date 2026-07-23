/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1409BF398
 * Callers:
 *     NtCreateEnclave @ 0x140A3EB20 (NtCreateEnclave.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN __cdecl RtlIsEnclaveFeaturePresent(ULONG FeatureMask)
{
  int v2; // eax
  BOOLEAN v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)FeatureMask >> 8) - 0x87FFFFFFC94LL);
  v3 = _bittest(&v2, FeatureMask & 0x1F);
  if ( PsIsCurrentThreadInServerSilo() && FeatureMask == 8 )
    return 0;
  return v3;
}
