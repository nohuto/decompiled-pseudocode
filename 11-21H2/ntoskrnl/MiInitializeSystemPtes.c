/*
 * XREFs of MiInitializeSystemPtes @ 0x140B06A84
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14026CF08 (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x1403C289C (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140B04AE0 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r8

  v0 = qword_140C54090;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_140D051BC & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C51928 = v4;
  if ( !(unsigned int)MiInitializePteInfo((__int64)&qword_140C534C0, 9, v4 + 0x100000, 9, v0, 0x100000000000uLL, 1u) )
    return 0LL;
  dword_140C534D8 |= 1u;
  qword_140C53508 = qword_140C52F28;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140D051BC & 2) != 0
    && !(unsigned int)MiInitializeDynamicBitmap(&qword_140C52F18, v4 + 537919488, 0x200000000LL, 9) )
  {
    dword_140D051BC &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( (unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL)
    && (MiObtainSystemVa(v3, 13LL, v6),
        MiFlags |= 0x80000000,
        qword_140C53058 = 0LL,
        (qword_140C53078 = MiReservePtes((__int64)&qword_140C534C0, 1u)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
