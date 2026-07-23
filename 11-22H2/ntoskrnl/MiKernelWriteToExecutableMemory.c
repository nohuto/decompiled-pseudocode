/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1406463DC
 * Callers:
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     NtWaitLowEventPair @ 0x1407FDD10 (NtWaitLowEventPair.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B198 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, struct _KPROCESS *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  HANDLE v11; // rcx
  unsigned int v12; // ebx

  v6 = a3[1].ActiveProcessors.StaticBitmap[28];
  v7 = a1 + 56;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 632);
  v10 = MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  if ( NtWaitLowEventPair(v11) >= 0 )
  {
    MiRelockFaultState(v7, v10);
    if ( v9 == *(_QWORD *)(v6 + 632) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v12 = -1073739997;
    MiRelockFaultState(v7, v10);
  }
  return v12;
}
