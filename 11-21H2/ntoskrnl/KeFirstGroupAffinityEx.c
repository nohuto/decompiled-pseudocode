/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14035C9C0
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_1405C8024 @ 0x1405C8024 (sub_1405C8024.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return 0LL;
}
