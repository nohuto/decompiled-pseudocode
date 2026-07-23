/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x1405268F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14050E3C8 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(
        void (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax

  v4 = 0;
  if ( *a4 )
  {
    if ( *(_QWORD *)(a3 + 72) )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = (_QWORD *)HalpMmAllocCtxAlloc((__int64)a1, 48LL);
      v10 = (__int64)v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[2] = a1;
        v9[3] = a2;
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(a3 + 72) = v10;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        *(_DWORD *)(v10 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
          *(_DWORD *)(v10 + 44) = HalpIommuDeviceGetDomainTypes(a3, v11);
        a1(v10 + 40, a2);
        v12 = (__int64 *)qword_140C600D8;
        if ( *(__int64 **)qword_140C600D8 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &IommuInterfaceStateChangeCallbackListHead;
        *(_QWORD *)(v10 + 8) = v12;
        *v12 = v10;
        qword_140C600D8 = v10;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
        KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v4;
}
