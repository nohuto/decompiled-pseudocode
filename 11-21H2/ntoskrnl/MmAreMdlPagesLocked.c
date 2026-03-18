/*
 * XREFs of MmAreMdlPagesLocked @ 0x140A8142C
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x140A83C18 (VERIFY_BUFFER_LOCKED.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AA44E0 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 * Callees:
 *     MiIsPfnLocked @ 0x14025C930 (MiIsPfnLocked.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MiLockPage @ 0x14045C6C8 (MiLockPage.c)
 *     MiUnlockPage @ 0x14045C6DE (MiUnlockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  unsigned __int64 *v1; // r14
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  int IsPfnLocked; // ebp

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( 1 )
  {
    v3 = *v1;
    if ( (unsigned int)MiIsPfn(*v1) )
    {
      v4 = 48 * v3 - 0x220000000000LL;
      v5 = dword_140C529CC == 2 ? 17 : MiLockPage(v4);
      IsPfnLocked = MiIsPfnLocked(v4);
      if ( v5 != 17 )
        MiUnlockPage(v4, v5);
      if ( !IsPfnLocked )
        break;
    }
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  return 0LL;
}
