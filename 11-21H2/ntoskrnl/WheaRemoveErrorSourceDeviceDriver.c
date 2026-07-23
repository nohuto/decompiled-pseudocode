/*
 * XREFs of WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     WheaGetErrorSource @ 0x140643590 (WheaGetErrorSource.c)
 *     sub_1406447D0 @ 0x1406447D0 (sub_1406447D0.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaRemoveErrorSourceDeviceDriver(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 ErrorSource; // rdi
  signed __int32 v4; // eax
  void *v5; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = 0;
  ErrorSource = WheaGetErrorSource(a1);
  if ( sub_1406447D0(ErrorSource) )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(ErrorSource + 152), -1, 0);
    if ( v4 != -1 )
    {
      if ( v4 )
      {
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[3] = 1;
        Src[7] = 32;
        Src[2] = 64;
        Src[5] = -2147483604;
        Src[4] = 1280201291;
        Src[6] = 2;
        sub_14024F6E4(v8, 32LL, (__int64)"RemoveErrorSourceDeviceDriver");
        WheaLogInternalEvent(Src);
        return (unsigned int)-1073740024;
      }
      else
      {
        v5 = *(void **)(ErrorSource + 72);
        if ( v5 )
        {
          ExFreePoolWithTag(v5, 0x41454857u);
          ExFreePoolWithTag(*(PVOID *)(ErrorSource + 144), 0x41454857u);
          *(_QWORD *)(ErrorSource + 72) = 0LL;
          *(_QWORD *)(ErrorSource + 144) = 0LL;
        }
        WheaRemoveErrorSource(a1);
        *(_QWORD *)(ErrorSource + 80) = PsGetHostSilo;
        *(_QWORD *)(ErrorSource + 88) = _misaligned_access;
      }
    }
  }
  return v2;
}
