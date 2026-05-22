/*
 * XREFs of ??R?$_Func_class@XPEAUDeviceInfo@@@std@@QEBAXPEAUDeviceInfo@@@Z @ 0x1801C5B5C
 * Callers:
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C7120 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,DeviceInfo *>::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
