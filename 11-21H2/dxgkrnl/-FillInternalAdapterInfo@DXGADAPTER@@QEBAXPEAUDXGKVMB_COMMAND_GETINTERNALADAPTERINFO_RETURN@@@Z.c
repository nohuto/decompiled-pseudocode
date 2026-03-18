/*
 * XREFs of ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03649C8
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E290 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C001A53C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01FAE1C (DpiGetDevicePropertyDataString.c)
 */

void __fastcall DXGADAPTER::FillInternalAdapterInfo(
        DXGADAPTER *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  int v4; // r8d
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned __int16 *v7; // r8
  int v8; // edx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 109);
  v4 = 61443;
  if ( *((_DWORD *)this + 492) < 0xF003u )
    v4 = *((_DWORD *)this + 492);
  *((_DWORD *)a2 + 2) = v4;
  *((_DWORD *)a2 + 3) ^= (*((_DWORD *)a2 + 3) ^ (**((_DWORD **)this + 337) >> 14)) & 8;
  v5 = *((_DWORD *)a2 + 3) & 0xFFFFFFEF | ((**((_DWORD **)this + 337) & 0x18000) != 0 ? 0x10 : 0);
  *((_DWORD *)a2 + 3) = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(**((_DWORD **)this + 337) >> 8)) & 0x180;
  v7 = (unsigned __int16 *)((char *)a2 + 24);
  *((_DWORD *)a2 + 3) = v6;
  v8 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(**((_DWORD **)this + 337) >> 8)) & 0xC00;
  *((_DWORD *)a2 + 3) = v8;
  *((_DWORD *)a2 + 3) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(**((_DWORD **)this + 337) >> 11)) & 0x200;
  *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 404);
  DXGADAPTER::GetDeviceDescriptor(this, 0xA0u, v7);
  v10 = *(_QWORD *)(v9 + 216);
  P = 0LL;
  if ( (int)DpiGetDevicePropertyDataString(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(v10 + 64) + 152LL),
              (DEVPROPKEY *)&DEVPKEY_Device_InstanceId,
              v11,
              PagedPool,
              &P,
              &v12) >= 0 )
  {
    RtlStringCbCopyW((unsigned __int16 *)a2 + 92, 0x208uLL, (size_t *)P);
    ExFreePoolWithTag(P, 0);
  }
}
