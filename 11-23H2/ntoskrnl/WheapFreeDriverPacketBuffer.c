/*
 * XREFs of WheapFreeDriverPacketBuffer @ 0x1406117F4
 * Callers:
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140611240 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406113E0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x140610E98 (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406117C0 (WheapErrDescIsDeviceDriver.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall WheapFreeDriverPacketBuffer(_DWORD *P)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rdi
  volatile __int32 *v4; // rax

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, P[3]);
  v3 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
  if ( WheapErrDescIsDeviceDriver(v3) )
  {
    v4 = (volatile __int32 *)*((_QWORD *)P + 4);
    *P = 0;
    if ( *((_BYTE *)P + 48) )
    {
      _InterlockedExchange(v4, 0);
    }
    else
    {
      ExFreePoolWithTag((PVOID)v4, 0x41454857u);
      ExFreePoolWithTag(P, 0x41454857u);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 152));
  }
}
