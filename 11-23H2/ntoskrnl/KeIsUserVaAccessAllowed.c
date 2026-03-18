/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140249BE0
 * Callers:
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     MiDbgCopyMemory @ 0x1402E5E58 (MiDbgCopyMemory.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  _BYTE v2[3]; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    return (*(_DWORD *)(a1 + 376) & 0x40000) != 0;
  return (*(_DWORD *)v2 & 0x40000) != 0;
}
