/*
 * XREFs of MiReservePoolMemory @ 0x14024D0D4
 * Callers:
 *     MmAllocatePoolMemory @ 0x14035225C (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14059A86C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiObtainSessionVa @ 0x14024D180 (MiObtainSessionVa.c)
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x14026B354 (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x140599050 (MiMarkSystemVaAllocated.c)
 */

__int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx

  v4 = a3 >> 21;
  if ( a3 >> 21 < 0x100000000LL )
  {
    switch ( a2 )
    {
      case 5:
        return MiObtainDynamicVa(qword_140C506E0 + 120LL * a4, (unsigned int)v4);
      case 6:
        return MiObtainSystemVa((unsigned int)v4);
      case 1:
        v6 = MiObtainSessionVa((unsigned int)v4);
        if ( v6 )
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 796),
            v4);
        return v6;
      case 15:
        return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                               15,
                                               ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                               ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                               1,
                                               1) != 0);
    }
  }
  return 0LL;
}
