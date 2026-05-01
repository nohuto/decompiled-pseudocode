/*
 * XREFs of SdbpCleanupLocalDatabaseSupport @ 0x180095F5C
 * Callers:
 *     SdbReleaseDatabase @ 0x180095694 (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpCloseLocalDatabaseEx @ 0x180095FC0 (SdbpCloseLocalDatabaseEx.c)
 */

__int64 __fastcall SdbpCleanupLocalDatabaseSupport(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v4; // eax

  if ( (*(_DWORD *)(a1 + 28) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      v4 = *(_DWORD *)(a1 + 28);
      if ( _bittest(&v4, i) )
        SdbpCloseLocalDatabaseEx(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1LL);
  return 1LL;
}
