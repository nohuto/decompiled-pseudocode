/*
 * XREFs of ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0
 * Callers:
 *     <none>
 * Callees:
 *     PmIoctlAreVolumesReady @ 0x1C000A538 (PmIoctlAreVolumesReady.c)
 *     PmIoctlIsClustered @ 0x1C000A91C (PmIoctlIsClustered.c)
 *     PmIoctlReauctionDisk @ 0x1C000E6E4 (PmIoctlReauctionDisk.c)
 *     PmIoctlGetDriveLayoutEx @ 0x1C001C494 (PmIoctlGetDriveLayoutEx.c)
 *     PmIoctlQueryProperty @ 0x1C001C8F4 (PmIoctlQueryProperty.c)
 *     PmIoctlGetClusterInfo @ 0x1C001CF50 (PmIoctlGetClusterInfo.c)
 *     PmIoctlGetDiskAttributes @ 0x1C001CFFC (PmIoctlGetDiskAttributes.c)
 *     PmIoctlIsWritable @ 0x1C001D460 (PmIoctlIsWritable.c)
 *     PmIoctlGetPerformanceInfo @ 0x1C001D4F8 (PmIoctlGetPerformanceInfo.c)
 *     PmIoctlDsm @ 0x1C001D9C0 (PmIoctlDsm.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 *     PmIoctlPerformance @ 0x1C001DCC4 (PmIoctlPerformance.c)
 *     PmIoctlQueryDeviceState @ 0x1C001DE10 (PmIoctlQueryDeviceState.c)
 *     PmEtwControlComplete @ 0x1C001E574 (PmEtwControlComplete.c)
 *     PmEtwControlStart @ 0x1C001E5EC (PmEtwControlStart.c)
 *     PmIoctlCreateDisk @ 0x1C001E904 (PmIoctlCreateDisk.c)
 *     PmIoctlUpdateProperties @ 0x1C001EA70 (PmIoctlUpdateProperties.c)
 *     PmIoctlSetDiskAttributes @ 0x1C001EAD4 (PmIoctlSetDiskAttributes.c)
 *     PmIoctlSetDriveLayoutEx @ 0x1C001EC1C (PmIoctlSetDriveLayoutEx.c)
 *     PmIoctlCreateSpacesMetadata @ 0x1C001F0B8 (PmIoctlCreateSpacesMetadata.c)
 *     PmIoctlDeleteSpacesMetadata @ 0x1C001F1DC (PmIoctlDeleteSpacesMetadata.c)
 *     PmIoctlGetDriveGeometryEx @ 0x1C00225C4 (PmIoctlGetDriveGeometryEx.c)
 *     PmIoctlGetSnapshotInfo @ 0x1C00232E0 (PmIoctlGetSnapshotInfo.c)
 *     PmIoctlGetPartitionInfoEx @ 0x1C00235A8 (PmIoctlGetPartitionInfoEx.c)
 *     PmIoctlPerformanceOff @ 0x1C0023DC4 (PmIoctlPerformanceOff.c)
 *     PmIoctlDeleteDriveLayout @ 0x1C0025600 (PmIoctlDeleteDriveLayout.c)
 *     PmIoctlGetDriveLayout @ 0x1C00257CC (PmIoctlGetDriveLayout.c)
 *     PmIoctlGetPartitionInfo @ 0x1C0025960 (PmIoctlGetPartitionInfo.c)
 *     PmIoctlGetReliabilityInfo @ 0x1C0025A4C (PmIoctlGetReliabilityInfo.c)
 *     PmIoctlGrowPartition @ 0x1C0025BC0 (PmIoctlGrowPartition.c)
 *     PmIoctlQueryDiskSignature @ 0x1C0025CD0 (PmIoctlQueryDiskSignature.c)
 *     PmIoctlResetReliabilityInfo @ 0x1C0025D90 (PmIoctlResetReliabilityInfo.c)
 *     PmIoctlResetSnapshotInfo @ 0x1C0025E08 (PmIoctlResetSnapshotInfo.c)
 *     PmIoctlSetClusterInfo @ 0x1C0025E84 (PmIoctlSetClusterInfo.c)
 *     PmIoctlSetDriveLayout @ 0x1C0025F9C (PmIoctlSetDriveLayout.c)
 *     PmIoctlSetSnapshotInfo @ 0x1C00262E0 (PmIoctlSetSnapshotInfo.c)
 *     PmIoctlUpdateDriveSize @ 0x1C002638C (PmIoctlUpdateDriveSize.c)
 */

