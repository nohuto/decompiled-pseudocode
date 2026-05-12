/*
 * XREFs of sub_1C0073F38 @ 0x1C0073F38
 * Callers:
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C0073F38()
{
  __int64 result; // rax

  if ( byte_1C0094163
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_1C0093880.DeviceQueue.32) != 1 )
  {
    return 3221225473LL;
  }
  qword_1C0093BE0 = 0LL;
  result = 0LL;
  byte_1C0094163 = 0;
  return result;
}
