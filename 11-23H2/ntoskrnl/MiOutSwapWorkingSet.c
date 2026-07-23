/*
 * XREFs of MiOutSwapWorkingSet @ 0x1403429A4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 *     MiOutSwapKernelStackPage @ 0x1406530A8 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapVirtualAddresses @ 0x14065319C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  volatile LONG *SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14[11]; // [rsp+20h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[9].m128i_i64[1] = (__int64)MiOutSwapWorkingSetPte;
  v14[1].m128i_i64[1] = a1;
  v14[10].m128i_i64[1] = a5;
  v14[0].m128i_i32[0] = 129;
  if ( v9 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
      return;
    v14[0].m128i_i32[0] = 131;
    v14[2].m128i_i64[0] = a3;
    v14[2].m128i_i64[1] = a4;
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v14[0].m128i_i8[7] = v11;
  }
  else
  {
    v14[0].m128i_i8[7] = 17;
  }
  MiWalkPageTables(v14);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiUnlockWorkingSetExclusive(a1, v14[0].m128i_u8[7], v12, v13);
}
