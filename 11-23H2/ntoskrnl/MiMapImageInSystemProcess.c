/*
 * XREFs of MiMapImageInSystemProcess @ 0x140A30E64
 * Callers:
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiGetUserReservationHighestAddress @ 0x1407221D0 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapImageInSystemProcess(__int64 a1, char a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 v4; // r10
  __int64 v8; // rdi
  _KPROCESS *Process; // rbx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-59h]
  _QWORD v13[16]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v14; // [rsp+E8h] [rbp+67h] BYREF

  v4 = *(_QWORD *)a1;
  *a4 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)a1 + 24LL), -1LL, -1LL);
  if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >= 0x100000000LL )
    return 3221225503LL;
  v8 = *a4;
  if ( (unsigned __int64)*a4 > 0x7FFFFFFF0000LL )
    return 3221225503LL;
  *a3 = 0LL;
  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v13, 0, sizeof(v13));
  v13[1] = MiGetUserReservationHighestAddress((__int64)Process, 0LL);
  BYTE1(v13[7]) = v10;
  v13[3] = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13[2] = 0x10000LL;
  v13[4] = v8;
  LODWORD(v13[5]) = 0x40000;
  v13[12] = Process;
  v13[11] = Process;
  return MiMapViewOfImageSection(a1, (__int64)v13, a3, &v14, v10 & v12, 2, 1, a2);
}
