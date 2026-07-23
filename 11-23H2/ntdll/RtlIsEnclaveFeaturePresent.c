/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1800896F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN __cdecl RtlIsEnclaveFeaturePresent(ULONG FeatureMask)
{
  int v2; // eax
  BOOLEAN v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)FeatureMask >> 8) + 0x7FFE036C);
  v3 = _bittest(&v2, FeatureMask & 0x1F);
  if ( RtlGetCurrentServiceSessionId() && FeatureMask == 8 )
    return 0;
  return v3;
}
