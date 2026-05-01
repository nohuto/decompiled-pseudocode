/*
 * XREFs of ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x180046420
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180046380 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049F44 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  if ( !SystemInformation )
  {
    v2 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(SystemInformation) )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v2);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v2);
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v8 = 4LL;
    LastError = GetLastError();
    p_LastError = &LastError;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C681B,
      0LL,
      0LL,
      3u,
      &v6);
  }
  return -1073739509;
}
