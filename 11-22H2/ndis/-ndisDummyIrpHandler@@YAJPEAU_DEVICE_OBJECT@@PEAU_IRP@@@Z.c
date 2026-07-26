/*
 * XREFs of ?ndisDummyIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0005DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _BYTE *DeviceExtension; // rbx
  struct _IRP *v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // ebx
  int v7; // edx
  __int64 (__fastcall *v9)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  char v10; // [rsp+30h] [rbp-18h]

  DeviceExtension = a1->DeviceExtension;
  v3 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      27,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v10);
  }
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( *DeviceExtension == 17 )
  {
    v6 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    v3->IoStatus.Status = v6;
    IofCompleteRequest(v3, 2);
    goto LABEL_6;
  }
  if ( *DeviceExtension != 9
    || (v9 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&DeviceExtension[8
                                                                                              * CurrentStackLocation->MajorFunction
                                                                                              + 48]) == 0LL )
  {
    v6 = -1073741637;
    goto LABEL_5;
  }
  v6 = v9(a1, v3);
LABEL_6:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      28,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      (char)v3);
  }
  return v6;
}
