/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140B44B90
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[0].m128i_i32[0] = 2055;
  v6[2].m128i_i64[0] = a1;
  v6[9].m128i_i64[1] = (__int64)MiAddLoaderHalIoPte;
  v6[2].m128i_i64[1] = a2;
  v6[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v6[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables(v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6[0].m128i_u8[7]);
}
