/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402E4C90
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5FD0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ecx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf

  v3 = *a1;
  v7 = a3 & 2;
  if ( (a3 & 2) == 0 && MiPteInShadowRange((unsigned __int64)a1) && (unsigned int)MiPteHasShadow(v9, v8, v10) )
    goto LABEL_9;
  v11 = ((unsigned int)MiFlags >> 26) & 3;
  if ( v11 > 1 )
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    goto LABEL_6;
  }
  if ( !v11 )
  {
LABEL_9:
    if ( (a3 & 4) != 0 )
      return 1LL;
    if ( v7 )
    {
      *a1 = a2;
      return 1LL;
    }
    v13 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a1) )
    {
      if ( (unsigned int)MiPteHasShadow(v15, v14, v16) )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v17 = (a2 & 1) == 0;
          goto LABEL_26;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v17 = (a2 & 1) == 0;
LABEL_26:
        if ( !v17 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    *a1 = a2;
    if ( v13 )
      MiWritePteShadow(a1, a2);
    return 1LL;
  }
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)a1 <= 0xFFFFF6FB7FFFFFFFuLL
    && (v3 & 0x80u) == 0LL )
  {
    LOBYTE(v3) = 32;
  }
LABEL_6:
  if ( (v3 & 0x20) != 0 )
    goto LABEL_9;
  return (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) != 0;
}
