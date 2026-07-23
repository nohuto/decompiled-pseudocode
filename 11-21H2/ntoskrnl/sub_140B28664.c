/*
 * XREFs of sub_140B28664 @ 0x140B28664
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN sub_140B28664()
{
  unsigned __int64 i; // rbx
  UCHAR *v1; // r9
  BOOLEAN result; // al

  qword_140C1F608 = 0LL;
  qword_140C1F610 = 0LL;
  for ( i = 0LL; i < 0x8F0; i += 104LL )
  {
    v1 = *(UCHAR **)((char *)&off_140C03A40 + i + 8);
    *((_BYTE *)&off_140C03A40 + i + 68) = 0;
    result = KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)((char *)&off_140C03A40 + i + 24),
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1405D8EF0,
               KbCallbackSecondaryDumpData,
               v1);
  }
  return result;
}
