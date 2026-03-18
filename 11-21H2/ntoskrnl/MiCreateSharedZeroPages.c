/*
 * XREFs of MiCreateSharedZeroPages @ 0x14033C5F0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140232E08 (MiAdvanceFaultList.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x14033C880 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rdi
  __int64 v4; // r15
  unsigned __int64 v6; // rsi
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 PageChain; // r13
  __int128 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int v18; // ebx
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  int v24; // r9d
  __int64 ClusterPage; // rax
  bool v26; // zf
  unsigned int v27; // eax
  int v28; // [rsp+20h] [rbp-68h]
  _QWORD *v29; // [rsp+40h] [rbp-48h]
  char v30; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v31 = a2;
  v2 = *(_DWORD **)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v21 = *(unsigned int *)(v4 + 48);
    if ( (v21 & 0x200000) == 0 && MiVadPageSizes[(v21 >> 19) & 3] == 16 )
    {
      v23 = *a2;
      v24 = *(_DWORD *)(a1 + 32);
      v28 = *(_DWORD *)(a1 + 36);
      v30 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v23, v24, v28, (__int64)&v30);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
        {
          v26 = v30 == 0;
          *a2 = 1LL;
          if ( !v26 )
            *(_DWORD *)a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v27 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *(_QWORD *)(a1 + 16) = v6;
          v2 -= 2 * (v27 & 0xF);
        }
        v29 = *(_QWORD **)(a1 + 56);
LABEL_22:
        v12 = *(unsigned int *)(v4 + 52);
        LODWORD(v12) = v12 & 0x7FFFFFFF;
        v22 = v12 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31);
        v32 = 0;
        if ( v22 == 0x7FFFFFFFELL )
        {
          DWORD2(v12) = 64;
          v32 = 64;
        }
        goto LABEL_4;
      }
      v7 = *(_DWORD **)(a1 + 24);
      *a2 = 1LL;
    }
  }
  MiSharedVaToPartition(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v6, v7);
  v9 = MiProtectionToCacheAttribute(v8);
  PageChain = MiGetPageChain(v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v6, *(_DWORD *)(a1 + 48), v9, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
  DWORD2(v12) = 0;
  v29 = *(_QWORD **)(a1 + 56);
  v32 = 0;
  if ( v4 )
    goto LABEL_22;
LABEL_4:
  v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v14 = 0;
  while ( v14 < *v31 )
  {
    v15 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFFLL;
    v16 = PageChain;
    v33 = PageChain;
    if ( v15 == 0x3FFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v15 - 0x220000000000LL;
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4);
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4));
      DWORD2(v12) = v32;
      v16 = v33;
    }
    v18 = (*v2 >> 5) & 0x1F;
    if ( v18 == 24 )
      v18 = 1;
    LODWORD(v12) = *(_DWORD *)a1;
    DWORD2(v12) |= 0x112u;
    v32 = DWORD2(v12);
    if ( (v12 & 4) != 0 || ((v18 - 4) & 0xFFFFFFFD) != 0 )
    {
      DWORD2(v12) |= 0x20u;
      v32 = DWORD2(v12);
    }
    MiInitializePfn(v16, v2, v18, DWORD2(v12));
    ValidPte = MiMakeValidPte((unsigned __int64)v2, v17, v18 | 0x20000000);
    if ( MiPteInShadowRange((unsigned __int64)v2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = ValidPte;
        MiWritePteShadow((__int64)v2, ValidPte);
        goto LABEL_14;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v2 = ValidPte;
LABEL_14:
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v33, 0);
      if ( v29 )
      {
        if ( (*(_DWORD *)a1 & 8) == 0 && v13 == *(_QWORD *)(v29[1] + 16LL * v29[3]) + (v29[4] << 12) )
          MiAdvanceFaultList(v29);
      }
    }
    ++v14;
    DWORD2(v12) = v32;
    v13 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}
