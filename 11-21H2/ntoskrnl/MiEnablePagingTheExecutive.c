/*
 * XREFs of MiEnablePagingTheExecutive @ 0x140B085F8
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiSnapDriverRange @ 0x140760B20 (MiSnapDriverRange.c)
 *     MiImagePagable @ 0x140761128 (MiImagePagable.c)
 *     MiLockPagableSections @ 0x140B0872C (MiLockPagableSections.c)
 */

void MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  unsigned __int64 v1; // rdx
  volatile signed __int32 *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // edi
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    v1 = (unsigned __int64)i[6];
    if ( PsNtosImageBase && (v1 < PsNtosImageEnd && v1 >= PsNtosImageBase || v1 < PsHalImageEnd && v1 >= PsHalImageBase) )
      v2 = (volatile signed __int32 *)&xmmword_140C4F4F8;
    else
      v2 = (volatile signed __int32 *)&xmmword_140C4F4F8 + 1;
    _InterlockedExchangeAdd(v2, (((_DWORD)i[8] & 0xFFF) != 0) + (*((_DWORD *)i + 16) >> 12));
    v3 = (unsigned __int64)i[6];
    v6 = 0LL;
    v5 = 0LL;
    if ( MiImagePagable(i, v3) )
    {
      v4 = 0;
      do
      {
        v4 = MiSnapDriverRange((__int64)i, v4, 1, 0LL, &v5, &v6);
        if ( v5 )
          MiSetPagingOfDriver((__int64)i, v5, v6);
      }
      while ( v4 );
    }
    MiLockPagableSections(i, 1LL);
  }
}
