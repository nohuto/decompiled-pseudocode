/*
 * XREFs of MiGetClosestImplicitNode @ 0x1402E602C
 * Callers:
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140A2CBC0 (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140C65A98 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
