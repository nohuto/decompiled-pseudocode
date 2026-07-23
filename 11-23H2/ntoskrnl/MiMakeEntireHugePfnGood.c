/*
 * XREFs of MiMakeEntireHugePfnGood @ 0x140621A64
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     RtlNumberOfSetBitsEx @ 0x1405A90E0 (RtlNumberOfSetBitsEx.c)
 *     MiHugePfnPartition @ 0x1406211A0 (MiHugePfnPartition.c)
 *     MiUnlinkHugeRange @ 0x14062300C (MiUnlinkHugeRange.c)
 */

unsigned __int64 *__fastcall MiMakeEntireHugePfnGood(__int64 a1)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rbp
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 *result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 & 0x3FFFFF;
  v8 = 0LL;
  v3 = (_QWORD *)(qword_140C67DF0 + 8 * v2);
  v4 = MiHugePfnPartition(v3);
  MiSearchNumaNodeTable((unsigned __int64)(unsigned int)v2 << 18);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67310);
  v5 = (unsigned __int64 *)qword_140C67360;
  while ( v5 )
  {
    v6 = v5[3] & 0x3FFFFF;
    if ( v2 <= v6 )
    {
      if ( v2 >= v6 )
        break;
      v5 = (unsigned __int64 *)*v5;
    }
    else
    {
      v5 = (unsigned __int64 *)v5[1];
    }
  }
  if ( (*(_BYTE *)v3 & 7) == 4 )
    MiUnlinkHugeRange(v4, a1);
  *((_QWORD *)&v8 + 1) = v5[4];
  *(_QWORD *)&v8 = 0x40000LL;
  qword_140C67368 -= RtlNumberOfSetBitsEx(&v8);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C67360, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
  result = v5;
  *v3 &= ~8uLL;
  return result;
}
