/*
 * XREFs of ACPICMLidPowerStateCallBack @ 0x1C00196E0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 */

void __fastcall ACPICMLidPowerStateCallBack(volatile signed __int64 *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebx
  char v5; // si
  NTSTATUS v6; // eax
  const char *v7; // rcx
  const char *v8; // r8
  __int64 v9; // rdx
  _DWORD OutputBuffer[60]; // [rsp+50h] [rbp-108h] BYREF

  v3 = (int)Argument1;
  memset(OutputBuffer, 0, 0xE8uLL);
  v5 = 0;
  if ( !v3 )
  {
    v6 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    if ( v6 >= 0 )
    {
      if ( OutputBuffer[7] <= 1u )
        _InterlockedOr64(CallbackContext + 1, 0x1000000000000000uLL);
      else
        _InterlockedAnd64(CallbackContext + 1, 0xEFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v7 = (const char *)&unk_1C00622D0;
      v8 = (const char *)&unk_1C00622D0;
      if ( CallbackContext )
      {
        v9 = *((_QWORD *)CallbackContext + 1);
        v5 = (char)CallbackContext;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v7 = (const char *)*((_QWORD *)CallbackContext + 76);
          if ( (v9 & 0x400000000000LL) != 0 )
            v8 = (const char *)*((_QWORD *)CallbackContext + 77);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x17u,
          (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
          v6,
          v5,
          v7,
          v8);
    }
  }
}
