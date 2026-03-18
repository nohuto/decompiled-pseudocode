/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140291158
 * Callers:
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  int v2; // eax
  int v3; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    v2 = *(_DWORD *)(a1 + 376);
  else
    v2 = v3;
  return (v2 & 0x40000) != 0;
}
