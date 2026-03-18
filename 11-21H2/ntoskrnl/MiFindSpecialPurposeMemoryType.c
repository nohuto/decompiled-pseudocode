/*
 * XREFs of MiFindSpecialPurposeMemoryType @ 0x140599E60
 * Callers:
 *     MiAddSpecialPurposeMemoryPrepare @ 0x14096DF60 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14096E3D8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryType(__int64 a1, const void *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 16624);
  for ( i = *(_QWORD **)(a1 + 16624); ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    if ( !memcmp(i + 3, a2, 0x20uLL) )
      break;
  }
  return i;
}
