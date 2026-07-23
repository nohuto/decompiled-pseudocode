/*
 * XREFs of sub_1405E4A4C @ 0x1405E4A4C
 * Callers:
 *     sub_1405E4E04 @ 0x1405E4E04 (sub_1405E4E04.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall sub_1405E4A4C(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // r14
  KSPIN_LOCK v5; // rdi
  char v6; // dl
  void *v7; // rcx
  KSPIN_LOCK v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // edx
  __int64 v13; // r9
  bool v14; // zf
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  RegionSize = 0LL;
  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[20];
  v6 = *((_BYTE *)SpinLock + 128);
  v7 = (void *)SpinLock[18];
  BaseAddress = v7;
  v8 = v5 + a2;
  if ( !v6 )
  {
    if ( v8 > (unsigned __int64)v7 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v7 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    SpinLock[20] = v5 + a2;
    v4 = v5;
    goto LABEL_9;
  }
  if ( v8 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  v9 = *((unsigned __int8 *)SpinLock + 8);
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = (v12 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v12;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v4;
}
