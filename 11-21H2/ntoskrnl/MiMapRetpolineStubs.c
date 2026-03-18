/*
 * XREFs of MiMapRetpolineStubs @ 0x1405A1F60
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiLockAndIncrementShareCount @ 0x14027D258 (MiLockAndIncrementShareCount.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 ContainingPageTable; // rax
  int v14; // r13d
  unsigned __int64 v15; // rbx
  bool v16; // zf
  __int64 v18; // [rsp+60h] [rbp+8h]
  unsigned __int8 v19; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v6 = SessionVm;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = qword_140C4F408;
  v9 = 0LL;
  v19 = MiLockWorkingSetShared(SessionVm);
  if ( !dword_140C4F440 )
    goto LABEL_22;
  do
  {
    v11 = *(_QWORD *)(v18 + 8 * v9 + 48);
    v12 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v6, v4);
    }
    v4 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v4, 0LL, v10);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v8 + 8 * v9);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v11);
    v14 = 0;
    v15 = MiMakeValidPte(v8 + 8 * v9, v11, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v8 + 8 * v9) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_17;
      v16 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v16 = (v15 & 1) == 0;
    }
    if ( !v16 )
      v15 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v12 = v15;
    if ( v14 )
      MiWritePteShadow(v8 + 8 * v9, v15);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C4F440 );
  if ( v4 )
    MiUnlockPageTableInternal(v6, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v6, v19);
  return v7;
}
