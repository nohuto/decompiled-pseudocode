/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18008BF2C
 * Callers:
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008BFF0 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorEnable(struct _RM_GPU_MONITOR *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_DWORD *)a1 + 11) | 1;
  *((_DWORD *)a1 + 11) = v2;
  if ( (v2 & 2) == 0 )
  {
    if ( (int)MemUtilQueryGpuUtilization((char *)a1 + 16) >= 0 )
      RtlQueryUnbiasedInterruptTime((char *)a1 + 24);
    *((_DWORD *)a1 + 11) |= 2u;
    TpSetTimer(*(_QWORD *)a1, (char *)a1 + 8, 0LL, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1800C585D, 0LL, 0LL, 2u, &v4);
}
