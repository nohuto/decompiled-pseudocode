/*
 * XREFs of sub_14032E700 @ 0x14032E700
 * Callers:
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_140584258 @ 0x140584258 (sub_140584258.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1405C5930 @ 0x1405C5930 (sub_1405C5930.c)
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1406F8C0C @ 0x1406F8C0C (sub_1406F8C0C.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     sub_14096D7DC @ 0x14096D7DC (sub_14096D7DC.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140973534 @ 0x140973534 (sub_140973534.c)
 *     sub_140979918 @ 0x140979918 (sub_140979918.c)
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 *     sub_14097AC7C @ 0x14097AC7C (sub_14097AC7C.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 *     sub_14097BB30 @ 0x14097BB30 (sub_14097BB30.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14032E700(char *P)
{
  signed __int32 v2; // edx
  unsigned int v3; // ebp
  BOOL v4; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v6; // r14
  char *v7; // rbx
  __int64 v8; // rdx
  int v9; // r9d
  bool v10; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  v3 = -1;
  if ( v2 == -1 )
    __fastfail(0xEu);
  v4 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  *((_BYTE *)CurrentThread + 1384) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&P[-qword_140C50630 + 40] < 0x8000000000LL )
    v3 = sub_140287F30(*((_QWORD *)v6 + 23));
  _disable();
  v7 = (char *)v6 + 1696;
  v8 = 0LL;
  do
  {
    if ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && v7[18]
      && (*(_DWORD *)v7 & 1) == 0
      && *((_DWORD *)v7 + 2) == v3 )
    {
      v7[18] = 0;
      if ( *(__int64 *)v7 < 0 )
      {
        *v7 |= 2u;
        _enable();
        sub_14034EE30(v7, v8, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v9 = *((_DWORD *)v7 + 22);
      *((_DWORD *)v7 + 22) = 0;
      v7[17] = 0;
      *(_QWORD *)v7 = 0LL;
      *((_BYTE *)v6 + 792) |= 1 << v7[16];
      _enable();
      if ( v9 )
        sub_14022B568((ULONG_PTR)v6, (__int64)(P + 40), v9);
      goto LABEL_18;
    }
    v8 = (unsigned int)(v8 + 1);
    v7 += 96;
  }
  while ( (unsigned int)v8 < 6 );
  if ( (*((_DWORD *)v6 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(P + 40), v3, 0LL);
  _enable();
LABEL_18:
  v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v10 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
