/*
 * XREFs of ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38
 * Callers:
 *     ?PmCheckIdsGpt@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CBF0 (-PmCheckIdsGpt@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLI.c)
 *     ?PmCheckIdsMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CE64 (-PmCheckIdsMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 *     ?PmLogError@@YAXPEAU_DEVICE_EXTENSION@@0J@Z @ 0x1C0027074 (-PmLogError@@YAXPEAU_DEVICE_EXTENSION@@0J@Z.c)
 *     ?PmUuidCreate@@YAXPEAU_GUID@@@Z @ 0x1C0027400 (-PmUuidCreate@@YAXPEAU_GUID@@@Z.c)
 */

__int64 __fastcall PmIsRedundantPath(struct _DEVICE_EXTENSION *a1, struct _DEVICE_OBJECT **a2, unsigned __int8 *a3)
{
  int DriveGeometry; // ebx
  SIZE_T v7; // rsi
  unsigned int v8; // eax
  _WORD *Pool2; // r15
  PIRP v10; // rax
  PIRP v11; // rax
  __int16 v12; // bx
  __int16 v13; // ax
  PIRP v14; // rax
  PIRP v15; // rax
  int v16; // r8d
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _GUID v21; // [rsp+78h] [rbp-11h] BYREF
  __int128 v22; // [rsp+88h] [rbp-1h] BYREF
  ULONG Length[2]; // [rsp+98h] [rbp+Fh]

  Timeout.QuadPart = 0LL;
  Event.Header.WaitListHead.Blink = 0LL;
  *(_QWORD *)Length = 0LL;
  v22 = 0LL;
  DriveGeometry = 0;
  *a3 = 0;
  v21 = GUID_NULL;
  *(_OWORD *)&Event.Header.Lock = 0LL;
  IoStatusBlock = 0LL;
  if ( *((_DWORD *)a1 + 12) )
    goto LABEL_32;
  DriveGeometry = PmGetDriveGeometry(*((struct _DEVICE_OBJECT **)a1 + 1), &v22);
  if ( DriveGeometry >= 0 )
  {
    v7 = Length[1];
    DriveGeometry = PmGetDriveGeometry(a2[1], &v22);
    if ( DriveGeometry >= 0 )
    {
      if ( Length[1] != (_DWORD)v7 )
        goto LABEL_31;
      v8 = 3 * v7;
      if ( (unsigned int)(3 * v7) < 0x1000 )
        v8 = 4096;
      Pool2 = (_WORD *)ExAllocatePool2(66LL, v8, 1112108368LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = IoBuildSynchronousFsdRequest(3u, *((PDEVICE_OBJECT *)a1 + 1), Pool2, v7, &Timeout, &Event, &IoStatusBlock);
      if ( !v10 )
        goto LABEL_10;
      v10->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v10);
      if ( DriveGeometry == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DriveGeometry = IoStatusBlock.Status;
      }
      if ( DriveGeometry >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v11 = IoBuildSynchronousFsdRequest(3u, a2[1], (char *)Pool2 + v7, v7, &Timeout, &Event, &IoStatusBlock);
        if ( !v11 )
          goto LABEL_10;
        v11->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
        DriveGeometry = IofCallDriver(a2[1], v11);
        if ( DriveGeometry == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          DriveGeometry = IoStatusBlock.Status;
        }
        if ( DriveGeometry >= 0 )
        {
          v12 = Pool2[222];
          do
          {
            PmUuidCreate(&v21);
            v13 = *(_WORD *)&v21.Data4[6] ^ *(_WORD *)&v21.Data4[4] ^ *(_WORD *)&v21.Data4[2] ^ *(_WORD *)v21.Data4 ^ v21.Data3 ^ v21.Data2 ^ HIWORD(v21.Data1) ^ LOWORD(v21.Data1);
            Pool2[222] = v13;
          }
          while ( v13 == v12 );
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v14 = IoBuildSynchronousFsdRequest(
                  4u,
                  *((PDEVICE_OBJECT *)a1 + 1),
                  Pool2,
                  v7,
                  &Timeout,
                  &Event,
                  &IoStatusBlock);
          if ( !v14 )
            goto LABEL_10;
          v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
          DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v14);
          if ( DriveGeometry == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DriveGeometry = IoStatusBlock.Status;
          }
          if ( DriveGeometry >= 0 )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v15 = IoBuildSynchronousFsdRequest(
                    3u,
                    a2[1],
                    (char *)Pool2 + (unsigned int)(2 * v7),
                    v7,
                    &Timeout,
                    &Event,
                    &IoStatusBlock);
            if ( v15 )
            {
              v15->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
              DriveGeometry = IofCallDriver(a2[1], v15);
              if ( DriveGeometry == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                DriveGeometry = IoStatusBlock.Status;
              }
              if ( DriveGeometry >= 0
                && RtlCompareMemory((char *)Pool2 + v7, (char *)Pool2 + (unsigned int)(2 * v7), v7) != v7 )
              {
                *a3 = 1;
              }
              goto LABEL_30;
            }
LABEL_10:
            DriveGeometry = -1073741670;
          }
        }
      }
LABEL_30:
      ExFreePoolWithTag(Pool2, 0);
      if ( DriveGeometry < 0 )
        return (unsigned int)DriveGeometry;
LABEL_31:
      v16 = -2147221445;
      if ( *a3 )
      {
LABEL_33:
        PmLogError(a1, (struct _DEVICE_EXTENSION *)a2, v16);
        return (unsigned int)DriveGeometry;
      }
LABEL_32:
      v16 = -2147221446;
      goto LABEL_33;
    }
  }
  return (unsigned int)DriveGeometry;
}
