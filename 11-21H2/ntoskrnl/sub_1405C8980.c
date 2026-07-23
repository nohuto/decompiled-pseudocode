/*
 * XREFs of sub_1405C8980 @ 0x1405C8980
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405C8980(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(&v5[2], 0, 0x100uLL);
  v2 = *(void **)(a1 + 33600);
  if ( v2 )
  {
    v5[0] = 2097153;
    memset(&v5[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    sub_14042A5E0(v3, v5);
    KeAcquireSpinLockAtDpcLevel(&qword_140C23008);
    *(_QWORD *)(a1 + 33600) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
    *(_QWORD *)(a1 + 33608) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
