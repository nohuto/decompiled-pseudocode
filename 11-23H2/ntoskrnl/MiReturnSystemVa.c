/*
 * XREFs of MiReturnSystemVa @ 0x140213B54
 * Callers:
 *     MiExpandPtes @ 0x140210C78 (MiExpandPtes.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     MiReturnSystemPtes @ 0x1403465B8 (MiReturnSystemPtes.c)
 *     MiExpandSystemCache @ 0x1403559D8 (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14038E7D8 (MiGetPageTablesForLargeMap.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4238 (MiReturnSystemCacheRegionsToKva.c)
 *     MiUnmapLargePages @ 0x1403D6AFC (MiUnmapLargePages.c)
 *     MmFreeSecurePoolMemory @ 0x140641FA8 (MmFreeSecurePoolMemory.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiMakeSystemRangeAvailable @ 0x140212A98 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x140212D0C (MiDeleteSystemPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 AnyMultiplexedVm; // rax
  int v14; // r8d
  unsigned int v15; // r9d
  char v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rcx
  _QWORD v21[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v21, 0, 0xB8uLL);
  v8 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v10 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v8 < v10 )
  {
    v11 = (__int64)(v10 << 25) >> 16;
    v12 = (__int64)(v8 << 25) >> 16;
    if ( (unsigned __int64)a4 <= 2 )
    {
      v21[3] = 0LL;
      a4 = v21;
      LODWORD(v21[1]) = 20;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
    if ( a3 == 1 )
      return MiMakeSystemRangeAvailable(v12, v11 - v12, a3);
    v16 = 1;
    switch ( a3 )
    {
      case 6:
        v20 = 2LL;
        goto LABEL_14;
      case 8:
        v20 = 0LL;
        goto LABEL_14;
      case 9:
        goto LABEL_13;
    }
    v17 = a3 - 9 - v15;
    if ( !v17 )
    {
      v20 = 1LL;
      goto LABEL_14;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
LABEL_13:
      v20 = v15;
    }
    else
    {
      v19 = v18 - 1;
      if ( v19 && v19 != 2 )
        goto LABEL_15;
      v20 = 4LL;
    }
LABEL_14:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v20);
LABEL_15:
    if ( AnyMultiplexedVm )
      MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v12, v11 - 1, v16, (__int64)a4, v14);
    return MiMakeSystemRangeAvailable(v12, v11 - v12, a3);
  }
  return result;
}
