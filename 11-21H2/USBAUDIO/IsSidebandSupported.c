/*
 * XREFs of IsSidebandSupported @ 0x1C00294B0
 * Callers:
 *     DeviceStart @ 0x1C0028270 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     IsClassDriverOnly @ 0x1C0029204 (IsClassDriverOnly.c)
 */

__int64 __fastcall IsSidebandSupported(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  _DWORD *v6; // r14
  unsigned int v7; // r15d
  char v8; // bl
  char v9; // dl
  int v10; // eax
  int v11; // ebp
  char v12; // dl
  char v13; // dl
  int v15; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = pExtBusDeviceDispatchTable;
  *a2 = 0;
  v6 = (_DWORD *)(v2 + 860);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(a1, v2 + 860);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0xFu,
      (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  v10 = IsClassDriverOnly(a1);
  v11 = v10;
  if ( (unsigned int)(*v6 - 1) > 1 || *(_DWORD *)(v2 + 1000) || !v10 )
  {
    *a2 = 0;
    if ( *(_DWORD *)(v2 + 1000) )
    {
      v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v12,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          9u,
          0x10u,
          (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
    }
    if ( !v11 )
    {
      v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v13,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          9u,
          0x11u,
          (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
    }
    if ( !*v6 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v8,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          9u,
          0x12u,
          (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
    }
    *v6 = 0;
  }
  else
  {
    *a2 = 1;
  }
  return v7;
}
