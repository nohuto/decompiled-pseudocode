/*
 * XREFs of HwDebugSetKeyNotification @ 0x1C002B464
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C002AE6C (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall HwDebugSetKeyNotification(POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  unsigned __int16 v4; // r9
  __int64 CompletionFilter; // [rsp+28h] [rbp-30h]
  ULONG Disposition; // [rsp+68h] [rbp+10h] BYREF

  Disposition = 0;
  if ( HwDiagnosticMonitor
    || (qword_1C001DC40 = 0LL,
        ApcRoutine[0] = 0LL,
        qword_1C001DC38 = (__int64)HwDebugRegistryHandlerWrapper,
        v1 = ZwCreateKey(&HwDiagnosticMonitor, 0xF003Fu, ObjectAttributes, (ULONG)0, 0LL, (ULONG)0, &Disposition),
        v2 = v1,
        v1 >= 0) )
  {
    v1 = ZwNotifyChangeKey(
           HwDiagnosticMonitor,
           0LL,
           (PIO_APC_ROUTINE)ApcRoutine,
           (PVOID)1,
           &IoStatusBlock,
           (ULONG)5,
           1u,
           0LL,
           (ULONG)0,
           1u);
    v2 = v1;
    if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_9;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
LABEL_9:
    LODWORD(CompletionFilter) = v1;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      v4,
      (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
      CompletionFilter);
  }
  return v2;
}
