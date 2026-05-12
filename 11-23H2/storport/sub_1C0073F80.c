/*
 * XREFs of sub_1C0073F80 @ 0x1C0073F80
 * Callers:
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0073F80(__int64 a1)
{
  __int64 result; // rax

  if ( byte_1C0094163 )
    return 3221225473LL;
  BYTE4(stru_1C0093880.Dpc.DeferredContext) = 0;
  if ( KeRegisterBugCheckReasonCallback(
         (PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_1C0093880.DeviceQueue.32,
         CallbackRoutine,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"PortDriverStandard") != 1 )
    return 3221225473LL;
  byte_1C0094163 = 1;
  result = 0LL;
  qword_1C0093BE0 = a1;
  return result;
}