__int64 __fastcall PmFilterDeviceControl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // r14d
  unsigned int LowPart; // eax
  NTSTATUS Property; // eax
  unsigned int v11; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int DriveLayout; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax

  DeviceExtension = (char *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, File, 1u, 0x20u);
  v8 = v6;
  if ( v6 >= 0 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 2954240 )
    {
      Property = PmIoctlQueryProperty(a1, a2);
      goto LABEL_7;
    }
    if ( LowPart >= 0x7C219 && LowPart < 0x2D1400 )
    {
LABEL_5:
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      Property = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
LABEL_7:
      v11 = Property;
LABEL_8:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, 0x20u);
      return v11;
    }
    if ( LowPart <= 0x7C010 )
    {
      if ( LowPart == 507920 )
      {
        DriveLayout = PmIoctlSetDriveLayout(a1, a2);
      }
      else if ( LowPart <= 0x70060 )
      {
        if ( LowPart == 458848 )
        {
          DriveLayout = PmIoctlPerformanceOff(a1);
        }
        else
        {
          if ( LowPart <= 0x4D048 )
          {
            if ( LowPart == 315464
              || (v30 = LowPart - 315396) == 0
              || (v31 = v30 - 16) == 0
              || (v32 = v31 - 24) == 0
              || (v33 = v32 - 4) == 0
              || v33 == 20 )
            {
              Property = PmIoctlRedirect(a1, a2);
              goto LABEL_7;
            }
            goto LABEL_5;
          }
          v18 = LowPart - 458784;
          if ( v18 )
          {
            v19 = v18 - 4;
            if ( v19 )
            {
              v20 = v19 - 36;
              if ( v20 )
              {
                if ( v20 != 8 )
                  goto LABEL_5;
                DriveLayout = PmIoctlGetDriveLayoutEx(a1, a2);
              }
              else
              {
                DriveLayout = PmIoctlGetPartitionInfoEx(a1, a2);
              }
            }
            else
            {
              DriveLayout = PmIoctlIsWritable(a1, a2);
            }
          }
          else
          {
            DriveLayout = PmIoctlPerformance(a1, a2);
          }
        }
      }
      else if ( LowPart > 0x70224 )
      {
        v26 = LowPart - 475140;
        if ( v26 )
        {
          v27 = v26 - 8;
          if ( v27 )
          {
            v28 = v27 - 508;
            if ( v28 )
            {
              if ( v28 == 20 )
              {
                Property = PmIoctlAreVolumesReady(a1, a2);
                goto LABEL_7;
              }
              goto LABEL_5;
            }
            DriveLayout = PmIoctlGetSnapshotInfo(a1, a2);
          }
          else
          {
            DriveLayout = PmIoctlGetDriveLayout(a1, a2);
          }
        }
        else
        {
          DriveLayout = PmIoctlGetPartitionInfo(a1, a2);
        }
      }
      else if ( LowPart == 459300 )
      {
        DriveLayout = PmIoctlGetPerformanceInfo(a1, a2);
      }
      else
      {
        v13 = LowPart - 458912;
        if ( v13 )
        {
          v14 = v13 - 80;
          if ( v14 )
          {
            v15 = v14 - 8;
            if ( v15 )
            {
              v16 = v15 - 72;
              if ( v16 )
              {
                if ( v16 != 212 )
                  goto LABEL_5;
                DriveLayout = PmIoctlGetClusterInfo(a1, a2);
              }
              else
              {
                DriveLayout = PmIoctlUpdateProperties(a1);
              }
            }
            else
            {
              DriveLayout = PmIoctlIsClustered(a1, a2, 0LL);
            }
          }
          else
          {
            DriveLayout = PmIoctlGetDiskAttributes(a1, a2);
          }
        }
        else
        {
          DriveLayout = PmIoctlGetDriveGeometryEx(a1, a2);
        }
      }
      goto LABEL_20;
    }
    if ( LowPart > 0x2D9404 )
    {
      if ( LowPart > 0x70C018 )
      {
        v35 = LowPart - 7389212;
        if ( v35 )
        {
          v36 = v35 - 4;
          if ( v36 )
          {
            v38 = v36 - 4;
            if ( v38 )
            {
              if ( v38 != 12 )
                goto LABEL_5;
              v11 = -1073741637;
LABEL_21:
              a2->IoStatus.Status = v11;
              IofCompleteRequest(a2, 0);
              goto LABEL_8;
            }
            DriveLayout = PmIoctlDeleteSpacesMetadata(a1);
          }
          else
          {
            DriveLayout = PmIoctlCreateSpacesMetadata(a1, a2);
          }
        }
        else
        {
          DriveLayout = PmIoctlReauctionDisk(a1);
        }
      }
      else if ( LowPart == 7389208 )
      {
        DriveLayout = PmIoctlResetReliabilityInfo(a1);
      }
      else
      {
        v24 = LowPart - 5636144;
        if ( v24 )
        {
          v25 = v24 - 1703904;
          if ( v25 )
          {
            v29 = v25 - 4;
            if ( v29 )
            {
              if ( v29 != 16372 )
                goto LABEL_5;
              DriveLayout = PmIoctlQueryDiskSignature(a1, a2);
            }
            else
            {
              DriveLayout = PmIoctlGetReliabilityInfo(a1, a2);
            }
          }
          else
          {
            DriveLayout = PmIoctlQueryDeviceState(a1, a2);
          }
        }
        else
        {
          LOBYTE(v7) = 1;
          DriveLayout = PmIoctlIsClustered(a1, a2, v7);
        }
      }
    }
    else
    {
      if ( LowPart == 2987012 )
      {
        Property = PmIoctlDsm(a1, a2);
        goto LABEL_7;
      }
      if ( LowPart <= 0x7C0F4 )
      {
        if ( LowPart != 508148 )
        {
          v34 = LowPart - 507988;
          if ( v34 )
          {
            v37 = v34 - 4;
            if ( v37 )
            {
              v39 = v37 - 12;
              if ( !v39 )
              {
                v11 = -1073741808;
                goto LABEL_21;
              }
              v40 = v39 - 100;
              if ( v40 )
              {
                if ( v40 != 8 )
                  goto LABEL_5;
                DriveLayout = PmIoctlGrowPartition(a1, a2);
              }
              else
              {
                DriveLayout = PmIoctlUpdateDriveSize(a1, a2);
              }
            }
            else
            {
              DriveLayout = PmIoctlCreateDisk(a1, a2);
            }
          }
          else
          {
            DriveLayout = PmIoctlSetDriveLayoutEx(a1, a2);
          }
          goto LABEL_20;
        }
        PmEtwControlStart(DeviceExtension, a2);
        v41 = PmIoctlSetDiskAttributes(a1, a2);
LABEL_67:
        v11 = v41;
        PmEtwControlComplete(DeviceExtension, a2, v41);
        goto LABEL_21;
      }
      v21 = LowPart - 508160;
      if ( v21 )
      {
        v22 = v21 - 268;
        if ( v22 )
        {
          v23 = v22 - 4;
          if ( v23 )
          {
            if ( v23 != 8 )
              goto LABEL_5;
            PmEtwControlStart(DeviceExtension, a2);
            v41 = PmIoctlSetClusterInfo(a1, a2);
            goto LABEL_67;
          }
          DriveLayout = PmIoctlResetSnapshotInfo(a1);
        }
        else
        {
          DriveLayout = PmIoctlSetSnapshotInfo(a1, a2);
        }
      }
      else
      {
        DriveLayout = PmIoctlDeleteDriveLayout(a1);
      }
    }
LABEL_20:
    v11 = DriveLayout;
    goto LABEL_21;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return v8;
}
