/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1406530A8
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiOutSwapWorkingSet @ 0x1403429A4 (MiOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  char *AnyMultiplexedVm; // rax
  __int128 v9; // xmm0
  _QWORD v10[20]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v10, 0, 0x98uLL);
  v10[0] = v3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v9 = *(_OWORD *)(a1 + 64);
  v10[2] = AnyMultiplexedVm;
  v10[3] = a2;
  *(_OWORD *)&v10[5] = v9;
  MiOutSwapWorkingSet((__int64)AnyMultiplexedVm, 0LL, a3 << 25 >> 16, a3 << 25 >> 16, (__int64)v10);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v10[5];
  return result;
}
