/*
 * XREFs of ?PmIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxxu_EtwWriteTransfer @ 0x1C000CA94 (McTemplateK0pxxu_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall PmIo(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  PVOID DeviceExtension; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int128 v5; // xmm0
  struct _IO_STACK_LOCATION *v6; // rcx
  void *Options; // rax
  char v8; // di
  __int64 v9; // r15
  ULONG64 v10; // rax
  signed __int64 v11; // rbx
  __int64 LockArray_high; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  void (__fastcall *v19)(struct _IRP *); // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  unsigned __int16 v23; // dx
  int v24; // esi
  char v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  PEPROCESS RequestorProcess; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  PEPROCESS v33; // r15
  PEPROCESS v34; // rdi
  unsigned __int64 v35; // [rsp+80h] [rbp+8h]
  unsigned __int64 v36; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  v36 = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v5;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  Options = (void *)CurrentStackLocation->Parameters.Create.Options;
  v6[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PmIoCompletion;
  v6[-1].Context = Options;
  v6[-1].Control = -32;
  v8 = *((_BYTE *)DeviceExtension + 704);
  v9 = *((_QWORD *)DeviceExtension + 90);
  v10 = KeQueryUnbiasedInterruptTimePrecise(&v36);
  CurrentStackLocation->Parameters.WMI.ProviderId = v10;
  v11 = v10;
  if ( v8 )
  {
    CurrentStackLocation->MinorFunction = 1;
    if ( IoGetIoPriorityHint(a2) <= IoPriorityLow )
    {
      LOBYTE(v14) = 0;
      v35 = 1LL;
    }
    else
    {
      CurrentStackLocation->MinorFunction |= 2u;
      LOBYTE(v14) = 1;
      v35 = 0x100000001LL;
    }
    v15 = v35 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 64), v35);
    v16 = 0LL;
    if ( (_DWORD)v15 == 1 || (_BYTE)v14 && HIDWORD(v15) == 1 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      v13 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 8 * LockArray_high);
      if ( v13 )
      {
        if ( (_DWORD)v15 == 1 )
        {
          LockArray_high = *(_QWORD *)(v9 + 80);
          if ( v11 > LockArray_high )
            *(_QWORD *)(v13 + 40) += v11 - LockArray_high;
        }
        if ( (_BYTE)v14 )
        {
          if ( HIDWORD(v15) == 1 )
          {
            LockArray_high = *(_QWORD *)(v9 + 88);
            if ( v11 > LockArray_high )
              *(_QWORD *)(v13 + 104) += v11 - LockArray_high;
          }
        }
      }
      if ( (_DWORD)v15 == 1 )
      {
        v17 = *(_QWORD *)(v9 + 80);
        if ( v11 > v17 )
          v16 = v11 - v17;
      }
    }
    if ( v16 )
    {
      v21 = *((_QWORD *)DeviceExtension + 143);
      if ( (unsigned __int8)PoEnergyEstimationEnabled(v15, LockArray_high, v13, v14) )
      {
        if ( v21 )
        {
          v22 = 0LL;
          v23 = 0;
          v24 = 5;
          v25 = v16;
          if ( *(_WORD *)v21 )
          {
            while ( 1 )
            {
              v26 = 32LL * v23;
              v27 = *(_QWORD *)(v26 + v21 + 24);
              v28 = *(unsigned int *)(v26 + v21 + 32);
              if ( v27 >= v16 )
                v27 = v16;
              v22 += v27 * v28;
              v16 -= v27;
              if ( !v16 )
                break;
              if ( ++v23 >= *(_WORD *)v21 )
                goto LABEL_29;
            }
            v24 = v23 + 1;
          }
LABEL_29:
          RequestorProcess = IoGetRequestorProcess(a2);
          v33 = *(PEPROCESS *)(v21 + 208);
          v34 = RequestorProcess;
          *(_DWORD *)(v21 + 232) = v24;
          if ( (Microsoft_Windows_PartitionEnableBits & 2) != 0 )
            McTemplateK0pxxu_EtwWriteTransfer(v31, v30, v32, (_DWORD)v33, v22, v25, v24);
          PsUpdateComponentPower(v33, 1LL, v22 / 0x2710);
          if ( v34 != v33 )
          {
            if ( v34 && !(unsigned __int8)ObReferenceObjectSafe(v34) )
              v34 = 0LL;
            if ( v33 )
              ObDereferenceObjectDeferDelete(v33);
          }
          *(_QWORD *)(v21 + 208) = v34;
        }
      }
    }
  }
  else
  {
    CurrentStackLocation->MinorFunction = 0;
  }
  v18 = *((_QWORD *)DeviceExtension + 89);
  if ( v18 )
  {
    v19 = *(void (__fastcall **)(struct _IRP *))(v18 + 8);
    if ( v19 )
      v19(a2);
  }
  return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
}
