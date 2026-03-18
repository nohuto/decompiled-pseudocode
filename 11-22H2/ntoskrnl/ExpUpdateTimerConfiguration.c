/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1403C2918
 * Callers:
 *     ExpUpdateTimerResolution @ 0x14036489C (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h]
  _QWORD v9[34]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = 0LL;
  LODWORD(v9[0]) = 2097153;
  memset((char *)v9 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v9, KiClockTimerOwner);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  KeGenericProcessorCallback(
    v9,
    (void (__fastcall *)(struct _KPRCB *, __int64))ExpUpdateTimerConfigurationWorker,
    (__int64)v7,
    1);
  return (unsigned int)v8;
}
