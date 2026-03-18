/*
 * XREFs of MiFlushValidPteFromTb @ 0x140227254
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiRealVaToFlushType @ 0x140227300 (MiRealVaToFlushType.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiFlushValidPteFromTb(__int64 a1, char a2, unsigned int a3)
{
  __int64 LeafVa; // rax
  _QWORD v8[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v8, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a1);
  LODWORD(v8[0]) = MiRealVaToFlushType(LeafVa);
  LODWORD(v8[1]) = 20;
  WORD2(v8[0]) = 0;
  v8[2] = 0LL;
  v8[3] = 0LL;
  if ( a2 < 0 )
    MiInsertLargeTbFlushEntry(v8, a3, a1);
  else
    MiInsertRecursiveTbFlushEntries(v8, a3, a1);
  return MiFlushTbList(v8);
}
