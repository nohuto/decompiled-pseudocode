/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C01E6840
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C00603D8 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0357600 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C03592C8 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C03594BC (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C03596E0 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0359AE4 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0359BC8 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0359CCC (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0359D8C (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0359EAC (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C035A3A0 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C035A7A0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C03896AC (DpiFdoGetVirtualGpuType.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C038BF98 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C038C164 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C038C3D4 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C038C560 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C038C758 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C038C828 (DpiSriovNotification.c)
 *     DpiIndirectDdiIoControl @ 0x1C0392A98 (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v3; // rdi
  PDEVICE_OBJECT *DeviceExtension; // rcx
  unsigned int LowPart; // eax
  ULONG_PTR Length; // r13
  NTSTATUS v9; // ebx
  unsigned int Options; // r12d
  struct _IRP *MasterIrp; // rsi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  CSHORT v28; // cx
  void *v29; // rax
  struct _LIST_ENTRY *v30; // rcx
  DRIVER_CANCEL *v31; // rax
  struct _LIST_ENTRY *v32; // rcx
  void *v33; // rax
  void *v34; // rcx
  struct _LIST_ENTRY *v35; // rax
  ULONG_PTR v36; // rcx
  CInterfaceCallContext *v37; // rcx
  NTSTATUS VirtualizationFlags; // eax
  int v39; // eax
  __int64 v40; // r15
  unsigned int v41; // r13d
  void *v42; // rcx
  int GpuPartitionInfo; // eax
  unsigned int v44; // eax
  ULONG Flags; // eax
  int MitigatedRanges; // eax
  void *v47; // rcx
  int MitigatedRangeCount; // eax
  __int64 v49; // xmm1_8
  NTSTATUS v50; // eax
  unsigned int v51; // eax
  unsigned int VirtualGpuType; // eax
  __int64 v53; // rcx
  _DWORD *VirtualGpuByLuid; // rax
  NTSTATUS v55; // edx
  __int64 v56; // rbx
  __int64 v57; // r15
  void *v58; // rcx
  void *v59; // rcx
  void *v60; // rcx
  __int64 MdlAddress; // [rsp+20h] [rbp-E0h]
  _DWORD v62[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _IRP *v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h]
  _QWORD v66[5]; // [rsp+78h] [rbp-88h] BYREF
  int Type; // [rsp+A0h] [rbp-60h]
  _DWORD v68[655]; // [rsp+A4h] [rbp-5Ch] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v64 = 0LL;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  v65 = (__int64)DeviceExtension;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = -1073741637;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( *((_BYTE *)DeviceExtension + 1159) && (!*((_BYTE *)DeviceExtension + 1160) || LowPart != 2345988) )
  {
    v20 = -1073741637LL;
LABEL_125:
    WdLogSingleEntry1(2LL, v20);
    goto LABEL_126;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( LowPart > 0x22644C )
  {
    v12 = LowPart - 2253908;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 4;
        if ( !v14 )
        {
LABEL_101:
          v50 = DpiSetPartitionVmbus(a1, a2, a2->AssociatedIrp.MasterIrp, Options);
          goto LABEL_102;
        }
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 996;
          if ( v16 )
          {
            v17 = v16 - 4;
            if ( v17 )
            {
              v18 = v17 - 20;
              if ( v18 )
              {
                if ( v18 != 91048 )
                {
LABEL_11:
                  ++a2->CurrentLocation;
                  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
                  return IofCallDriver(DeviceExtension[20], a2);
                }
                LODWORD(v64) = 0;
                v50 = DpiIndirectDdiIoControl(
                        (_DWORD)DeviceExtension,
                        Options,
                        (_DWORD)MasterIrp,
                        Length,
                        (__int64)MasterIrp,
                        (__int64)&v64);
              }
              else
              {
                v50 = DpiFlexIovMitigationUpdate(
                        a1,
                        a2,
                        (__int64)MasterIrp,
                        CurrentStackLocation->Parameters.Read.Length);
              }
              goto LABEL_102;
            }
            goto LABEL_101;
          }
          if ( !a2->RequestorMode
            || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
          {
            DpiFdoGetVirtualGpuType(a2);
            VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v64);
            v3 = v64;
            v9 = VirtualizationFlags;
            goto LABEL_51;
          }
          goto LABEL_111;
        }
        if ( Options >= 8 && MasterIrp )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 0, 1);
          v9 = (int)v63;
          if ( (int)v63 >= 0 )
          {
            VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
            HIDWORD(v66[0]) = Options;
            v66[1] = (unsigned int)Length;
            v53 = *(_QWORD *)(v65 + 3896);
            v66[2] = MasterIrp;
            v66[3] = MasterIrp;
            VirtualGpuByLuid = (_DWORD *)ADAPTER_RENDER::FindVirtualGpuByLuid(
                                           *(_QWORD *)(v53 + 2800),
                                           VirtualGpuType,
                                           MasterIrp);
            if ( VirtualGpuByLuid )
            {
              LODWORD(v66[0]) = VirtualGpuByLuid[6];
              LODWORD(v63) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)VirtualGpuByLuid + 40LL))(
                               VirtualGpuByLuid,
                               v66);
              v9 = (int)v63;
              if ( (int)v63 >= 0 )
                v3 = LODWORD(v66[1]);
            }
            else
            {
              WdLogSingleEntry1(2LL, 1745LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Partition is not found",
                1745LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v9 = -1073741811;
              LODWORD(v63) = -1073741811;
            }
          }
          goto LABEL_31;
        }
      }
      else if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 1, 0);
        v55 = (int)v63;
        if ( (int)v63 >= 0 )
        {
          DpiFdoGetVirtualGpuType(a2);
          memset(v68, 0, 0x64uLL);
          Type = (unsigned __int16)MasterIrp->Type;
          LODWORD(v63) = DxgkDdiGetVirtualGpuInfo(*(void **)(v65 + 3896), (__int64)&MasterIrp->MdlAddress + 4);
          v55 = (int)v63;
          if ( (int)v63 >= 0 )
          {
            v3 = 128LL;
            v28 = Type;
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v68[9];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v68[11];
            MasterIrp->UserEvent = *(PKEVENT *)&v68[13];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v68[15];
            v29 = *(void **)&v68[17];
            MasterIrp->Type = v28;
            v30 = *(struct _LIST_ENTRY **)&v68[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v29;
            v31 = *(DRIVER_CANCEL **)&v68[19];
            MasterIrp->ThreadListEntry.Flink = v30;
            v32 = *(struct _LIST_ENTRY **)&v68[3];
            MasterIrp->CancelRoutine = v31;
            v33 = *(void **)&v68[21];
            MasterIrp->ThreadListEntry.Blink = v32;
            v34 = *(void **)&v68[5];
            MasterIrp->UserBuffer = v33;
            v35 = *(struct _LIST_ENTRY **)&v68[23];
            MasterIrp->IoStatus.Pointer = v34;
            v36 = *(_QWORD *)&v68[7];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v35;
            MasterIrp->IoStatus.Information = v36;
          }
        }
        v9 = v55;
        goto LABEL_31;
      }
LABEL_34:
      v9 = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      goto LABEL_51;
    }
    if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
    {
LABEL_111:
      v9 = -1073741790;
      WdLogSingleEntry1(2LL, -1073741790LL);
      goto LABEL_126;
    }
    if ( Options < 0x78 || !MasterIrp || (unsigned int)Length < 0x88 )
    {
      v9 = -1073741789;
      v20 = -1073741789LL;
      goto LABEL_125;
    }
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 0, 0);
    v9 = (int)v63;
    if ( (int)v63 >= 0 )
    {
      DpiFdoGetVirtualGpuType(a2);
      v56 = *(_QWORD *)&MasterIrp->Flags;
      if ( v56 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
      {
        memset(&v68[43], 0, 0x990uLL);
        v57 = v65;
        v68[43] = (unsigned __int16)MasterIrp->Type;
        *(_QWORD *)&v68[47] = MasterIrp->AssociatedIrp.MasterIrp;
        v58 = *(void **)(v65 + 3896);
        *(_QWORD *)&v68[49] = MasterIrp->ThreadListEntry.Flink;
        *(_QWORD *)&v68[51] = MasterIrp->ThreadListEntry.Blink;
        *(_QWORD *)&v68[53] = MasterIrp->IoStatus.Pointer;
        *(_QWORD *)&v68[55] = MasterIrp->IoStatus.Information;
        *(_QWORD *)&v68[57] = *(_QWORD *)&MasterIrp->RequestorMode;
        *(_QWORD *)&v68[59] = MasterIrp->UserIosb;
        *(_QWORD *)&v68[61] = MasterIrp->UserEvent;
        *(_QWORD *)&v68[63] = MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
        *(_QWORD *)&v68[65] = MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
        *(_QWORD *)&v68[67] = MasterIrp->CancelRoutine;
        MdlAddress = (__int64)MasterIrp->MdlAddress;
        *(_QWORD *)&v68[45] = v56;
        LODWORD(v63) = DxgkDdiCreateVirtualGpu(v58, MdlAddress);
        v9 = (int)v63;
        if ( (int)v63 >= 0 )
        {
          memset(v68, 0, 0x64uLL);
          v59 = *(void **)(v57 + 3896);
          Type = v68[43];
          LODWORD(v63) = DxgkDdiGetVirtualGpuInfo(v59, (__int64)(&MasterIrp->Flags + 1));
          v9 = (int)v63;
          if ( (int)v63 < 0 )
          {
            v60 = *(void **)(v57 + 3896);
            LODWORD(v64) = v68[43];
            DxgkDdiDestroyVirtualGpu(v60);
          }
          else
          {
            v3 = 136LL;
            LOWORD(MasterIrp->MdlAddress) = v68[43];
            MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v68[1];
            MasterIrp->IoStatus.Pointer = *(PVOID *)&v68[3];
            MasterIrp->IoStatus.Information = *(_QWORD *)&v68[5];
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v68[7];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v68[9];
            MasterIrp->UserEvent = *(PKEVENT *)&v68[11];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v68[13];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v68[15];
            MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v68[17];
            MasterIrp->UserBuffer = *(PVOID *)&v68[19];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v68[21];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v68[23];
          }
        }
      }
      else
      {
        LODWORD(v64) = (unsigned __int16)MasterIrp->Type;
        v9 = DxgkDdiDestroyVirtualGpu(*(void **)(v65 + 3896));
        LODWORD(v63) = v9;
      }
    }
    goto LABEL_50;
  }
  if ( LowPart == 2253900 )
  {
    if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
      goto LABEL_111;
    if ( Options < 2 || !MasterIrp )
      goto LABEL_34;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 1, 0);
    MitigatedRangeCount = (int)v63;
    if ( (int)v63 >= 0 )
    {
      DpiFdoGetVirtualGpuType(a2);
      LODWORD(v64) = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiSetGpuPartitionCount(*(void **)(v65 + 3896));
      LODWORD(v63) = MitigatedRangeCount;
    }
    goto LABEL_72;
  }
  v21 = LowPart - 2252868;
  if ( !v21 )
  {
    v50 = DpiSriovNotification(a1, a2);
    goto LABEL_102;
  }
  v22 = v21 - 4;
  if ( !v22 )
  {
    if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
      goto LABEL_111;
    v51 = DpiFdoGetVirtualGpuType(a2);
    v50 = DpiSriovEventComplete(a1, v51, MasterIrp, Options);
    goto LABEL_102;
  }
  v23 = v22 - 4;
  if ( !v23 )
  {
    v50 = DpiSriovAttach(a1, a2);
    goto LABEL_102;
  }
  v24 = v23 - 4;
  if ( !v24 )
  {
    if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
      goto LABEL_111;
    DpiFdoGetVirtualGpuType(a2);
    v50 = DpiSriovDetach(a1);
LABEL_102:
    v9 = v50;
LABEL_51:
    if ( v9 == 259 )
      return v9;
    goto LABEL_126;
  }
  v25 = v24 - 8;
  if ( !v25 )
  {
    if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
      goto LABEL_111;
    if ( Options < 2 || !MasterIrp || (unsigned int)Length < 0x18 )
      goto LABEL_34;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 1, 0);
    MitigatedRangeCount = (int)v63;
    if ( (int)v63 >= 0 )
    {
      DpiFdoGetVirtualGpuType(a2);
      LODWORD(v66[0]) = (unsigned __int16)MasterIrp->Type;
      memset((char *)v66 + 4, 0, 24);
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(*(void **)(v65 + 3896));
      LODWORD(v63) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v3 = 24LL;
        v49 = *(_QWORD *)((char *)&v66[2] + 4);
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v66 + 4);
        *(_QWORD *)&MasterIrp->Flags = v49;
      }
    }
