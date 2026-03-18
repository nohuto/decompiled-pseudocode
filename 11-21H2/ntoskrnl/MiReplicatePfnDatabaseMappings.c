/*
 * XREFs of MiReplicatePfnDatabaseMappings @ 0x1405839A4
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiReplicatePfnDatabaseMappings(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v4 = 3LL;
  do
  {
    a1 = (__int64)(a1 << 25) >> 16;
    a2 = (__int64)(a2 << 25) >> 16;
    --v4;
  }
  while ( v4 );
  MiReplicatePteChange(a1, a2);
  v5[3] = 0LL;
  LODWORD(v5[1]) = 20;
  while ( a1 <= a2 )
  {
    MiInsertRecursiveTbFlushEntries((__int64)v5, 3, a1);
    a1 += 8LL;
  }
  MiFlushTbList((__int64)v5);
}
