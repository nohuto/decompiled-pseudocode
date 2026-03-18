/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x14036C9FC
 * Callers:
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 * Callees:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x14036C624 (MiShadowTopLevelPxes.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  BOOL v12; // r14d

  v4 = a2;
  v5 = ((__int64)(a3 - a2) >> 3) + 1;
  v6 = a1;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v8 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000);
  v9 = (volatile signed __int64 *)(v8 + 8 * ((v4 >> 3) & 0x1FF));
  if ( v4 <= a3 )
  {
    while ( 1 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(v4);
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
      if ( v10 != v11 )
      {
        if ( (v10 & 1) == 0 )
        {
          v12 = 0;
          if ( MiPteInShadowRange((unsigned __int64)v9) )
            v12 = MiPteHasShadow() != 0;
          goto LABEL_8;
        }
        if ( (v11 & 1) == 0 )
        {
          v12 = 0;
          if ( MiPteInShadowRange((unsigned __int64)v9) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v12 = 1;
              if ( !HIBYTE(word_140C51864) )
LABEL_21:
                v10 |= 0x8000000000000000uLL;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              goto LABEL_21;
            }
          }
LABEL_8:
          *v9 = v10;
          if ( v12 )
            MiWritePteShadow((__int64)v9, v10);
          goto LABEL_10;
        }
        MiTransformValidPteInPlace(v9, v4, v10, 3u);
      }
LABEL_10:
      v4 += 8LL;
      ++v9;
      if ( v4 > a3 )
      {
        v6 = a1;
        break;
      }
    }
  }
  MiUnmapPageInHyperSpaceWorker(v8, 0x11u);
  return MiShadowTopLevelPxes(v6, v4 - 8LL * v5, v5);
}
