/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x1407EB290
 * Callers:
 *     PspInitializeSiloStructures @ 0x140B49810 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
