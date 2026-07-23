/*
 * XREFs of sub_1409F8178 @ 0x1409F8178
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x14041EE40 (ZwSetSystemTime.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1409F8048 @ 0x1409F8048 (sub_1409F8048.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409F8178(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax

  v1 = 0;
  v2 = sub_140204738(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3F0uLL, 0x5A547845u);
  v2[157] = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3F0uLL);
    *(_DWORD *)(v2[157] + 432LL) = -1;
    sub_1409F8048((__int64)L"ActiveTimeBias", -1, v2[157] + 436LL);
    sub_1407D6F54(1u);
    sub_140835844(1);
    ExReleaseResourceLite(&stru_140C15AC0);
    KeLeaveCriticalRegion();
    ZwSetSystemTime(0LL, 0LL);
  }
  else
  {
    v1 = -1073741670;
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
