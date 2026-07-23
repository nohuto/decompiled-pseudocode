/*
 * XREFs of sub_14074C2EC @ 0x14074C2EC
 * Callers:
 *     sub_14074C1F8 @ 0x14074C1F8 (sub_14074C1F8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14074B878 @ 0x14074B878 (sub_14074B878.c)
 *     sub_14074C258 @ 0x14074C258 (sub_14074C258.c)
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 *     IoCreateStreamFileObjectLite @ 0x14074CD20 (IoCreateStreamFileObjectLite.c)
 *     sub_14074D028 @ 0x14074D028 (sub_14074D028.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 */

NTSTATUS __fastcall sub_14074C2EC(_QWORD *a1)
{
  __int64 v2; // r14
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r14
  LIST_ENTRY *p_DeviceListHead; // rbx
  __int64 v9; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v11; // [rsp+48h] [rbp-70h]
  _BYTE Event[44]; // [rsp+50h] [rbp-68h] BYREF
  int v13; // [rsp+7Ch] [rbp-3Ch]
  int v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+84h] [rbp-34h]
  __int16 v16; // [rsp+88h] [rbp-30h]
  int v17; // [rsp+8Ah] [rbp-2Eh]

  DeviceObject = 0LL;
  sub_14074C258();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8LL), 0x160u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v6 = sub_14074D028(&v4[1], a1[2], a1[1]);
    if ( v6 < 0 )
    {
      sub_14074B878((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 8LL) = v4;
      *(_DWORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 24LL) = -1;
      *(_WORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 6LL) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v11 = 0LL;
      memset(&Event[4], 0, 20);
      v17 = 0;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v11 = StreamFileObjectLite;
      HIDWORD(v4[1].Queue.Wcb.DeviceContext) += 2;
      v4[1].Queue.Wcb.NumberOfMapRegisters += 2;
      *(_DWORD *)Event = 4063233;
      *(_QWORD *)&Event[24] = 0LL;
      *(_DWORD *)&Event[32] = -1;
      *(_QWORD *)&Event[36] = 1LL;
      v13 = 6;
      v14 = 16;
      v15 = 4259922;
      v16 = 87;
      FsRtlNotifyVolumeEventEx(StreamFileObjectLite, 6u, (PTARGET_DEVICE_CUSTOM_NOTIFICATION)Event);
      ObfDereferenceObject(StreamFileObjectLite);
      HIDWORD(v4[1].Queue.Wcb.DeviceContext) -= 2;
      v4[1].Queue.Wcb.NumberOfMapRegisters -= 2;
      ExAcquireFastMutex(&stru_140C1BCC0);
      p_DeviceListHead = &v4[1].DeviceQueue.DeviceListHead;
      v9 = qword_140C1BD00;
      if ( *(__int64 **)(qword_140C1BD00 + 8) != &qword_140C1BD00 )
        __fastfail(3u);
      p_DeviceListHead->Flink = (struct _LIST_ENTRY *)qword_140C1BD00;
      p_DeviceListHead->Blink = (struct _LIST_ENTRY *)&qword_140C1BD00;
      *(_QWORD *)(v9 + 8) = p_DeviceListHead;
      qword_140C1BD00 = (__int64)p_DeviceListHead;
      KeReleaseGuardedMutex(&stru_140C1BCC0);
    }
    return v6;
  }
  return result;
}
