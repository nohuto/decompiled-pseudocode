/*
 * XREFs of ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0
 * Callers:
 *     <none>
 * Callees:
 *     PartitionSendRequest @ 0x1C0002A90 (PartitionSendRequest.c)
 *     PartitionIoctlVolumePostOnline @ 0x1C000A4CC (PartitionIoctlVolumePostOnline.c)
 *     PartitionIoctlVerify @ 0x1C000C72E (PartitionIoctlVerify.c)
 *     PartitionIoctlBandmgmt @ 0x1C001C20C (PartitionIoctlBandmgmt.c)
 *     PartitionIoctlGetLengthInfo @ 0x1C001C594 (PartitionIoctlGetLengthInfo.c)
 *     PartitionIoctlQueryProperty @ 0x1C001C65C (PartitionIoctlQueryProperty.c)
 *     PartitionIoctlGetPartitionInfoEx @ 0x1C001C788 (PartitionIoctlGetPartitionInfoEx.c)
 *     PartitionIoctlDsm @ 0x1C001D0A8 (PartitionIoctlDsm.c)
 *     PartitionIoctlGetDeviceNumberEx @ 0x1C001DB38 (PartitionIoctlGetDeviceNumberEx.c)
 *     PartitionIoctlGetDeviceNumber @ 0x1C001DC0C (PartitionIoctlGetDeviceNumber.c)
 *     PartitionIoctlSetPartitionInfo @ 0x1C001E74C (PartitionIoctlSetPartitionInfo.c)
 *     PartitionIoctlGetPartitionAttributes @ 0x1C0022758 (PartitionIoctlGetPartitionAttributes.c)
 *     PartitionIoctlGetPartitionInfo @ 0x1C0025070 (PartitionIoctlGetPartitionInfo.c)
 *     PartitionIoctlManageBypassIo @ 0x1C0025198 (PartitionIoctlManageBypassIo.c)
 *     PartitionIoctlSetPartitionAttributes @ 0x1C00253E0 (PartitionIoctlSetPartitionAttributes.c)
 *     PartitionIoctlSetPartitionInfoEx @ 0x1C0025564 (PartitionIoctlSetPartitionInfoEx.c)
 */

__int64 __fastcall PartitionDeviceControl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int LowPart; // eax
  unsigned int DeviceNumber; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax

  v2 = 0;
  a2->IoStatus.Information = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x2D1084 )
  {
    if ( LowPart > 0x2DD498 )
    {
      if ( LowPart > 0x4DC014 )
      {
        v14 = LowPart - 5636144;
        if ( v14 )
        {
          v15 = v14 - 49112;
          if ( v15 )
          {
            if ( v15 != 92 )
              goto LABEL_18;
          }
          else if ( !a2->RequestorMode )
          {
            goto LABEL_9;
          }
          DeviceNumber = PartitionIoctlVolumePostOnline(a1);
          goto LABEL_8;
        }
LABEL_18:
        ++a2->CurrentLocation;
        a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
        return (unsigned int)PartitionSendRequest(a1, a2);
      }
      if ( LowPart == 5095444 )
        goto LABEL_18;
      v16 = LowPart - 3003552;
      if ( v16 )
      {
        if ( v16 != 8 )
          goto LABEL_18;
      }
    }
    else if ( LowPart != 3003544 )
    {
      if ( LowPart > 0x2D4804 )
      {
        if ( LowPart == 2987012 )
          return (unsigned int)PartitionIoctlDsm(a1, a2);
        if ( LowPart != 3003540 )
          goto LABEL_18;
      }
      else
      {
        if ( LowPart == 2967556 )
          goto LABEL_18;
        v7 = LowPart - 2954240;
        if ( !v7 )
          return (unsigned int)PartitionIoctlQueryProperty(a1, a2);
        v9 = v7 - 140;
        if ( v9 )
        {
          if ( v9 != 16 )
            goto LABEL_18;
        }
      }
    }
    return (unsigned int)PartitionIoctlBandmgmt(a1, a2);
  }
  if ( LowPart == 2953348 )
  {
    DeviceNumber = PartitionIoctlGetDeviceNumberEx(a1, a2);
    goto LABEL_8;
  }
  if ( LowPart > 0x7405C )
  {
    if ( LowPart <= 0x7C04C )
    {
      if ( LowPart == 507980 )
      {
        DeviceNumber = PartitionIoctlSetPartitionInfoEx(a1, a2);
        goto LABEL_8;
      }
      if ( LowPart == 507912 )
      {
        DeviceNumber = PartitionIoctlSetPartitionInfo(a1, a2);
        goto LABEL_8;
      }
    }
    else if ( LowPart != 2952212 )
    {
      switch ( LowPart )
      {
        case 0x7C0ECu:
          DeviceNumber = PartitionIoctlSetPartitionAttributes(a1, a2);
          goto LABEL_8;
        case 0x2D08C0u:
          return (unsigned int)PartitionIoctlManageBypassIo(a1, a2);
        case 0x2D1080u:
          DeviceNumber = PartitionIoctlGetDeviceNumber(a1, a2);
          goto LABEL_8;
      }
    }
    goto LABEL_18;
  }
  if ( LowPart == 475228 )
  {
    DeviceNumber = PartitionIoctlGetLengthInfo(a1, a2);
    goto LABEL_8;
  }
  if ( LowPart > 0x70048 )
  {
    v11 = LowPart - 458832;
    if ( v11 )
    {
      v12 = v11 - 80;
      if ( v12 )
      {
        v13 = v12 - 72;
        if ( !v13 )
        {
          DeviceNumber = PartitionIoctlGetPartitionAttributes(a1, a2);
          goto LABEL_8;
        }
        if ( v13 == 16156 )
        {
          DeviceNumber = PartitionIoctlGetPartitionInfo(a1, a2);
          goto LABEL_8;
        }
      }
    }
    goto LABEL_18;
  }
  if ( LowPart != 458824 )
  {
    if ( LowPart == 458772 )
      return (unsigned int)PartitionIoctlVerify(a1, a2);
    goto LABEL_18;
  }
  DeviceNumber = PartitionIoctlGetPartitionInfoEx(a1, a2);
LABEL_8:
  v2 = DeviceNumber;
LABEL_9:
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
  return v2;
}
