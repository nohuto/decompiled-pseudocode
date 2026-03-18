/*
 * XREFs of VrpJobContextDelete @ 0x140A72020
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14077BDF8 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140A71F64 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
