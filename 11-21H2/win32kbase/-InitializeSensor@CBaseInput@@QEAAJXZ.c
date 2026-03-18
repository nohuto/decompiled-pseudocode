/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C005DA50
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C005DB90 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void (*v5)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  *((_DWORD *)this + 328) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LODWORD(v7) = 0;
  *((_DWORD *)this + 329) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v8, &v7);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v8,
             (unsigned int)v7,
             v5,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
