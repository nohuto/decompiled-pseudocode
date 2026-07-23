/*
 * XREFs of MiExpandPartitionIds @ 0x140A44BD0
 * Callers:
 *     MiAllocatePartitionId @ 0x140A2FB30 (MiAllocatePartitionId.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B280 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     RtlClearAllBits @ 0x140290FE0 (RtlClearAllBits.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  _RTL_BITMAP *Pool; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  ULONG_PTR v4; // rax
  unsigned __int64 v5; // rbx
  __int64 *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( (__int64 *)qword_140C673C8 != &qword_140C673C0 )
    v0 = qword_140C673A8->SizeOfBitMap + 512;
  if ( v0 <= qword_140C673A8->SizeOfBitMap )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  Pool = (_RTL_BITMAP *)MiAllocatePool(64, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 0x20206D4Du);
  v2 = 0LL;
  v3 = Pool;
  if ( !Pool )
    return 0LL;
  Pool->SizeOfBitMap = v0;
  Pool->Buffer = &Pool[1].SizeOfBitMap;
  if ( (__int64 *)qword_140C673C8 == &qword_140C673C0 )
  {
    v4 = MiReservePtes((__int64)&qword_140C69940, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = (__int64)(v4 << 25) >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = qword_140C673C8 + 8LL * qword_140C673A8->SizeOfBitMap;
  }
  PteAddress = (__int64 *)MiGetPteAddress(v5);
  if ( !(unsigned int)MiMakeZeroedPageTables((int)PteAddress, (int)PteAddress, 33, 9) )
  {
    if ( (__int64 *)qword_140C673C8 == &qword_140C673C0 )
      MiReleasePtes((__int64)&qword_140C69940, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v5, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C673C8 == &qword_140C673C0 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140C673C8;
    qword_140C673C8 = v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C673A8->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C673A8->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C673A8 != (PRTL_BITMAP)&dword_140C673B0 )
    ExFreePoolWithTag(qword_140C673A8, 0);
  qword_140C673A8 = v3;
  return 1LL;
}
