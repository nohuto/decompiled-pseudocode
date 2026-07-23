/*
 * XREFs of MiNodeFromFaultPacket @ 0x1402613F0
 * Callers:
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFromFaultPacket(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(a1 + 16) & 1) != 0 && (*(_BYTE *)v1 == 2 || *(_BYTE *)v1 == 7 || ((*(_BYTE *)v1 - 4) & 0xFB) == 0) )
    return *(unsigned int *)(v1 + 40);
  else
    return 0LL;
}
