/*
 * XREFs of DpiSriovAttach @ 0x1C038C3D4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C035A7A0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C03896AC (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edi
  unsigned int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v5 = DpiFdoGetVirtualGpuType((__int64)a2) ? 0x20 : 0;
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( *(_BYTE *)(v5 + v3 + 5372) || *(_QWORD *)(v5 + v3 + 5344) )
    {
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
    else
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, a2, 1, 0);
      v7 = v10;
      if ( v10 >= 0 )
      {
        if ( *(_DWORD *)(v3 + 236) == 2 )
        {
          *(_BYTE *)(v5 + v3 + 5372) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v3 + 152));
        }
        else
        {
          *(_QWORD *)(v5 + v3 + 5344) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v3 + 5256), a2, 0LL);
          v10 = 259;
        }
        _InterlockedIncrement(&dword_1C01309A8);
        v7 = v10;
      }
      v6 = v7;
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    }
  }
  else
  {
    v6 = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v6, (void *)v3, L"DpiSriovAttach", 0LL);
  return v6;
}
