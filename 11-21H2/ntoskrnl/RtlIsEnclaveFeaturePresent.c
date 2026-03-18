/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1409B5CE8
 * Callers:
 *     NtCreateEnclave @ 0x14097AD20 (NtCreateEnclave.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v2; // eax
  unsigned __int8 v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) - 0x87FFFFFFC94LL);
  v3 = _bittest(&v2, a1 & 0x1F);
  if ( PsIsCurrentThreadInServerSilo() && a1 == 8 )
    return 0;
  return v3;
}
