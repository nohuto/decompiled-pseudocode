/*
 * XREFs of MiReservePoolMemory @ 0x14035AF30
 * Callers:
 *     MmAllocatePoolMemory @ 0x140286A58 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x140641E3C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140210F9C (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x140211044 (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x140637800 (MiMarkSystemVaAllocated.c)
 */

unsigned __int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 >> 21;
  if ( a3 >> 21 > 0xFFFFFFFF )
    return 0LL;
  switch ( (_DWORD)a2 )
  {
    case 5:
      return MiObtainDynamicVa((__int64 *)(qword_140C65AA0 + 376LL * a4), v4, 5);
    case 6:
      return MiObtainSystemVa(v4, a2, 5LL);
    case 0xF:
      return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                             15,
                                             ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                             ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                             1,
                                             1) != 0);
    default:
      return 0LL;
  }
}
