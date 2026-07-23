/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x18004AB70
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004AAC4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004AF3C (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047474 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapLock @ 0x18004AC54 (RtlpCSparseBitmapLock.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004ACA4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpWaitOnAddress @ 0x18004FE64 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  NTSTATUS v11; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // [rsp+28h] [rbp-48h]
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  __int128 v17; // [rsp+58h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  v19 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)a1 + (v5 << 12));
    v11 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 0LL, 1073745920, 4u, v15, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v19;
  }
  v17 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3, v9, v10);
    RtlpWaitOnAddress(a1 + 32, (unsigned int)&v19, 8, 0, RtlpWaitOnAddressSpinCycleCount);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v7 << 12));
    v11 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 0LL, 1073745920, 4u, v15, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v11 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3, v13, v14);
      return (unsigned int)v11;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
