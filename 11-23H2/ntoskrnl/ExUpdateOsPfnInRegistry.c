/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1409F9AE0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // r11d

  v1 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D534F8 )
    return (unsigned int)qword_140D534F8(v1, v5, v0, v2, v3);
  return v4;
}
