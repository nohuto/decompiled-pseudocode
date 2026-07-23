/*
 * XREFs of MiObtainSystemVa @ 0x140210F9C
 * Callers:
 *     MiExpandPtes @ 0x140210C78 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1403559D8 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x14035AF30 (MiReservePoolMemory.c)
 *     MiGetPageTablesForLargeMap @ 0x14038E7D8 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140210FC4 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x140211044 (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v5, v4);
}
