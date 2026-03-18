/*
 * XREFs of MiProtectSharedUserPage @ 0x140B31048
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  _QWORD v1[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140C51864 )
  {
    v1[3] = 0LL;
    LODWORD(v1[1]) = 20;
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C51864 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)v1, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)v1);
  }
}
