/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C002490C
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C00BEC40 (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(
        volatile signed __int64 *CallbackContext,
        PCALLBACK_FUNCTION CallbackFunction)
{
  __int64 result; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rcx
  const char *v7; // rax
  const char *v8; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A8h] [rbp+67h] BYREF

  result = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  CallbackObject = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( (CallbackContext[1] & 0x4000000000000000LL) == 0 )
  {
    _InterlockedOr64(CallbackContext + 1, 0x4000000000000000uLL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( v5 < 0 )
    {
      v6 = *((_QWORD *)CallbackContext + 1);
      v7 = (const char *)&unk_1C006FB8B;
      v8 = (const char *)&unk_1C006FB8B;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v7 = (const char *)*((_QWORD *)CallbackContext + 76);
        if ( (v6 & 0x400000000000LL) != 0 )
          v8 = (const char *)*((_QWORD *)CallbackContext + 77);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0xBu,
          (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
          v5,
          (char)CallbackContext,
          v7,
          v8);
      v5 = 0;
      _InterlockedAnd64(CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExRegisterCallback(CallbackObject, CallbackFunction, (PVOID)CallbackContext);
    }
    return (unsigned int)v5;
  }
  return result;
}
