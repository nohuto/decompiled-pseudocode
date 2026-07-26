/*
 * XREFs of NdisPacketPoolUsage @ 0x1C00C5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketPoolUsage(NDIS_HANDLE PoolHandle)
{
  KSPIN_LOCK *v1; // rbp
  UINT v3; // edi
  KIRQL v4; // r15
  _QWORD *v5; // rax
  unsigned __int16 *i; // rsi
  _SLIST_HEADER **v7; // r14
  _SLIST_HEADER *Alignment; // rbx
  USHORT DepthSList; // ax

  v1 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v5 = (_QWORD *)*((_QWORD *)PoolHandle + 7);
  for ( i = (unsigned __int16 *)((char *)PoolHandle + 6); v5 != (_QWORD *)((char *)PoolHandle + 56); v3 += *i )
    v5 = (_QWORD *)*v5;
  v7 = (_SLIST_HEADER **)((char *)PoolHandle + 40);
  Alignment = *v7;
  while ( Alignment != (_SLIST_HEADER *)v7 )
  {
    DepthSList = ExQueryDepthSList(Alignment + 2);
    Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    v3 += *i - DepthSList;
  }
  KeReleaseSpinLock(v1, v4);
  return v3;
}
