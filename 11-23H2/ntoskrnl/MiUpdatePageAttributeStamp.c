/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x140334F08
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D9480 (MiDetermineModifiedPageListHead.c)
 *     MiReleasePageListLock @ 0x1402DDD60 (MiReleasePageListLock.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E18C0 (MiSetPfnTbFlushStamp.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1406571A8 (MiGetSlabAllocatorStandbyList.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 SlabAllocatorStandbyList; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v10[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x68uLL);
  if ( !*(_WORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = (v2 >> 43) & 0x3FF;
    v4 = *(_QWORD *)(qword_140C673C8 + 8 * v3);
    v5 = *(_QWORD *)(v4 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 6824);
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      if ( (v2 & 0x20000000000000LL) != 0 )
      {
        _InterlockedOr(v9, 0);
        MiSetPfnTbFlushStamp(a1, KiTbFlushTimeStamp, 1);
        return;
      }
      if ( (unsigned int)MiCheckSlabPfnBitmap(a1, 1LL, 0) && _bittest64((const signed __int64 *)(a1 + 40), 0x3Bu) )
      {
        SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(a1, 0LL, v6, v7);
LABEL_15:
        v5 = SlabAllocatorStandbyList;
        goto LABEL_6;
      }
      v5 = v4 + 88LL * (unsigned int)MiGetPfnPriority(a1) + 2944;
    }
    else if ( *(_DWORD *)(v5 + 8) == 3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        SlabAllocatorStandbyList = MiDetermineModifiedPageListHead(a1, *(_QWORD *)(qword_140C673C8 + 8 * v3), 0);
        goto LABEL_15;
      }
      v5 = 88LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2)
         + v4
         + 5312;
    }
LABEL_6:
    MiAcquirePageListLock(v5, a1, 1, (__int64)v10);
    _InterlockedOr(v9, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
    MiReleasePageListLock(v5, (__int64)v10);
  }
}
