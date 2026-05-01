/*
 * XREFs of ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x18004688C
 * Callers:
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180046728 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

NTSTATUS __fastcall RmpSystemSetWorkloadAllowedCpuSets(const void *a1, int a2)
{
  __int64 v2; // rsi
  ULONG v4; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-178h] BYREF
  __int64 SystemInformation; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v9[264]; // [rsp+48h] [rbp-160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+150h] [rbp-58h] BYREF
  DWORD *p_LastError; // [rsp+170h] [rbp-38h]
  __int64 v12; // [rsp+178h] [rbp-30h]

  v2 = a2;
  v4 = 8;
  if ( !a1 )
    goto LABEL_2;
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v4 = 8 * MaximumProcessorGroupCount + 8;
    memcpy_0(v9, a1, 8LL * MaximumProcessorGroupCount);
LABEL_2:
    SystemInformation = v2;
    return NtSetSystemInformation(SystemFirmwareTableInformation|0x80, &SystemInformation, v4);
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v12 = 4LL;
    LastError = GetLastError();
    p_LastError = &LastError;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C67FB,
      0LL,
      0LL,
      3u,
      &v10);
  }
  return -1073739509;
}
