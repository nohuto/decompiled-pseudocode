/*
 * XREFs of RtlQueryPointerMapping @ 0x180102450
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax

  RtlAcquireSRWLockShared(&RtlpPtrTreeLock, (unsigned __int64)a2, a3, a4);
  v6 = RtlpPtrTree;
  if ( (qword_180184888 & 1) != 0 && RtlpPtrTree )
    v6 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v6 )
  {
    if ( a1 - *(_QWORD *)(v6 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v6 + 24) <= 0 )
        break;
      v7 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v6;
    }
    if ( (qword_180184888 & 1) != 0 && v7 )
      v6 ^= v7;
    else
      v6 = v7;
  }
  if ( v6 )
    *a2 = *(_QWORD *)(v6 + 32);
  RtlReleaseSRWLockShared(&RtlpPtrTreeLock);
  return v6 == 0 ? 0xC0000225 : 0;
}
