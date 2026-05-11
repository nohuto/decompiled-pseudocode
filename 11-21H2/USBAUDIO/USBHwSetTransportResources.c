/*
 * XREFs of USBHwSetTransportResources @ 0x1C00356F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall USBHwSetTransportResources(int a1, _QWORD *a2, int *a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // rbp
  PKSDEVICE Device; // rax
  char v11; // di
  char v12; // dl
  _DWORD *Context; // r15
  PDEVICE_OBJECT v14; // rcx
  char v15; // dl
  char v16; // r8
  unsigned __int16 v17; // ax
  PDEVICE_OBJECT v18; // rcx
  char v19; // dl
  char v20; // r8
  unsigned __int16 v21; // ax
  int v22; // eax
  char v23; // dl
  int v25; // [rsp+20h] [rbp-58h]

  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(a2[2] + 144LL);
  Device = KsGetDevice(a2);
  v11 = 1;
  if ( Device )
  {
    Context = Device->Context;
    if ( a1 == 4 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = 20;
        goto LABEL_27;
      }
    }
    else
    {
      if ( a1 != 8 )
      {
        v7 = -1073741811;
        goto LABEL_51;
      }
      v8 = 1;
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = 21;
LABEL_27:
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)v14->AttachedDevice,
          v15,
          v16,
          (__int64)v14->DeviceExtension,
          v25,
          9u,
          v17,
          (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
      }
    }
    if ( Context[215] == 2 )
    {
      if ( a4 == 4 )
      {
        v22 = *a3;
        if ( v8 )
          *(_DWORD *)(v9 + 228) = v22;
        else
          *(_DWORD *)(v9 + 224) = v22;
        goto LABEL_51;
      }
      v18 = WPP_GLOBAL_Control;
      v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_38:
        v7 = -1073741811;
        goto LABEL_51;
      }
      v21 = 23;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 22;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)v18->AttachedDevice,
      v19,
      v20,
      (__int64)v18->DeviceExtension,
      v25,
      9u,
      v21,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    goto LABEL_38;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v12 = 0;
  }
  if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      0x13u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  v7 = -1073741437;
LABEL_51:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v23 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( v23 || v11 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      9u,
      0x18u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  return v7;
}
