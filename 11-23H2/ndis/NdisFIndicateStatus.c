/*
 * XREFs of NdisFIndicateStatus @ 0x1C0022C50
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006637C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisIsStatusIndicationCloneable @ 0x1C0067FD0 (NdisIsStatusIndicationCloneable.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C00C49A0 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  char v4; // al
  char *i; // rsi
  KIRQL v6; // r14
  _OWORD *Pool2; // rax
  __int64 v8; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  _QWORD Parameter[5]; // [rsp+58h] [rbp-28h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+20h] BYREF

  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  v4 = *((_BYTE *)NdisFilterHandle + 288);
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = StatusIndication;
  if ( v4
    || KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFIndicateStatusWrapper,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    NewIrql = 0;
    memset(&Event, 0, sizeof(Event));
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    for ( i = (char *)NdisFilterHandle + 248; *(_QWORD *)i; i = (char *)(*(_QWORD *)i + 80LL) )
      ;
    v6 = NewIrql;
    if ( NewIrql < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)i = StatusIndication;
      StatusIndication->NdisReserved[0] = 0LL;
      StatusIndication->NdisReserved[1] = &Event;
      goto LABEL_12;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(66LL, StatusIndication->StatusBufferSize + 112LL, 538985550);
      *(_QWORD *)i = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *(_OWORD *)&StatusIndication->Header.Type;
        Pool2[1] = *(_OWORD *)&StatusIndication->PortNumber;
        Pool2[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        Pool2[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        Pool2[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        Pool2[5] = *(_OWORD *)StatusIndication->NdisReserved;
        Pool2[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)i + 48LL) = *(_QWORD *)i + 112LL;
        memmove(*(void **)(*(_QWORD *)i + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v8 = *(_QWORD *)i;
        *(_QWORD *)(v8 + 80) = 0LL;
        *(_QWORD *)(v8 + 88) = 0LL;
        ndisReferenceRefNoCheck((PKSPIN_LOCK)NdisFilterHandle + 39, 1u);
LABEL_12:
        *((_BYTE *)NdisFilterHandle + 288) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
        if ( v6 < 2u )
          ndisWaitForKernelObject(&Event);
        return;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Bu,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 75);
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Cu,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 76);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
  }
}
