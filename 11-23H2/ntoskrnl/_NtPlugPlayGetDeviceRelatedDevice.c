/*
 * XREFs of _NtPlugPlayGetDeviceRelatedDevice @ 0x14079A6CC
 * Callers:
 *     _CmGetDeviceParent @ 0x14079A524 (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x140839640 (_CmGetDeviceChildren.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x14079AA4C (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceRelatedDevice(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 3LL, v11);
  if ( (int)result >= 0 )
  {
    if ( v11[0] )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, __int64, _DWORD))v11[0])(
                 v9,
                 a2,
                 a3,
                 v10,
                 200,
                 a6,
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
