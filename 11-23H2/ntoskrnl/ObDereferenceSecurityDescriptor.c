/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140728A50
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069E6A4 (IopSetDeviceSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x14069E860 (ObSetSecurityDescriptorInfo.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BDAC4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BDB60 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1406C30DC (ObpDereferenceSecurityDescriptorForObject.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     ExpWnfCreateNameInstance @ 0x1407117F4 (ExpWnfCreateNameInstance.c)
 *     SeDefaultObjectMethod @ 0x140728FB0 (SeDefaultObjectMethod.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     ObDeassignSecurity @ 0x1407BDFE0 (ObDeassignSecurity.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9640 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x1407D9494 (EtwpFreeGuidEntry.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140884E14 (ObpReferenceSecurityDescriptorSlow.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EC314 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rsi
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v9; // rbp
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *i; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  v6 = v4 - a2;
  if ( v6 <= 0 )
  {
LABEL_4:
    if ( v6 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
    --CurrentThread->KernelApcDisable;
    v10 = v9 + 1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    v11 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
    if ( v11 > 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v11 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v10; i != v3; i = (volatile signed __int64 *)*i )
        v10 = i;
      *v10 = *v3;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 1, v6, v4);
      if ( v7 == v4 )
        break;
      v6 = v4 - a2;
      if ( v6 <= 0 )
        goto LABEL_4;
    }
  }
}
