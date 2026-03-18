/*
 * XREFs of WPP_RECORDER_SF_qdqss @ 0x1C000D718
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C0008A3C (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C340 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00266A0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002E3E0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C00494E4 (ACPIDockIrpSetSystemPower.c)
 *     ACPIBuildRegRequest @ 0x1C004AECC (ACPIBuildRegRequest.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C004C714 (ACPIBusIrpSetSystemPower.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C004F888 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C004FAD4 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C004FC38 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C00500F4 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIRootIrpSetPower @ 0x1C005FEA0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdqss(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v15; // r14
  unsigned int v16; // r15d
  int v17; // eax
  __int64 v18; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-78h]

  v10 = (__int64)a10;
  v11 = -1LL;
  v12 = (__int64)a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= 4u )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a9;
    if ( !a9 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v25,
      v24,
      v22,
      v21,
      0LL);
  }
  if ( v10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v10 + v18) );
  }
  if ( v12 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v12 + v11) );
  }
  LOWORD(v26) = v16;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v26, &a6, 8LL, &a7);
}
