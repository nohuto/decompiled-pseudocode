/*
 * XREFs of SdbpCloseLocalDatabaseEx @ 0x180095FC0
 * Callers:
 *     SdbpCleanupLocalDatabaseSupport @ 0x180095F5C (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180096158 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 */

__int64 __fastcall SdbpCloseLocalDatabaseEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( a3 >= 0x10 )
    return 0LL;
  v5 = 1 << a3;
  if ( ((1 << a3) & *(_DWORD *)(a1 + 28)) == 0 )
    return 0LL;
  v6 = a1 + 32 * (a3 + 1LL);
  if ( (*(_BYTE *)(v6 + 24) & 2) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
  }
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_DWORD *)(a1 + 28) &= ~v5;
  if ( a3 == 1 )
    *(_QWORD *)(a1 + 16) = 0LL;
  return 1LL;
}
