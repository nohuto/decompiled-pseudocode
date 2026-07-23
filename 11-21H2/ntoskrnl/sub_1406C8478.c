/*
 * XREFs of sub_1406C8478 @ 0x1406C8478
 * Callers:
 *     sub_1406C81D4 @ 0x1406C81D4 (sub_1406C81D4.c)
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C8478(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70696D57u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    PoolWithTag[4] = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v7 = off_140C04390[0];
    if ( *(PVOID **)off_140C04390[0] != &off_140C04388 )
      __fastfail(3u);
    *(_QWORD *)v6 = &off_140C04388;
    *((_QWORD *)v6 + 1) = v7;
    *v7 = v6;
    off_140C04390[0] = (_UNKNOWN **)v6;
    KeReleaseMutex(&Object, 0);
    if ( _InterlockedIncrement(&dword_140C0BB00) == 1 )
      ExQueueWorkItem(&stru_140C16640, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
