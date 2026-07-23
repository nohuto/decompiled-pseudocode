/*
 * XREFs of sub_140796B04 @ 0x140796B04
 * Callers:
 *     sub_14025A19C @ 0x14025A19C (sub_14025A19C.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_1406D708C @ 0x1406D708C (sub_1406D708C.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14078FA54 @ 0x14078FA54 (sub_14078FA54.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_140883164 @ 0x140883164 (sub_140883164.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406D708C @ 0x1406D708C (sub_1406D708C.c)
 */

__int64 __fastcall sub_140796B04(volatile signed __int64 *P)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  volatile signed __int64 v11; // rcx
  PVOID *v12; // rax

  v2 = _InterlockedDecrement64(P + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)P, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)P + 10);
    v6 = *((_DWORD *)P + 13);
    v7 = *((_DWORD *)P + 12);
    v8 = *((_DWORD *)P + 11);
    v9 = *((_QWORD *)P + 49);
    --*((_WORD *)CurrentThread + 242);
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 512);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = *P;
    if ( *(volatile signed __int64 **)(*P + 8) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = (PVOID)v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    sub_1406D708C((char *)P);
  }
  return v2;
}
