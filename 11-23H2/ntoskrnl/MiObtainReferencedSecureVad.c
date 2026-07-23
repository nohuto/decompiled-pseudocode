/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1402159D4
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14061CC60 (MiCheckLockUnlockByVa.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A3221C (MmAdjustSecuredVirtualMemorySize.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1406611A8 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  ULONG_PTR v6; // rsi
  __int64 Address; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    *a2 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD *)(BugCheckParameter3 + 8);
    Address = MiLocateAddress(v6);
    v8 = Address;
    if ( !Address )
      KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
    if ( !_InterlockedIncrement((volatile signed __int32 *)(Address + 36)) )
      __fastfail(0xEu);
    --CurrentThread->SpecialApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    v9 = v6 >> 12;
    MiLockVad(CurrentThread, v8);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (*(_DWORD *)(v8 + 48) & 4) != 0 )
    {
      MiWaitForVadDeletion(v8);
      MiUnlockAndDereferenceVad((PVOID)v8);
      *a2 = (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 ? -1073741558 : -1073741664;
    }
    else
    {
      if ( v9 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
        && v9 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
      {
        return v8;
      }
      MiUnlockAndDereferenceVad((PVOID)v8);
      *a2 = -1073741664;
    }
  }
  return 0LL;
}
