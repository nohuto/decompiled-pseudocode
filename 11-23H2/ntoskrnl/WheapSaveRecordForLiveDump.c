/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x140AABAA4
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AAB9F4 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  __int64 Pool2; // rbx
  struct _DEVICE_OBJECT *NextDevice; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = ExAllocatePool2(66LL, (unsigned int)(v1 + 32), 1634035799LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
      memmove((void *)(Pool2 + 32), (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
      NextDevice = WheapDispatchPtr.NextDevice;
      if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.NextDevice != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DriverObject )
        __fastfail(3u);
      *(_QWORD *)Pool2 = &WheapDispatchPtr.DriverObject;
      *(_QWORD *)(Pool2 + 8) = NextDevice;
      *(_QWORD *)&NextDevice->Type = Pool2;
      WheapDispatchPtr.NextDevice = (struct _DEVICE_OBJECT *)Pool2;
      ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
