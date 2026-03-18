/*
 * XREFs of MiLockPagedAddress @ 0x1402ED4F0
 * Callers:
 *     MiLockPagedRange @ 0x140748850 (MiLockPagedRange.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteVolatile @ 0x140217040 (MiWriteValidPteVolatile.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // al
  int v12; // edi
  int v13; // eax
  ULONG_PTR v14; // rdi
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v6 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v7 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0LL, 0, v6, 4);
      v8 = MI_READ_PTE_LOCK_FREE(v2);
      v16 = v8;
      if ( (v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      v13 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v14 = v13;
      if ( v13 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v14, 0LL, BugCheckParameter1);
      }
LABEL_16:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    v12 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, v2, 0xFFFFFFFFFFFFFFFFuLL, 0);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
    if ( v12 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v12);
      goto LABEL_16;
    }
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v9, 0LL) )
    v3 = MiCaptureDirtyBitToPfn(v9);
  else
    v7 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)), v3, 1);
    v10 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  return v7;
}
