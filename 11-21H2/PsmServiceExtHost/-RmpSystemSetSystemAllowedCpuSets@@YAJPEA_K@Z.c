/*
 * XREFs of ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18004B438
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B398 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v5; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !SystemInformation )
  {
    v5 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v5 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(SystemInformation, a2, a3, a4) )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v5);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v5);
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v11 = 4LL;
    LastError = GetLastError();
    p_LastError = &LastError;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C6095,
      0LL,
      0LL,
      3u,
      &v9);
  }
  return -1073739509;
}
