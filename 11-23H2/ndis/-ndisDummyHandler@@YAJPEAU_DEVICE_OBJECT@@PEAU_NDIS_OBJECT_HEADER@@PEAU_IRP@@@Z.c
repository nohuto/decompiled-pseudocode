/*
 * XREFs of ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0068450
 * Callers:
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0002E60 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0004DE0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisWMIDispatch @ 0x1C000FB40 (ndisWMIDispatch.c)
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0068208 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007EC88 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_OBJECT_HEADER *a2, struct _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct _DEVICE_OBJECT *, struct _IRP *); // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( a2->Type == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( a2->Type == 9 )
    {
      v8 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&a2[2 * CurrentStackLocation->MajorFunction
                                                                               + 12].Type;
      if ( v8 )
      {
        v7 = v8(a1, a3);
        goto LABEL_10;
      }
    }
    v7 = -1073741637;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 2);
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a3);
  return v7;
}
