/*
 * XREFs of MiMakePteClean @ 0x14028ECFC
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v9 = v4;
  v5 = 0;
  v6 = a1 << 25 >> 16;
  if ( v6 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v5;
    v6 = (__int64)(v6 << 25) >> 16;
  }
  while ( v6 >= 0xFFFFF68000000000uLL );
  if ( v5 )
  {
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26], a1, v9);
    MiInsertLargeTbFlushEntry(a2, v5, a1);
  }
  else
  {
LABEL_2:
    MiWriteValidPteNewProtection(a1, v4);
    MiInsertTbFlushEntry(a2, v6, 1LL, 0LL);
  }
  v7 = MI_READ_PTE_LOCK_FREE(&v9);
  return MiLockPageAndSetDirty(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
}
