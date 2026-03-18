/*
 * XREFs of MiClearContainingMapping @ 0x1402170F4
 * Callers:
 *     MiDeleteTopLevelPage @ 0x140217060 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  BOOL v10; // edi
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000LL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v7 & 1) != 0 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v10 = 0;
      if ( (unsigned int)MiPteInShadowRange(v6) )
        v10 = MiPteHasShadow(v11, v8) != 0;
      *v6 = v9;
      if ( v10 )
        MiWritePteShadow(v6, v9);
    }
    LOBYTE(v8) = 17;
    return MiUnmapPageInHyperSpaceWorker(v5, v8, 0x80000000LL);
  }
  return result;
}