LABEL_72:
    v9 = MitigatedRangeCount;
LABEL_31:
    v37 = (CInterfaceCallContext *)v62;
LABEL_33:
    CInterfaceCallContext::~CInterfaceCallContext(v37);
    goto LABEL_51;
  }
  v26 = v25 - 4;
  if ( !v26 )
  {
    if ( !a2->RequestorMode || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(DeviceExtension, 1LL) )
    {
      if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v66, a1, a2, 1, 0);
        MitigatedRanges = v66[2];
        if ( SLODWORD(v66[2]) >= 0 )
        {
          DpiFdoGetVirtualGpuType(a2);
          v62[0] = (unsigned __int16)MasterIrp->Type;
          v62[1] = LOBYTE(MasterIrp->Size);
          v62[2] = (unsigned int)Length >> 4;
          v47 = *(void **)(v65 + 3896);
          v62[3] = 0;
          v63 = MasterIrp;
          MitigatedRanges = DxgkDdiQueryMitigatedRanges(v47);
          LODWORD(v66[2]) = MitigatedRanges;
          if ( MitigatedRanges >= 0 )
            v3 = Length;
        }
        v9 = MitigatedRanges;
        v37 = (CInterfaceCallContext *)v66;
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    goto LABEL_111;
  }
  v27 = v26 - 1000;
  if ( v27 )
  {
    if ( v27 != 4 )
      goto LABEL_11;
    if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0xA8 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 1, 0);
      v9 = (int)v63;
      if ( (int)v63 >= 0 )
      {
        DpiFdoGetVirtualGpuType(a2);
        memset(v68, 0, 0xA4uLL);
        Type = (unsigned __int16)MasterIrp->Type;
        LODWORD(v63) = DxgkDdiGetVirtualGpuProfile(*(void **)(v65 + 3896));
        v9 = (int)v63;
        if ( (int)v63 >= 0 )
        {
          v3 = 168LL;
          *(_DWORD *)&MasterIrp->Type = Type;
          *(_DWORD *)(&MasterIrp->Size + 1) = v68[0];
          MasterIrp->MdlAddress = *(PMDL *)&v68[1];
          *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v68[3];
          MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v68[5];
          MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v68[7];
          MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v68[9];
          MasterIrp->IoStatus.Pointer = *(PVOID *)&v68[11];
          MasterIrp->IoStatus.Information = *(_QWORD *)&v68[13];
          *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v68[15];
          MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v68[17];
          MasterIrp->UserEvent = *(PKEVENT *)&v68[19];
          MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v68[21];
          MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v68[23];
          MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v68[25];
          MasterIrp->UserBuffer = *(PVOID *)&v68[27];
          MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v68[29];
          MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v68[31];
          MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v68[33];
          MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v68[35];
          MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v68[37];
          MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v68[39];
        }
      }
      goto LABEL_31;
    }
    goto LABEL_34;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v62, a1, a2, 1, 0);
  if ( (int)v63 < 0 )
  {
LABEL_50:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v62);
    goto LABEL_51;
  }
  HIDWORD(v66[0]) = 0;
  v66[2] = 0LL;
  if ( MasterIrp && (unsigned int)Length >= 0x18 )
  {
    v39 = DpiFdoGetVirtualGpuType(a2);
    v40 = v65;
    v66[1] = &MasterIrp->Flags + 1;
    LODWORD(v64) = v39;
    v41 = (unsigned int)(Length - 20) >> 1;
    v42 = *(void **)(v65 + 3896);
    LODWORD(v66[0]) = v41;
    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v42);
    LODWORD(v63) = GpuPartitionInfo;
    v9 = GpuPartitionInfo;
    if ( GpuPartitionInfo < 0 )
    {
      if ( GpuPartitionInfo == -1073741789 )
      {
        if ( LODWORD(v66[0]) )
        {
          *(_DWORD *)&MasterIrp->Type = v66[0];
          WORD2(MasterIrp->MdlAddress) = v66[2];
          v9 = -2147483643;
          Flags = MasterIrp->Flags;
          LOBYTE(v3) = *(_BYTE *)(v40 + 1152) != 0;
          LODWORD(v63) = -2147483643;
          MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
          RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)(v40 + 2672));
          v3 = 24LL;
        }
        else
        {
          WdLogSingleEntry1(3LL, 2253892LL);
          v9 = -1073741811;
          LODWORD(v63) = -1073741811;
        }
      }
      goto LABEL_50;
    }
    v44 = v66[0];
    if ( g_LimitNumberOfVfs && LODWORD(v66[0]) )
    {
      LODWORD(v66[0]) = 1;
      *(_WORD *)v66[1] = 1;
      v44 = v66[0];
      LOWORD(v66[2]) = 1;
    }
    if ( v44 <= v41 && v44 )
    {
      *(_DWORD *)&MasterIrp->Type = v44;
      WORD2(MasterIrp->MdlAddress) = v66[2];
      LOBYTE(v3) = *(_BYTE *)(v40 + 1152) != 0;
      MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
      DxgkDdiQueryPhysicalFunctionLuid(*(void **)(v40 + 3896));
      v3 = (unsigned int)(2 * LODWORD(v66[0]) + 20);
      goto LABEL_50;
    }
    WdLogSingleEntry1(3LL, 2253892LL);
    v9 = -1073741811;
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v62);
  }
  else
  {
    WdLogSingleEntry1(3LL, 2253892LL);
    v9 = -1073741789;
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v62);
  }
LABEL_126:
  a2->IoStatus.Status = v9;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 1);
  return v9;
}
