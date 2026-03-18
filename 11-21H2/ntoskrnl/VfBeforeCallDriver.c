/*
 * XREFs of VfBeforeCallDriver @ 0x140A8CC6C
 * Callers:
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140A80ACC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140A80B3C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfBugCheckNoStackUsage @ 0x1405FF5A0 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x140A8C89C (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140A8D4A4 (ViIrpCheckKernelAddressForIrp.c)
 *     VfDeadlockBeforeCallDriver @ 0x140A98064 (VfDeadlockBeforeCallDriver.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (MmVerifierData & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    ViIrpCheckKernelAddressForIrp(a2, v7);
  }
  if ( a3 )
  {
    if ( !KeAreInterruptsEnabled() && (VfRuleClasses & 0x400000) == 0 )
    {
      *(_BYTE *)(a3 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      *(_OWORD *)&xmmword_140D57548 = 0LL;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140D57540 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
    *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v10 = *(_QWORD *)(a2 + 80);
      if ( v10 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v10 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    v8 = VfDeadlockBeforeCallDriver(a2);
    if ( !VfIoDisabled )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      IovpCallDriver1(a3);
    }
  }
  else
  {
    return (unsigned int)VfDeadlockBeforeCallDriver(a2);
  }
  return v8;
}
