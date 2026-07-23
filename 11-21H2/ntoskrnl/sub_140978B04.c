/*
 * XREFs of sub_140978B04 @ 0x140978B04
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     sub_140A5A148 @ 0x140A5A148 (sub_140A5A148.c)
 *     sub_140A69E6C @ 0x140A69E6C (sub_140A69E6C.c)
 * Callees:
 *     sub_14027FCE4 @ 0x14027FCE4 (sub_14027FCE4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403853B0 @ 0x1403853B0 (sub_1403853B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_140978B04(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // r14
  struct _KPROCESS *v8; // r15
  __int64 v9; // r9
  PEPROCESS v10; // rdi
  _QWORD *v11; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v15[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0xB8uLL);
  v4 = sub_140313C70(a1);
  v5 = sub_140313C70(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  v8 = (struct _KPROCESS *)*((_QWORD *)CurrentThread + 23);
  sub_14027FCE4((__int64)v15, 0, 20);
  sub_1402CF280((__int64)v15, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( v8 != PsInitialSystemProcess )
    sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v14, v9);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  while ( v4 <= v7 )
  {
    sub_1403853B0(v4, 0, 1, 0LL);
    v4 += 8LL;
  }
  sub_14032F1B0((__int64)v15);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50628);
  LOBYTE(v11) = sub_1402AFC00((ULONG_PTR)&qword_140C50628);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v11 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v11 != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery();
  }
  if ( v8 != v10 )
    LOBYTE(v11) = sub_1402D0930((__int64)v14, 0LL);
  return (char)v11;
}
