/*
 * XREFs of ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C00603D8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C035A528 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C03896AC (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSetPartitionVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3, unsigned int a4)
{
  void **DeviceExtension; // rbp
  unsigned int v7; // ebx
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225506LL;
  }
  else
  {
    DeviceExtension = (void **)a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1, a2, 0, 0);
      v7 = v9;
      if ( v9 >= 0 )
      {
        DpiFdoGetVirtualGpuType(a2);
        v7 = DxgkDdiSetVirtualGpuVmBus(DeviceExtension[487]);
        v9 = v7;
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
    }
    else
    {
      v7 = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
    }
    return v7;
  }
}
