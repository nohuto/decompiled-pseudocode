/*
 * XREFs of sub_140A69FD8 @ 0x140A69FD8
 * Callers:
 *     sub_140A6A3E0 @ 0x140A6A3E0 (sub_140A6A3E0.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14038A808 @ 0x14038A808 (sub_14038A808.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14096F240 @ 0x14096F240 (sub_14096F240.c)
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char sub_140A69FD8()
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v1; // zf
  struct _KTHREAD *v2; // rax
  PVOID *v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  SIZE_T v6; // r14
  PVOID v7; // rax
  PVOID v8; // rsi
  PVOID v9; // rcx

  if ( !dword_140C529C4 )
  {
    sub_14038A808();
    sub_14058DCA8();
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C553A8, 0LL);
    dword_140C529C4 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C553A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(qword_140C553A8);
    sub_1402AFC00((ULONG_PTR)qword_140C553A8);
    v1 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v1 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140C54FE8, 0, 0);
    if ( byte_140C529C2 )
    {
      if ( (dword_140D06880 & 4) == 0 )
        MmLockPagableSectionByHandle(ImageSectionHandle);
      sub_140A6A1B0();
      if ( (dword_140D06880 & 4) == 0 )
        MmUnlockPagableImageSection(ImageSectionHandle);
    }
    sub_140A6A570();
  }
  if ( dword_140C23508 )
  {
    v2 = sub_1406F5B50();
    v3 = (PVOID *)PsLoadedModuleList;
    v4 = (__int64)v2;
    while ( v3 != &PsLoadedModuleList )
    {
      v5 = v3[17];
      if ( v5 != (_QWORD *)1 && v5 != (_QWORD *)-2LL && ((unsigned __int8)v5 & 1) == 0 )
      {
        v6 = 8LL * *v5 + 8;
        v7 = sub_1402828F0(64, v6, 0x54446D4Du);
        v8 = v7;
        if ( !v7 )
        {
          dword_140C23508 = 0;
          break;
        }
        memmove(v7, v5, v6);
        sub_1406EB3D4(v5);
        v3[17] = v8;
      }
      v9 = v3[10];
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        v3[10] = 0LL;
      }
      v3 = (PVOID *)*v3;
    }
    sub_1406F5AF0(v4);
    sub_14096F240((__int64)&StartContext);
  }
  return 1;
}
