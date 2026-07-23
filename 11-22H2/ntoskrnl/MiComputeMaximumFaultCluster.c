/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x1402385D0
 * Callers:
 *     MiDispatchFault @ 0x140237F10 (MiDispatchFault.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     MiUnlockVadTree @ 0x140287758 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MiFaultListPagesRemaining @ 0x14034AE8C (MiFaultListPagesRemaining.c)
 *     KiRspInIstStack @ 0x14035A590 (KiRspInIstStack.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  char *v4; // rax
  unsigned __int64 v5; // rdi
  __int16 v7; // ax
  bool v8; // dl
  void *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  __int64 **v15; // rbx
  __int64 **Address; // rax
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = (char *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 != (v2 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v10 = MiFaultListPagesRemaining();
    v11 = 1;
    goto LABEL_12;
  }
  if ( (v2 & 1) != 0 )
  {
    v18 = *v4;
    if ( *v4 == 1 || v18 == 3 || v18 == 6 )
      return 1LL;
  }
  else if ( v2 )
  {
    v7 = *(_WORD *)(v2 + 368);
    v8 = 0;
    if ( v7 == 16 )
    {
      if ( (*(_DWORD *)(v2 + 376) & 0x200) != 0
        || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v2 + 384)) && !(unsigned int)KiRspInIstStack(2LL, v19) )
      {
        v9 = &ExpInterlockedPopEntrySListFault;
        v8 = KiDynamicTraceEnabled
          && (v20 = *(_QWORD *)(v2 + 360), v20 >= ControlPc)
          && v20 < qword_140D1F2B0
          && KeGetCurrentIrql() == 15;
LABEL_7:
        if ( *(void **)(v2 + 360) == v9 || v8 )
          return 1LL;
      }
    }
    else if ( v7 == 51 )
    {
      v9 = (void *)qword_140D1F370;
      goto LABEL_7;
    }
  }
  v10 = 1LL;
  if ( *(unsigned __int8 *)(a1 + 81) > 1uLL )
    v10 = *(unsigned __int8 *)(a1 + 81);
  v11 = 0;
LABEL_12:
  if ( v10 == 1 )
    return 1LL;
  if ( !a2 || a2 > v10 )
    a2 = v10;
  v13 = 512LL - (((unsigned int)(v5 >> 9) >> 3) & 0x1FF);
  v14 = v13;
  if ( a2 <= v13 )
    v14 = a2;
  if ( v5 >= 0xFFFF800000000000uLL )
  {
    if ( !v11 )
    {
      v13 = 1LL;
      if ( *(char **)(a1 + 56) == MiGetAnyMultiplexedVm(1) )
      {
        v21 = P;
        if ( P )
        {
          do
          {
            v22 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v5 < v22 + v21[4] )
            {
              if ( v5 >= v22 )
                break;
              v21 = (_QWORD *)*v21;
            }
            else
            {
              v21 = (_QWORD *)v21[1];
            }
          }
          while ( v21 );
          if ( v21 )
          {
            v13 = 8LL;
            v23 = (v5 - (v21[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12;
            if ( (v21[4] >> 12) - v23 < 8 )
              v13 = (v21[4] >> 12) - v23;
          }
        }
      }
    }
  }
  else
  {
    v15 = *(__int64 ***)(a1 + 88);
    if ( v15
      || (MiLockVadTree(1LL),
          Address = MiLocateAddress(v5),
          LOBYTE(v17) = 17,
          v15 = Address,
          MiUnlockVadTree(1LL, v17),
          v15) )
    {
      v13 = (*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) - (v5 >> 12) + 1;
    }
    else
    {
      v13 = 1LL;
    }
  }
  if ( v14 <= v13 )
    return v14;
  return v13;
}
