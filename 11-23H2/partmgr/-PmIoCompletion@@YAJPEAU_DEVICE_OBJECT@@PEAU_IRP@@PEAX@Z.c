/*
 * XREFs of ?PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?PmUpdateIoPower@@YAXPEAU_DISK_POWER_CONTEXT@@PEAU_IRP@@_K2@Z @ 0x1C0001340 (-PmUpdateIoPower@@YAXPEAU_DISK_POWER_CONTEXT@@PEAU_IRP@@_K2@Z.c)
 *     PmUpdateOffline @ 0x1C0008C90 (PmUpdateOffline.c)
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 *     ?PmPropagateVerify@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C000ED40 (-PmPropagateVerify@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  char *DeviceExtension; // r14
  volatile signed __int64 *v4; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UCHAR MinorFunction; // r15
  __int64 v8; // rdi
  ULONG64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 ProviderId; // rdi
  struct _DISK_POWER_CONTEXT *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  void (__fastcall **v15)(__int64, _QWORD, struct _IRP *); // rax
  NTSTATUS Status; // eax
  __int64 result; // rax
  char v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  UCHAR MajorFunction; // cl
  UCHAR v22; // cl
  void (__fastcall *v23)(__int64, _QWORD, struct _IRP *); // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  KIRQL v28; // r10
  unsigned __int64 QpcTimeStamp; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp+10h]
  void *v31; // [rsp+70h] [rbp+18h]

  v31 = a3;
  DeviceExtension = (char *)a1->DeviceExtension;
  v4 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v30 = PmControlObject->DeviceExtension;
  if ( a2->PendingReturned )
    CurrentStackLocation->Control |= 1u;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = *((_QWORD *)DeviceExtension + 90);
  QpcTimeStamp = 0LL;
  v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  CurrentStackLocation->Parameters.WMI.ProviderId = v9 - CurrentStackLocation->Parameters.WMI.ProviderId;
  v10 = 1LL;
  if ( (MinorFunction & 1) != 0 && v8 )
  {
    if ( (MinorFunction & 2) != 0 )
    {
      v18 = 1;
    }
    else
    {
      v18 = 0;
      v10 = 0LL;
    }
    v19 = -((v10 << 32) | 1);
    if ( *(_DWORD *)(v8 + 64) == 1 )
      *(_QWORD *)(v8 + 80) = v9;
    if ( v18 && *(_DWORD *)(v8 + 68) == 1 )
      *(_QWORD *)(v8 + 88) = v9;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), v19);
    v20 = *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL * HIDWORD(KeGetPcr()[1].LockArray));
    if ( v20 )
    {
      MajorFunction = a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
      switch ( MajorFunction )
      {
        case 3u:
          *(_QWORD *)v20 += a2->IoStatus.Information;
          ++*(_DWORD *)(v20 + 48);
          *(_QWORD *)(v20 + 16) += CurrentStackLocation->Parameters.Create.SecurityContext;
          break;
        case 4u:
          *(_QWORD *)(v20 + 8) += a2->IoStatus.Information;
          ++*(_DWORD *)(v20 + 52);
          *(_QWORD *)(v20 + 24) += CurrentStackLocation->Parameters.Create.SecurityContext;
          break;
        case 9u:
          ++*(_DWORD *)(v20 + 56);
          *(_QWORD *)(v20 + 32) += CurrentStackLocation->Parameters.Create.SecurityContext;
          break;
      }
      if ( (a2->Flags & 8) != 0 )
        ++*(_DWORD *)(v20 + 60);
      if ( v18 )
      {
        v22 = a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
        switch ( v22 )
        {
          case 3u:
            *(_QWORD *)(v20 + 64) += a2->IoStatus.Information;
            ++*(_DWORD *)(v20 + 112);
            *(_QWORD *)(v20 + 80) += CurrentStackLocation->Parameters.Create.SecurityContext;
            break;
          case 4u:
            *(_QWORD *)(v20 + 72) += a2->IoStatus.Information;
            ++*(_DWORD *)(v20 + 116);
            *(_QWORD *)(v20 + 88) += CurrentStackLocation->Parameters.Create.SecurityContext;
            break;
          case 9u:
            ++*(_DWORD *)(v20 + 120);
            *(_QWORD *)(v20 + 96) += CurrentStackLocation->Parameters.Create.SecurityContext;
            break;
        }
        if ( (a2->Flags & 8) != 0 )
          ++*(_DWORD *)(v20 + 124);
      }
    }
  }
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v12 = (struct _DISK_POWER_CONTEXT *)*((_QWORD *)DeviceExtension + 143);
  if ( (unsigned __int8)PoEnergyEstimationEnabled() && v12 )
    PmUpdateIoPower(v12, a2, v9, ProviderId);
  if ( IoGetIoPriorityHint(a2) > IoPriorityLow )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 3u:
        v4 = (volatile signed __int64 *)(DeviceExtension + 792);
        break;
      case 4u:
        v4 = (volatile signed __int64 *)(DeviceExtension + 800);
        break;
      case 9u:
        v4 = (volatile signed __int64 *)(DeviceExtension + 808);
        break;
    }
    v13 = *v4;
    v14 = CurrentStackLocation->Parameters.WMI.ProviderId;
    if ( v14 > *v4 )
    {
      do
      {
        v25 = v13;
        v13 = _InterlockedCompareExchange64(v4, v14, v13);
        if ( v13 == v25 )
          break;
        v14 = CurrentStackLocation->Parameters.WMI.ProviderId;
      }
      while ( v14 > v13 );
    }
  }
  v15 = (void (__fastcall **)(__int64, _QWORD, struct _IRP *))*((_QWORD *)DeviceExtension + 89);
  if ( v15 && *v15 )
  {
    v23 = *v15;
    v24 = (unsigned int)v31;
    CurrentStackLocation->Parameters.WMI.ProviderId = (signed __int64)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                     * v30[53])
                                                    / 10000000;
    v23(v24, *((unsigned int *)DeviceExtension + 42), a2);
  }
  Status = a2->IoStatus.Status;
  if ( Status > -1073740642 )
    return 0LL;
  switch ( Status )
  {
    case -2147483626:
      PmPropagateVerify((struct _DEVICE_EXTENSION *)DeviceExtension);
      return 0LL;
    case -1073740703:
      v26 = 5LL;
      break;
    case -1073740693:
      v26 = 6LL;
      break;
    case -1073740692:
      v26 = 7LL;
      break;
    case -1073740642:
      v26 = 8LL;
      break;
    default:
      return 0LL;
  }
  result = 0LL;
  if ( !*((_DWORD *)DeviceExtension + 129) )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 221, 1, 0) )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
      LOBYTE(v27) = 1;
      PmUpdateOffline(DeviceExtension, v27);
      KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v28);
      _InterlockedExchange((volatile __int32 *)DeviceExtension + 130, 0);
      IoQueueWorkItem(*((PIO_WORKITEM *)DeviceExtension + 111), PmOfflineDiskWorkItem, CriticalWorkQueue, (PVOID)v26);
    }
    return 0LL;
  }
  return result;
}
