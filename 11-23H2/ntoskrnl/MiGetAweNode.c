/*
 * XREFs of MiGetAweNode @ 0x14064ADF4
 * Callers:
 *     MiGetAwePageSizeFromVa @ 0x14064AE74 (MiGetAwePageSizeFromVa.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A42068 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42B30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42DE0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetAweNode(unsigned __int64 a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // r9
  __int64 v3; // r10

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 384);
  if ( v1 )
  {
    v2 = a1 >> 12;
    do
    {
      v3 = v1[3];
      if ( v2 <= (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
      {
        if ( v2 >= (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
          return v1;
        v1 = (_QWORD *)*v1;
      }
      else
      {
        v1 = (_QWORD *)v1[1];
      }
    }
    while ( v1 );
  }
  return v1;
}
