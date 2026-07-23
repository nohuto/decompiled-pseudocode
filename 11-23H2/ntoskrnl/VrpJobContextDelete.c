/*
 * XREFs of VrpJobContextDelete @ 0x140A722D0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14077BFE8 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140A72214 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
