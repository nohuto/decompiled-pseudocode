/*
 * XREFs of MiPrepareToStealNonPagedPool @ 0x14061D934
 * Callers:
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 */

unsigned __int64 __fastcall MiPrepareToStealNonPagedPool(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v3 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    ++dword_140C1364C;
    return 0LL;
  }
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v4 & 0x220) != 0x20 )
  {
    ++dword_140C13650;
    return 0LL;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5, v4) )
  {
    ++dword_140C13654;
    return 0LL;
  }
  KeFlushSingleTb(v3, 0, 2u);
  return v5;
}
