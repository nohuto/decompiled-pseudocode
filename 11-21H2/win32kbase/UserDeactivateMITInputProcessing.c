/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C01EBB48
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0154450 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00B6178 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00C1160 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1C00C48C8 (ApiSetEditionDeactivateMitInput.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F2C2C (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

void UserDeactivateMITInputProcessing()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rcx
  __int64 (__fastcall **v4)(); // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rdi
  InputExtensibilityCallout *v8; // rcx
  char v9; // dl
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      18,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  (*(void (__fastcall **)(CInputThreadBase *))(*(_QWORD *)gpInputThread + 8LL))(gpInputThread);
  InputExtensibilityCallout::OnInputThreadStateChanged(v3, 1);
  v4 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange((unsigned int *)v4[3], 1);
    v4 += 6;
  }
  while ( v4 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  ApiSetEditionDeactivateMitInput();
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v10 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v10) >= 0 )
    {
      v5 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 472);
        if ( v6 )
          RIMFreePointerDevice(v10, v6);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v7 = (char *)VirtualTouchpadProcessor::s_instance;
  if ( VirtualTouchpadProcessor::s_instance )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor((VirtualTouchpadProcessor *)VirtualTouchpadProcessor::s_instance);
    Win32FreePool(v7);
    VirtualTouchpadProcessor::s_instance = 0LL;
  }
  v8 = gpInputExtensibilityCallout;
  *(_QWORD *)gpInputExtensibilityCallout = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v8);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v9 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v0,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      19,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
}
