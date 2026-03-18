/*
 * XREFs of MiInitializeLargeMdlLeafPfns @ 0x140589B90
 * Callers:
 *     MiDoGangAssignment @ 0x1405C00C0 (MiDoGangAssignment.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInitializeMdlLeafPfns @ 0x140589C40 (MiInitializeMdlLeafPfns.c)
 */

void __fastcall MiInitializeLargeMdlLeafPfns(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // r15
  int v5; // ebx
  _QWORD *v6; // rbp
  unsigned __int64 LeafPfnBuddy; // rax
  _QWORD *v8; // rdi
  int PfnPageSizeIndex; // eax

  v3 = *(_QWORD *)(a2 + 72);
  if ( (*(_DWORD *)(a2 + 8) & 0x80000200) != 0 )
    v5 = 0;
  else
    v5 = MiSwizzleInvalidPte(128LL);
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    do
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
      *a1 = LeafPfnBuddy;
      v8 = (_QWORD *)LeafPfnBuddy;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v6);
      MiInitializeMdlLeafPfns((_DWORD)v6, MiLargePageSizes[PfnPageSizeIndex], v3, v5, *(_DWORD *)(a2 + 8));
      v6 = v8;
    }
    while ( v8 && !KeShouldYieldProcessor() );
  }
}
