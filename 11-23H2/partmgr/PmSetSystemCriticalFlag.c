/*
 * XREFs of PmSetSystemCriticalFlag @ 0x1C0022C2C
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 */

__int64 __fastcall PmSetSystemCriticalFlag(__int64 a1)
{
  _QWORD *DeviceExtension; // rdi
  int DriveLayout; // r10d
  int v4; // ecx
  unsigned int *v5; // rdx
  unsigned int j; // r9d
  __int64 v7; // r8
  unsigned int *v9; // rdx
  unsigned int i; // r9d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  DeviceExtension = PmControlObject->DeviceExtension;
  DriveLayout = PmGetDriveLayoutEx((KSPIN_LOCK *)a1, 0LL);
  if ( DriveLayout >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 912);
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v9 = (unsigned int *)DeviceExtension[23];
        for ( i = 0; i < *v9; ++i )
        {
          v11 = 7LL * i;
          if ( (v9[v11 + 7] & 0x40) == 0 && v9[v11 + 1] == 1 )
          {
            v12 = *(_QWORD *)&v9[v11 + 3] - *(_QWORD *)(a1 + 920);
            if ( !v12 )
              v12 = *(_QWORD *)&v9[v11 + 5] - *(_QWORD *)(a1 + 928);
            if ( !v12 )
            {
              v13 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(a1 + 604) = 1;
              *(_DWORD *)(v13 + 48) |= v9[v11 + 7];
              v9[v11 + 7] |= 0x40u;
            }
          }
          v9 = (unsigned int *)DeviceExtension[23];
        }
      }
    }
    else
    {
      v5 = (unsigned int *)DeviceExtension[23];
      for ( j = 0; j < *v5; ++j )
      {
        v7 = 7LL * j;
        if ( (v5[v7 + 7] & 0x40) == 0 && !v5[v7 + 1] && v5[v7 + 3] == *(_DWORD *)(a1 + 920) )
        {
          v14 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(a1 + 604) = 1;
          *(_DWORD *)(v14 + 48) |= v5[v7 + 7];
          v5[v7 + 7] |= 0x40u;
        }
        v5 = (unsigned int *)DeviceExtension[23];
      }
    }
  }
  return (unsigned int)DriveLayout;
}
