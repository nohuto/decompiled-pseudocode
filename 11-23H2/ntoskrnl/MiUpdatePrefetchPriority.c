/*
 * XREFs of MiUpdatePrefetchPriority @ 0x140333C6C
 * Callers:
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x140632528 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 */

void __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v5; // edi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 **Address; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  v13 = v7;
  if ( (v7 & 1) != 0 )
  {
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL;
    if ( v8 > qword_140C65BA0 )
      return;
    if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return;
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (*(_BYTE *)(v9 + 35) & 7) == v5 )
      return;
    if ( a3 )
    {
      if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x10 )
        return;
    }
    else if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 296) )
    {
      MiLockVadTree(1);
      Address = MiLocateAddress(a2);
      if ( !Address || ((_DWORD)Address[6] & 0x70) == 0x10 )
      {
        MiUnlockVadTree(1, 0x11u);
        return;
      }
      MiUnlockVadTree(1, 0x11u);
    }
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
  }
  else
  {
    if ( !v7 )
      return;
    if ( (v7 & 0x400) != 0 )
      return;
    if ( (v7 & 0x800) == 0 )
      return;
    v9 = MiLockTransitionLeafPageEx(v6);
    if ( !v9 )
      return;
  }
  if ( (unsigned int)MiGetPfnPriority(v9) != v5 )
    MiUpdatePfnPriority(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
}
