/*
 * XREFs of ?PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00017A0
 * Callers:
 *     <none>
 * Callees:
 *     PmIsOverlap @ 0x1C0004E2C (PmIsOverlap.c)
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxxu_EtwWriteTransfer @ 0x1C000CA94 (McTemplateK0pxxu_EtwWriteTransfer.c)
 *     PmRedirectRequest @ 0x1C000F320 (PmRedirectRequest.c)
 */

NTSTATUS __fastcall PmWrite(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _DWORD *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  PVOID v6; // r14
  struct _IO_STACK_LOCATION *v7; // rsi
  struct _IO_STACK_LOCATION *v8; // rcx
  void *Options; // rax
  char v10; // di
  __int64 v11; // r15
  ULONG64 v12; // rax
  signed __int64 v13; // rbx
  __int64 LockArray_high; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  void (__fastcall *v21)(struct _IRP *); // rax
  __int64 v23; // rbx
  int v24; // esi
  unsigned __int64 v25; // r13
  unsigned __int16 v26; // dx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  PEPROCESS RequestorProcess; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  PEPROCESS v34; // rdi
  PEPROCESS v35; // r15
  unsigned __int64 v36; // [rsp+80h] [rbp+8h]
  char v37; // [rsp+80h] [rbp+8h]
  unsigned __int64 QpcTimeStamp; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( DeviceExtension[130] )
  {
    if ( (CurrentStackLocation->Flags & 0x10) == 0
      && DeviceExtension[162] == 1
      && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PmIsOverlap)(
                            a1->DeviceExtension,
                            (LARGE_INTEGER)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                            CurrentStackLocation->Parameters.Read.Length) )
    {
      PmRedirectRequest(DeviceExtension, a2);
      return 259;
    }
    else
    {
      v6 = a1->DeviceExtension;
      v7 = a2->Tail.Overlay.CurrentStackLocation;
      QpcTimeStamp = 0LL;
      *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
      *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
      v7[-1].FileObject = v7->FileObject;
      v7[-1].Control = 0;
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      Options = (void *)v7->Parameters.Create.Options;
      v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PmIoCompletion;
      v8[-1].Context = Options;
      v8[-1].Control = -32;
      v10 = *((_BYTE *)v6 + 704);
      v11 = *((_QWORD *)v6 + 90);
      v12 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v7->Parameters.WMI.ProviderId = v12;
      v13 = v12;
      if ( v10 )
      {
        v7->MinorFunction = 1;
        if ( IoGetIoPriorityHint(a2) <= IoPriorityLow )
        {
          LOBYTE(v16) = 0;
          v36 = 1LL;
        }
        else
        {
          v7->MinorFunction |= 2u;
          LOBYTE(v16) = 1;
          v36 = 0x100000001LL;
        }
        v17 = v36 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), v36);
        v18 = 0LL;
        if ( (_DWORD)v17 == 1 || (_BYTE)v16 && HIDWORD(v17) == 1 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          v15 = *(_QWORD *)(*(_QWORD *)(v11 + 72) + 8 * LockArray_high);
          if ( v15 )
          {
            if ( (_DWORD)v17 == 1 )
            {
              LockArray_high = *(_QWORD *)(v11 + 80);
              if ( v13 > LockArray_high )
                *(_QWORD *)(v15 + 40) += v13 - LockArray_high;
            }
            if ( (_BYTE)v16 )
            {
              if ( HIDWORD(v17) == 1 )
              {
                LockArray_high = *(_QWORD *)(v11 + 88);
                if ( v13 > LockArray_high )
                  *(_QWORD *)(v15 + 104) += v13 - LockArray_high;
              }
            }
          }
          if ( (_DWORD)v17 == 1 )
          {
            v19 = *(_QWORD *)(v11 + 80);
            if ( v13 > v19 )
              v18 = v13 - v19;
          }
        }
        if ( v18 )
        {
          v23 = *((_QWORD *)v6 + 143);
          if ( (unsigned __int8)PoEnergyEstimationEnabled(v17, LockArray_high, v15, v16) )
          {
            if ( v23 )
            {
              v24 = 5;
              v25 = 0LL;
              v37 = v18;
              v26 = 0;
              if ( *(_WORD *)v23 )
              {
                v37 = v18;
                while ( 1 )
                {
                  v27 = 32LL * v26;
                  v28 = *(_QWORD *)(v27 + v23 + 24);
                  v29 = *(unsigned int *)(v27 + v23 + 32);
                  if ( v28 >= v18 )
                    v28 = v18;
                  v25 += v28 * v29;
                  v18 -= v28;
                  if ( !v18 )
                    break;
                  if ( ++v26 >= *(_WORD *)v23 )
                    goto LABEL_32;
                }
                v24 = v26 + 1;
              }
LABEL_32:
              RequestorProcess = IoGetRequestorProcess(a2);
              v34 = *(PEPROCESS *)(v23 + 208);
              v35 = RequestorProcess;
              *(_DWORD *)(v23 + 232) = v24;
              if ( (Microsoft_Windows_PartitionEnableBits & 2) != 0 )
                McTemplateK0pxxu_EtwWriteTransfer(v32, v31, v33, (_DWORD)v34, v25, v37, v24);
              PsUpdateComponentPower(v34, 1LL, v25 / 0x2710);
              if ( v35 != v34 )
              {
                if ( v35 && !(unsigned __int8)ObReferenceObjectSafe(v35) )
                  v35 = 0LL;
                if ( v34 )
                  ObDereferenceObjectDeferDelete(v34);
              }
              *(_QWORD *)(v23 + 208) = v35;
            }
          }
        }
      }
      else
      {
        v7->MinorFunction = 0;
      }
      v20 = *((_QWORD *)v6 + 89);
      if ( v20 )
      {
        v21 = *(void (__fastcall **)(struct _IRP *))(v20 + 8);
        if ( v21 )
          v21(a2);
      }
      return IofCallDriver(*((PDEVICE_OBJECT *)v6 + 2), a2);
    }
  }
  else
  {
    a2->IoStatus.Status = -1073741662;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    return -1073741662;
  }
}
