/*
 * XREFs of PartitionIoctlManageBypassIo @ 0x1C0025198
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PartitionForwardIrpSynchronously @ 0x1C001DBB8 (PartitionForwardIrpSynchronously.c)
 */

__int64 __fastcall PartitionIoctlManageBypassIo(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v5; // rbp
  char v6; // di
  int DriveLayout; // ebx
  struct _IRP *MasterIrp; // r13
  __int64 v9; // rax
  struct _IRP *v10; // rdi
  int MdlAddress; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  wchar_t Src[16]; // [rsp+30h] [rbp-B8h] BYREF
  wchar_t v16[40]; // [rsp+50h] [rbp-98h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  wcscpy(Src, L"partmgr.sys");
  wcscpy(v16, L"Stitched partition not supported");
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x18 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( ((LODWORD(MasterIrp->MdlAddress) - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( CurrentStackLocation->Parameters.Read.Length < 0x160 )
      {
        DriveLayout = -1073741789;
        goto LABEL_18;
      }
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(v5 + 24) + 56LL), Executive, 0, 0, 0LL);
      v6 = 1;
      DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v5 + 24), 0LL);
      if ( DriveLayout < 0 )
      {
LABEL_17:
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v5 + 24) + 56LL), 0);
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v5 + 168) == 1 )
      {
        v9 = *(_QWORD *)(v5 + 200) - *(_QWORD *)&PARTITION_PATCH_GUID.Data1;
        if ( !v9 )
          v9 = *(_QWORD *)(v5 + 208) - *(_QWORD *)PARTITION_PATCH_GUID.Data4;
        if ( !v9 )
        {
          v10 = a2->AssociatedIrp.MasterIrp;
          MdlAddress = (int)MasterIrp->MdlAddress;
          memset(v10, 0, CurrentStackLocation->Parameters.Read.Length);
          LODWORD(v10->MdlAddress) = MdlAddress;
          v12 = -1LL;
          *(_DWORD *)&v10->Type = 352;
          v13 = -1LL;
          *(_DWORD *)(&v10->Size + 1) = 352;
          v10->AssociatedIrp.IrpCount = -1073740602;
          do
            ++v13;
          while ( Src[v13] );
          WORD2(v10->AssociatedIrp.SystemBuffer) = v13;
          do
            ++v12;
          while ( v16[v12] );
          HIWORD(v10->Overlay.AllocationSize.QuadPart) = v12;
          wcscpy_s((wchar_t *)&v10->AssociatedIrp.SystemBuffer + 3, 0x40uLL, Src);
          wcscpy_s((wchar_t *)&v10->Overlay.AllocationSize + 4, 0x100uLL, v16);
          DriveLayout = 0;
          a2->IoStatus.Information = 352LL;
          goto LABEL_17;
        }
      }
    }
    DriveLayout = PartitionForwardIrpSynchronously(a1, a2);
    if ( !v6 )
      goto LABEL_18;
    goto LABEL_17;
  }
  DriveLayout = -1073741820;
LABEL_18:
  a2->IoStatus.Status = DriveLayout;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DriveLayout;
}
