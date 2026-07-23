/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B6850
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14038962C (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x140316F54 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x1403242EC (RtlpHpMetadataFree.c)
 */

char __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  volatile signed __int64 *v3; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax
  _QWORD *i; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h]

  v3 = (volatile signed __int64 *)(a1 + 16);
  v5 = a2 - 16;
  RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 16), 0);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)(v5 + 48));
  if ( v7 <= 0 )
  {
    if ( v7 )
      __fastfail(0xEu);
    v13 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v13)
                          + 37
                          * (BYTE5(v13)
                           + 37
                           * (BYTE4(v13)
                            + 37
                            * (BYTE3(v13)
                             + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                         + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v5 )
      {
        *i = *(_QWORD *)v5;
        --*(_DWORD *)a1;
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    v12 = *a3;
    RtlpHpMetadataFree(v5, &v12);
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    CurrentThread = (struct _KTHREAD *)((char *)CurrentThread + 152);
    if ( *(struct _KTHREAD **)&CurrentThread->Header.Lock != CurrentThread )
      LOBYTE(CurrentThread) = KiCheckForKernelApcDelivery();
  }
  return (char)CurrentThread;
}
