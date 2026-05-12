/*
 * XREFs of ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4
 * Callers:
 *     PmVolumeManagerNotification @ 0x1C0023170 (PmVolumeManagerNotification.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 *     ?PmSetVolumeManagerAltitude@@YAJPEAU_VOLUME_MANAGER@@@Z @ 0x1C0022F08 (-PmSetVolumeManagerAltitude@@YAJPEAU_VOLUME_MANAGER@@@Z.c)
 *     PmVolumeManagerRemoval @ 0x1C0028050 (PmVolumeManagerRemoval.c)
 */

__int64 __fastcall PmVolumeManagerArrival(struct _CONTROL_EXTENSION *a1, struct _UNICODE_STRING *a2)
{
  __int64 MaximumLength; // rbx
  struct _UNICODE_STRING *Pool2; // rax
  struct _UNICODE_STRING *v6; // rdi
  __int64 v7; // rcx
  NTSTATUS DeviceObjectPointer; // esi
  struct _DEVICE_OBJECT *Buffer; // rcx
  struct _UNICODE_STRING *i; // rax
  struct _UNICODE_STRING **v11; // rcx
  struct _CONTROL_EXTENSION *j; // rbx
  char v14; // r14
  KIRQL v15; // r12
  _QWORD *v16; // rdx
  __int128 InputBuffer; // [rsp+40h] [rbp-48h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h]
  __int64 (__fastcall *v19)(PRKMUTEX, void *); // [rsp+60h] [rbp-28h]

  MaximumLength = a2->MaximumLength;
  InputBuffer = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(66LL, MaximumLength + 64, 1163291984LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    Pool2[1].MaximumLength = MaximumLength;
    Pool2[1].Buffer = &Pool2[4].Length;
    RtlCopyUnicodeString(Pool2 + 1, a2);
    *(_DWORD *)&v6[2].Length = 0;
    v6[2].Buffer = 0LL;
    *(_QWORD *)&v6[3].Length = 0LL;
    v6->Buffer = &v6->Length;
    *(_QWORD *)&v6->Length = v6;
    DeviceObjectPointer = IoGetDeviceObjectPointer(v6 + 1, 1u, (PFILE_OBJECT *)&v6[3], (PDEVICE_OBJECT *)&v6[2].Buffer);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_20;
    Buffer = (struct _DEVICE_OBJECT *)v6[2].Buffer;
    *(_QWORD *)&InputBuffer = PmWmiCounterEnable;
    *((_QWORD *)&InputBuffer + 1) = PmWmiCounterDisable;
    *(_QWORD *)&v18 = PmWmiCounterIoStart;
    *((_QWORD *)&v18 + 1) = PmWmiCounterIoComplete;
    v19 = PmWmiCounterQuery;
    PmSendDeviceControl(Buffer, 0x760024u, &InputBuffer, 0x28u, 0LL, 0, 1u);
    DeviceObjectPointer = PmSetVolumeManagerAltitude((struct _VOLUME_MANAGER *)v6);
    if ( DeviceObjectPointer < 0 )
    {
LABEL_20:
      PmVolumeManagerRemoval(v7, v6);
    }
    else
    {
      for ( i = (struct _UNICODE_STRING *)*((_QWORD *)a1 + 9);
            i != (struct _UNICODE_STRING *)((char *)a1 + 72);
            i = *(struct _UNICODE_STRING **)&i->Length )
      {
        if ( LODWORD(i[3].Buffer) > LODWORD(v6[3].Buffer) )
          break;
      }
      v11 = (struct _UNICODE_STRING **)i->Buffer;
      if ( *v11 != i )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = i;
      v6->Buffer = (PWSTR)v11;
      *v11 = v6;
      i->Buffer = &v6->Length;
      for ( j = (struct _CONTROL_EXTENSION *)*((_QWORD *)a1 + 11);
            j != (struct _CONTROL_EXTENSION *)((char *)a1 + 88);
            j = *(struct _CONTROL_EXTENSION **)j )
      {
        v14 = 0;
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)j - 5);
        v16 = (_QWORD *)*((_QWORD *)j + 93);
        if ( v16 != (_QWORD *)((char *)j + 744) )
        {
          do
          {
            if ( !*(v16 - 4) )
            {
              *((_DWORD *)v16 - 26) &= ~1u;
              v14 = 1;
            }
            v16 = (_QWORD *)*v16;
          }
          while ( v16 != (_QWORD *)((char *)j + 744) );
          if ( v14 )
            PmWakeupNotificationWorkItem((__int64)j - 152);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)j - 5, v15);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DeviceObjectPointer;
}
