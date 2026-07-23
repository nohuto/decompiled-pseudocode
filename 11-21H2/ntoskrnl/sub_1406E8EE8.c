/*
 * XREFs of sub_1406E8EE8 @ 0x1406E8EE8
 * Callers:
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E8FE0 @ 0x1406E8FE0 (sub_1406E8FE0.c)
 */

__int64 sub_1406E8EE8()
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v1; // rbp
  char v3; // bl
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  v1 = (void *)*((_QWORD *)CurrentThread + 68);
  if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 1124LL) & 0x10000) != 0 )
    return 3221225505LL;
  if ( (unsigned int)sub_1406E8FE0(*((_QWORD *)CurrentThread + 68)) )
    return 0LL;
  if ( qword_140C50620 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
      if ( !*((_QWORD *)sub_140347DB0() + 109) )
      {
        *((_QWORD *)sub_140347DB0() + 109) = v1;
        ObfReferenceObject(v1);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C50628);
      sub_1402AFC00((ULONG_PTR)&qword_140C50628);
      v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
    if ( (unsigned int)sub_1406E8FE0(v1) )
      return 0LL;
  }
  else
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
    if ( !qword_140C50620 )
    {
      qword_140C50620 = (__int64)v1;
      *((_QWORD *)sub_140204738(0LL) + 109) = v1;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C50628);
      sub_1402AFC00((ULONG_PTR)&qword_140C50628);
      v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      ObfReferenceObject(v1);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C50628);
    sub_1402AFC00((ULONG_PTR)&qword_140C50628);
    v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v4 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( (void *)qword_140C50620 == v1 )
      return 0LL;
  }
  return 3221225500LL;
}
