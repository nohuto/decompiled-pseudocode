/*
 * XREFs of sub_1405E4B98 @ 0x1405E4B98
 * Callers:
 *     sub_1405E4CD4 @ 0x1405E4CD4 (sub_1405E4CD4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall sub_1405E4B98(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v3; // rsi
  KSPIN_LOCK v4; // rdi
  char v5; // dl
  char *v6; // rcx
  KSPIN_LOCK v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // edx
  __int64 v12; // r9
  bool v13; // zf
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = a2;
  RegionSize = 0LL;
  v3 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = SpinLock[21];
  v5 = *((_BYTE *)SpinLock + 128);
  v6 = (char *)SpinLock[19];
  BaseAddress = v6;
  v7 = v4 - 8;
  if ( !v5 )
  {
    if ( v7 < (unsigned __int64)v6 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v6 - 4096) <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v6 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v3 = v4 - 8;
    SpinLock[21] = v4 - 8;
    goto LABEL_9;
  }
  if ( v7 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  v8 = *((unsigned __int8 *)SpinLock + 8);
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = (v11 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v11;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v3;
}
