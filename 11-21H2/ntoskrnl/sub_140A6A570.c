/*
 * XREFs of sub_140A6A570 @ 0x140A6A570
 * Callers:
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056D650 @ 0x14056D650 (sub_14056D650.c)
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 */

char sub_140A6A570()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  void *v2; // r14
  unsigned __int64 v3; // rbp
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rax
  char *v7; // rsi
  _QWORD *v8; // rax
  int v10; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140C53428);
  --*((_WORD *)CurrentThread + 243);
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
    v1 = qword_140C53410;
    if ( (__int64 *)qword_140C53410 == &qword_140C53410 )
      break;
    v2 = *(void **)(qword_140C53410 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C53420);
    sub_1402AFC00((ULONG_PTR)&qword_140C53420);
    v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_14030D5C0((ULONG_PTR)v2, 0LL, (__int64)v11, v4);
    v6 = sub_14030E7C0(v3, 0, &v10);
    v7 = (char *)v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(v6 + 64) & 1) != 0 )
        sub_140A6A73C(v2, v6);
      sub_14032E700(v7);
    }
    sub_1402D0930((__int64)v11, 0LL);
    ObfDereferenceObject(v2);
    --*((_WORD *)CurrentThread + 243);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C53420);
  LOBYTE(v8) = sub_1402AFC00((ULONG_PTR)&qword_140C53420);
  v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v5 )
  {
    v8 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v8 != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  if ( qword_140C533F0 )
    LOBYTE(v8) = sub_14056D650();
  return (char)v8;
}
