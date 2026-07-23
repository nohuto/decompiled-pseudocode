/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x140368684
 * Callers:
 *     MiReplicatePteChange @ 0x1403684A0 (MiReplicatePteChange.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x140292C4C (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x1403C335C (MiTransformValidPteInPlace.c)
 */

struct _KTHREAD *__fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  BOOL HasShadow; // esi
  __int64 v11; // r8

  if ( a1 )
    v4 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v5 = MiMapPageInHyperSpaceWorker(v4, 0LL, 0x80000000);
  v6 = (__int64 *)(v5 + 8 * ((a2 >> 3) & 0x1FF));
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
  if ( v7 == v8 )
    goto LABEL_4;
  if ( (v7 & 1) == 0 )
  {
    HasShadow = 0;
    if ( MiPteInShadowRange((unsigned __int64)v6) )
      HasShadow = MiPteHasShadow();
    goto LABEL_8;
  }
  if ( (v8 & 1) != 0 )
  {
    MiTransformValidPteInPlace(v6, a2, v7, 3LL);
    goto LABEL_4;
  }
  HasShadow = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v6) )
    goto LABEL_8;
  if ( MiPteHasShadow() )
  {
    HasShadow = 1;
    if ( HIBYTE(word_140C66CFC) )
      goto LABEL_8;
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    goto LABEL_8;
  }
  v7 |= 0x8000000000000000uLL;
LABEL_8:
  *v6 = v7;
  if ( HasShadow )
    MiWritePteShadow((__int64)v6, v7, v11);
LABEL_4:
  MiUnmapPageInHyperSpaceWorker(v5, 0x11u);
  return MiShadowTopLevelPxes(a1, a2, 1);
}
