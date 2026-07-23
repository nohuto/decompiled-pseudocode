/*
 * XREFs of MiInitializeShadowPageTable @ 0x14081E1D0
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14081E0C0 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetPfnOldestWsleLeafCount @ 0x140292794 (MiSetPfnOldestWsleLeafCount.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E41F0 (MiInitializePfnForOtherProcess.c)
 *     MiReplicatePteChange @ 0x1403684A0 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x140376744 (MiMarkPxeAsShadowed.c)
 *     MiVaToPfnEx @ 0x14038A450 (MiVaToPfnEx.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403C0890 (MiReadWriteAnyLevelShadowPte.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x140645C80 (MI_IS_PTE_SHADOW_STACK.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _DWORD *a2, int a3)
{
  bool v3; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 PteAddress; // rax
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  ULONG_PTR v21; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = (__int64)(a1 << 25) >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      PteAddress = a1;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v10 != 1 );
      v21 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = v21;
      v8 = MiVaToPfnEx(v6);
    }
    else
    {
      v21 = MI_READ_PTE_LOCK_FREE(a1);
      v7 = v21;
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
    }
    if ( (v7 & 0x800) != 0 )
    {
      v11 = 4;
    }
    else
    {
      LOBYTE(v12) = MI_IS_PTE_SHADOW_STACK(&v21);
      v3 = v12 != 0;
    }
    v13 = v11 | 2;
    if ( v7 < 0 )
      v13 = v11;
    goto LABEL_14;
  }
  *(_QWORD *)a2 = 0LL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x88000000000LL) >> 4);
  MiSetPfnOldestWsleLeafCount(a2, 0);
  v13 = v14 + 6;
  if ( a3 != 3 )
  {
LABEL_14:
    v15 = MiGetPteAddress(a1);
    v21 = MiReadWriteAnyLevelShadowPte(v15, v16, 0, ZeroPte);
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_16;
  }
  v17 = -1LL;
LABEL_16:
  ValidPte = MiMakeValidPte(a1, v8, v13 | (a3 != 0 ? -1744830464 : -1879048192));
  v19 = ValidPte;
  if ( v3 )
    v19 = ValidPte | 0x40;
  v20 = v19 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v17 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, a1, v17, 2560);
  }
  MiReadWriteAnyLevelShadowPte(a1, a3, 1, v20);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(a1);
    MiReplicatePteChange(a1, v20, 0);
  }
}
