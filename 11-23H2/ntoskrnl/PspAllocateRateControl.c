/*
 * XREFs of PspAllocateRateControl @ 0x140684EF8
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x140683BA8 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspSetJobRateControl @ 0x1409B2FDC (PspSetJobRateControl.c)
 * Callees:
 *     PspGetRateControlSize @ 0x140684F74 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x14075C334 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 *__fastcall PspAllocateRateControl(__int64 a1)
{
  __int64 RateControlSize; // rdi
  unsigned int v2; // r9d
  int v3; // ecx
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  RateControlSize = PspGetRateControlSize(a1);
  v2 = 64;
  if ( v3 != 2 )
    v2 = 256;
  Pool2 = (__int64 *)ExAllocatePool2(v2, RateControlSize, 1649046352LL);
  if ( Pool2 )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      *Pool2 = v5;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x624A7350u);
      return 0LL;
    }
  }
  return Pool2;
}
