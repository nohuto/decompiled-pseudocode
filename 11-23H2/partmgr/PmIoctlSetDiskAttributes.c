/*
 * XREFs of PmIoctlSetDiskAttributes @ 0x1C001EAD4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 */

__int64 __fastcall PmIoctlSetDiskAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  PVOID v3; // rdi
  bool v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  int DriveLayout; // ebx
  int v10; // eax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  P = 0LL;
  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)v5 == 40 )
    {
      if ( *(_BYTE *)(v5 + 6) || *(_BYTE *)(v5 + 7) )
      {
        DriveLayout = -1073741811;
      }
      else
      {
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          v4 = (*(_BYTE *)(v5 + 8) & 1) == 0;
        KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
        v6 = *(_QWORD *)(v5 + 16);
        v7 = v6 & *(_QWORD *)(v2 + 528);
        v8 = v6 & *(_QWORD *)(v5 + 8);
        while ( 1 )
        {
          DriveLayout = PmSetDiskAttributes(v2, v5, 1);
          if ( DriveLayout < 0 )
            break;
          if ( v8 != v7 )
            PmInvalidatePartitionTableCache(v2);
          if ( *(_DWORD *)(v2 + 516) )
            break;
          DriveLayout = PmGetDriveLayoutEx((KSPIN_LOCK *)v2, &P);
          if ( DriveLayout < 0 || !v4 || (v10 = *(_DWORD *)(v2 + 516)) == 0 )
          {
            v3 = P;
            break;
          }
          v3 = P;
          if ( (unsigned int)(v10 - 3) > 1 )
          {
            DriveLayout = -1073741808;
            break;
          }
          DriveLayout = PmUpdateIds((struct _DEVICE_EXTENSION *)v2, (struct _DRIVE_LAYOUT_INFORMATION_EX *)P);
          if ( DriveLayout < 0 )
            break;
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          P = 0LL;
          v4 = 0;
        }
        KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)DriveLayout;
}
