/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1403623A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x14021DB04 (MiGetCurrentMultiplexedVm.c)
 *     MiGetStandbyRepurposed @ 0x1402204FC (MiGetStandbyRepurposed.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  int v5; // ecx
  int v6; // edx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int8 v11; // r14
  volatile LONG *SharedVm; // rax
  volatile LONG *v13; // rax
  int StandbyRepurposed; // eax
  __int64 v15; // r8
  _UNKNOWN **v16; // rcx
  int v17; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v17 = v6 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  SharedVm = (volatile LONG *)MiGetSharedVm(AnyMultiplexedVm);
  ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 16);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 128);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 120);
  if ( *(char *)(AnyMultiplexedVm + 184) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (*(_BYTE *)(AnyMultiplexedVm + 184) & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 6984);
  v13 = (volatile LONG *)MiGetSharedVm(AnyMultiplexedVm);
  ExReleaseSpinLockExclusiveFromDpcLevel(v13 + 16);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v11);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1u);
  v15 = *a2;
  v16 = (_UNKNOWN **)a2[6];
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (_UNKNOWN **)(v15 + *(_QWORD *)(v10 + 6976));
  if ( result > v16 )
    result = v16;
  a2[1] <<= 12;
  *a2 = v15 << 12;
  a2[5] = result;
  return result;
}
