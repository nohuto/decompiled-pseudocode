/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1800896F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v2; // eax
  unsigned __int8 v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) + 0x7FFE036C);
  v3 = _bittest(&v2, a1 & 0x1F);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() && a1 == 8 )
    return 0;
  return v3;
}
