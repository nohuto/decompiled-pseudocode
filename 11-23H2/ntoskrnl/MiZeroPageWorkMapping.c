/*
 * XREFs of MiZeroPageWorkMapping @ 0x140368AE4
 * Callers:
 *     MiPageListCollision @ 0x140368A4C (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x140655808 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiWriteLargePte @ 0x1402EC4FC (MiWriteLargePte.c)
 *     MiVaIsUltra @ 0x1402EEB1C (MiVaIsUltra.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 LeafVa; // rsi
  __int64 v7; // r10
  int v8; // r9d
  int v9; // eax
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  v4 = a1;
  memset(v10, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a2);
  MiWriteLargePte(LeafVa, 0LL, v4, 0);
  v7 = 1LL;
  v8 = 2;
  if ( (a3 & 2) == 0 || (LOBYTE(v9) = MiVaIsUltra(LeafVa), !v9) && (unsigned int)v4 <= (unsigned int)v7 )
  {
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    if ( (unsigned int)v4 <= (unsigned int)v7 )
    {
      MiInsertLargeTbFlushEntry((__int64)v10, v8 - v4, a2);
    }
    else
    {
      if ( (_DWORD)v4 != 3 )
        v7 = MiLargePageSizes[v4];
      MiInsertTbFlushEntry((__int64)v10, LeafVa, v7, 0);
    }
    MiFlushTbList((int *)v10);
  }
}
