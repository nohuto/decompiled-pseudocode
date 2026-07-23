/*
 * XREFs of MiInitializeSystemPtes @ 0x140B4420C
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140210F9C (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x140210FC4 (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x1403763AC (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9DB8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140B46558 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // r14
  char *AnyMultiplexedVm; // rdi
  unsigned int v2; // ebx
  char *v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // r8

  v0 = qword_140C6A518;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2 = 0;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v3 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, (__int64)v3, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v4 = ((dword_140D1D1CC & 2) << 8) | 0x101;
  v5 = v0 + ((0x800000 - (v4 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C66DA8 = v5;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C69940,
                        9,
                        (int)v5 + 0x100000,
                        4,
                        v0,
                        0x100000000000LL,
                        1,
                        qword_140C683A8) )
    return 0LL;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140D1D1CC & 2) != 0
    && !(unsigned int)MiInitializeDynamicBitmap(&qword_140C68398, v5 + 537919488, 0x200000000LL, 4) )
  {
    dword_140D1D1CC &= ~2u;
  }
  v6 = MiSystemVaToDynamicBitmap(9);
  if ( !(unsigned int)MiBuildDynamicRegion(v6, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v4, 13LL, v7);
  LODWORD(MiFlags) = MiFlags | 0x40000000;
  qword_140C684C8 = 0LL;
  qword_140C684E8 = MiReservePtes((__int64)&qword_140C69940, 1u);
  LOBYTE(v2) = qword_140C684E8 != 0;
  return v2;
}
