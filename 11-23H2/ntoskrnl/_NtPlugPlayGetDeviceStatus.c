/*
 * XREFs of _NtPlugPlayGetDeviceStatus @ 0x14079A9C8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14079A758 (_CmGetDeviceStatus.c)
 *     _CmIsDevicePresent @ 0x14079A940 (_CmIsDevicePresent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x14079AA4C (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 2LL, v10);
  if ( (int)result >= 0 )
  {
    if ( v10[0] )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD))v10[0])(
                 v8,
                 a2,
                 a3,
                 v9,
                 a5,
                 0);
      if ( (_DWORD)result == -2147483643 )
        return 3221225507LL;
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
